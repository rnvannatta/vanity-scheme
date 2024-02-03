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
static struct { VBlob sym; char bytes[21]; } _V10string_D562 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D561 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D560 = { { VSTRING, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { VSYMBOL, 5 }, "cons" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { VSYMBOL, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { VSYMBOL, 4 }, "car" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { VSYMBOL, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { VSYMBOL, 5 }, "cdar" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { VSYMBOL, 6 }, "null\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { VSYMBOL, 5 }, "cadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { VSYMBOL, 5 }, "cddr" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { VSYMBOL, 5 }, "memv" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { VSYMBOL, 6 }, "caddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { VSYMBOL, 7 }, "cadddr" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { VSYMBOL, 5 }, "list" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { VSYMBOL, 8 }, "string\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { VSYMBOL, 8 }, "reverse" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { VSYMBOL, 14 }, "string-append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { VSYMBOL, 15 }, "compiler-error" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { VSYMBOL, 2 }, "+" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { VSYMBOL, 8 }, "display" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { VSYMBOL, 2 }, "=" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { VSYMBOL, 11 }, "close-port" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[3]; } _V10string_D559 = { { VSTRING, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10string_D558 = { { VSTRING, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10string_D557 = { { VSTRING, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10string_D556 = { { VSTRING, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10string_D555 = { { VSTRING, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10string_D554 = { { VSTRING, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10string_D553 = { { VSTRING, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10string_D552 = { { VSTRING, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10string_D551 = { { VSTRING, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10string_D550 = { { VSTRING, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10string_D549 = { { VSTRING, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10string_D548 = { { VSTRING, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10string_D547 = { { VSTRING, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10string_D546 = { { VSTRING, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10string_D545 = { { VSTRING, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10string_D544 = { { VSTRING, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10string_D543 = { { VSTRING, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10string_D542 = { { VSTRING, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10string_D541 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[4]; } _V10string_D540 = { { VSTRING, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10string_D539 = { { VSTRING, 5 }, "_V10" };
static struct { VBlob sym; char bytes[81]; } _V10string_D538 = { { VSTRING, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[28]; } _V10string_D537 = { { VSTRING, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[5]; } _V10string_D536 = { { VSTRING, 5 }, "_V20" };
static struct { VBlob sym; char bytes[11]; } _V10string_D535 = { { VSTRING, 11 }, "VInlineCdr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D534 = { { VSTRING, 11 }, "VInlineCar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D533 = { { VSTRING, 12 }, "VInlineCons" };
static struct { VBlob sym; char bytes[10]; } _V10string_D532 = { { VSTRING, 10 }, "VInlineEq" };
static struct { VBlob sym; char bytes[11]; } _V10string_D531 = { { VSTRING, 11 }, "VInlineNot" };
static struct { VBlob sym; char bytes[13]; } _V10string_D530 = { { VSTRING, 13 }, "VInlinePairP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D529 = { { VSTRING, 13 }, "VInlineNullP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D528 = { { VSTRING, 13 }, "VCommandLine" };
static struct { VBlob sym; char bytes[19]; } _V10string_D527 = { { VSTRING, 19 }, "VMakeTemporaryFile" };
static struct { VBlob sym; char bytes[19]; } _V10string_D526 = { { VSTRING, 19 }, "VOpenOutputProcess" };
static struct { VBlob sym; char bytes[18]; } _V10string_D525 = { { VSTRING, 18 }, "VOpenInputProcess" };
static struct { VBlob sym; char bytes[8]; } _V10string_D524 = { { VSTRING, 8 }, "VSystem" };
static struct { VBlob sym; char bytes[9]; } _V10string_D523 = { { VSTRING, 9 }, "VNewline" };
static struct { VBlob sym; char bytes[7]; } _V10string_D522 = { { VSTRING, 7 }, "VWrite" };
static struct { VBlob sym; char bytes[9]; } _V10string_D521 = { { VSTRING, 9 }, "VDisplay" };
static struct { VBlob sym; char bytes[6]; } _V10string_D520 = { { VSTRING, 6 }, "VRead" };
static struct { VBlob sym; char bytes[10]; } _V10string_D519 = { { VSTRING, 10 }, "VReadLine" };
static struct { VBlob sym; char bytes[10]; } _V10string_D518 = { { VSTRING, 10 }, "VReadChar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D517 = { { VSTRING, 6 }, "VEofP" };
static struct { VBlob sym; char bytes[17]; } _V10string_D516 = { { VSTRING, 17 }, "VGetOutputString" };
static struct { VBlob sym; char bytes[18]; } _V10string_D515 = { { VSTRING, 18 }, "VOpenOutputString" };
static struct { VBlob sym; char bytes[13]; } _V10string_D514 = { { VSTRING, 13 }, "VCloseStream" };
static struct { VBlob sym; char bytes[18]; } _V10string_D513 = { { VSTRING, 18 }, "VOpenOutputStream" };
static struct { VBlob sym; char bytes[17]; } _V10string_D512 = { { VSTRING, 17 }, "VOpenInputStream" };
static struct { VBlob sym; char bytes[11]; } _V10string_D511 = { { VSTRING, 11 }, "VDupStderr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D510 = { { VSTRING, 11 }, "VDupStdout" };
static struct { VBlob sym; char bytes[10]; } _V10string_D509 = { { VSTRING, 10 }, "VDupStdin" };
static struct { VBlob sym; char bytes[9]; } _V10string_D508 = { { VSTRING, 9 }, "VCharInt" };
static struct { VBlob sym; char bytes[14]; } _V10string_D507 = { { VSTRING, 14 }, "VSymbolString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D506 = { { VSTRING, 14 }, "VStringNumber" };
static struct { VBlob sym; char bytes[14]; } _V10string_D505 = { { VSTRING, 14 }, "VStringSymbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D504 = { { VSTRING, 14 }, "VStringLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D503 = { { VSTRING, 11 }, "VStringSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D502 = { { VSTRING, 11 }, "VStringRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D501 = { { VSTRING, 12 }, "VStringCopy" };
static struct { VBlob sym; char bytes[11]; } _V10string_D500 = { { VSTRING, 11 }, "VSubstring" };
static struct { VBlob sym; char bytes[12]; } _V10string_D499 = { { VSTRING, 12 }, "VMakeString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D498 = { { VSTRING, 14 }, "VVectorLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D497 = { { VSTRING, 11 }, "VVectorSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D496 = { { VSTRING, 11 }, "VVectorRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D495 = { { VSTRING, 12 }, "VListVector" };
static struct { VBlob sym; char bytes[8]; } _V10string_D494 = { { VSTRING, 8 }, "VSetCdr" };
static struct { VBlob sym; char bytes[8]; } _V10string_D493 = { { VSTRING, 8 }, "VSetCar" };
static struct { VBlob sym; char bytes[5]; } _V10string_D492 = { { VSTRING, 5 }, "VCdr" };
static struct { VBlob sym; char bytes[5]; } _V10string_D491 = { { VSTRING, 5 }, "VCar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D490 = { { VSTRING, 6 }, "VCons" };
static struct { VBlob sym; char bytes[13]; } _V10string_D489 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[12]; } _V10string_D488 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[15]; } _V10string_D487 = { { VSTRING, 15 }, "VLookupLibrary" };
static struct { VBlob sym; char bytes[13]; } _V10string_D486 = { { VSTRING, 13 }, "VMultiDefine" };
static struct { VBlob sym; char bytes[17]; } _V10string_D485 = { { VSTRING, 17 }, "VDefineGlobalVar" };
static struct { VBlob sym; char bytes[10]; } _V10string_D484 = { { VSTRING, 10 }, "VFunction" };
static struct { VBlob sym; char bytes[8]; } _V10string_D483 = { { VSTRING, 8 }, "VImport" };
static struct { VBlob sym; char bytes[6]; } _V10string_D482 = { { VSTRING, 6 }, "VExit" };
static struct { VBlob sym; char bytes[7]; } _V10string_D481 = { { VSTRING, 7 }, "VAbort" };
static struct { VBlob sym; char bytes[7]; } _V10string_D480 = { { VSTRING, 7 }, "VApply" };
static struct { VBlob sym; char bytes[12]; } _V10string_D479 = { { VSTRING, 12 }, "VCallValues" };
static struct { VBlob sym; char bytes[8]; } _V10string_D478 = { { VSTRING, 8 }, "VCallCC" };
static struct { VBlob sym; char bytes[6]; } _V10string_D477 = { { VSTRING, 6 }, "VNext" };
static struct { VBlob sym; char bytes[5]; } _V10string_D476 = { { VSTRING, 5 }, "VNot" };
static struct { VBlob sym; char bytes[9]; } _V10string_D475 = { { VSTRING, 9 }, "VBlobEqv" };
static struct { VBlob sym; char bytes[11]; } _V10string_D474 = { { VSTRING, 11 }, "VSymbolEqv" };
static struct { VBlob sym; char bytes[4]; } _V10string_D473 = { { VSTRING, 4 }, "VEq" };
static struct { VBlob sym; char bytes[7]; } _V10string_D472 = { { VSTRING, 7 }, "VCharP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D471 = { { VSTRING, 9 }, "VDoubleP" };
static struct { VBlob sym; char bytes[6]; } _V10string_D470 = { { VSTRING, 6 }, "VIntP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D469 = { { VSTRING, 9 }, "VStringP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D468 = { { VSTRING, 9 }, "VSymbolP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D467 = { { VSTRING, 7 }, "VBlobP" };
static struct { VBlob sym; char bytes[12]; } _V10string_D466 = { { VSTRING, 12 }, "VProcedureP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D465 = { { VSTRING, 9 }, "VVectorP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D464 = { { VSTRING, 7 }, "VPairP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D463 = { { VSTRING, 7 }, "VNullP" };
static struct { VBlob sym; char bytes[5]; } _V10string_D462 = { { VSTRING, 5 }, "VRem" };
static struct { VBlob sym; char bytes[6]; } _V10string_D461 = { { VSTRING, 6 }, "VQuot" };
static struct { VBlob sym; char bytes[5]; } _V10string_D460 = { { VSTRING, 5 }, "VCmp" };
static struct { VBlob sym; char bytes[5]; } _V10string_D459 = { { VSTRING, 5 }, "VDiv" };
static struct { VBlob sym; char bytes[5]; } _V10string_D458 = { { VSTRING, 5 }, "VMul" };
static struct { VBlob sym; char bytes[5]; } _V10string_D457 = { { VSTRING, 5 }, "VSub" };
static struct { VBlob sym; char bytes[5]; } _V10string_D456 = { { VSTRING, 5 }, "VAdd" };
VWEAK VWORD _V10sys_D_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_P = { { VSYMBOL, 8 }, "##sys.+" };
VWEAK VWORD _V10sys_D__;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D__ = { { VSYMBOL, 8 }, "##sys.-" };
VWEAK VWORD _V10sys_D_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_S = { { VSYMBOL, 8 }, "##sys.*" };
VWEAK VWORD _V10sys_D_W;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_W = { { VSYMBOL, 8 }, "##sys./" };
VWEAK VWORD _V10sys_Dcmp;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcmp = { { VSYMBOL, 10 }, "##sys.cmp" };
VWEAK VWORD _V10sys_Dquotient;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dquotient = { { VSYMBOL, 15 }, "##sys.quotient" };
VWEAK VWORD _V10sys_Dremainder;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dremainder = { { VSYMBOL, 16 }, "##sys.remainder" };
VWEAK VWORD _V10sys_Dnull_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
VWEAK VWORD _V10sys_Dpair_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
VWEAK VWORD _V10sys_Dvector_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dvector_Q = { { VSYMBOL, 14 }, "##sys.vector\?" };
VWEAK VWORD _V10sys_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dprocedure_Q = { { VSYMBOL, 17 }, "##sys.procedure\?" };
VWEAK VWORD _V10sys_Dblob_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dblob_Q = { { VSYMBOL, 12 }, "##sys.blob\?" };
VWEAK VWORD _V10sys_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dsymbol_Q = { { VSYMBOL, 14 }, "##sys.symbol\?" };
VWEAK VWORD _V10sys_Dstring_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dstring_Q = { { VSYMBOL, 14 }, "##sys.string\?" };
VWEAK VWORD _V10sys_Dint_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dint_Q = { { VSYMBOL, 11 }, "##sys.int\?" };
VWEAK VWORD _V10sys_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Ddouble_Q = { { VSYMBOL, 14 }, "##sys.double\?" };
VWEAK VWORD _V10sys_Dchar_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dchar_Q = { { VSYMBOL, 12 }, "##sys.char\?" };
VWEAK VWORD _V10sys_Deq_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
VWEAK VWORD _V10sys_Dsymbol_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dsymbol_E_Q = { { VSYMBOL, 15 }, "##sys.symbol=\?" };
VWEAK VWORD _V10sys_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dblob_E_Q = { { VSYMBOL, 13 }, "##sys.blob=\?" };
VWEAK VWORD _V10sys_Deqv_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Deqv_Q = { { VSYMBOL, 11 }, "##sys.eqv\?" };
VWEAK VWORD _V10sys_Dnot;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dnot = { { VSYMBOL, 10 }, "##sys.not" };
VWEAK VWORD _V10sys_Dnext;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
VWEAK VWORD _V10sys_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dcall_Wcc = { { VSYMBOL, 14 }, "##sys.call/cc" };
VWEAK VWORD _V10sys_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10sys_Dcall__with__values = { { VSYMBOL, 23 }, "##sys.call-with-values" };
VWEAK VWORD _V10sys_Dapply;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dapply = { { VSYMBOL, 12 }, "##sys.apply" };
VWEAK VWORD _V10sys_Dabort;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dabort = { { VSYMBOL, 12 }, "##sys.abort" };
VWEAK VWORD _V10sys_Dexit;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dexit = { { VSYMBOL, 11 }, "##sys.exit" };
VWEAK VWORD _V10sys_Dimport;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dimport = { { VSYMBOL, 13 }, "##sys.import" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { VSYMBOL, 15 }, "##vcore.define" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { VSYMBOL, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { VSYMBOL, 20 }, "##vcore.make-import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { VSYMBOL, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10sys_Dcons;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
VWEAK VWORD _V10sys_Dcar;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
VWEAK VWORD _V10sys_Dcdr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
VWEAK VWORD _V10sys_Dset__car_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dset__car_B = { { VSYMBOL, 15 }, "##sys.set-car!" };
VWEAK VWORD _V10sys_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dset__cdr_B = { { VSYMBOL, 15 }, "##sys.set-cdr!" };
VWEAK VWORD _V10sys_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dlist___Gvector = { { VSYMBOL, 19 }, "##sys.list->vector" };
VWEAK VWORD _V10sys_Dvector__ref;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dvector__ref = { { VSYMBOL, 17 }, "##sys.vector-ref" };
VWEAK VWORD _V10sys_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dvector__set_B = { { VSYMBOL, 18 }, "##sys.vector-set!" };
VWEAK VWORD _V10sys_Dvector__length;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10sys_Dvector__length = { { VSYMBOL, 20 }, "##sys.vector-length" };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { VSYMBOL, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { VSYMBOL, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { VSYMBOL, 33 }, "##vcore.hash-table-hash-function" };
VWEAK VWORD _V10vcore_Dhash__table__ref;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhash__table__ref = { { VSYMBOL, 23 }, "##vcore.hash-table-ref" };
VWEAK VWORD _V10vcore_Dhash__table__set_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dhash__table__set_B = { { VSYMBOL, 24 }, "##vcore.hash-table-set!" };
VWEAK VWORD _V10vcore_Dhash__table__delete_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dhash__table__delete_B = { { VSYMBOL, 27 }, "##vcore.hash-table-delete!" };
VWEAK VWORD _V10sys_Dmake__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dmake__string = { { VSYMBOL, 18 }, "##sys.make-string" };
VWEAK VWORD _V10sys_Dsubstring;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dsubstring = { { VSYMBOL, 16 }, "##sys.substring" };
VWEAK VWORD _V10sys_Dstring__copy_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstring__copy_B = { { VSYMBOL, 19 }, "##sys.string-copy!" };
VWEAK VWORD _V10sys_Dstring__ref;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dstring__ref = { { VSYMBOL, 17 }, "##sys.string-ref" };
VWEAK VWORD _V10sys_Dstring__set_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dstring__set_B = { { VSYMBOL, 18 }, "##sys.string-set!" };
VWEAK VWORD _V10sys_Dstring__length;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10sys_Dstring__length = { { VSYMBOL, 20 }, "##sys.string-length" };
VWEAK VWORD _V10sys_Dstring___Gsymbol;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dstring___Gsymbol = { { VSYMBOL, 21 }, "##sys.string->symbol" };
VWEAK VWORD _V10sys_Dstring___Gnumber;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dstring___Gnumber = { { VSYMBOL, 21 }, "##sys.string->number" };
VWEAK VWORD _V10sys_Dsymbol___Gstring;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dsymbol___Gstring = { { VSYMBOL, 21 }, "##sys.symbol->string" };
VWEAK VWORD _V10sys_Dchar__integer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dchar__integer = { { VSYMBOL, 19 }, "##sys.char-integer" };
VWEAK VWORD _V10sys_Dstdin___Gport;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dstdin___Gport = { { VSYMBOL, 18 }, "##sys.stdin->port" };
VWEAK VWORD _V10sys_Dstdout___Gport;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstdout___Gport = { { VSYMBOL, 19 }, "##sys.stdout->port" };
VWEAK VWORD _V10sys_Dstderr___Gport;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstderr___Gport = { { VSYMBOL, 19 }, "##sys.stderr->port" };
VWEAK VWORD _V10sys_Ddup__stdin;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Ddup__stdin = { { VSYMBOL, 16 }, "##sys.dup-stdin" };
VWEAK VWORD _V10sys_Ddup__stdout;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Ddup__stdout = { { VSYMBOL, 17 }, "##sys.dup-stdout" };
VWEAK VWORD _V10sys_Ddup__stderr;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Ddup__stderr = { { VSYMBOL, 17 }, "##sys.dup-stderr" };
VWEAK VWORD _V10sys_Dopen__input__stream;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10sys_Dopen__input__stream = { { VSYMBOL, 24 }, "##sys.open-input-stream" };
VWEAK VWORD _V10sys_Dopen__output__stream;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__output__stream = { { VSYMBOL, 25 }, "##sys.open-output-stream" };
VWEAK VWORD _V10sys_Dclose__stream;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dclose__stream = { { VSYMBOL, 19 }, "##sys.close-stream" };
VWEAK VWORD _V10sys_Dopen__output__string;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__output__string = { { VSYMBOL, 25 }, "##sys.open-output-string" };
VWEAK VWORD _V10sys_Dget__output__string;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10sys_Dget__output__string = { { VSYMBOL, 24 }, "##sys.get-output-string" };
VWEAK VWORD _V10sys_Deof__object_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Deof__object_Q = { { VSYMBOL, 18 }, "##sys.eof-object\?" };
VWEAK VWORD _V10sys_Dread__char;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dread__char = { { VSYMBOL, 16 }, "##sys.read-char" };
VWEAK VWORD _V10sys_Dread__line;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dread__line = { { VSYMBOL, 16 }, "##sys.read-line" };
VWEAK VWORD _V10sys_Dread;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dread = { { VSYMBOL, 11 }, "##sys.read" };
VWEAK VWORD _V10sys_Ddisplay__word;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Ddisplay__word = { { VSYMBOL, 19 }, "##sys.display-word" };
VWEAK VWORD _V10sys_Dwrite;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dwrite = { { VSYMBOL, 12 }, "##sys.write" };
VWEAK VWORD _V10sys_Dnewline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dnewline = { { VSYMBOL, 14 }, "##sys.newline" };
VWEAK VWORD _V10sys_Dset__finalizer_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dset__finalizer_B = { { VSYMBOL, 21 }, "##sys.set-finalizer!" };
VWEAK VWORD _V10sys_Dhas__finalizer_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dhas__finalizer_Q = { { VSYMBOL, 21 }, "##sys.has-finalizer\?" };
VWEAK VWORD _V10sys_Dfinalize_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dfinalize_B = { { VSYMBOL, 16 }, "##sys.finalize!" };
VWEAK VWORD _V10sys_Dgarbage__collect;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10sys_Dgarbage__collect = { { VSYMBOL, 22 }, "##sys.garbage-collect" };
VWEAK VWORD _V10sys_Dsystem;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dsystem = { { VSYMBOL, 13 }, "##sys.system" };
VWEAK VWORD _V10sys_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__input__process = { { VSYMBOL, 25 }, "##sys.open-input-process" };
VWEAK VWORD _V10sys_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10sys_Dopen__output__process = { { VSYMBOL, 26 }, "##sys.open-output-process" };
VWEAK VWORD _V10sys_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10sys_Dmake__temporary__file = { { VSYMBOL, 26 }, "##sys.make-temporary-file" };
VWEAK VWORD _V10sys_Dcommand__line;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dcommand__line = { { VSYMBOL, 19 }, "##sys.command-line" };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { VSYMBOL, 20 }, "##vcore.make-random" };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { VSYMBOL, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { VSYMBOL, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { VSYMBOL, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { VSYMBOL, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { VSYMBOL, 24 }, "##vcore.random-advance!" };
static struct { VBlob sym; char bytes[15]; } _V10string_D455 = { { VSTRING, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10string_D454 = { { VSTRING, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10string_D453 = { { VSTRING, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10string_D452 = { { VSTRING, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10string_D451 = { { VSTRING, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10string_D450 = { { VSTRING, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[14]; } _V10string_D449 = { { VSTRING, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D448 = { { VSTRING, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D447 = { { VSTRING, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D446 = { { VSTRING, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D445 = { { VSTRING, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[16]; } _V10string_D444 = { { VSTRING, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10string_D443 = { { VSTRING, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10string_D442 = { { VSTRING, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10string_D441 = { { VSTRING, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[10]; } _V10string_D440 = { { VSTRING, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D439 = { { VSTRING, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D438 = { { VSTRING, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D437 = { { VSTRING, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D436 = { { VSTRING, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D435 = { { VSTRING, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D434 = { { VSTRING, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D433 = { { VSTRING, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D432 = { { VSTRING, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D431 = { { VSTRING, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D430 = { { VSTRING, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D429 = { { VSTRING, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D428 = { { VSTRING, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D427 = { { VSTRING, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D426 = { { VSTRING, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D425 = { { VSTRING, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10string_D424 = { { VSTRING, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10string_D423 = { { VSTRING, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[10]; } _V10string_D422 = { { VSTRING, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D421 = { { VSTRING, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D420 = { { VSTRING, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D419 = { { VSTRING, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D418 = { { VSTRING, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D417 = { { VSTRING, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D416 = { { VSTRING, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D415 = { { VSTRING, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D414 = { { VSTRING, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D413 = { { VSTRING, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10string_D412 = { { VSTRING, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10string_D411 = { { VSTRING, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10string_D410 = { { VSTRING, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[19]; } _V10string_D409 = { { VSTRING, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10string_D408 = { { VSTRING, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10string_D407 = { { VSTRING, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10string_D406 = { { VSTRING, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D405 = { { VSTRING, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D404 = { { VSTRING, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D403 = { { VSTRING, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D402 = { { VSTRING, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D401 = { { VSTRING, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D400 = { { VSTRING, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D399 = { { VSTRING, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D398 = { { VSTRING, 7 }, "VCons2" };
VWEAK VWORD _V10sys_Dqcons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[14]; } _V10string_D397 = { { VSTRING, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D396 = { { VSTRING, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10string_D395 = { { VSTRING, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D394 = { { VSTRING, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D393 = { { VSTRING, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D392 = { { VSTRING, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D391 = { { VSTRING, 9 }, "VImport2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D390 = { { VSTRING, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D389 = { { VSTRING, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D388 = { { VSTRING, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D387 = { { VSTRING, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D386 = { { VSTRING, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D385 = { { VSTRING, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D384 = { { VSTRING, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[5]; } _V10string_D383 = { { VSTRING, 5 }, "VEqv" };
static struct { VBlob sym; char bytes[10]; } _V10string_D382 = { { VSTRING, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D381 = { { VSTRING, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10string_D380 = { { VSTRING, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D379 = { { VSTRING, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D378 = { { VSTRING, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D377 = { { VSTRING, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D376 = { { VSTRING, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D375 = { { VSTRING, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D374 = { { VSTRING, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D373 = { { VSTRING, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D372 = { { VSTRING, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D371 = { { VSTRING, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D370 = { { VSTRING, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D369 = { { VSTRING, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D368 = { { VSTRING, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D367 = { { VSTRING, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D366 = { { VSTRING, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D365 = { { VSTRING, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D364 = { { VSTRING, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D363 = { { VSTRING, 6 }, "VAdd2" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { VSYMBOL, 6 }, "quote" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { VSYMBOL, 3 }, "if" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { VSYMBOL, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { VSYMBOL, 4 }, "and" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { VSYMBOL, 6 }, "begin" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { VSYMBOL, 7 }, "lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { VSYMBOL, 5 }, "set!" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { VSYMBOL, 15 }, "free-variables" };
VWEAK VWORD _V0lookup__intrinsic2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0lookup__intrinsic2 = { { VSYMBOL, 18 }, "lookup-intrinsic2" };
VWEAK VWORD _V0lookup__inline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { VSYMBOL, 15 }, "mangle-library" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V10sys_D_P = VEncodePointer(VLookupConstant("_V10sys_D_P", &_VW_V10sys_D_P), VPOINTER_OTHER);
  _V10sys_D__ = VEncodePointer(VLookupConstant("_V10sys_D__", &_VW_V10sys_D__), VPOINTER_OTHER);
  _V10sys_D_S = VEncodePointer(VLookupConstant("_V10sys_D_S", &_VW_V10sys_D_S), VPOINTER_OTHER);
  _V10sys_D_W = VEncodePointer(VLookupConstant("_V10sys_D_W", &_VW_V10sys_D_W), VPOINTER_OTHER);
  _V10sys_Dcmp = VEncodePointer(VLookupConstant("_V10sys_Dcmp", &_VW_V10sys_Dcmp), VPOINTER_OTHER);
  _V10sys_Dquotient = VEncodePointer(VLookupConstant("_V10sys_Dquotient", &_VW_V10sys_Dquotient), VPOINTER_OTHER);
  _V10sys_Dremainder = VEncodePointer(VLookupConstant("_V10sys_Dremainder", &_VW_V10sys_Dremainder), VPOINTER_OTHER);
  _V10sys_Dnull_Q = VEncodePointer(VLookupConstant("_V10sys_Dnull_Q", &_VW_V10sys_Dnull_Q), VPOINTER_OTHER);
  _V10sys_Dpair_Q = VEncodePointer(VLookupConstant("_V10sys_Dpair_Q", &_VW_V10sys_Dpair_Q), VPOINTER_OTHER);
  _V10sys_Dvector_Q = VEncodePointer(VLookupConstant("_V10sys_Dvector_Q", &_VW_V10sys_Dvector_Q), VPOINTER_OTHER);
  _V10sys_Dprocedure_Q = VEncodePointer(VLookupConstant("_V10sys_Dprocedure_Q", &_VW_V10sys_Dprocedure_Q), VPOINTER_OTHER);
  _V10sys_Dblob_Q = VEncodePointer(VLookupConstant("_V10sys_Dblob_Q", &_VW_V10sys_Dblob_Q), VPOINTER_OTHER);
  _V10sys_Dsymbol_Q = VEncodePointer(VLookupConstant("_V10sys_Dsymbol_Q", &_VW_V10sys_Dsymbol_Q), VPOINTER_OTHER);
  _V10sys_Dstring_Q = VEncodePointer(VLookupConstant("_V10sys_Dstring_Q", &_VW_V10sys_Dstring_Q), VPOINTER_OTHER);
  _V10sys_Dint_Q = VEncodePointer(VLookupConstant("_V10sys_Dint_Q", &_VW_V10sys_Dint_Q), VPOINTER_OTHER);
  _V10sys_Ddouble_Q = VEncodePointer(VLookupConstant("_V10sys_Ddouble_Q", &_VW_V10sys_Ddouble_Q), VPOINTER_OTHER);
  _V10sys_Dchar_Q = VEncodePointer(VLookupConstant("_V10sys_Dchar_Q", &_VW_V10sys_Dchar_Q), VPOINTER_OTHER);
  _V10sys_Deq_Q = VEncodePointer(VLookupConstant("_V10sys_Deq_Q", &_VW_V10sys_Deq_Q), VPOINTER_OTHER);
  _V10sys_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V10sys_Dsymbol_E_Q", &_VW_V10sys_Dsymbol_E_Q), VPOINTER_OTHER);
  _V10sys_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10sys_Dblob_E_Q", &_VW_V10sys_Dblob_E_Q), VPOINTER_OTHER);
  _V10sys_Deqv_Q = VEncodePointer(VLookupConstant("_V10sys_Deqv_Q", &_VW_V10sys_Deqv_Q), VPOINTER_OTHER);
  _V10sys_Dnot = VEncodePointer(VLookupConstant("_V10sys_Dnot", &_VW_V10sys_Dnot), VPOINTER_OTHER);
  _V10sys_Dnext = VEncodePointer(VLookupConstant("_V10sys_Dnext", &_VW_V10sys_Dnext), VPOINTER_OTHER);
  _V10sys_Dcall_Wcc = VEncodePointer(VLookupConstant("_V10sys_Dcall_Wcc", &_VW_V10sys_Dcall_Wcc), VPOINTER_OTHER);
  _V10sys_Dcall__with__values = VEncodePointer(VLookupConstant("_V10sys_Dcall__with__values", &_VW_V10sys_Dcall__with__values), VPOINTER_OTHER);
  _V10sys_Dapply = VEncodePointer(VLookupConstant("_V10sys_Dapply", &_VW_V10sys_Dapply), VPOINTER_OTHER);
  _V10sys_Dabort = VEncodePointer(VLookupConstant("_V10sys_Dabort", &_VW_V10sys_Dabort), VPOINTER_OTHER);
  _V10sys_Dexit = VEncodePointer(VLookupConstant("_V10sys_Dexit", &_VW_V10sys_Dexit), VPOINTER_OTHER);
  _V10sys_Dimport = VEncodePointer(VLookupConstant("_V10sys_Dimport", &_VW_V10sys_Dimport), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V10vcore_Dfunction", &_VW_V10vcore_Dfunction), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V10vcore_Ddefine", &_VW_V10vcore_Ddefine), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V10vcore_Dlookup__library", &_VW_V10vcore_Dlookup__library), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V10vcore_Dmake__import", &_VW_V10vcore_Dmake__import), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10sys_Dcons = VEncodePointer(VLookupConstant("_V10sys_Dcons", &_VW_V10sys_Dcons), VPOINTER_OTHER);
  _V10sys_Dcar = VEncodePointer(VLookupConstant("_V10sys_Dcar", &_VW_V10sys_Dcar), VPOINTER_OTHER);
  _V10sys_Dcdr = VEncodePointer(VLookupConstant("_V10sys_Dcdr", &_VW_V10sys_Dcdr), VPOINTER_OTHER);
  _V10sys_Dset__car_B = VEncodePointer(VLookupConstant("_V10sys_Dset__car_B", &_VW_V10sys_Dset__car_B), VPOINTER_OTHER);
  _V10sys_Dset__cdr_B = VEncodePointer(VLookupConstant("_V10sys_Dset__cdr_B", &_VW_V10sys_Dset__cdr_B), VPOINTER_OTHER);
  _V10sys_Dlist___Gvector = VEncodePointer(VLookupConstant("_V10sys_Dlist___Gvector", &_VW_V10sys_Dlist___Gvector), VPOINTER_OTHER);
  _V10sys_Dvector__ref = VEncodePointer(VLookupConstant("_V10sys_Dvector__ref", &_VW_V10sys_Dvector__ref), VPOINTER_OTHER);
  _V10sys_Dvector__set_B = VEncodePointer(VLookupConstant("_V10sys_Dvector__set_B", &_VW_V10sys_Dvector__set_B), VPOINTER_OTHER);
  _V10sys_Dvector__length = VEncodePointer(VLookupConstant("_V10sys_Dvector__length", &_VW_V10sys_Dvector__length), VPOINTER_OTHER);
  _V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V10vcore_Dmake__hash__table", &_VW_V10vcore_Dmake__hash__table), VPOINTER_OTHER);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__equivalence__function", &_VW_V10vcore_Dhash__table__equivalence__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__hash__function", &_VW_V10vcore_Dhash__table__hash__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__ref", &_VW_V10vcore_Dhash__table__ref), VPOINTER_OTHER);
  _V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__set_B", &_VW_V10vcore_Dhash__table__set_B), VPOINTER_OTHER);
  _V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__delete_B", &_VW_V10vcore_Dhash__table__delete_B), VPOINTER_OTHER);
  _V10sys_Dmake__string = VEncodePointer(VLookupConstant("_V10sys_Dmake__string", &_VW_V10sys_Dmake__string), VPOINTER_OTHER);
  _V10sys_Dsubstring = VEncodePointer(VLookupConstant("_V10sys_Dsubstring", &_VW_V10sys_Dsubstring), VPOINTER_OTHER);
  _V10sys_Dstring__copy_B = VEncodePointer(VLookupConstant("_V10sys_Dstring__copy_B", &_VW_V10sys_Dstring__copy_B), VPOINTER_OTHER);
  _V10sys_Dstring__ref = VEncodePointer(VLookupConstant("_V10sys_Dstring__ref", &_VW_V10sys_Dstring__ref), VPOINTER_OTHER);
  _V10sys_Dstring__set_B = VEncodePointer(VLookupConstant("_V10sys_Dstring__set_B", &_VW_V10sys_Dstring__set_B), VPOINTER_OTHER);
  _V10sys_Dstring__length = VEncodePointer(VLookupConstant("_V10sys_Dstring__length", &_VW_V10sys_Dstring__length), VPOINTER_OTHER);
  _V10sys_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V10sys_Dstring___Gsymbol", &_VW_V10sys_Dstring___Gsymbol), VPOINTER_OTHER);
  _V10sys_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V10sys_Dstring___Gnumber", &_VW_V10sys_Dstring___Gnumber), VPOINTER_OTHER);
  _V10sys_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V10sys_Dsymbol___Gstring", &_VW_V10sys_Dsymbol___Gstring), VPOINTER_OTHER);
  _V10sys_Dchar__integer = VEncodePointer(VLookupConstant("_V10sys_Dchar__integer", &_VW_V10sys_Dchar__integer), VPOINTER_OTHER);
  _V10sys_Dstdin___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstdin___Gport", &_VW_V10sys_Dstdin___Gport), VPOINTER_OTHER);
  _V10sys_Dstdout___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstdout___Gport", &_VW_V10sys_Dstdout___Gport), VPOINTER_OTHER);
  _V10sys_Dstderr___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstderr___Gport", &_VW_V10sys_Dstderr___Gport), VPOINTER_OTHER);
  _V10sys_Ddup__stdin = VEncodePointer(VLookupConstant("_V10sys_Ddup__stdin", &_VW_V10sys_Ddup__stdin), VPOINTER_OTHER);
  _V10sys_Ddup__stdout = VEncodePointer(VLookupConstant("_V10sys_Ddup__stdout", &_VW_V10sys_Ddup__stdout), VPOINTER_OTHER);
  _V10sys_Ddup__stderr = VEncodePointer(VLookupConstant("_V10sys_Ddup__stderr", &_VW_V10sys_Ddup__stderr), VPOINTER_OTHER);
  _V10sys_Dopen__input__stream = VEncodePointer(VLookupConstant("_V10sys_Dopen__input__stream", &_VW_V10sys_Dopen__input__stream), VPOINTER_OTHER);
  _V10sys_Dopen__output__stream = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__stream", &_VW_V10sys_Dopen__output__stream), VPOINTER_OTHER);
  _V10sys_Dclose__stream = VEncodePointer(VLookupConstant("_V10sys_Dclose__stream", &_VW_V10sys_Dclose__stream), VPOINTER_OTHER);
  _V10sys_Dopen__output__string = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__string", &_VW_V10sys_Dopen__output__string), VPOINTER_OTHER);
  _V10sys_Dget__output__string = VEncodePointer(VLookupConstant("_V10sys_Dget__output__string", &_VW_V10sys_Dget__output__string), VPOINTER_OTHER);
  _V10sys_Deof__object_Q = VEncodePointer(VLookupConstant("_V10sys_Deof__object_Q", &_VW_V10sys_Deof__object_Q), VPOINTER_OTHER);
  _V10sys_Dread__char = VEncodePointer(VLookupConstant("_V10sys_Dread__char", &_VW_V10sys_Dread__char), VPOINTER_OTHER);
  _V10sys_Dread__line = VEncodePointer(VLookupConstant("_V10sys_Dread__line", &_VW_V10sys_Dread__line), VPOINTER_OTHER);
  _V10sys_Dread = VEncodePointer(VLookupConstant("_V10sys_Dread", &_VW_V10sys_Dread), VPOINTER_OTHER);
  _V10sys_Ddisplay__word = VEncodePointer(VLookupConstant("_V10sys_Ddisplay__word", &_VW_V10sys_Ddisplay__word), VPOINTER_OTHER);
  _V10sys_Dwrite = VEncodePointer(VLookupConstant("_V10sys_Dwrite", &_VW_V10sys_Dwrite), VPOINTER_OTHER);
  _V10sys_Dnewline = VEncodePointer(VLookupConstant("_V10sys_Dnewline", &_VW_V10sys_Dnewline), VPOINTER_OTHER);
  _V10sys_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V10sys_Dset__finalizer_B", &_VW_V10sys_Dset__finalizer_B), VPOINTER_OTHER);
  _V10sys_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V10sys_Dhas__finalizer_Q", &_VW_V10sys_Dhas__finalizer_Q), VPOINTER_OTHER);
  _V10sys_Dfinalize_B = VEncodePointer(VLookupConstant("_V10sys_Dfinalize_B", &_VW_V10sys_Dfinalize_B), VPOINTER_OTHER);
  _V10sys_Dgarbage__collect = VEncodePointer(VLookupConstant("_V10sys_Dgarbage__collect", &_VW_V10sys_Dgarbage__collect), VPOINTER_OTHER);
  _V10sys_Dsystem = VEncodePointer(VLookupConstant("_V10sys_Dsystem", &_VW_V10sys_Dsystem), VPOINTER_OTHER);
  _V10sys_Dopen__input__process = VEncodePointer(VLookupConstant("_V10sys_Dopen__input__process", &_VW_V10sys_Dopen__input__process), VPOINTER_OTHER);
  _V10sys_Dopen__output__process = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__process", &_VW_V10sys_Dopen__output__process), VPOINTER_OTHER);
  _V10sys_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V10sys_Dmake__temporary__file", &_VW_V10sys_Dmake__temporary__file), VPOINTER_OTHER);
  _V10sys_Dcommand__line = VEncodePointer(VLookupConstant("_V10sys_Dcommand__line", &_VW_V10sys_Dcommand__line), VPOINTER_OTHER);
  _V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V10vcore_Dmake__random", &_VW_V10vcore_Dmake__random), VPOINTER_OTHER);
  _V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V10vcore_Drandom__copy", &_VW_V10vcore_Drandom__copy), VPOINTER_OTHER);
  _V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample_B", &_VW_V10vcore_Drandom__sample_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__bounded_B", &_VW_V10vcore_Drandom__sample__bounded_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__float_B", &_VW_V10vcore_Drandom__sample__float_B), VPOINTER_OTHER);
  _V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__advance_B", &_VW_V10vcore_Drandom__advance_B), VPOINTER_OTHER);
  _V10sys_Dqcons = VEncodePointer(VLookupConstant("_V10sys_Dqcons", &_VW_V10sys_Dqcons), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VLookupConstant("_V0free__variables", &_VW_V0free__variables), VPOINTER_OTHER);
  _V0lookup__intrinsic2 = VEncodePointer(VLookupConstant("_V0lookup__intrinsic2", &_VW_V0lookup__intrinsic2), VPOINTER_OTHER);
  _V0lookup__inline = VEncodePointer(VLookupConstant("_V0lookup__inline", &_VW_V0lookup__inline), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0variables_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.7 6 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-symbol) (bruijn mangle-symbol 6 1)) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-library) (bruijn mangle-library 6 2)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-inline) (bruijn lookup-inline 6 3)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-intrinsic2) (bruijn lookup-intrinsic2 6 5)) (##inline ##sys.cons (##inline ##sys.cons (quote free-variables) (bruijn free-variables 6 6)) (quote ())))))))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0mangle__symbol,
        VGetArg(upenv, 6-1, 1)),
        VInlineCons(
        VInlineCons(
        _V0mangle__library,
        VGetArg(upenv, 6-1, 2)),
        VInlineCons(
        VInlineCons(
        _V0lookup__inline,
        VGetArg(upenv, 6-1, 3)),
        VInlineCons(
        VInlineCons(
        _V0lookup__intrinsic2,
        VGetArg(upenv, 6-1, 5)),
        VInlineCons(
        VInlineCons(
        _V0free__variables,
        VGetArg(upenv, 6-1, 6)),
        VNULL))))));
 }
}
static void _V0free__variables_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.27 1 0) (quote ()) (bruijn expr 5 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k47, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.34 0 0) ((bruijn ##k.33 1 0) (bruijn ##p.34 0 0)) ((bruijn lookup-intrinsic2 15 5) (bruijn ##k.33 1 0) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V0loop_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.32 1 0) ((bruijn ##k.33 0 0) (bruijn ##p.32 1 0)) ((bruijn lookup-intrinsic 14 4) (close _V0loop_k47) (bruijn expr 3 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k47, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.31 0 0) ((bruijn ##k.29 3 0) (quote ())) ((bruijn list 15 16) (bruijn ##k.29 3 0) (bruijn expr 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k46) (close _V0loop_k48))
V_CALL_FUNC(_V0loop_k46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k48, env)}));
 }
}
static void _V0loop_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 17 1) (bruijn ##k.29 13 0) (bruijn ##x.38 2 0) (bruijn ##x.39 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 13 1) (close _V0loop_k60) (bruijn bound 12 1) (bruijn ##x.40 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k60, env)}),
      VGetArg(upenv, 12-1, 1),
      _var0);
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadddr 23 13) (close _V0loop_k59) (bruijn expr 11 2))
V_CALL(VGetArg(upenv, 23-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k59, env)}),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0loop_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn merge 14 1) (close _V0loop_k58) (bruijn ##x.41 2 0) (bruijn ##x.42 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k58, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k57) (bruijn bound 9 1) (bruijn ##x.43 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k57, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0loop_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caddr 20 12) (close _V0loop_k56) (bruijn expr 8 2))
V_CALL(VGetArg(upenv, 20-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k56, env)}),
      VGetArg(upenv, 8-1, 2));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 8 1) (close _V0loop_k55) (bruijn bound 7 1) (bruijn ##x.44 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k55, env)}),
      VGetArg(upenv, 7-1, 1),
      _var0);
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 16 1) (bruijn ##k.29 12 0) (bruijn ##x.46 2 0) (bruijn ##x.47 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 12 1) (close _V0loop_k66) (bruijn bound 11 1) (bruijn ##x.48 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k66, env)}),
      VGetArg(upenv, 11-1, 1),
      _var0);
 }
}
static void _V0loop_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caddr 22 12) (close _V0loop_k65) (bruijn expr 10 2))
V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k65, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0loop_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k64) (bruijn bound 9 1) (bruijn ##x.49 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k64, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0loop_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 1) (bruijn ##k.29 13 0) (bruijn ##x.51 1 0) (bruijn ##x.52 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 24 10) (close _V0loop_k71) (bruijn expr 12 2))
V_CALL(VGetArg(upenv, 24-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k71, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 15 2) (close _V0loop_k70) (bruijn ##x.53 0 0) (bruijn bound 11 1))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k70, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0loop_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop2 2 1) (bruijn ##k.55 2 0) (bruijn ##x.57 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 26 3) (close _V0loop_k75) (bruijn expr 14 2))
V_CALL(VGetArg(upenv, 26-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k75, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0loop2_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 25 1) (bruijn ##k.58 7 0) (bruijn ##x.60 2 0) (bruijn ##x.61 0 0))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop2_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop2 7 1) (close _V0loop2_k82) (bruijn ##x.62 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k82, env)}),
      _var0);
 }
}
static void _V0loop2_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 31 3) (close _V0loop2_k81) (bruijn cases 5 1))
V_CALL(VGetArg(upenv, 31-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k81, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop2_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 19 1) (close _V0loop2_k80) (bruijn ##x.63 1 0) (bruijn ##x.64 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k80, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop2_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 29 7) (close _V0loop2_k79) (bruijn cases 3 1))
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k79, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop2_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 20 2) (close _V0loop2_k78) (bruijn ##x.65 0 0) (bruijn bound 16 1))
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k78, env)}),
      _var0,
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0loop2_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.59 0 0) ((bruijn ##k.58 1 0) (quote ())) ((bruijn caar 27 6) (close _V0loop2_k77) (bruijn cases 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 27-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k77, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop2_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop2_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop2_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop2_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 26 8) (close _V0loop2_k76) (bruijn cases 0 1))
V_CALL(VGetArg(upenv, 26-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_k76, env)}),
      _var1);
 }
}
static void _V0loop_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0loop_k74) (bruijn loop2 0 1) (close _V0loop2_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k74, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop2_lambda9, env)})
    );
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 16 1) (bruijn ##k.29 15 0) (bruijn bound 15 1) (bruijn ##x.67 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 15-1, 1),
      _var0);
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 22 1) (bruijn ##k.29 18 0) (bruijn ##x.68 2 0) (bruijn ##x.69 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 18-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 18 1) (close _V0loop_k89) (bruijn bound 17 1) (bruijn ##x.70 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 28 3) (close _V0loop_k88) (bruijn expr 16 2))
V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 16 1) (close _V0loop_k87) (bruijn bound 15 1) (bruijn ##x.71 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      VGetArg(upenv, 15-1, 1),
      _var0);
 }
}
static void _V0loop_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.66 0 0) ((bruijn cdr 26 3) (close _V0loop_k85) (bruijn expr 14 2)) ((bruijn car 26 4) (close _V0loop_k86) (bruijn expr 14 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k85, env)}),
      VGetArg(upenv, 14-1, 2));
} else {
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k86, env)}),
      VGetArg(upenv, 14-1, 2));
}
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 25 5) (close _V0loop_k84) (bruijn ##x.72 0 0) (quote set!))
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k84, env)}),
      _var0,
      _V0set_B);
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.54 0 0) ((close _V0loop_lambda8) (bruijn ##k.29 12 0) #f) ((bruijn car 24 4) (close _V0loop_k83) (bruijn expr 12 2)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_lambda8, env, runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k83, env)}),
      VGetArg(upenv, 12-1, 2));
}
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 23 5) (close _V0loop_k73) (bruijn ##x.73 0 0) (quote case-lambda))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k73, env)}),
      _var0,
      _V0case__lambda);
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.50 0 0) ((bruijn cadr 22 9) (close _V0loop_k69) (bruijn expr 10 2)) ((bruijn car 22 4) (close _V0loop_k72) (bruijn expr 10 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k69, env)}),
      VGetArg(upenv, 10-1, 2));
} else {
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k72, env)}),
      VGetArg(upenv, 10-1, 2));
}
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 21 5) (close _V0loop_k68) (bruijn ##x.74 0 0) (quote lambda))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k68, env)}),
      _var0,
      _V0lambda);
 }
}
static void _V0loop_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.45 0 0) ((bruijn cadr 20 9) (close _V0loop_k63) (bruijn expr 8 2)) ((bruijn car 20 4) (close _V0loop_k67) (bruijn expr 8 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k63, env)}),
      VGetArg(upenv, 8-1, 2));
} else {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k67, env)}),
      VGetArg(upenv, 8-1, 2));
}
 }
}
static void _V0loop_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 19 11) (close _V0loop_k62) (bruijn ##x.75 0 0) (##inline ##sys.qcons (quote begin) (##inline ##sys.qcons (quote and) (##inline ##sys.qcons (quote or) (quote ())))))
V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k62, env)}),
      _var0,
      VInlineCons(
        _V0begin,
        VInlineCons(
        _V0and,
        VInlineCons(
        _V0or,
        VNULL))));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) ((bruijn cadr 18 9) (close _V0loop_k54) (bruijn expr 6 2)) ((bruijn car 18 4) (close _V0loop_k61) (bruijn expr 6 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k54, env)}),
      VGetArg(upenv, 6-1, 2));
} else {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k61, env)}),
      VGetArg(upenv, 6-1, 2));
}
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 17 5) (close _V0loop_k53) (bruijn ##x.79 0 0) (quote if))
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k53, env)}),
      _var0,
      _V0if);
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) ((bruijn ##k.29 4 0) (quote ())) ((bruijn car 16 4) (close _V0loop_k52) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      upenv->up->up->up->vars[2]);
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 15 5) (close _V0loop_k51) (bruijn ##x.80 0 0) (quote quote))
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k51, env)}),
      _var0,
      _V0quote);
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.35 0 0) ((bruijn ##k.29 2 0) (quote ())) ((bruijn car 14 4) (close _V0loop_k50) (bruijn expr 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k50, env)}),
      upenv->up->vars[2]);
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.30 0 0) ((bruijn memv 13 11) (close _V0loop_k45) (bruijn expr 1 2) (bruijn bound 1 1)) ((bruijn atom? 13 14) (close _V0loop_k49) (bruijn expr 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k45, env)}),
      upenv->vars[2],
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k49, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn symbol? 12 15) (close _V0loop_k44) (bruijn expr 0 2))
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k44, env)}),
      _var2);
 }
}
static void _V0free__variables_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0free__variables_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0free__variables_k43) (bruijn loop 0 1) (close _V0loop_lambda7))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0free__variables_k43, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda7, env)})
    );
 }
}
static void _V0free__variables_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0free__variables_lambda6) (bruijn ##k.24 2 0) #f)
V_CALL_FUNC(_V0free__variables_lambda6, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false));
 }
}
static void _V0append__improper_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 14 1) (bruijn ##k.81 4 0) (bruijn ##x.83 2 0) (bruijn ##x.84 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0append__improper_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 5 2) (close _V0append__improper_k93) (bruijn ##x.85 0 0) (bruijn b 3 2))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_k93, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0append__improper_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 3) (close _V0append__improper_k92) (bruijn a 2 1))
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_k92, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0append__improper_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_k94, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.86 0 0) ((bruijn ##k.81 2 0) (bruijn b 2 2)) ((bruijn cons 12 1) (bruijn ##k.81 2 0) (bruijn a 2 1) (bruijn b 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]);
}
 }
}
static void _V0append__improper_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.82 0 0) ((bruijn car 11 4) (close _V0append__improper_k91) (bruijn a 1 1)) ((bruijn null? 11 8) (close _V0append__improper_k94) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_k91, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_k94, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0append__improper_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0append__improper_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0append__improper_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__improper_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 10 2) (close _V0append__improper_k90) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_k90, env)}),
      _var1);
 }
}
static void _V0free__variables_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0free__variables_k42) (bruijn append-improper 1 2) (close _V0append__improper_lambda10))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0free__variables_k42, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__improper_lambda10, env)})
    );
 }
}
static void _V0merge_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 5 1) (bruijn ##k.87 4 0) (bruijn ##x.90 0 0) (bruijn b 4 2))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0merge_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 7 1) (bruijn ##k.87 6 0) (bruijn ##x.91 2 0) (bruijn ##x.92 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0merge_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 14 1) (close _V0merge_k101) (bruijn ##x.93 0 0) (bruijn b 5 2))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k101, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0merge_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 13 4) (close _V0merge_k100) (bruijn a 4 1))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k100, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0merge_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.89 0 0) ((bruijn cdr 12 3) (close _V0merge_k98) (bruijn a 3 1)) ((bruijn cdr 12 3) (close _V0merge_k99) (bruijn a 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k98, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k99, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0merge_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 11 11) (close _V0merge_k97) (bruijn ##x.94 0 0) (bruijn b 2 2))
V_CALL(VGetArg(upenv, 11-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k97, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0merge_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.88 0 0) ((bruijn ##k.87 1 0) (bruijn b 1 2)) ((bruijn car 10 4) (close _V0merge_k96) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k96, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0merge_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0merge_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0merge_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0merge_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 9 8) (close _V0merge_k95) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_k95, env)}),
      _var1);
 }
}
static void _V0free__variables_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0free__variables_lambda5" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0free__variables_k41) (bruijn merge 0 1) (close _V0merge_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0free__variables_k41, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0merge_lambda11, env)})
    );
 }
}
static void _V0free__variables_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0free__variables_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0free__variables_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0free__variables_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0free__variables_lambda5) (bruijn ##k.23 0 0) #f #f)
V_CALL_FUNC(_V0free__variables_lambda5, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k40) (bruijn free-variables 5 6) (close _V0free__variables_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k40, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0free__variables_lambda4, env)})
    );
 }
}
static void _V0lookup__intrinsic2_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k138, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.190 1 0) ((bruijn ##k.191 0 0) (bruijn ##p.190 1 0)) ((bruijn eqv? 43 5) (bruijn ##k.191 0 0) (bruijn ##x.4 37 1) (quote ##sys.qcons)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 43-1, 5), runtime,
      _var0,
      VGetArg(upenv, 37-1, 1),
      _V10sys_Dqcons);
}
 }
}
static void _V0lookup__intrinsic2_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k196, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.189 0 0) ((bruijn ##k.96 94 0) (##string ##string.455)) ((bruijn ##k.96 94 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0lookup__intrinsic2_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.188 0 0) ((bruijn ##k.96 93 0) (##string ##string.454)) ((bruijn eqv? 99 5) (close _V0lookup__intrinsic2_k196) (bruijn ##x.4 93 1) (quote ##vcore.random-advance!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodePointer(&_V10string_D454.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 99-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k196, env)}),
      VGetArg(upenv, 93-1, 1),
      _V10vcore_Drandom__advance_B);
}
 }
}
static void _V0lookup__intrinsic2_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.187 0 0) ((bruijn ##k.96 92 0) (##string ##string.453)) ((bruijn eqv? 98 5) (close _V0lookup__intrinsic2_k195) (bruijn ##x.4 92 1) (quote ##vcore.random-sample-float!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodePointer(&_V10string_D453.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 98-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k195, env)}),
      VGetArg(upenv, 92-1, 1),
      _V10vcore_Drandom__sample__float_B);
}
 }
}
static void _V0lookup__intrinsic2_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn ##k.96 91 0) (##string ##string.452)) ((bruijn eqv? 97 5) (close _V0lookup__intrinsic2_k194) (bruijn ##x.4 91 1) (quote ##vcore.random-sample-bounded!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodePointer(&_V10string_D452.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 97-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k194, env)}),
      VGetArg(upenv, 91-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
}
 }
}
static void _V0lookup__intrinsic2_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((bruijn ##k.96 90 0) (##string ##string.451)) ((bruijn eqv? 96 5) (close _V0lookup__intrinsic2_k193) (bruijn ##x.4 90 1) (quote ##vcore.random-sample!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodePointer(&_V10string_D451.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 96-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k193, env)}),
      VGetArg(upenv, 90-1, 1),
      _V10vcore_Drandom__sample_B);
}
 }
}
static void _V0lookup__intrinsic2_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.184 0 0) ((bruijn ##k.96 89 0) (##string ##string.450)) ((bruijn eqv? 95 5) (close _V0lookup__intrinsic2_k192) (bruijn ##x.4 89 1) (quote ##vcore.random-copy)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodePointer(&_V10string_D450.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 95-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k192, env)}),
      VGetArg(upenv, 89-1, 1),
      _V10vcore_Drandom__copy);
}
 }
}
static void _V0lookup__intrinsic2_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.183 0 0) ((bruijn ##k.96 88 0) (##string ##string.449)) ((bruijn eqv? 94 5) (close _V0lookup__intrinsic2_k191) (bruijn ##x.4 88 1) (quote ##vcore.make-random)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 94-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k191, env)}),
      VGetArg(upenv, 88-1, 1),
      _V10vcore_Dmake__random);
}
 }
}
static void _V0lookup__intrinsic2_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 0 0) ((bruijn ##k.96 87 0) (##string ##string.448)) ((bruijn eqv? 93 5) (close _V0lookup__intrinsic2_k190) (bruijn ##x.4 87 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 93-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k190, env)}),
      VGetArg(upenv, 87-1, 1),
      _V10sys_Dcommand__line);
}
 }
}
static void _V0lookup__intrinsic2_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.181 0 0) ((bruijn ##k.96 86 0) (##string ##string.447)) ((bruijn eqv? 92 5) (close _V0lookup__intrinsic2_k189) (bruijn ##x.4 86 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 92-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k189, env)}),
      VGetArg(upenv, 86-1, 1),
      _V10sys_Dmake__temporary__file);
}
 }
}
static void _V0lookup__intrinsic2_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.180 0 0) ((bruijn ##k.96 85 0) (##string ##string.446)) ((bruijn eqv? 91 5) (close _V0lookup__intrinsic2_k188) (bruijn ##x.4 85 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 91-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k188, env)}),
      VGetArg(upenv, 85-1, 1),
      _V10sys_Dopen__output__process);
}
 }
}
static void _V0lookup__intrinsic2_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.179 0 0) ((bruijn ##k.96 84 0) (##string ##string.445)) ((bruijn eqv? 90 5) (close _V0lookup__intrinsic2_k187) (bruijn ##x.4 84 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 90-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k187, env)}),
      VGetArg(upenv, 84-1, 1),
      _V10sys_Dopen__input__process);
}
 }
}
static void _V0lookup__intrinsic2_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.178 0 0) ((bruijn ##k.96 83 0) (##string ##string.444)) ((bruijn eqv? 89 5) (close _V0lookup__intrinsic2_k186) (bruijn ##x.4 83 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 89-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k186, env)}),
      VGetArg(upenv, 83-1, 1),
      _V10sys_Dsystem);
}
 }
}
static void _V0lookup__intrinsic2_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.177 0 0) ((bruijn ##k.96 82 0) (##string ##string.443)) ((bruijn eqv? 88 5) (close _V0lookup__intrinsic2_k185) (bruijn ##x.4 82 1) (quote ##sys.garbage-collect)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 88-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k185, env)}),
      VGetArg(upenv, 82-1, 1),
      _V10sys_Dgarbage__collect);
}
 }
}
static void _V0lookup__intrinsic2_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) ((bruijn ##k.96 81 0) (##string ##string.442)) ((bruijn eqv? 87 5) (close _V0lookup__intrinsic2_k184) (bruijn ##x.4 81 1) (quote ##sys.finalize!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 87-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k184, env)}),
      VGetArg(upenv, 81-1, 1),
      _V10sys_Dfinalize_B);
}
 }
}
static void _V0lookup__intrinsic2_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.175 0 0) ((bruijn ##k.96 80 0) (##string ##string.441)) ((bruijn eqv? 86 5) (close _V0lookup__intrinsic2_k183) (bruijn ##x.4 80 1) (quote ##sys.has-finalizer?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 86-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k183, env)}),
      VGetArg(upenv, 80-1, 1),
      _V10sys_Dhas__finalizer_Q);
}
 }
}
static void _V0lookup__intrinsic2_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) ((bruijn ##k.96 79 0) (##string ##string.440)) ((bruijn eqv? 85 5) (close _V0lookup__intrinsic2_k182) (bruijn ##x.4 79 1) (quote ##sys.set-finalizer!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 85-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k182, env)}),
      VGetArg(upenv, 79-1, 1),
      _V10sys_Dset__finalizer_B);
}
 }
}
static void _V0lookup__intrinsic2_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((bruijn ##k.96 78 0) (##string ##string.439)) ((bruijn eqv? 84 5) (close _V0lookup__intrinsic2_k181) (bruijn ##x.4 78 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 84-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k181, env)}),
      VGetArg(upenv, 78-1, 1),
      _V10sys_Dnewline);
}
 }
}
static void _V0lookup__intrinsic2_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.172 0 0) ((bruijn ##k.96 77 0) (##string ##string.438)) ((bruijn eqv? 83 5) (close _V0lookup__intrinsic2_k180) (bruijn ##x.4 77 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodePointer(&_V10string_D438.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 83-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k180, env)}),
      VGetArg(upenv, 77-1, 1),
      _V10sys_Dwrite);
}
 }
}
static void _V0lookup__intrinsic2_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.171 0 0) ((bruijn ##k.96 76 0) (##string ##string.437)) ((bruijn eqv? 82 5) (close _V0lookup__intrinsic2_k179) (bruijn ##x.4 76 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 82-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k179, env)}),
      VGetArg(upenv, 76-1, 1),
      _V10sys_Ddisplay__word);
}
 }
}
static void _V0lookup__intrinsic2_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.170 0 0) ((bruijn ##k.96 75 0) (##string ##string.436)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic2_k178) (bruijn ##x.4 75 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodePointer(&_V10string_D436.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 81-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k178, env)}),
      VGetArg(upenv, 75-1, 1),
      _V10sys_Dread);
}
 }
}
static void _V0lookup__intrinsic2_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.169 0 0) ((bruijn ##k.96 74 0) (##string ##string.435)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic2_k177) (bruijn ##x.4 74 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodePointer(&_V10string_D435.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 80-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k177, env)}),
      VGetArg(upenv, 74-1, 1),
      _V10sys_Dread__line);
}
 }
}
static void _V0lookup__intrinsic2_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.168 0 0) ((bruijn ##k.96 73 0) (##string ##string.434)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic2_k176) (bruijn ##x.4 73 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodePointer(&_V10string_D434.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 79-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k176, env)}),
      VGetArg(upenv, 73-1, 1),
      _V10sys_Dread__char);
}
 }
}
static void _V0lookup__intrinsic2_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.167 0 0) ((bruijn ##k.96 72 0) (##string ##string.433)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic2_k175) (bruijn ##x.4 72 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodePointer(&_V10string_D433.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 78-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k175, env)}),
      VGetArg(upenv, 72-1, 1),
      _V10sys_Deof__object_Q);
}
 }
}
static void _V0lookup__intrinsic2_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.96 71 0) (##string ##string.432)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic2_k174) (bruijn ##x.4 71 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodePointer(&_V10string_D432.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 77-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k174, env)}),
      VGetArg(upenv, 71-1, 1),
      _V10sys_Dget__output__string);
}
 }
}
static void _V0lookup__intrinsic2_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) ((bruijn ##k.96 70 0) (##string ##string.431)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic2_k173) (bruijn ##x.4 70 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodePointer(&_V10string_D431.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 76-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k173, env)}),
      VGetArg(upenv, 70-1, 1),
      _V10sys_Dopen__output__string);
}
 }
}
static void _V0lookup__intrinsic2_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) ((bruijn ##k.96 69 0) (##string ##string.430)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic2_k172) (bruijn ##x.4 69 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodePointer(&_V10string_D430.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 75-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k172, env)}),
      VGetArg(upenv, 69-1, 1),
      _V10sys_Dclose__stream);
}
 }
}
static void _V0lookup__intrinsic2_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) ((bruijn ##k.96 68 0) (##string ##string.429)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic2_k171) (bruijn ##x.4 68 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodePointer(&_V10string_D429.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 74-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k171, env)}),
      VGetArg(upenv, 68-1, 1),
      _V10sys_Dopen__output__stream);
}
 }
}
static void _V0lookup__intrinsic2_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.162 0 0) ((bruijn ##k.96 67 0) (##string ##string.428)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic2_k170) (bruijn ##x.4 67 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodePointer(&_V10string_D428.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 73-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k170, env)}),
      VGetArg(upenv, 67-1, 1),
      _V10sys_Dopen__input__stream);
}
 }
}
static void _V0lookup__intrinsic2_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) ((bruijn ##k.96 66 0) (##string ##string.427)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic2_k169) (bruijn ##x.4 66 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodePointer(&_V10string_D427.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 72-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k169, env)}),
      VGetArg(upenv, 66-1, 1),
      _V10sys_Ddup__stderr);
}
 }
}
static void _V0lookup__intrinsic2_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) ((bruijn ##k.96 65 0) (##string ##string.426)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic2_k168) (bruijn ##x.4 65 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 71-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k168, env)}),
      VGetArg(upenv, 65-1, 1),
      _V10sys_Ddup__stdout);
}
 }
}
static void _V0lookup__intrinsic2_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) ((bruijn ##k.96 64 0) (##string ##string.425)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic2_k167) (bruijn ##x.4 64 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 70-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k167, env)}),
      VGetArg(upenv, 64-1, 1),
      _V10sys_Ddup__stdin);
}
 }
}
static void _V0lookup__intrinsic2_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) ((bruijn ##k.96 63 0) (##string ##string.424)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic2_k166) (bruijn ##x.4 63 1) (quote ##sys.stderr->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodePointer(&_V10string_D424.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 69-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k166, env)}),
      VGetArg(upenv, 63-1, 1),
      _V10sys_Dstderr___Gport);
}
 }
}
static void _V0lookup__intrinsic2_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) ((bruijn ##k.96 62 0) (##string ##string.423)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic2_k165) (bruijn ##x.4 62 1) (quote ##sys.stdout->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 68-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k165, env)}),
      VGetArg(upenv, 62-1, 1),
      _V10sys_Dstdout___Gport);
}
 }
}
static void _V0lookup__intrinsic2_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) ((bruijn ##k.96 61 0) (##string ##string.422)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic2_k164) (bruijn ##x.4 61 1) (quote ##sys.stdin->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodePointer(&_V10string_D422.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 67-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k164, env)}),
      VGetArg(upenv, 61-1, 1),
      _V10sys_Dstdin___Gport);
}
 }
}
static void _V0lookup__intrinsic2_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn ##k.96 60 0) (##string ##string.421)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic2_k163) (bruijn ##x.4 60 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodePointer(&_V10string_D421.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 66-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k163, env)}),
      VGetArg(upenv, 60-1, 1),
      _V10sys_Dchar__integer);
}
 }
}
static void _V0lookup__intrinsic2_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) ((bruijn ##k.96 59 0) (##string ##string.420)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic2_k162) (bruijn ##x.4 59 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodePointer(&_V10string_D420.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 65-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k162, env)}),
      VGetArg(upenv, 59-1, 1),
      _V10sys_Dsymbol___Gstring);
}
 }
}
static void _V0lookup__intrinsic2_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) ((bruijn ##k.96 58 0) (##string ##string.419)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic2_k161) (bruijn ##x.4 58 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodePointer(&_V10string_D419.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 64-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k161, env)}),
      VGetArg(upenv, 58-1, 1),
      _V10sys_Dstring___Gnumber);
}
 }
}
static void _V0lookup__intrinsic2_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.152 0 0) ((bruijn ##k.96 57 0) (##string ##string.418)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic2_k160) (bruijn ##x.4 57 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodePointer(&_V10string_D418.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 63-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k160, env)}),
      VGetArg(upenv, 57-1, 1),
      _V10sys_Dstring___Gsymbol);
}
 }
}
static void _V0lookup__intrinsic2_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.96 56 0) (##string ##string.417)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic2_k159) (bruijn ##x.4 56 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodePointer(&_V10string_D417.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 62-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k159, env)}),
      VGetArg(upenv, 56-1, 1),
      _V10sys_Dstring__length);
}
 }
}
static void _V0lookup__intrinsic2_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) ((bruijn ##k.96 55 0) (##string ##string.416)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic2_k158) (bruijn ##x.4 55 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodePointer(&_V10string_D416.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 61-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k158, env)}),
      VGetArg(upenv, 55-1, 1),
      _V10sys_Dstring__set_B);
}
 }
}
static void _V0lookup__intrinsic2_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.96 54 0) (##string ##string.415)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic2_k157) (bruijn ##x.4 54 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodePointer(&_V10string_D415.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 60-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k157, env)}),
      VGetArg(upenv, 54-1, 1),
      _V10sys_Dstring__ref);
}
 }
}
static void _V0lookup__intrinsic2_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.96 53 0) (##string ##string.414)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic2_k156) (bruijn ##x.4 53 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodePointer(&_V10string_D414.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 59-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k156, env)}),
      VGetArg(upenv, 53-1, 1),
      _V10sys_Dstring__copy_B);
}
 }
}
static void _V0lookup__intrinsic2_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn ##k.96 52 0) (##string ##string.413)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic2_k155) (bruijn ##x.4 52 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodePointer(&_V10string_D413.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 58-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k155, env)}),
      VGetArg(upenv, 52-1, 1),
      _V10sys_Dsubstring);
}
 }
}
static void _V0lookup__intrinsic2_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.146 0 0) ((bruijn ##k.96 51 0) (##string ##string.412)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic2_k154) (bruijn ##x.4 51 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodePointer(&_V10string_D412.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 57-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k154, env)}),
      VGetArg(upenv, 51-1, 1),
      _V10sys_Dmake__string);
}
 }
}
static void _V0lookup__intrinsic2_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) ((bruijn ##k.96 50 0) (##string ##string.411)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic2_k153) (bruijn ##x.4 50 1) (quote ##vcore.hash-table-delete!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodePointer(&_V10string_D411.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 56-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k153, env)}),
      VGetArg(upenv, 50-1, 1),
      _V10vcore_Dhash__table__delete_B);
}
 }
}
static void _V0lookup__intrinsic2_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.144 0 0) ((bruijn ##k.96 49 0) (##string ##string.410)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic2_k152) (bruijn ##x.4 49 1) (quote ##vcore.hash-table-set!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodePointer(&_V10string_D410.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 55-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k152, env)}),
      VGetArg(upenv, 49-1, 1),
      _V10vcore_Dhash__table__set_B);
}
 }
}
static void _V0lookup__intrinsic2_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.143 0 0) ((bruijn ##k.96 48 0) (##string ##string.409)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic2_k151) (bruijn ##x.4 48 1) (quote ##vcore.hash-table-ref)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodePointer(&_V10string_D409.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 54-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k151, env)}),
      VGetArg(upenv, 48-1, 1),
      _V10vcore_Dhash__table__ref);
}
 }
}
static void _V0lookup__intrinsic2_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) ((bruijn ##k.96 47 0) (##string ##string.408)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic2_k150) (bruijn ##x.4 47 1) (quote ##vcore.hash-table-hash-function)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodePointer(&_V10string_D408.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 53-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k150, env)}),
      VGetArg(upenv, 47-1, 1),
      _V10vcore_Dhash__table__hash__function);
}
 }
}
static void _V0lookup__intrinsic2_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn ##k.96 46 0) (##string ##string.407)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic2_k149) (bruijn ##x.4 46 1) (quote ##vcore.hash-table-equivalence-function)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodePointer(&_V10string_D407.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 52-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k149, env)}),
      VGetArg(upenv, 46-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
}
 }
}
static void _V0lookup__intrinsic2_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 0 0) ((bruijn ##k.96 45 0) (##string ##string.406)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic2_k148) (bruijn ##x.4 45 1) (quote ##vcore.make-hash-table)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodePointer(&_V10string_D406.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 51-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k148, env)}),
      VGetArg(upenv, 45-1, 1),
      _V10vcore_Dmake__hash__table);
}
 }
}
static void _V0lookup__intrinsic2_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.139 0 0) ((bruijn ##k.96 44 0) (##string ##string.405)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic2_k147) (bruijn ##x.4 44 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodePointer(&_V10string_D405.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 50-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k147, env)}),
      VGetArg(upenv, 44-1, 1),
      _V10sys_Dvector__length);
}
 }
}
static void _V0lookup__intrinsic2_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.138 0 0) ((bruijn ##k.96 43 0) (##string ##string.404)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic2_k146) (bruijn ##x.4 43 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodePointer(&_V10string_D404.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 49-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k146, env)}),
      VGetArg(upenv, 43-1, 1),
      _V10sys_Dvector__set_B);
}
 }
}
static void _V0lookup__intrinsic2_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) ((bruijn ##k.96 42 0) (##string ##string.403)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic2_k145) (bruijn ##x.4 42 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodePointer(&_V10string_D403.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 48-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k145, env)}),
      VGetArg(upenv, 42-1, 1),
      _V10sys_Dvector__ref);
}
 }
}
static void _V0lookup__intrinsic2_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn ##k.96 41 0) (##string ##string.402)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic2_k144) (bruijn ##x.4 41 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodePointer(&_V10string_D402.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 47-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k144, env)}),
      VGetArg(upenv, 41-1, 1),
      _V10sys_Dlist___Gvector);
}
 }
}
static void _V0lookup__intrinsic2_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.135 0 0) ((bruijn ##k.96 40 0) (##string ##string.401)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic2_k143) (bruijn ##x.4 40 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodePointer(&_V10string_D401.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 46-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k143, env)}),
      VGetArg(upenv, 40-1, 1),
      _V10sys_Dset__cdr_B);
}
 }
}
static void _V0lookup__intrinsic2_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.134 0 0) ((bruijn ##k.96 39 0) (##string ##string.400)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic2_k142) (bruijn ##x.4 39 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodePointer(&_V10string_D400.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 45-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k142, env)}),
      VGetArg(upenv, 39-1, 1),
      _V10sys_Dset__car_B);
}
 }
}
static void _V0lookup__intrinsic2_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.133 0 0) ((bruijn ##k.96 38 0) (##string ##string.399)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic2_k141) (bruijn ##x.4 38 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodePointer(&_V10string_D399.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 44-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k141, env)}),
      VGetArg(upenv, 38-1, 1),
      _V10sys_Dcdr);
}
 }
}
static void _V0lookup__intrinsic2_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 0 0) ((bruijn ##k.96 37 0) (##string ##string.398)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic2_k140) (bruijn ##x.4 37 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodePointer(&_V10string_D398.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 43-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k140, env)}),
      VGetArg(upenv, 37-1, 1),
      _V10sys_Dcar);
}
 }
}
static void _V0lookup__intrinsic2_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0lookup__intrinsic2_k138) (close _V0lookup__intrinsic2_k139))
V_CALL_FUNC(_V0lookup__intrinsic2_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k139, env)}));
 }
}
static void _V0lookup__intrinsic2_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.131 0 0) ((bruijn ##k.96 35 0) (##string ##string.397)) ((bruijn eqv? 41 5) (close _V0lookup__intrinsic2_k137) (bruijn ##x.4 35 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodePointer(&_V10string_D397.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 41-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k137, env)}),
      VGetArg(upenv, 35-1, 1),
      _V10sys_Dcons);
}
 }
}
static void _V0lookup__intrinsic2_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.130 0 0) ((bruijn ##k.96 34 0) (##string ##string.396)) ((bruijn eqv? 40 5) (close _V0lookup__intrinsic2_k136) (bruijn ##x.4 34 1) (quote ##vcore.load-library)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodePointer(&_V10string_D396.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 40-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k136, env)}),
      VGetArg(upenv, 34-1, 1),
      _V10vcore_Dload__library);
}
 }
}
static void _V0lookup__intrinsic2_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.129 0 0) ((bruijn ##k.96 33 0) (##string ##string.395)) ((bruijn eqv? 39 5) (close _V0lookup__intrinsic2_k135) (bruijn ##x.4 33 1) (quote ##vcore.make-import)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodePointer(&_V10string_D395.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 39-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k135, env)}),
      VGetArg(upenv, 33-1, 1),
      _V10vcore_Dmake__import);
}
 }
}
static void _V0lookup__intrinsic2_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.128 0 0) ((bruijn ##k.96 32 0) (##string ##string.394)) ((bruijn eqv? 38 5) (close _V0lookup__intrinsic2_k134) (bruijn ##x.4 32 1) (quote ##vcore.lookup-library)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodePointer(&_V10string_D394.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 38-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k134, env)}),
      VGetArg(upenv, 32-1, 1),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V0lookup__intrinsic2_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.127 0 0) ((bruijn ##k.96 31 0) (##string ##string.393)) ((bruijn eqv? 37 5) (close _V0lookup__intrinsic2_k133) (bruijn ##x.4 31 1) (quote ##vcore.multidefine)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodePointer(&_V10string_D393.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 37-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k133, env)}),
      VGetArg(upenv, 31-1, 1),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V0lookup__intrinsic2_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.126 0 0) ((bruijn ##k.96 30 0) (##string ##string.392)) ((bruijn eqv? 36 5) (close _V0lookup__intrinsic2_k132) (bruijn ##x.4 30 1) (quote ##vcore.define)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodePointer(&_V10string_D392.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 36-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k132, env)}),
      VGetArg(upenv, 30-1, 1),
      _V10vcore_Ddefine);
}
 }
}
static void _V0lookup__intrinsic2_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.125 0 0) ((bruijn ##k.96 29 0) (##string ##string.391)) ((bruijn eqv? 35 5) (close _V0lookup__intrinsic2_k131) (bruijn ##x.4 29 1) (quote ##vcore.function)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodePointer(&_V10string_D391.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 35-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k131, env)}),
      VGetArg(upenv, 29-1, 1),
      _V10vcore_Dfunction);
}
 }
}
static void _V0lookup__intrinsic2_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.124 0 0) ((bruijn ##k.96 28 0) (##string ##string.390)) ((bruijn eqv? 34 5) (close _V0lookup__intrinsic2_k130) (bruijn ##x.4 28 1) (quote ##sys.import)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodePointer(&_V10string_D390.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 34-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k130, env)}),
      VGetArg(upenv, 28-1, 1),
      _V10sys_Dimport);
}
 }
}
static void _V0lookup__intrinsic2_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.123 0 0) ((bruijn ##k.96 27 0) (##string ##string.389)) ((bruijn eqv? 33 5) (close _V0lookup__intrinsic2_k129) (bruijn ##x.4 27 1) (quote ##sys.exit)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodePointer(&_V10string_D389.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 33-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k129, env)}),
      VGetArg(upenv, 27-1, 1),
      _V10sys_Dexit);
}
 }
}
static void _V0lookup__intrinsic2_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.122 0 0) ((bruijn ##k.96 26 0) (##string ##string.388)) ((bruijn eqv? 32 5) (close _V0lookup__intrinsic2_k128) (bruijn ##x.4 26 1) (quote ##sys.abort)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodePointer(&_V10string_D388.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k128, env)}),
      VGetArg(upenv, 26-1, 1),
      _V10sys_Dabort);
}
 }
}
static void _V0lookup__intrinsic2_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.121 0 0) ((bruijn ##k.96 25 0) (##string ##string.387)) ((bruijn eqv? 31 5) (close _V0lookup__intrinsic2_k127) (bruijn ##x.4 25 1) (quote ##sys.apply)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodePointer(&_V10string_D387.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k127, env)}),
      VGetArg(upenv, 25-1, 1),
      _V10sys_Dapply);
}
 }
}
static void _V0lookup__intrinsic2_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn ##k.96 24 0) (##string ##string.386)) ((bruijn eqv? 30 5) (close _V0lookup__intrinsic2_k126) (bruijn ##x.4 24 1) (quote ##sys.call-with-values)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodePointer(&_V10string_D386.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k126, env)}),
      VGetArg(upenv, 24-1, 1),
      _V10sys_Dcall__with__values);
}
 }
}
static void _V0lookup__intrinsic2_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.119 0 0) ((bruijn ##k.96 23 0) (##string ##string.385)) ((bruijn eqv? 29 5) (close _V0lookup__intrinsic2_k125) (bruijn ##x.4 23 1) (quote ##sys.call/cc)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodePointer(&_V10string_D385.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k125, env)}),
      VGetArg(upenv, 23-1, 1),
      _V10sys_Dcall_Wcc);
}
 }
}
static void _V0lookup__intrinsic2_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) ((bruijn ##k.96 22 0) (##string ##string.384)) ((bruijn eqv? 28 5) (close _V0lookup__intrinsic2_k124) (bruijn ##x.4 22 1) (quote ##sys.next)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodePointer(&_V10string_D384.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k124, env)}),
      VGetArg(upenv, 22-1, 1),
      _V10sys_Dnext);
}
 }
}
static void _V0lookup__intrinsic2_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn ##k.96 21 0) (##string ##string.383)) ((bruijn eqv? 27 5) (close _V0lookup__intrinsic2_k123) (bruijn ##x.4 21 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodePointer(&_V10string_D383.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k123, env)}),
      VGetArg(upenv, 21-1, 1),
      _V10sys_Dnot);
}
 }
}
static void _V0lookup__intrinsic2_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.116 0 0) ((bruijn ##k.96 20 0) (##string ##string.382)) ((bruijn eqv? 26 5) (close _V0lookup__intrinsic2_k122) (bruijn ##x.4 20 1) (quote ##sys.eqv?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodePointer(&_V10string_D382.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k122, env)}),
      VGetArg(upenv, 20-1, 1),
      _V10sys_Deqv_Q);
}
 }
}
static void _V0lookup__intrinsic2_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.115 0 0) ((bruijn ##k.96 19 0) (##string ##string.381)) ((bruijn eqv? 25 5) (close _V0lookup__intrinsic2_k121) (bruijn ##x.4 19 1) (quote ##sys.blob=?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodePointer(&_V10string_D381.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k121, env)}),
      VGetArg(upenv, 19-1, 1),
      _V10sys_Dblob_E_Q);
}
 }
}
static void _V0lookup__intrinsic2_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.114 0 0) ((bruijn ##k.96 18 0) (##string ##string.380)) ((bruijn eqv? 24 5) (close _V0lookup__intrinsic2_k120) (bruijn ##x.4 18 1) (quote ##sys.symbol=?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D380.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k120, env)}),
      VGetArg(upenv, 18-1, 1),
      _V10sys_Dsymbol_E_Q);
}
 }
}
static void _V0lookup__intrinsic2_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.113 0 0) ((bruijn ##k.96 17 0) (##string ##string.379)) ((bruijn eqv? 23 5) (close _V0lookup__intrinsic2_k119) (bruijn ##x.4 17 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D379.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k119, env)}),
      VGetArg(upenv, 17-1, 1),
      _V10sys_Deq_Q);
}
 }
}
static void _V0lookup__intrinsic2_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.112 0 0) ((bruijn ##k.96 16 0) (##string ##string.378)) ((bruijn eqv? 22 5) (close _V0lookup__intrinsic2_k118) (bruijn ##x.4 16 1) (quote ##sys.char?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D378.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k118, env)}),
      VGetArg(upenv, 16-1, 1),
      _V10sys_Dchar_Q);
}
 }
}
static void _V0lookup__intrinsic2_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.111 0 0) ((bruijn ##k.96 15 0) (##string ##string.377)) ((bruijn eqv? 21 5) (close _V0lookup__intrinsic2_k117) (bruijn ##x.4 15 1) (quote ##sys.double?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D377.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k117, env)}),
      VGetArg(upenv, 15-1, 1),
      _V10sys_Ddouble_Q);
}
 }
}
static void _V0lookup__intrinsic2_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.110 0 0) ((bruijn ##k.96 14 0) (##string ##string.376)) ((bruijn eqv? 20 5) (close _V0lookup__intrinsic2_k116) (bruijn ##x.4 14 1) (quote ##sys.int?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D376.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k116, env)}),
      VGetArg(upenv, 14-1, 1),
      _V10sys_Dint_Q);
}
 }
}
static void _V0lookup__intrinsic2_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.109 0 0) ((bruijn ##k.96 13 0) (##string ##string.375)) ((bruijn eqv? 19 5) (close _V0lookup__intrinsic2_k115) (bruijn ##x.4 13 1) (quote ##sys.string?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D375.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k115, env)}),
      VGetArg(upenv, 13-1, 1),
      _V10sys_Dstring_Q);
}
 }
}
static void _V0lookup__intrinsic2_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) ((bruijn ##k.96 12 0) (##string ##string.374)) ((bruijn eqv? 18 5) (close _V0lookup__intrinsic2_k114) (bruijn ##x.4 12 1) (quote ##sys.symbol?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D374.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k114, env)}),
      VGetArg(upenv, 12-1, 1),
      _V10sys_Dsymbol_Q);
}
 }
}
static void _V0lookup__intrinsic2_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.107 0 0) ((bruijn ##k.96 11 0) (##string ##string.373)) ((bruijn eqv? 17 5) (close _V0lookup__intrinsic2_k113) (bruijn ##x.4 11 1) (quote ##sys.blob?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D373.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k113, env)}),
      VGetArg(upenv, 11-1, 1),
      _V10sys_Dblob_Q);
}
 }
}
static void _V0lookup__intrinsic2_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.106 0 0) ((bruijn ##k.96 10 0) (##string ##string.372)) ((bruijn eqv? 16 5) (close _V0lookup__intrinsic2_k112) (bruijn ##x.4 10 1) (quote ##sys.procedure?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D372.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k112, env)}),
      VGetArg(upenv, 10-1, 1),
      _V10sys_Dprocedure_Q);
}
 }
}
static void _V0lookup__intrinsic2_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn ##k.96 9 0) (##string ##string.371)) ((bruijn eqv? 15 5) (close _V0lookup__intrinsic2_k111) (bruijn ##x.4 9 1) (quote ##sys.vector?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D371.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k111, env)}),
      VGetArg(upenv, 9-1, 1),
      _V10sys_Dvector_Q);
}
 }
}
static void _V0lookup__intrinsic2_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) ((bruijn ##k.96 8 0) (##string ##string.370)) ((bruijn eqv? 14 5) (close _V0lookup__intrinsic2_k110) (bruijn ##x.4 8 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D370.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k110, env)}),
      VGetArg(upenv, 8-1, 1),
      _V10sys_Dpair_Q);
}
 }
}
static void _V0lookup__intrinsic2_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.103 0 0) ((bruijn ##k.96 7 0) (##string ##string.369)) ((bruijn eqv? 13 5) (close _V0lookup__intrinsic2_k109) (bruijn ##x.4 7 1) (quote ##sys.null?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k109, env)}),
      VGetArg(upenv, 7-1, 1),
      _V10sys_Dnull_Q);
}
 }
}
static void _V0lookup__intrinsic2_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) ((bruijn ##k.96 6 0) (##string ##string.368)) ((bruijn eqv? 12 5) (close _V0lookup__intrinsic2_k108) (bruijn ##x.4 6 1) (quote ##sys.remainder)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D368.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k108, env)}),
      VGetArg(upenv, 6-1, 1),
      _V10sys_Dremainder);
}
 }
}
static void _V0lookup__intrinsic2_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.101 0 0) ((bruijn ##k.96 5 0) (##string ##string.367)) ((bruijn eqv? 11 5) (close _V0lookup__intrinsic2_k107) (bruijn ##x.4 5 1) (quote ##sys.quotient)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D367.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k107, env)}),
      VGetArg(upenv, 5-1, 1),
      _V10sys_Dquotient);
}
 }
}
static void _V0lookup__intrinsic2_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.100 0 0) ((bruijn ##k.96 4 0) (##string ##string.366)) ((bruijn eqv? 10 5) (close _V0lookup__intrinsic2_k106) (bruijn ##x.4 4 1) (quote ##sys.cmp)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D366.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k106, env)}),
      upenv->up->up->up->vars[1],
      _V10sys_Dcmp);
}
 }
}
static void _V0lookup__intrinsic2_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.99 0 0) ((bruijn ##k.96 3 0) (##string ##string.365)) ((bruijn eqv? 9 5) (close _V0lookup__intrinsic2_k105) (bruijn ##x.4 3 1) (quote ##sys./)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D365.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k105, env)}),
      upenv->up->up->vars[1],
      _V10sys_D_W);
}
 }
}
static void _V0lookup__intrinsic2_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.98 0 0) ((bruijn ##k.96 2 0) (##string ##string.364)) ((bruijn eqv? 8 5) (close _V0lookup__intrinsic2_k104) (bruijn ##x.4 2 1) (quote ##sys.*)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D364.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k104, env)}),
      upenv->up->vars[1],
      _V10sys_D_S);
}
 }
}
static void _V0lookup__intrinsic2_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.97 0 0) ((bruijn ##k.96 1 0) (##string ##string.363)) ((bruijn eqv? 7 5) (close _V0lookup__intrinsic2_k103) (bruijn ##x.4 1 1) (quote ##sys.-)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D363.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k103, env)}),
      upenv->vars[1],
      _V10sys_D__);
}
 }
}
static void _V0lookup__intrinsic2_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__intrinsic2_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic2_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 6 5) (close _V0lookup__intrinsic2_k102) (bruijn ##x.4 0 1) (quote ##sys.+))
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_k102, env)}),
      _var1,
      _V10sys_D_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k39) (bruijn lookup-intrinsic2 4 5) (close _V0lookup__intrinsic2_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k39, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic2_lambda12, env)})
    );
 }
}
static void _V0lookup__intrinsic_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k232, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.270 1 0) ((bruijn ##k.271 0 0) (bruijn ##p.270 1 0)) ((bruijn eqv? 41 5) (bruijn ##k.271 0 0) (bruijn ##x.3 36 1) (quote ##sys.qcons)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 41-1, 5), runtime,
      _var0,
      VGetArg(upenv, 36-1, 1),
      _V10sys_Dqcons);
}
 }
}
static void _V0lookup__intrinsic_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k274, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.269 0 0) ((bruijn ##k.193 77 0) (##string ##string.528)) ((bruijn ##k.193 77 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodePointer(&_V10string_D528.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0lookup__intrinsic_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.268 0 0) ((bruijn ##k.193 76 0) (##string ##string.527)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic_k274) (bruijn ##x.3 76 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodePointer(&_V10string_D527.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 81-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k274, env)}),
      VGetArg(upenv, 76-1, 1),
      _V10sys_Dcommand__line);
}
 }
}
static void _V0lookup__intrinsic_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.267 0 0) ((bruijn ##k.193 75 0) (##string ##string.526)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic_k273) (bruijn ##x.3 75 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodePointer(&_V10string_D526.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 80-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k273, env)}),
      VGetArg(upenv, 75-1, 1),
      _V10sys_Dmake__temporary__file);
}
 }
}
static void _V0lookup__intrinsic_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.266 0 0) ((bruijn ##k.193 74 0) (##string ##string.525)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic_k272) (bruijn ##x.3 74 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodePointer(&_V10string_D525.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 79-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k272, env)}),
      VGetArg(upenv, 74-1, 1),
      _V10sys_Dopen__output__process);
}
 }
}
static void _V0lookup__intrinsic_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.265 0 0) ((bruijn ##k.193 73 0) (##string ##string.524)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic_k271) (bruijn ##x.3 73 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 78-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k271, env)}),
      VGetArg(upenv, 73-1, 1),
      _V10sys_Dopen__input__process);
}
 }
}
static void _V0lookup__intrinsic_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((bruijn ##k.193 72 0) (##string ##string.523)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic_k270) (bruijn ##x.3 72 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodePointer(&_V10string_D523.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 77-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k270, env)}),
      VGetArg(upenv, 72-1, 1),
      _V10sys_Dsystem);
}
 }
}
static void _V0lookup__intrinsic_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.263 0 0) ((bruijn ##k.193 71 0) (##string ##string.522)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic_k269) (bruijn ##x.3 71 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodePointer(&_V10string_D522.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 76-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k269, env)}),
      VGetArg(upenv, 71-1, 1),
      _V10sys_Dnewline);
}
 }
}
static void _V0lookup__intrinsic_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((bruijn ##k.193 70 0) (##string ##string.521)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic_k268) (bruijn ##x.3 70 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodePointer(&_V10string_D521.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 75-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k268, env)}),
      VGetArg(upenv, 70-1, 1),
      _V10sys_Dwrite);
}
 }
}
static void _V0lookup__intrinsic_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn ##k.193 69 0) (##string ##string.520)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic_k267) (bruijn ##x.3 69 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodePointer(&_V10string_D520.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 74-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k267, env)}),
      VGetArg(upenv, 69-1, 1),
      _V10sys_Ddisplay__word);
}
 }
}
static void _V0lookup__intrinsic_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.260 0 0) ((bruijn ##k.193 68 0) (##string ##string.519)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic_k266) (bruijn ##x.3 68 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodePointer(&_V10string_D519.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 73-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k266, env)}),
      VGetArg(upenv, 68-1, 1),
      _V10sys_Dread);
}
 }
}
static void _V0lookup__intrinsic_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 0 0) ((bruijn ##k.193 67 0) (##string ##string.518)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic_k265) (bruijn ##x.3 67 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodePointer(&_V10string_D518.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 72-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k265, env)}),
      VGetArg(upenv, 67-1, 1),
      _V10sys_Dread__line);
}
 }
}
static void _V0lookup__intrinsic_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.258 0 0) ((bruijn ##k.193 66 0) (##string ##string.517)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic_k264) (bruijn ##x.3 66 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodePointer(&_V10string_D517.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 71-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k264, env)}),
      VGetArg(upenv, 66-1, 1),
      _V10sys_Dread__char);
}
 }
}
static void _V0lookup__intrinsic_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.257 0 0) ((bruijn ##k.193 65 0) (##string ##string.516)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic_k263) (bruijn ##x.3 65 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodePointer(&_V10string_D516.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 70-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k263, env)}),
      VGetArg(upenv, 65-1, 1),
      _V10sys_Deof__object_Q);
}
 }
}
static void _V0lookup__intrinsic_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.256 0 0) ((bruijn ##k.193 64 0) (##string ##string.515)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic_k262) (bruijn ##x.3 64 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodePointer(&_V10string_D515.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 69-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k262, env)}),
      VGetArg(upenv, 64-1, 1),
      _V10sys_Dget__output__string);
}
 }
}
static void _V0lookup__intrinsic_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.255 0 0) ((bruijn ##k.193 63 0) (##string ##string.514)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic_k261) (bruijn ##x.3 63 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodePointer(&_V10string_D514.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 68-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k261, env)}),
      VGetArg(upenv, 63-1, 1),
      _V10sys_Dopen__output__string);
}
 }
}
static void _V0lookup__intrinsic_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.254 0 0) ((bruijn ##k.193 62 0) (##string ##string.513)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic_k260) (bruijn ##x.3 62 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodePointer(&_V10string_D513.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 67-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k260, env)}),
      VGetArg(upenv, 62-1, 1),
      _V10sys_Dclose__stream);
}
 }
}
static void _V0lookup__intrinsic_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 0 0) ((bruijn ##k.193 61 0) (##string ##string.512)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic_k259) (bruijn ##x.3 61 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodePointer(&_V10string_D512.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 66-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k259, env)}),
      VGetArg(upenv, 61-1, 1),
      _V10sys_Dopen__output__stream);
}
 }
}
static void _V0lookup__intrinsic_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn ##k.193 60 0) (##string ##string.511)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic_k258) (bruijn ##x.3 60 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodePointer(&_V10string_D511.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 65-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k258, env)}),
      VGetArg(upenv, 60-1, 1),
      _V10sys_Dopen__input__stream);
}
 }
}
static void _V0lookup__intrinsic_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 0 0) ((bruijn ##k.193 59 0) (##string ##string.510)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic_k257) (bruijn ##x.3 59 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodePointer(&_V10string_D510.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 64-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k257, env)}),
      VGetArg(upenv, 59-1, 1),
      _V10sys_Ddup__stderr);
}
 }
}
static void _V0lookup__intrinsic_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn ##k.193 58 0) (##string ##string.509)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic_k256) (bruijn ##x.3 58 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodePointer(&_V10string_D509.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 63-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k256, env)}),
      VGetArg(upenv, 58-1, 1),
      _V10sys_Ddup__stdout);
}
 }
}
static void _V0lookup__intrinsic_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn ##k.193 57 0) (##string ##string.425)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic_k255) (bruijn ##x.3 57 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 62-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k255, env)}),
      VGetArg(upenv, 57-1, 1),
      _V10sys_Ddup__stdin);
}
 }
}
static void _V0lookup__intrinsic_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 0 0) ((bruijn ##k.193 56 0) (##string ##string.424)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic_k254) (bruijn ##x.3 56 1) (quote ##sys.stderr->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodePointer(&_V10string_D424.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 61-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k254, env)}),
      VGetArg(upenv, 56-1, 1),
      _V10sys_Dstderr___Gport);
}
 }
}
static void _V0lookup__intrinsic_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn ##k.193 55 0) (##string ##string.423)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic_k253) (bruijn ##x.3 55 1) (quote ##sys.stdout->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 60-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k253, env)}),
      VGetArg(upenv, 55-1, 1),
      _V10sys_Dstdout___Gport);
}
 }
}
static void _V0lookup__intrinsic_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.246 0 0) ((bruijn ##k.193 54 0) (##string ##string.508)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic_k252) (bruijn ##x.3 54 1) (quote ##sys.stdin->port)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodePointer(&_V10string_D508.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 59-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k252, env)}),
      VGetArg(upenv, 54-1, 1),
      _V10sys_Dstdin___Gport);
}
 }
}
static void _V0lookup__intrinsic_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 0 0) ((bruijn ##k.193 53 0) (##string ##string.507)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic_k251) (bruijn ##x.3 53 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodePointer(&_V10string_D507.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 58-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k251, env)}),
      VGetArg(upenv, 53-1, 1),
      _V10sys_Dchar__integer);
}
 }
}
static void _V0lookup__intrinsic_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn ##k.193 52 0) (##string ##string.506)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic_k250) (bruijn ##x.3 52 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodePointer(&_V10string_D506.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 57-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k250, env)}),
      VGetArg(upenv, 52-1, 1),
      _V10sys_Dsymbol___Gstring);
}
 }
}
static void _V0lookup__intrinsic_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn ##k.193 51 0) (##string ##string.505)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic_k249) (bruijn ##x.3 51 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodePointer(&_V10string_D505.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 56-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k249, env)}),
      VGetArg(upenv, 51-1, 1),
      _V10sys_Dstring___Gnumber);
}
 }
}
static void _V0lookup__intrinsic_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.242 0 0) ((bruijn ##k.193 50 0) (##string ##string.504)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic_k248) (bruijn ##x.3 50 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodePointer(&_V10string_D504.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 55-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k248, env)}),
      VGetArg(upenv, 50-1, 1),
      _V10sys_Dstring___Gsymbol);
}
 }
}
static void _V0lookup__intrinsic_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.241 0 0) ((bruijn ##k.193 49 0) (##string ##string.503)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic_k247) (bruijn ##x.3 49 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 54-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k247, env)}),
      VGetArg(upenv, 49-1, 1),
      _V10sys_Dstring__length);
}
 }
}
static void _V0lookup__intrinsic_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn ##k.193 48 0) (##string ##string.502)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic_k246) (bruijn ##x.3 48 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 53-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k246, env)}),
      VGetArg(upenv, 48-1, 1),
      _V10sys_Dstring__set_B);
}
 }
}
static void _V0lookup__intrinsic_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn ##k.193 47 0) (##string ##string.501)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic_k245) (bruijn ##x.3 47 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 52-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k245, env)}),
      VGetArg(upenv, 47-1, 1),
      _V10sys_Dstring__ref);
}
 }
}
static void _V0lookup__intrinsic_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.238 0 0) ((bruijn ##k.193 46 0) (##string ##string.500)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic_k244) (bruijn ##x.3 46 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodePointer(&_V10string_D500.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 51-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k244, env)}),
      VGetArg(upenv, 46-1, 1),
      _V10sys_Dstring__copy_B);
}
 }
}
static void _V0lookup__intrinsic_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) ((bruijn ##k.193 45 0) (##string ##string.499)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic_k243) (bruijn ##x.3 45 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodePointer(&_V10string_D499.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 50-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k243, env)}),
      VGetArg(upenv, 45-1, 1),
      _V10sys_Dsubstring);
}
 }
}
static void _V0lookup__intrinsic_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn ##k.193 44 0) (##string ##string.498)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic_k242) (bruijn ##x.3 44 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 49-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k242, env)}),
      VGetArg(upenv, 44-1, 1),
      _V10sys_Dmake__string);
}
 }
}
static void _V0lookup__intrinsic_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((bruijn ##k.193 43 0) (##string ##string.497)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic_k241) (bruijn ##x.3 43 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 48-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k241, env)}),
      VGetArg(upenv, 43-1, 1),
      _V10sys_Dvector__length);
}
 }
}
static void _V0lookup__intrinsic_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.234 0 0) ((bruijn ##k.193 42 0) (##string ##string.496)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic_k240) (bruijn ##x.3 42 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 47-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k240, env)}),
      VGetArg(upenv, 42-1, 1),
      _V10sys_Dvector__set_B);
}
 }
}
static void _V0lookup__intrinsic_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 0 0) ((bruijn ##k.193 41 0) (##string ##string.495)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic_k239) (bruijn ##x.3 41 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 46-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k239, env)}),
      VGetArg(upenv, 41-1, 1),
      _V10sys_Dvector__ref);
}
 }
}
static void _V0lookup__intrinsic_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.232 0 0) ((bruijn ##k.193 40 0) (##string ##string.494)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic_k238) (bruijn ##x.3 40 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 45-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k238, env)}),
      VGetArg(upenv, 40-1, 1),
      _V10sys_Dlist___Gvector);
}
 }
}
static void _V0lookup__intrinsic_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.231 0 0) ((bruijn ##k.193 39 0) (##string ##string.493)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic_k237) (bruijn ##x.3 39 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 44-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k237, env)}),
      VGetArg(upenv, 39-1, 1),
      _V10sys_Dset__cdr_B);
}
 }
}
static void _V0lookup__intrinsic_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 0 0) ((bruijn ##k.193 38 0) (##string ##string.492)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic_k236) (bruijn ##x.3 38 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 43-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k236, env)}),
      VGetArg(upenv, 38-1, 1),
      _V10sys_Dset__car_B);
}
 }
}
static void _V0lookup__intrinsic_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.229 0 0) ((bruijn ##k.193 37 0) (##string ##string.491)) ((bruijn eqv? 42 5) (close _V0lookup__intrinsic_k235) (bruijn ##x.3 37 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 42-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k235, env)}),
      VGetArg(upenv, 37-1, 1),
      _V10sys_Dcdr);
}
 }
}
static void _V0lookup__intrinsic_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.228 0 0) ((bruijn ##k.193 36 0) (##string ##string.490)) ((bruijn eqv? 41 5) (close _V0lookup__intrinsic_k234) (bruijn ##x.3 36 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 41-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k234, env)}),
      VGetArg(upenv, 36-1, 1),
      _V10sys_Dcar);
}
 }
}
static void _V0lookup__intrinsic_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0lookup__intrinsic_k232) (close _V0lookup__intrinsic_k233))
V_CALL_FUNC(_V0lookup__intrinsic_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k233, env)}));
 }
}
static void _V0lookup__intrinsic_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.227 0 0) ((bruijn ##k.193 34 0) (##string ##string.489)) ((bruijn eqv? 39 5) (close _V0lookup__intrinsic_k231) (bruijn ##x.3 34 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodePointer(&_V10string_D489.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 39-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k231, env)}),
      VGetArg(upenv, 34-1, 1),
      _V10sys_Dcons);
}
 }
}
static void _V0lookup__intrinsic_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.226 0 0) ((bruijn ##k.193 33 0) (##string ##string.488)) ((bruijn eqv? 38 5) (close _V0lookup__intrinsic_k230) (bruijn ##x.3 33 1) (quote ##vcore.load-library)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodePointer(&_V10string_D488.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 38-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k230, env)}),
      VGetArg(upenv, 33-1, 1),
      _V10vcore_Dload__library);
}
 }
}
static void _V0lookup__intrinsic_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.225 0 0) ((bruijn ##k.193 32 0) (##string ##string.487)) ((bruijn eqv? 37 5) (close _V0lookup__intrinsic_k229) (bruijn ##x.3 32 1) (quote ##vcore.make-import)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 37-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k229, env)}),
      VGetArg(upenv, 32-1, 1),
      _V10vcore_Dmake__import);
}
 }
}
static void _V0lookup__intrinsic_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((bruijn ##k.193 31 0) (##string ##string.486)) ((bruijn eqv? 36 5) (close _V0lookup__intrinsic_k228) (bruijn ##x.3 31 1) (quote ##vcore.lookup-library)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodePointer(&_V10string_D486.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 36-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k228, env)}),
      VGetArg(upenv, 31-1, 1),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V0lookup__intrinsic_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((bruijn ##k.193 30 0) (##string ##string.485)) ((bruijn eqv? 35 5) (close _V0lookup__intrinsic_k227) (bruijn ##x.3 30 1) (quote ##vcore.multidefine)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodePointer(&_V10string_D485.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 35-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k227, env)}),
      VGetArg(upenv, 30-1, 1),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V0lookup__intrinsic_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) ((bruijn ##k.193 29 0) (##string ##string.484)) ((bruijn eqv? 34 5) (close _V0lookup__intrinsic_k226) (bruijn ##x.3 29 1) (quote ##vcore.define)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodePointer(&_V10string_D484.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 34-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k226, env)}),
      VGetArg(upenv, 29-1, 1),
      _V10vcore_Ddefine);
}
 }
}
static void _V0lookup__intrinsic_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.221 0 0) ((bruijn ##k.193 28 0) (##string ##string.483)) ((bruijn eqv? 33 5) (close _V0lookup__intrinsic_k225) (bruijn ##x.3 28 1) (quote ##vcore.function)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodePointer(&_V10string_D483.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 33-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k225, env)}),
      VGetArg(upenv, 28-1, 1),
      _V10vcore_Dfunction);
}
 }
}
static void _V0lookup__intrinsic_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.220 0 0) ((bruijn ##k.193 27 0) (##string ##string.482)) ((bruijn eqv? 32 5) (close _V0lookup__intrinsic_k224) (bruijn ##x.3 27 1) (quote ##sys.import)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodePointer(&_V10string_D482.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k224, env)}),
      VGetArg(upenv, 27-1, 1),
      _V10sys_Dimport);
}
 }
}
static void _V0lookup__intrinsic_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) ((bruijn ##k.193 26 0) (##string ##string.481)) ((bruijn eqv? 31 5) (close _V0lookup__intrinsic_k223) (bruijn ##x.3 26 1) (quote ##sys.exit)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k223, env)}),
      VGetArg(upenv, 26-1, 1),
      _V10sys_Dexit);
}
 }
}
static void _V0lookup__intrinsic_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) ((bruijn ##k.193 25 0) (##string ##string.480)) ((bruijn eqv? 30 5) (close _V0lookup__intrinsic_k222) (bruijn ##x.3 25 1) (quote ##sys.abort)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodePointer(&_V10string_D480.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k222, env)}),
      VGetArg(upenv, 25-1, 1),
      _V10sys_Dabort);
}
 }
}
static void _V0lookup__intrinsic_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.217 0 0) ((bruijn ##k.193 24 0) (##string ##string.479)) ((bruijn eqv? 29 5) (close _V0lookup__intrinsic_k221) (bruijn ##x.3 24 1) (quote ##sys.apply)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k221, env)}),
      VGetArg(upenv, 24-1, 1),
      _V10sys_Dapply);
}
 }
}
static void _V0lookup__intrinsic_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.216 0 0) ((bruijn ##k.193 23 0) (##string ##string.478)) ((bruijn eqv? 28 5) (close _V0lookup__intrinsic_k220) (bruijn ##x.3 23 1) (quote ##sys.call-with-values)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k220, env)}),
      VGetArg(upenv, 23-1, 1),
      _V10sys_Dcall__with__values);
}
 }
}
static void _V0lookup__intrinsic_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.215 0 0) ((bruijn ##k.193 22 0) (##string ##string.477)) ((bruijn eqv? 27 5) (close _V0lookup__intrinsic_k219) (bruijn ##x.3 22 1) (quote ##sys.call/cc)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k219, env)}),
      VGetArg(upenv, 22-1, 1),
      _V10sys_Dcall_Wcc);
}
 }
}
static void _V0lookup__intrinsic_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.214 0 0) ((bruijn ##k.193 21 0) (##string ##string.476)) ((bruijn eqv? 26 5) (close _V0lookup__intrinsic_k218) (bruijn ##x.3 21 1) (quote ##sys.next)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k218, env)}),
      VGetArg(upenv, 21-1, 1),
      _V10sys_Dnext);
}
 }
}
static void _V0lookup__intrinsic_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) ((bruijn ##k.193 20 0) (##string ##string.475)) ((bruijn eqv? 25 5) (close _V0lookup__intrinsic_k217) (bruijn ##x.3 20 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k217, env)}),
      VGetArg(upenv, 20-1, 1),
      _V10sys_Dnot);
}
 }
}
static void _V0lookup__intrinsic_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.212 0 0) ((bruijn ##k.193 19 0) (##string ##string.474)) ((bruijn eqv? 24 5) (close _V0lookup__intrinsic_k216) (bruijn ##x.3 19 1) (quote ##sys.blob=?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k216, env)}),
      VGetArg(upenv, 19-1, 1),
      _V10sys_Dblob_E_Q);
}
 }
}
static void _V0lookup__intrinsic_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.211 0 0) ((bruijn ##k.193 18 0) (##string ##string.473)) ((bruijn eqv? 23 5) (close _V0lookup__intrinsic_k215) (bruijn ##x.3 18 1) (quote ##sys.symbol=?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k215, env)}),
      VGetArg(upenv, 18-1, 1),
      _V10sys_Dsymbol_E_Q);
}
 }
}
static void _V0lookup__intrinsic_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.210 0 0) ((bruijn ##k.193 17 0) (##string ##string.472)) ((bruijn eqv? 22 5) (close _V0lookup__intrinsic_k214) (bruijn ##x.3 17 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k214, env)}),
      VGetArg(upenv, 17-1, 1),
      _V10sys_Deq_Q);
}
 }
}
static void _V0lookup__intrinsic_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) ((bruijn ##k.193 16 0) (##string ##string.471)) ((bruijn eqv? 21 5) (close _V0lookup__intrinsic_k213) (bruijn ##x.3 16 1) (quote ##sys.char?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k213, env)}),
      VGetArg(upenv, 16-1, 1),
      _V10sys_Dchar_Q);
}
 }
}
static void _V0lookup__intrinsic_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) ((bruijn ##k.193 15 0) (##string ##string.470)) ((bruijn eqv? 20 5) (close _V0lookup__intrinsic_k212) (bruijn ##x.3 15 1) (quote ##sys.double?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k212, env)}),
      VGetArg(upenv, 15-1, 1),
      _V10sys_Ddouble_Q);
}
 }
}
static void _V0lookup__intrinsic_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.207 0 0) ((bruijn ##k.193 14 0) (##string ##string.469)) ((bruijn eqv? 19 5) (close _V0lookup__intrinsic_k211) (bruijn ##x.3 14 1) (quote ##sys.int?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k211, env)}),
      VGetArg(upenv, 14-1, 1),
      _V10sys_Dint_Q);
}
 }
}
static void _V0lookup__intrinsic_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.206 0 0) ((bruijn ##k.193 13 0) (##string ##string.468)) ((bruijn eqv? 18 5) (close _V0lookup__intrinsic_k210) (bruijn ##x.3 13 1) (quote ##sys.string?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k210, env)}),
      VGetArg(upenv, 13-1, 1),
      _V10sys_Dstring_Q);
}
 }
}
static void _V0lookup__intrinsic_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) ((bruijn ##k.193 12 0) (##string ##string.467)) ((bruijn eqv? 17 5) (close _V0lookup__intrinsic_k209) (bruijn ##x.3 12 1) (quote ##sys.symbol?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k209, env)}),
      VGetArg(upenv, 12-1, 1),
      _V10sys_Dsymbol_Q);
}
 }
}
static void _V0lookup__intrinsic_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) ((bruijn ##k.193 11 0) (##string ##string.466)) ((bruijn eqv? 16 5) (close _V0lookup__intrinsic_k208) (bruijn ##x.3 11 1) (quote ##sys.blob?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k208, env)}),
      VGetArg(upenv, 11-1, 1),
      _V10sys_Dblob_Q);
}
 }
}
static void _V0lookup__intrinsic_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.203 0 0) ((bruijn ##k.193 10 0) (##string ##string.465)) ((bruijn eqv? 15 5) (close _V0lookup__intrinsic_k207) (bruijn ##x.3 10 1) (quote ##sys.procedure?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k207, env)}),
      VGetArg(upenv, 10-1, 1),
      _V10sys_Dprocedure_Q);
}
 }
}
static void _V0lookup__intrinsic_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.202 0 0) ((bruijn ##k.193 9 0) (##string ##string.464)) ((bruijn eqv? 14 5) (close _V0lookup__intrinsic_k206) (bruijn ##x.3 9 1) (quote ##sys.vector?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k206, env)}),
      VGetArg(upenv, 9-1, 1),
      _V10sys_Dvector_Q);
}
 }
}
static void _V0lookup__intrinsic_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.201 0 0) ((bruijn ##k.193 8 0) (##string ##string.463)) ((bruijn eqv? 13 5) (close _V0lookup__intrinsic_k205) (bruijn ##x.3 8 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k205, env)}),
      VGetArg(upenv, 8-1, 1),
      _V10sys_Dpair_Q);
}
 }
}
static void _V0lookup__intrinsic_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.200 0 0) ((bruijn ##k.193 7 0) (##string ##string.462)) ((bruijn eqv? 12 5) (close _V0lookup__intrinsic_k204) (bruijn ##x.3 7 1) (quote ##sys.null?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k204, env)}),
      VGetArg(upenv, 7-1, 1),
      _V10sys_Dnull_Q);
}
 }
}
static void _V0lookup__intrinsic_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.199 0 0) ((bruijn ##k.193 6 0) (##string ##string.461)) ((bruijn eqv? 11 5) (close _V0lookup__intrinsic_k203) (bruijn ##x.3 6 1) (quote ##sys.remainder)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k203, env)}),
      VGetArg(upenv, 6-1, 1),
      _V10sys_Dremainder);
}
 }
}
static void _V0lookup__intrinsic_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((bruijn ##k.193 5 0) (##string ##string.460)) ((bruijn eqv? 10 5) (close _V0lookup__intrinsic_k202) (bruijn ##x.3 5 1) (quote ##sys.quotient)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k202, env)}),
      VGetArg(upenv, 5-1, 1),
      _V10sys_Dquotient);
}
 }
}
static void _V0lookup__intrinsic_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.197 0 0) ((bruijn ##k.193 4 0) (##string ##string.459)) ((bruijn eqv? 9 5) (close _V0lookup__intrinsic_k201) (bruijn ##x.3 4 1) (quote ##sys.cmp)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k201, env)}),
      upenv->up->up->up->vars[1],
      _V10sys_Dcmp);
}
 }
}
static void _V0lookup__intrinsic_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.196 0 0) ((bruijn ##k.193 3 0) (##string ##string.458)) ((bruijn eqv? 8 5) (close _V0lookup__intrinsic_k200) (bruijn ##x.3 3 1) (quote ##sys./)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k200, env)}),
      upenv->up->up->vars[1],
      _V10sys_D_W);
}
 }
}
static void _V0lookup__intrinsic_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.195 0 0) ((bruijn ##k.193 2 0) (##string ##string.457)) ((bruijn eqv? 7 5) (close _V0lookup__intrinsic_k199) (bruijn ##x.3 2 1) (quote ##sys.*)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D457.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k199, env)}),
      upenv->up->vars[1],
      _V10sys_D_S);
}
 }
}
static void _V0lookup__intrinsic_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.194 0 0) ((bruijn ##k.193 1 0) (##string ##string.456)) ((bruijn eqv? 6 5) (close _V0lookup__intrinsic_k198) (bruijn ##x.3 1 1) (quote ##sys.-)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D456.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k198, env)}),
      upenv->vars[1],
      _V10sys_D__);
}
 }
}
static void _V0lookup__intrinsic_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__intrinsic_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__intrinsic_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 5 5) (close _V0lookup__intrinsic_k197) (bruijn ##x.3 0 1) (quote ##sys.+))
V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_k197, env)}),
      _var1,
      _V10sys_D_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k38) (bruijn lookup-intrinsic 3 4) (close _V0lookup__intrinsic_lambda13))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k38, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__intrinsic_lambda13, env)})
    );
 }
}
static void _V0lookup__inline_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k280, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.281 1 0) ((bruijn ##k.282 0 0) (bruijn ##p.281 1 0)) ((bruijn eqv? 10 5) (bruijn ##k.282 0 0) (bruijn ##x.2 6 1) (quote ##sys.qcons)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      _var0,
      VGetArg(upenv, 6-1, 1),
      _V10sys_Dqcons);
}
 }
}
static void _V0lookup__inline_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k283, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.280 0 0) ((bruijn ##k.273 8 0) (##string ##string.535)) ((bruijn ##k.273 8 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0lookup__inline_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.279 0 0) ((bruijn ##k.273 7 0) (##string ##string.534)) ((bruijn eqv? 11 5) (close _V0lookup__inline_k283) (bruijn ##x.2 7 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D534.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k283, env)}),
      VGetArg(upenv, 7-1, 1),
      _V10sys_Dcdr);
}
 }
}
static void _V0lookup__inline_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.278 0 0) ((bruijn ##k.273 6 0) (##string ##string.533)) ((bruijn eqv? 10 5) (close _V0lookup__inline_k282) (bruijn ##x.2 6 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D533.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k282, env)}),
      VGetArg(upenv, 6-1, 1),
      _V10sys_Dcar);
}
 }
}
static void _V0lookup__inline_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0lookup__inline_k280) (close _V0lookup__inline_k281))
V_CALL_FUNC(_V0lookup__inline_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k281, env)}));
 }
}
static void _V0lookup__inline_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.277 0 0) ((bruijn ##k.273 4 0) (##string ##string.532)) ((bruijn eqv? 8 5) (close _V0lookup__inline_k279) (bruijn ##x.2 4 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D532.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k279, env)}),
      upenv->up->up->up->vars[1],
      _V10sys_Dcons);
}
 }
}
static void _V0lookup__inline_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.276 0 0) ((bruijn ##k.273 3 0) (##string ##string.531)) ((bruijn eqv? 7 5) (close _V0lookup__inline_k278) (bruijn ##x.2 3 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D531.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k278, env)}),
      upenv->up->up->vars[1],
      _V10sys_Deq_Q);
}
 }
}
static void _V0lookup__inline_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.275 0 0) ((bruijn ##k.273 2 0) (##string ##string.530)) ((bruijn eqv? 6 5) (close _V0lookup__inline_k277) (bruijn ##x.2 2 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D530.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k277, env)}),
      upenv->up->vars[1],
      _V10sys_Dnot);
}
 }
}
static void _V0lookup__inline_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.274 0 0) ((bruijn ##k.273 1 0) (##string ##string.529)) ((bruijn eqv? 5 5) (close _V0lookup__inline_k276) (bruijn ##x.2 1 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D529.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k276, env)}),
      upenv->vars[1],
      _V10sys_Dpair_Q);
}
 }
}
static void _V0lookup__inline_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__inline_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__inline_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup__inline_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 4 5) (close _V0lookup__inline_k275) (bruijn ##x.2 0 1) (quote ##sys.null?))
V_CALL(upenv->up->up->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_k275, env)}),
      _var1,
      _V10sys_Dnull_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k37) (bruijn lookup-inline 2 3) (close _V0lookup__inline_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k37, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup__inline_lambda14, env)})
    );
 }
}
static void _V0mangle__library_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.286 2 0) (##string ##string.536) (bruijn ##x.288 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D536.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0mangle__library_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 7 18) (close _V0mangle__library_k287) (bruijn lib 4 1))
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__library_k287, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0loop_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k292, runtime, upenv, 1, argc, _var0) {
  // ((bruijn symbol->string 12 19) (bruijn ##k.295 1 0) (bruijn ##x.296 0 0))
V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.294 1 0) ((bruijn mangle-symbol 10 1) (close _V0loop_k292) (bruijn e 2 0)) ((bruijn compiler-error 11 21) (bruijn ##k.295 0 0) (##string ##string.537) (bruijn e 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k292, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D537.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
 }
}
static void _V0loop_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.289 6 0) (bruijn ##x.291 1 0) (bruijn ##x.292 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 3) (close _V0loop_k295) (bruijn ks 5 2))
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k295, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-append 11 20) (close _V0loop_k294) (bruijn ##x.293 0 0) (bruijn knil 4 1))
V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k294, env)}),
      _var0,
      upenv->up->up->up->vars[1]);
 }
}
static void _V0loop_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k291) (close _V0loop_k293))
V_CALL_FUNC(_V0loop_k291, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k293, env)}));
 }
}
static void _V0loop_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 9 15) (close _V0loop_k290) (bruijn e 0 0))
V_CALL(VGetArg(upenv, 9-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k290, env)}),
      _var0);
 }
}
static void _V0loop_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.290 0 0) ((bruijn ##k.289 1 0) (bruijn knil 1 1)) ((bruijn car 8 4) (close _V0loop_k289) (bruijn ks 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k289, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 7 8) (close _V0loop_k288) (bruijn ks 0 2))
V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k288, env)}),
      _var2);
 }
}
static void _V0mangle__library_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0mangle__library_k286) (bruijn loop 0 1) (close _V0loop_lambda17))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__library_k286, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda17, env)})
    );
 }
}
static void _V0mangle__library_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.285 0 0) ((close _V0mangle__library_lambda16) (bruijn ##k.283 2 0) #f) ((bruijn compiler-error 5 21) (bruijn ##k.283 2 0) (##string ##string.538) (bruijn lib 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0mangle__library_lambda16, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D538.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
}
 }
}
static void _V0mangle__library_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.284 0 0) ((bruijn ##k.283 1 0) (bruijn lib 1 1)) ((bruijn pair? 4 2) (close _V0mangle__library_k285) (bruijn lib 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__library_k285, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0mangle__library_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__library_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__library_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 3 17) (close _V0mangle__library_k284) (bruijn lib 0 1))
V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__library_k284, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k36) (bruijn mangle-library 1 2) (close _V0mangle__library_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k36, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__library_lambda15, env)})
    );
 }
}
static void _V0mangle__symbol_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k301, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.327 1 0) ((bruijn display 8 24) (bruijn ##k.328 0 0) (##string ##string.539) (bruijn port 3 0)) ((bruijn display 8 24) (bruijn ##k.328 0 0) (##string ##string.540) (bruijn port 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10string_D539.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10string_D540.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0mangle__symbol_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.299 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0loop_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k306, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 13 28) (bruijn ##k.301 3 0) (bruijn ret 1 0))
V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0]);
 }
}
static void _V0loop_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 12 27) (close _V0loop_k306) (bruijn port 7 0))
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k306, env)}),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0loop_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k327, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.326 0 0) ((bruijn ##k.308 18 0) (##string ##string.559)) ((bruijn string-ref 32 25) (bruijn ##k.308 18 0) (bruijn str 29 0) (bruijn i 22 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D559.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 25), runtime,
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 22-1, 1));
}
 }
}
static void _V0loop_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.325 0 0) ((bruijn ##k.308 17 0) (##string ##string.558)) ((bruijn eqv? 31 5) (close _V0loop_k327) (bruijn ##x.1 19 0) (quote #\@)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D558.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k327, env)}),
      VGetArg(upenv, 19-1, 0),
      VEncodeChar('@'));
}
 }
}
static void _V0loop_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.324 0 0) ((bruijn ##k.308 16 0) (##string ##string.557)) ((bruijn eqv? 30 5) (close _V0loop_k326) (bruijn ##x.1 18 0) (quote #\.)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D557.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k326, env)}),
      VGetArg(upenv, 18-1, 0),
      VEncodeChar('.'));
}
 }
}
static void _V0loop_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.323 0 0) ((bruijn ##k.308 15 0) (##string ##string.556)) ((bruijn eqv? 29 5) (close _V0loop_k325) (bruijn ##x.1 17 0) (quote #\-)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D556.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k325, env)}),
      VGetArg(upenv, 17-1, 0),
      VEncodeChar('-'));
}
 }
}
static void _V0loop_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.322 0 0) ((bruijn ##k.308 14 0) (##string ##string.555)) ((bruijn eqv? 28 5) (close _V0loop_k324) (bruijn ##x.1 16 0) (quote #\+)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D555.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k324, env)}),
      VGetArg(upenv, 16-1, 0),
      VEncodeChar('+'));
}
 }
}
static void _V0loop_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.321 0 0) ((bruijn ##k.308 13 0) (##string ##string.554)) ((bruijn eqv? 27 5) (close _V0loop_k323) (bruijn ##x.1 15 0) (quote #\~)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D554.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k323, env)}),
      VGetArg(upenv, 15-1, 0),
      VEncodeChar('~'));
}
 }
}
static void _V0loop_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.320 0 0) ((bruijn ##k.308 12 0) (##string ##string.553)) ((bruijn eqv? 26 5) (close _V0loop_k322) (bruijn ##x.1 14 0) (quote #\_)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D553.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k322, env)}),
      VGetArg(upenv, 14-1, 0),
      VEncodeChar('_'));
}
 }
}
static void _V0loop_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.319 0 0) ((bruijn ##k.308 11 0) (##string ##string.552)) ((bruijn eqv? 25 5) (close _V0loop_k321) (bruijn ##x.1 13 0) (quote #\^)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k321, env)}),
      VGetArg(upenv, 13-1, 0),
      VEncodeChar('^'));
}
 }
}
static void _V0loop_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.318 0 0) ((bruijn ##k.308 10 0) (##string ##string.551)) ((bruijn eqv? 24 5) (close _V0loop_k320) (bruijn ##x.1 12 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D551.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k320, env)}),
      VGetArg(upenv, 12-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0loop_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.317 0 0) ((bruijn ##k.308 9 0) (##string ##string.550)) ((bruijn eqv? 23 5) (close _V0loop_k319) (bruijn ##x.1 11 0) (quote #\>)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D550.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k319, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('>'));
}
 }
}
static void _V0loop_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.316 0 0) ((bruijn ##k.308 8 0) (##string ##string.549)) ((bruijn eqv? 22 5) (close _V0loop_k318) (bruijn ##x.1 10 0) (quote #\=)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D549.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k318, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('='));
}
 }
}
static void _V0loop_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.315 0 0) ((bruijn ##k.308 7 0) (##string ##string.548)) ((bruijn eqv? 21 5) (close _V0loop_k317) (bruijn ##x.1 9 0) (quote #\<)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D548.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k317, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('<'));
}
 }
}
static void _V0loop_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.314 0 0) ((bruijn ##k.308 6 0) (##string ##string.547)) ((bruijn eqv? 20 5) (close _V0loop_k316) (bruijn ##x.1 8 0) (quote #\:)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D547.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k316, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar(':'));
}
 }
}
static void _V0loop_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.313 0 0) ((bruijn ##k.308 5 0) (##string ##string.546)) ((bruijn eqv? 19 5) (close _V0loop_k315) (bruijn ##x.1 7 0) (quote #\/)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D546.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k315, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('/'));
}
 }
}
static void _V0loop_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.312 0 0) ((bruijn ##k.308 4 0) (##string ##string.545)) ((bruijn eqv? 18 5) (close _V0loop_k314) (bruijn ##x.1 6 0) (quote #\*)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D545.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k314, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('*'));
}
 }
}
static void _V0loop_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 0 0) ((bruijn ##k.308 3 0) (##string ##string.544)) ((bruijn eqv? 17 5) (close _V0loop_k313) (bruijn ##x.1 5 0) (quote #\&)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D544.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k313, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('&'));
}
 }
}
static void _V0loop_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.310 0 0) ((bruijn ##k.308 2 0) (##string ##string.543)) ((bruijn eqv? 16 5) (close _V0loop_k312) (bruijn ##x.1 4 0) (quote #\%)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D543.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k312, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('%'));
}
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.309 0 0) ((bruijn ##k.308 1 0) (##string ##string.542)) ((bruijn eqv? 15 5) (close _V0loop_k311) (bruijn ##x.1 3 0) (quote #\$)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k311, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('$'));
}
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.307 1 0) ((bruijn ##k.308 0 0) (##string ##string.541)) ((bruijn eqv? 14 5) (close _V0loop_k310) (bruijn ##x.1 2 0) (quote #\!)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D541.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      upenv->up->vars[0],
      VEncodeChar('!'));
}
 }
}
static void _V0loop_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k330, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.301 6 0) (bruijn ##x.305 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 15 23) (close _V0loop_k330) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 15-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k330, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0loop_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 14 24) (close _V0loop_k329) (bruijn ##x.306 0 0) (bruijn port 9 0))
V_CALL(VGetArg(upenv, 14-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k329, env)}),
      _var0,
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k309) (close _V0loop_k328))
V_CALL_FUNC(_V0loop_k309, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k328, env)}));
 }
}
static void _V0loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 5) (close _V0loop_k308) (bruijn ##x.1 0 0) (quote #\#))
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k308, env)}),
      _var0,
      VEncodeChar('#'));
 }
}
static void _V0loop_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.302 0 0) ((bruijn get-output-string 11 29) (close _V0loop_k305) (bruijn port 6 0)) ((bruijn string-ref 11 25) (close _V0loop_k307) (bruijn str 8 0) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k305, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k307, env)}),
      VGetArg(upenv, 8-1, 0),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 10 26) (close _V0loop_k304) (bruijn i 0 1) (bruijn strlen 6 0))
V_CALL(VGetArg(upenv, 10-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k304, env)}),
      _var1,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0mangle__symbol_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0mangle__symbol_k303) (bruijn loop 0 1) (close _V0loop_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k303, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda20, env)})
    );
 }
}
static void _V0mangle__symbol_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda19) (bruijn ##k.297 6 0) #f)
V_CALL_FUNC(_V0mangle__symbol_lambda19, env, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(false));
 }
}
static void _V0mangle__symbol_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_k301) (close _V0mangle__symbol_k302))
V_CALL_FUNC(_V0mangle__symbol_k301, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k302, env)}));
 }
}
static void _V0mangle__symbol_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 6 22) (close _V0mangle__symbol_k300) (bruijn ##x.329 0 0) #\#)
V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k300, env)}),
      _var0,
      VEncodeChar('#'));
 }
}
static void _V0mangle__symbol_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 5 25) (close _V0mangle__symbol_k299) (bruijn str 2 0) 0)
V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k299, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0mangle__symbol_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn open-output-string 4 30) (close _V0mangle__symbol_k298))
V_CALL(upenv->up->up->up->vars[30], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k298, env)}));
 }
}
static void _V0mangle__symbol_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 3 31) (close _V0mangle__symbol_k297) (bruijn str 0 0))
V_CALL(upenv->up->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k297, env)}),
      _var0);
 }
}
static void _V0mangle__symbol_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__symbol_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__symbol_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol->string 2 19) (close _V0mangle__symbol_k296) (bruijn sym 0 1))
V_CALL(upenv->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_k296, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda3, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 7; env->var_len = 7; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // (set! (close _V0vanity_V0compiler_V0variables_V20_k35) (bruijn mangle-symbol 0 1) (close _V0mangle__symbol_lambda18))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k35, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__symbol_lambda18, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda2, runtime, upenv, 32, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31) {
  struct { VEnv env; VWORD argv[32]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 32; env->var_len = 32; env->up = upenv;
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
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda3) (bruijn ##k.6 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda2) (bruijn ##k.5 34 0) (bruijn ##x.330 30 0) (bruijn ##x.331 29 0) (bruijn ##x.332 28 0) (bruijn ##x.333 27 0) (bruijn ##x.334 26 0) (bruijn ##x.335 25 0) (bruijn ##x.336 24 0) (bruijn ##x.337 23 0) (bruijn ##x.338 22 0) (bruijn ##x.339 21 0) (bruijn ##x.340 20 0) (bruijn ##x.341 19 0) (bruijn ##x.342 18 0) (bruijn ##x.343 17 0) (bruijn ##x.344 16 0) (bruijn ##x.345 15 0) (bruijn ##x.346 14 0) (bruijn ##x.347 13 0) (bruijn ##x.348 12 0) (bruijn ##x.349 11 0) (bruijn ##x.350 10 0) (bruijn ##x.351 9 0) (bruijn ##x.352 8 0) (bruijn ##x.353 7 0) (bruijn ##x.354 6 0) (bruijn ##x.355 5 0) (bruijn ##x.356 4 0) (bruijn ##x.357 3 0) (bruijn ##x.358 2 0) (bruijn ##x.359 1 0) (bruijn ##x.360 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda2, env, runtime,
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0variables_V20_k34) (quote string-length))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k34, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0variables_V20_k33) (quote open-output-string))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k33, env)}),
      _V0open__output__string);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0variables_V20_k32) (quote get-output-string))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k32, env)}),
      _V0get__output__string);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0variables_V20_k31) (quote string->symbol))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k31, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0variables_V20_k30) (quote close-port))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k30, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0variables_V20_k29) (quote =))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k29, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0variables_V20_k28) (quote string-ref))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k28, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0variables_V20_k27) (quote display))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k27, env)}),
      _V0display);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0variables_V20_k26) (quote +))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k26, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0variables_V20_k25) (quote eq?))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k25, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0variables_V20_k24) (quote compiler-error))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k24, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0variables_V20_k23) (quote string-append))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k23, env)}),
      _V0string__append);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0variables_V20_k22) (quote symbol->string))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k22, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0variables_V20_k21) (quote reverse))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k21, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0variables_V20_k20) (quote string?))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k20, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0variables_V20_k19) (quote list))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k19, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0variables_V20_k18) (quote symbol?))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k18, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0variables_V20_k17) (quote atom?))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k17, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0variables_V20_k16) (quote cadddr))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k16, env)}),
      _V0cadddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0variables_V20_k15) (quote caddr))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k15, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0variables_V20_k14) (quote memv))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k14, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0variables_V20_k13) (quote cddr))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k13, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0variables_V20_k12) (quote cadr))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k12, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0variables_V20_k11) (quote null?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k11, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0variables_V20_k10) (quote cdar))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k10, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0variables_V20_k9) (quote caar))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k9, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0variables_V20_k8) (quote eqv?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k8, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0variables_V20_k7) (quote car))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k7, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0variables_V20_k6) (quote cdr))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k6, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0variables_V20_k5) (quote pair?))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k5, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0variables_V20_k4) (quote cons))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k4, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0variables_V20_k3) (##string ##string.560) (bruijn ##x.361 1 0) (bruijn ##x.362 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k3, env)}),
      VEncodePointer(&_V10string_D560.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k2) (##string ##string.561))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k2, env)}),
      VEncodePointer(&_V10string_D561.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k1) (##string ##string.562))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k1, env)}),
      VEncodePointer(&_V10string_D562.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_lambda1;
