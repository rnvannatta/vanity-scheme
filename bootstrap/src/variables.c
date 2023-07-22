/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D529 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[10]; } _V10string_D528 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[7]; } _V0cadddr = { { VSYMBOL, 7 }, "cadddr" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[14]; } _V0string__append = { { VSYMBOL, 14 }, "string-append" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[4]; } _V10string_D527 = { { VSTRING, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10string_D526 = { { VSTRING, 5 }, "_V10" };
static struct { VBlob sym; char bytes[3]; } _V10string_D525 = { { VSTRING, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10string_D524 = { { VSTRING, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10string_D523 = { { VSTRING, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10string_D522 = { { VSTRING, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10string_D521 = { { VSTRING, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10string_D520 = { { VSTRING, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10string_D519 = { { VSTRING, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10string_D518 = { { VSTRING, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10string_D517 = { { VSTRING, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10string_D516 = { { VSTRING, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10string_D515 = { { VSTRING, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10string_D514 = { { VSTRING, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10string_D513 = { { VSTRING, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10string_D512 = { { VSTRING, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10string_D511 = { { VSTRING, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10string_D510 = { { VSTRING, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10string_D509 = { { VSTRING, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10string_D508 = { { VSTRING, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10string_D507 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[81]; } _V10string_D506 = { { VSTRING, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[28]; } _V10string_D505 = { { VSTRING, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[5]; } _V10string_D504 = { { VSTRING, 5 }, "_V20" };
static struct { VBlob sym; char bytes[11]; } _V10string_D503 = { { VSTRING, 11 }, "VInlineCdr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D502 = { { VSTRING, 11 }, "VInlineCar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D501 = { { VSTRING, 12 }, "VInlineCons" };
static struct { VBlob sym; char bytes[10]; } _V10string_D500 = { { VSTRING, 10 }, "VInlineEq" };
static struct { VBlob sym; char bytes[11]; } _V10string_D499 = { { VSTRING, 11 }, "VInlineNot" };
static struct { VBlob sym; char bytes[13]; } _V10string_D498 = { { VSTRING, 13 }, "VInlinePairP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D497 = { { VSTRING, 13 }, "VInlineNullP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D496 = { { VSTRING, 13 }, "VCommandLine" };
static struct { VBlob sym; char bytes[19]; } _V10string_D495 = { { VSTRING, 19 }, "VMakeTemporaryFile" };
static struct { VBlob sym; char bytes[19]; } _V10string_D494 = { { VSTRING, 19 }, "VOpenOutputProcess" };
static struct { VBlob sym; char bytes[18]; } _V10string_D493 = { { VSTRING, 18 }, "VOpenInputProcess" };
static struct { VBlob sym; char bytes[8]; } _V10string_D492 = { { VSTRING, 8 }, "VSystem" };
static struct { VBlob sym; char bytes[9]; } _V10string_D491 = { { VSTRING, 9 }, "VNewline" };
static struct { VBlob sym; char bytes[7]; } _V10string_D490 = { { VSTRING, 7 }, "VWrite" };
static struct { VBlob sym; char bytes[9]; } _V10string_D489 = { { VSTRING, 9 }, "VDisplay" };
static struct { VBlob sym; char bytes[6]; } _V10string_D488 = { { VSTRING, 6 }, "VRead" };
static struct { VBlob sym; char bytes[10]; } _V10string_D487 = { { VSTRING, 10 }, "VReadLine" };
static struct { VBlob sym; char bytes[10]; } _V10string_D486 = { { VSTRING, 10 }, "VReadChar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D485 = { { VSTRING, 6 }, "VEofP" };
static struct { VBlob sym; char bytes[17]; } _V10string_D484 = { { VSTRING, 17 }, "VGetOutputString" };
static struct { VBlob sym; char bytes[18]; } _V10string_D483 = { { VSTRING, 18 }, "VOpenOutputString" };
static struct { VBlob sym; char bytes[13]; } _V10string_D482 = { { VSTRING, 13 }, "VCloseStream" };
static struct { VBlob sym; char bytes[18]; } _V10string_D481 = { { VSTRING, 18 }, "VOpenOutputStream" };
static struct { VBlob sym; char bytes[17]; } _V10string_D480 = { { VSTRING, 17 }, "VOpenInputStream" };
static struct { VBlob sym; char bytes[11]; } _V10string_D479 = { { VSTRING, 11 }, "VDupStderr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D478 = { { VSTRING, 11 }, "VDupStdout" };
static struct { VBlob sym; char bytes[10]; } _V10string_D477 = { { VSTRING, 10 }, "VDupStdin" };
static struct { VBlob sym; char bytes[9]; } _V10string_D476 = { { VSTRING, 9 }, "VCharInt" };
static struct { VBlob sym; char bytes[14]; } _V10string_D475 = { { VSTRING, 14 }, "VSymbolString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D474 = { { VSTRING, 14 }, "VStringNumber" };
static struct { VBlob sym; char bytes[14]; } _V10string_D473 = { { VSTRING, 14 }, "VStringSymbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D472 = { { VSTRING, 14 }, "VStringLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D471 = { { VSTRING, 11 }, "VStringSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D470 = { { VSTRING, 11 }, "VStringRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D469 = { { VSTRING, 12 }, "VStringCopy" };
static struct { VBlob sym; char bytes[11]; } _V10string_D468 = { { VSTRING, 11 }, "VSubstring" };
static struct { VBlob sym; char bytes[12]; } _V10string_D467 = { { VSTRING, 12 }, "VMakeString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D466 = { { VSTRING, 14 }, "VVectorLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D465 = { { VSTRING, 11 }, "VVectorSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D464 = { { VSTRING, 11 }, "VVectorRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D463 = { { VSTRING, 12 }, "VListVector" };
static struct { VBlob sym; char bytes[8]; } _V10string_D462 = { { VSTRING, 8 }, "VSetCdr" };
static struct { VBlob sym; char bytes[8]; } _V10string_D461 = { { VSTRING, 8 }, "VSetCar" };
static struct { VBlob sym; char bytes[5]; } _V10string_D460 = { { VSTRING, 5 }, "VCdr" };
static struct { VBlob sym; char bytes[5]; } _V10string_D459 = { { VSTRING, 5 }, "VCar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D458 = { { VSTRING, 6 }, "VCons" };
static struct { VBlob sym; char bytes[13]; } _V10string_D457 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[12]; } _V10string_D456 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[15]; } _V10string_D455 = { { VSTRING, 15 }, "VLookupLibrary" };
static struct { VBlob sym; char bytes[13]; } _V10string_D454 = { { VSTRING, 13 }, "VMultiDefine" };
static struct { VBlob sym; char bytes[17]; } _V10string_D453 = { { VSTRING, 17 }, "VDefineGlobalVar" };
static struct { VBlob sym; char bytes[10]; } _V10string_D452 = { { VSTRING, 10 }, "VFunction" };
static struct { VBlob sym; char bytes[8]; } _V10string_D451 = { { VSTRING, 8 }, "VImport" };
static struct { VBlob sym; char bytes[6]; } _V10string_D450 = { { VSTRING, 6 }, "VExit" };
static struct { VBlob sym; char bytes[7]; } _V10string_D449 = { { VSTRING, 7 }, "VAbort" };
static struct { VBlob sym; char bytes[7]; } _V10string_D448 = { { VSTRING, 7 }, "VApply" };
static struct { VBlob sym; char bytes[12]; } _V10string_D447 = { { VSTRING, 12 }, "VCallValues" };
static struct { VBlob sym; char bytes[8]; } _V10string_D446 = { { VSTRING, 8 }, "VCallCC" };
static struct { VBlob sym; char bytes[6]; } _V10string_D445 = { { VSTRING, 6 }, "VNext" };
static struct { VBlob sym; char bytes[5]; } _V10string_D444 = { { VSTRING, 5 }, "VNot" };
static struct { VBlob sym; char bytes[9]; } _V10string_D443 = { { VSTRING, 9 }, "VBlobEqv" };
static struct { VBlob sym; char bytes[11]; } _V10string_D442 = { { VSTRING, 11 }, "VSymbolEqv" };
static struct { VBlob sym; char bytes[4]; } _V10string_D441 = { { VSTRING, 4 }, "VEq" };
static struct { VBlob sym; char bytes[7]; } _V10string_D440 = { { VSTRING, 7 }, "VCharP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D439 = { { VSTRING, 9 }, "VDoubleP" };
static struct { VBlob sym; char bytes[6]; } _V10string_D438 = { { VSTRING, 6 }, "VIntP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D437 = { { VSTRING, 9 }, "VStringP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D436 = { { VSTRING, 9 }, "VSymbolP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D435 = { { VSTRING, 7 }, "VBlobP" };
static struct { VBlob sym; char bytes[12]; } _V10string_D434 = { { VSTRING, 12 }, "VProcedureP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D433 = { { VSTRING, 9 }, "VVectorP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D432 = { { VSTRING, 7 }, "VPairP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D431 = { { VSTRING, 7 }, "VNullP" };
static struct { VBlob sym; char bytes[5]; } _V10string_D430 = { { VSTRING, 5 }, "VRem" };
static struct { VBlob sym; char bytes[6]; } _V10string_D429 = { { VSTRING, 6 }, "VQuot" };
static struct { VBlob sym; char bytes[5]; } _V10string_D428 = { { VSTRING, 5 }, "VCmp" };
static struct { VBlob sym; char bytes[5]; } _V10string_D427 = { { VSTRING, 5 }, "VDiv" };
static struct { VBlob sym; char bytes[5]; } _V10string_D426 = { { VSTRING, 5 }, "VMul" };
static struct { VBlob sym; char bytes[5]; } _V10string_D425 = { { VSTRING, 5 }, "VSub" };
static struct { VBlob sym; char bytes[5]; } _V10string_D424 = { { VSTRING, 5 }, "VAdd" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_P = { { VSYMBOL, 8 }, "##sys.+" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D__ = { { VSYMBOL, 8 }, "##sys.-" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_S = { { VSYMBOL, 8 }, "##sys.*" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_W = { { VSYMBOL, 8 }, "##sys./" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcmp = { { VSYMBOL, 10 }, "##sys.cmp" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dquotient = { { VSYMBOL, 15 }, "##sys.quotient" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dremainder = { { VSYMBOL, 16 }, "##sys.remainder" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dvector_Q = { { VSYMBOL, 14 }, "##sys.vector\?" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dprocedure_Q = { { VSYMBOL, 17 }, "##sys.procedure\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dblob_Q = { { VSYMBOL, 12 }, "##sys.blob\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dsymbol_Q = { { VSYMBOL, 14 }, "##sys.symbol\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dstring_Q = { { VSYMBOL, 14 }, "##sys.string\?" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dint_Q = { { VSYMBOL, 11 }, "##sys.int\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Ddouble_Q = { { VSYMBOL, 14 }, "##sys.double\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dchar_Q = { { VSYMBOL, 12 }, "##sys.char\?" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dsymbol_E_Q = { { VSYMBOL, 15 }, "##sys.symbol=\?" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dblob_E_Q = { { VSYMBOL, 13 }, "##sys.blob=\?" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dif = { { VSYMBOL, 9 }, "##sys.if" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dbegin = { { VSYMBOL, 12 }, "##sys.begin" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dand = { { VSYMBOL, 10 }, "##sys.and" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dor = { { VSYMBOL, 9 }, "##sys.or" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dnot = { { VSYMBOL, 10 }, "##sys.not" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dcall_Wcc = { { VSYMBOL, 14 }, "##sys.call/cc" };
static struct { VBlob sym; char bytes[23]; } _V10sys_Dcall__with__values = { { VSYMBOL, 23 }, "##sys.call-with-values" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dapply = { { VSYMBOL, 12 }, "##sys.apply" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dabort = { { VSYMBOL, 12 }, "##sys.abort" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dexit = { { VSYMBOL, 11 }, "##sys.exit" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dimport = { { VSYMBOL, 13 }, "##sys.import" };
static struct { VBlob sym; char bytes[17]; } _V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[15]; } _V10vcore_Ddefine = { { VSYMBOL, 15 }, "##vcore.define" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
static struct { VBlob sym; char bytes[23]; } _V10vcore_Dlookup__library = { { VSYMBOL, 23 }, "##vcore.lookup-library" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmake__import = { { VSYMBOL, 20 }, "##vcore.make-import" };
static struct { VBlob sym; char bytes[21]; } _V10vcore_Dload__library = { { VSYMBOL, 21 }, "##vcore.load-library" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dset__car_B = { { VSYMBOL, 15 }, "##sys.set-car!" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dset__cdr_B = { { VSYMBOL, 15 }, "##sys.set-cdr!" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dlist___Gvector = { { VSYMBOL, 19 }, "##sys.list->vector" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dvector__ref = { { VSYMBOL, 17 }, "##sys.vector-ref" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dvector__set_B = { { VSYMBOL, 18 }, "##sys.vector-set!" };
static struct { VBlob sym; char bytes[20]; } _V10sys_Dvector__length = { { VSYMBOL, 20 }, "##sys.vector-length" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dmake__string = { { VSYMBOL, 18 }, "##sys.make-string" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dsubstring = { { VSYMBOL, 16 }, "##sys.substring" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dstring__copy_B = { { VSYMBOL, 19 }, "##sys.string-copy!" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dstring__ref = { { VSYMBOL, 17 }, "##sys.string-ref" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dstring__set_B = { { VSYMBOL, 18 }, "##sys.string-set!" };
static struct { VBlob sym; char bytes[20]; } _V10sys_Dstring__length = { { VSYMBOL, 20 }, "##sys.string-length" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dstring___Gsymbol = { { VSYMBOL, 21 }, "##sys.string->symbol" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dstring___Gnumber = { { VSYMBOL, 21 }, "##sys.string->number" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dsymbol___Gstring = { { VSYMBOL, 21 }, "##sys.symbol->string" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dchar__integer = { { VSYMBOL, 19 }, "##sys.char-integer" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Ddup__stdin = { { VSYMBOL, 16 }, "##sys.dup-stdin" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Ddup__stdout = { { VSYMBOL, 17 }, "##sys.dup-stdout" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Ddup__stderr = { { VSYMBOL, 17 }, "##sys.dup-stderr" };
static struct { VBlob sym; char bytes[24]; } _V10sys_Dopen__input__stream = { { VSYMBOL, 24 }, "##sys.open-input-stream" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__output__stream = { { VSYMBOL, 25 }, "##sys.open-output-stream" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dclose__stream = { { VSYMBOL, 19 }, "##sys.close-stream" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__output__string = { { VSYMBOL, 25 }, "##sys.open-output-string" };
static struct { VBlob sym; char bytes[24]; } _V10sys_Dget__output__string = { { VSYMBOL, 24 }, "##sys.get-output-string" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Deof__object_Q = { { VSYMBOL, 18 }, "##sys.eof-object\?" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dread__char = { { VSYMBOL, 16 }, "##sys.read-char" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dread__line = { { VSYMBOL, 16 }, "##sys.read-line" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dread = { { VSYMBOL, 11 }, "##sys.read" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Ddisplay__word = { { VSYMBOL, 19 }, "##sys.display-word" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dwrite = { { VSYMBOL, 12 }, "##sys.write" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dnewline = { { VSYMBOL, 14 }, "##sys.newline" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dsystem = { { VSYMBOL, 13 }, "##sys.system" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__input__process = { { VSYMBOL, 25 }, "##sys.open-input-process" };
static struct { VBlob sym; char bytes[26]; } _V10sys_Dopen__output__process = { { VSYMBOL, 26 }, "##sys.open-output-process" };
static struct { VBlob sym; char bytes[26]; } _V10sys_Dmake__temporary__file = { { VSYMBOL, 26 }, "##sys.make-temporary-file" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dcommand__line = { { VSYMBOL, 19 }, "##sys.command-line" };
static struct { VBlob sym; char bytes[14]; } _V10string_D423 = { { VSTRING, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D422 = { { VSTRING, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D421 = { { VSTRING, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D420 = { { VSTRING, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D419 = { { VSTRING, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D418 = { { VSTRING, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D417 = { { VSTRING, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D416 = { { VSTRING, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D415 = { { VSTRING, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D414 = { { VSTRING, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D413 = { { VSTRING, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D412 = { { VSTRING, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D411 = { { VSTRING, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D410 = { { VSTRING, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D409 = { { VSTRING, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D408 = { { VSTRING, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D407 = { { VSTRING, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D406 = { { VSTRING, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D405 = { { VSTRING, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D404 = { { VSTRING, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D403 = { { VSTRING, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D402 = { { VSTRING, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D401 = { { VSTRING, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D400 = { { VSTRING, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D399 = { { VSTRING, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D398 = { { VSTRING, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D397 = { { VSTRING, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D396 = { { VSTRING, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D395 = { { VSTRING, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D394 = { { VSTRING, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D393 = { { VSTRING, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D392 = { { VSTRING, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D391 = { { VSTRING, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D390 = { { VSTRING, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D389 = { { VSTRING, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D388 = { { VSTRING, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D387 = { { VSTRING, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D386 = { { VSTRING, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D385 = { { VSTRING, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D384 = { { VSTRING, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D383 = { { VSTRING, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10string_D382 = { { VSTRING, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D381 = { { VSTRING, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D380 = { { VSTRING, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D379 = { { VSTRING, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D378 = { { VSTRING, 9 }, "VImport2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D377 = { { VSTRING, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D376 = { { VSTRING, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D375 = { { VSTRING, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D374 = { { VSTRING, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D373 = { { VSTRING, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D372 = { { VSTRING, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D371 = { { VSTRING, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D370 = { { VSTRING, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D369 = { { VSTRING, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10string_D368 = { { VSTRING, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D367 = { { VSTRING, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D366 = { { VSTRING, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D365 = { { VSTRING, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D364 = { { VSTRING, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D363 = { { VSTRING, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D362 = { { VSTRING, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D361 = { { VSTRING, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D360 = { { VSTRING, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D359 = { { VSTRING, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D358 = { { VSTRING, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D357 = { { VSTRING, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D356 = { { VSTRING, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D355 = { { VSTRING, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D354 = { { VSTRING, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D353 = { { VSTRING, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D352 = { { VSTRING, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D351 = { { VSTRING, 6 }, "VAdd2" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[4]; } _V0and = { { VSYMBOL, 4 }, "and" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[15]; } _V0free__variables = { { VSYMBOL, 15 }, "free-variables" };
static struct { VBlob sym; char bytes[18]; } _V0lookup__intrinsic2 = { { VSYMBOL, 18 }, "lookup-intrinsic2" };
static struct { VBlob sym; char bytes[17]; } _V0lookup__intrinsic = { { VSYMBOL, 17 }, "lookup-intrinsic" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[15]; } _V0mangle__library = { { VSYMBOL, 15 }, "mangle-library" };
static struct { VBlob sym; char bytes[14]; } _V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static void variables_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.8 6 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-symbol) (bruijn mangle-symbol 6 1)) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-library) (bruijn mangle-library 6 2)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-inline) (bruijn lookup-inline 6 3)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-intrinsic) (bruijn lookup-intrinsic 6 4)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-intrinsic2) (bruijn lookup-intrinsic2 6 5)) (##inline ##sys.cons (##inline ##sys.cons (quote free-variables) (bruijn free-variables 6 6)) (quote ()))))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__symbol.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__library.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lookup__intrinsic.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lookup__intrinsic2.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0free__variables.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 6)
    )
,
      VNULL
    )

    )

    )

    )

    )

    )

    );
 }
}
static void _V0free__variables_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.30 1 0) (quote ()) (bruijn expr 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VNULL,
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.34 0 0) ((bruijn ##k.32 4 0) (quote ())) ((bruijn list 16 16) (bruijn ##k.32 4 0) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 16)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[2]
    );
}
 }
}
static void _V0loop_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) (if (bruijn ##p.36 0 0) ((bruijn ##k.32 3 0) (quote ())) ((bruijn list 15 16) (bruijn ##k.32 3 0) (bruijn expr 3 2))) ((bruijn lookup-intrinsic2 14 5) (close _V0loop_k48) (bruijn expr 3 2)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 16)), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k48, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.35 0 0) (if (bruijn ##p.35 0 0) ((bruijn ##k.32 2 0) (quote ())) ((bruijn list 14 16) (bruijn ##k.32 2 0) (bruijn expr 2 2))) ((bruijn lookup-intrinsic 13 4) (close _V0loop_k47) (bruijn expr 2 2)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 16)), runtime,
      upenv->up->vars[0],
      upenv->up->vars[2]
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k47, env)}),
      upenv->up->vars[2]
    );
}
 }
}
static void _V0loop_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 17 1) (bruijn ##k.32 13 0) (bruijn ##x.40 2 0) (bruijn ##x.41 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 13 1) (close _V0loop_k60) (bruijn bound 12 1) (bruijn ##x.42 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k60, env)}),
      VGetArg(upenv, 12-1, 1),
      _var0
    );
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadddr 23 13) (close _V0loop_k59) (bruijn expr 11 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k59, env)}),
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0loop_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn merge 14 1) (close _V0loop_k58) (bruijn ##x.43 2 0) (bruijn ##x.44 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k58, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k57) (bruijn bound 9 1) (bruijn ##x.45 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k57, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0
    );
 }
}
static void _V0loop_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caddr 20 12) (close _V0loop_k56) (bruijn expr 8 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k56, env)}),
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0loop_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 8 1) (close _V0loop_k55) (bruijn bound 7 1) (bruijn ##x.46 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k55, env)}),
      VGetArg(upenv, 7-1, 1),
      _var0
    );
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 16 1) (bruijn ##k.32 12 0) (bruijn ##x.48 2 0) (bruijn ##x.49 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 12 1) (close _V0loop_k66) (bruijn bound 11 1) (bruijn ##x.50 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k66, env)}),
      VGetArg(upenv, 11-1, 1),
      _var0
    );
 }
}
static void _V0loop_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caddr 22 12) (close _V0loop_k65) (bruijn expr 10 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k65, env)}),
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0loop_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k64) (bruijn bound 9 1) (bruijn ##x.51 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k64, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0
    );
 }
}
static void _V0loop_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 1) (bruijn ##k.32 13 0) (bruijn ##x.53 1 0) (bruijn ##x.54 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 24 10) (close _V0loop_k71) (bruijn expr 12 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k71, env)}),
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 15 2) (close _V0loop_k70) (bruijn ##x.55 0 0) (bruijn bound 11 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k70, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0loop_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop2 2 1) (bruijn ##k.57 2 0) (bruijn ##x.59 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 26 3) (close _V0loop_k75) (bruijn expr 14 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k75, env)}),
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0loop2_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 25 1) (bruijn ##k.60 7 0) (bruijn ##x.62 2 0) (bruijn ##x.63 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop2_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop2 7 1) (close _V0loop2_k82) (bruijn ##x.64 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k82, env)}),
      _var0
    );
 }
}
static void _V0loop2_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 31 3) (close _V0loop2_k81) (bruijn cases 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k81, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop2_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 19 1) (close _V0loop2_k80) (bruijn ##x.65 1 0) (bruijn ##x.66 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k80, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop2_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 29 7) (close _V0loop2_k79) (bruijn cases 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k79, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop2_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 20 2) (close _V0loop2_k78) (bruijn ##x.67 0 0) (bruijn bound 16 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k78, env)}),
      _var0,
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0loop2_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop2_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop2_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.61 0 0) ((bruijn ##k.60 1 0) (quote ())) ((bruijn caar 27 6) (close _V0loop2_k77) (bruijn cases 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k77, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop2_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop2_lambda10" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop2_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop2_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 26 8) (close _V0loop2_k76) (bruijn cases 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_k76, env)}),
      _var1
    );
 }
}
static void _V0loop_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0loop_k74) (bruijn loop2 0 1) (close _V0loop2_lambda10))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k74, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop2_lambda10, env)})
    );
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 16 1) (bruijn ##k.32 15 0) (bruijn bound 15 1) (bruijn ##x.69 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 15-1, 1),
      _var0
    );
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 22 1) (bruijn ##k.32 18 0) (bruijn ##x.70 2 0) (bruijn ##x.71 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VGetArg(upenv, 18-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 18 1) (close _V0loop_k89) (bruijn bound 17 1) (bruijn ##x.72 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k89, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0
    );
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 28 3) (close _V0loop_k88) (bruijn expr 16 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k88, env)}),
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 16 1) (close _V0loop_k87) (bruijn bound 15 1) (bruijn ##x.73 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k87, env)}),
      VGetArg(upenv, 15-1, 1),
      _var0
    );
 }
}
static void _V0loop_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.68 0 0) ((bruijn cdr 26 3) (close _V0loop_k85) (bruijn expr 14 2)) ((bruijn car 26 4) (close _V0loop_k86) (bruijn expr 14 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k85, env)}),
      VGetArg(upenv, 14-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k86, env)}),
      VGetArg(upenv, 14-1, 2)
    );
}
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 25 5) (close _V0loop_k84) (bruijn ##x.74 0 0) (quote set!))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k84, env)}),
      _var0,
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.56 0 0) ((close _V0loop_lambda9) (bruijn ##k.32 12 0) #f) ((bruijn car 24 4) (close _V0loop_k83) (bruijn expr 12 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda9, env)}, runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k83, env)}),
      VGetArg(upenv, 12-1, 2)
    );
}
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 23 5) (close _V0loop_k73) (bruijn ##x.75 0 0) (quote case-lambda))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k73, env)}),
      _var0,
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.52 0 0) ((bruijn cadr 22 9) (close _V0loop_k69) (bruijn expr 10 2)) ((bruijn car 22 4) (close _V0loop_k72) (bruijn expr 10 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k69, env)}),
      VGetArg(upenv, 10-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k72, env)}),
      VGetArg(upenv, 10-1, 2)
    );
}
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 21 5) (close _V0loop_k68) (bruijn ##x.76 0 0) (quote lambda))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k68, env)}),
      _var0,
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.47 0 0) ((bruijn cadr 20 9) (close _V0loop_k63) (bruijn expr 8 2)) ((bruijn car 20 4) (close _V0loop_k67) (bruijn expr 8 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k63, env)}),
      VGetArg(upenv, 8-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k67, env)}),
      VGetArg(upenv, 8-1, 2)
    );
}
 }
}
static void _V0loop_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 19 11) (close _V0loop_k62) (bruijn ##x.77 0 0) (##inline ##sys.qcons (quote begin) (##inline ##sys.qcons (quote and) (##inline ##sys.qcons (quote or) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k62, env)}),
      _var0,
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    );
 }
}
static void _V0loop_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.39 0 0) ((bruijn cadr 18 9) (close _V0loop_k54) (bruijn expr 6 2)) ((bruijn car 18 4) (close _V0loop_k61) (bruijn expr 6 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k54, env)}),
      VGetArg(upenv, 6-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k61, env)}),
      VGetArg(upenv, 6-1, 2)
    );
}
 }
}
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 17 5) (close _V0loop_k53) (bruijn ##x.81 0 0) (quote if))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k53, env)}),
      _var0,
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.38 0 0) ((bruijn ##k.32 4 0) (quote ())) ((bruijn car 16 4) (close _V0loop_k52) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k52, env)}),
      upenv->up->up->up->vars[2]
    );
}
 }
}
static void _V0loop_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 15 5) (close _V0loop_k51) (bruijn ##x.82 0 0) (quote quote))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k51, env)}),
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) ((bruijn ##k.32 2 0) (quote ())) ((bruijn car 14 4) (close _V0loop_k50) (bruijn expr 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k50, env)}),
      upenv->up->vars[2]
    );
}
 }
}
static void _V0loop_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.33 0 0) ((bruijn memv 13 11) (close _V0loop_k46) (bruijn expr 1 2) (bruijn bound 1 1)) ((bruijn atom? 13 14) (close _V0loop_k49) (bruijn expr 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k46, env)}),
      upenv->vars[2],
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k49, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda8" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn symbol? 12 15) (close _V0loop_k45) (bruijn expr 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k45, env)}),
      _var2
    );
 }
}
static void _V0free__variables_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0free__variables_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0free__variables_k44) (bruijn loop 0 1) (close _V0loop_lambda8))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_k44, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda8, env)})
    );
 }
}
static void _V0free__variables_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0free__variables_lambda7) (bruijn ##k.27 2 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_lambda7, env)}, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0append__improper_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 14 1) (bruijn ##k.83 4 0) (bruijn ##x.85 2 0) (bruijn ##x.86 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0append__improper_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append-improper 5 2) (close _V0append__improper_k93) (bruijn ##x.87 0 0) (bruijn b 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_k93, env)}),
      _var0,
      upenv->up->up->vars[2]
    );
 }
}
static void _V0append__improper_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 3) (close _V0append__improper_k92) (bruijn a 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_k92, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0append__improper_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_k94, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.88 0 0) ((bruijn ##k.83 2 0) (bruijn b 2 2)) ((bruijn cons 12 1) (bruijn ##k.83 2 0) (bruijn a 2 1) (bruijn b 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      upenv->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]
    );
}
 }
}
static void _V0append__improper_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append__improper_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append__improper_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.84 0 0) ((bruijn car 11 4) (close _V0append__improper_k91) (bruijn a 1 1)) ((bruijn null? 11 8) (close _V0append__improper_k94) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_k91, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_k94, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0append__improper_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0append__improper_lambda11" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0append__improper_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0append__improper_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 10 2) (close _V0append__improper_k90) (bruijn a 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_k90, env)}),
      _var1
    );
 }
}
static void _V0free__variables_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0free__variables_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0free__variables_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0free__variables_k43) (bruijn append-improper 1 2) (close _V0append__improper_lambda11))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_k43, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0append__improper_lambda11, env)})
    );
 }
}
static void _V0merge_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 5 1) (bruijn ##k.89 4 0) (bruijn ##x.92 0 0) (bruijn b 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0merge_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 7 1) (bruijn ##k.89 6 0) (bruijn ##x.93 2 0) (bruijn ##x.94 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0merge_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 14 1) (close _V0merge_k101) (bruijn ##x.95 0 0) (bruijn b 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k101, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0merge_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 13 4) (close _V0merge_k100) (bruijn a 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k100, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0merge_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.91 0 0) ((bruijn cdr 12 3) (close _V0merge_k98) (bruijn a 3 1)) ((bruijn cdr 12 3) (close _V0merge_k99) (bruijn a 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k98, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k99, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0merge_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 11 11) (close _V0merge_k97) (bruijn ##x.96 0 0) (bruijn b 2 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k97, env)}),
      _var0,
      upenv->up->vars[2]
    );
 }
}
static void _V0merge_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0merge_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0merge_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.90 0 0) ((bruijn ##k.89 1 0) (bruijn b 1 2)) ((bruijn car 10 4) (close _V0merge_k96) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k96, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0merge_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0merge_lambda12" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0merge_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0merge_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 9 8) (close _V0merge_k95) (bruijn a 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_k95, env)}),
      _var1
    );
 }
}
static void _V0free__variables_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0free__variables_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0free__variables_k42) (bruijn merge 0 1) (close _V0merge_lambda12))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_k42, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0merge_lambda12, env)})
    );
 }
}
static void _V0free__variables_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0free__variables_lambda5" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0free__variables_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0free__variables_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0free__variables_lambda6) (bruijn ##k.26 0 0) #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_lambda6, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void variables_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close variables_k41) (bruijn free-variables 5 6) (close _V0free__variables_lambda5))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k41, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0free__variables_lambda5, env)})
    );
 }
}
static void _V0lookup__intrinsic2_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k178, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.175 0 0) ((bruijn ##k.98 77 0) (##string ##string.423)) ((bruijn ##k.98 77 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__intrinsic2_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) ((bruijn ##k.98 76 0) (##string ##string.422)) ((bruijn eqv? 82 5) (close _V0lookup__intrinsic2_k178) (bruijn ##x.4 76 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 0)), runtime,
      VEncodePointer(&_V10string_D422.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 82-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k178, env)}),
      VGetArg(upenv, 76-1, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((bruijn ##k.98 75 0) (##string ##string.421)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic2_k177) (bruijn ##x.4 75 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 0)), runtime,
      VEncodePointer(&_V10string_D421.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 81-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k177, env)}),
      VGetArg(upenv, 75-1, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.172 0 0) ((bruijn ##k.98 74 0) (##string ##string.420)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic2_k176) (bruijn ##x.4 74 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 0)), runtime,
      VEncodePointer(&_V10string_D420.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 80-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k176, env)}),
      VGetArg(upenv, 74-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.171 0 0) ((bruijn ##k.98 73 0) (##string ##string.419)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic2_k175) (bruijn ##x.4 73 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 0)), runtime,
      VEncodePointer(&_V10string_D419.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 79-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k175, env)}),
      VGetArg(upenv, 73-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.170 0 0) ((bruijn ##k.98 72 0) (##string ##string.418)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic2_k174) (bruijn ##x.4 72 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 0)), runtime,
      VEncodePointer(&_V10string_D418.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k174, env)}),
      VGetArg(upenv, 72-1, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.169 0 0) ((bruijn ##k.98 71 0) (##string ##string.417)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic2_k173) (bruijn ##x.4 71 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 0)), runtime,
      VEncodePointer(&_V10string_D417.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k173, env)}),
      VGetArg(upenv, 71-1, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.168 0 0) ((bruijn ##k.98 70 0) (##string ##string.416)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic2_k172) (bruijn ##x.4 70 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 0)), runtime,
      VEncodePointer(&_V10string_D416.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k172, env)}),
      VGetArg(upenv, 70-1, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.167 0 0) ((bruijn ##k.98 69 0) (##string ##string.415)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic2_k171) (bruijn ##x.4 69 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 0)), runtime,
      VEncodePointer(&_V10string_D415.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k171, env)}),
      VGetArg(upenv, 69-1, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.98 68 0) (##string ##string.414)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic2_k170) (bruijn ##x.4 68 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 0)), runtime,
      VEncodePointer(&_V10string_D414.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k170, env)}),
      VGetArg(upenv, 68-1, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) ((bruijn ##k.98 67 0) (##string ##string.413)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic2_k169) (bruijn ##x.4 67 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 0)), runtime,
      VEncodePointer(&_V10string_D413.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k169, env)}),
      VGetArg(upenv, 67-1, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) ((bruijn ##k.98 66 0) (##string ##string.412)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic2_k168) (bruijn ##x.4 66 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 0)), runtime,
      VEncodePointer(&_V10string_D412.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k168, env)}),
      VGetArg(upenv, 66-1, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) ((bruijn ##k.98 65 0) (##string ##string.411)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic2_k167) (bruijn ##x.4 65 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 0)), runtime,
      VEncodePointer(&_V10string_D411.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k167, env)}),
      VGetArg(upenv, 65-1, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.162 0 0) ((bruijn ##k.98 64 0) (##string ##string.410)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic2_k166) (bruijn ##x.4 64 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 0)), runtime,
      VEncodePointer(&_V10string_D410.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k166, env)}),
      VGetArg(upenv, 64-1, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) ((bruijn ##k.98 63 0) (##string ##string.409)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic2_k165) (bruijn ##x.4 63 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 0)), runtime,
      VEncodePointer(&_V10string_D409.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k165, env)}),
      VGetArg(upenv, 63-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) ((bruijn ##k.98 62 0) (##string ##string.408)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic2_k164) (bruijn ##x.4 62 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 0)), runtime,
      VEncodePointer(&_V10string_D408.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k164, env)}),
      VGetArg(upenv, 62-1, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) ((bruijn ##k.98 61 0) (##string ##string.407)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic2_k163) (bruijn ##x.4 61 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 0)), runtime,
      VEncodePointer(&_V10string_D407.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k163, env)}),
      VGetArg(upenv, 61-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) ((bruijn ##k.98 60 0) (##string ##string.406)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic2_k162) (bruijn ##x.4 60 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 0)), runtime,
      VEncodePointer(&_V10string_D406.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k162, env)}),
      VGetArg(upenv, 60-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) ((bruijn ##k.98 59 0) (##string ##string.405)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic2_k161) (bruijn ##x.4 59 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 0)), runtime,
      VEncodePointer(&_V10string_D405.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k161, env)}),
      VGetArg(upenv, 59-1, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) ((bruijn ##k.98 58 0) (##string ##string.404)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic2_k160) (bruijn ##x.4 58 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 0)), runtime,
      VEncodePointer(&_V10string_D404.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k160, env)}),
      VGetArg(upenv, 58-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn ##k.98 57 0) (##string ##string.403)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic2_k159) (bruijn ##x.4 57 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 0)), runtime,
      VEncodePointer(&_V10string_D403.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k159, env)}),
      VGetArg(upenv, 57-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) ((bruijn ##k.98 56 0) (##string ##string.402)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic2_k158) (bruijn ##x.4 56 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 0)), runtime,
      VEncodePointer(&_V10string_D402.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k158, env)}),
      VGetArg(upenv, 56-1, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) ((bruijn ##k.98 55 0) (##string ##string.401)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic2_k157) (bruijn ##x.4 55 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 0)), runtime,
      VEncodePointer(&_V10string_D401.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k157, env)}),
      VGetArg(upenv, 55-1, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.152 0 0) ((bruijn ##k.98 54 0) (##string ##string.400)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic2_k156) (bruijn ##x.4 54 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 0)), runtime,
      VEncodePointer(&_V10string_D400.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k156, env)}),
      VGetArg(upenv, 54-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.98 53 0) (##string ##string.399)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic2_k155) (bruijn ##x.4 53 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 0)), runtime,
      VEncodePointer(&_V10string_D399.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k155, env)}),
      VGetArg(upenv, 53-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) ((bruijn ##k.98 52 0) (##string ##string.398)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic2_k154) (bruijn ##x.4 52 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 0)), runtime,
      VEncodePointer(&_V10string_D398.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k154, env)}),
      VGetArg(upenv, 52-1, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.98 51 0) (##string ##string.397)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic2_k153) (bruijn ##x.4 51 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 0)), runtime,
      VEncodePointer(&_V10string_D397.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k153, env)}),
      VGetArg(upenv, 51-1, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.98 50 0) (##string ##string.396)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic2_k152) (bruijn ##x.4 50 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 0)), runtime,
      VEncodePointer(&_V10string_D396.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k152, env)}),
      VGetArg(upenv, 50-1, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn ##k.98 49 0) (##string ##string.395)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic2_k151) (bruijn ##x.4 49 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 0)), runtime,
      VEncodePointer(&_V10string_D395.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k151, env)}),
      VGetArg(upenv, 49-1, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.146 0 0) ((bruijn ##k.98 48 0) (##string ##string.394)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic2_k150) (bruijn ##x.4 48 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 0)), runtime,
      VEncodePointer(&_V10string_D394.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k150, env)}),
      VGetArg(upenv, 48-1, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) ((bruijn ##k.98 47 0) (##string ##string.393)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic2_k149) (bruijn ##x.4 47 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 0)), runtime,
      VEncodePointer(&_V10string_D393.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k149, env)}),
      VGetArg(upenv, 47-1, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.144 0 0) ((bruijn ##k.98 46 0) (##string ##string.392)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic2_k148) (bruijn ##x.4 46 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 0)), runtime,
      VEncodePointer(&_V10string_D392.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k148, env)}),
      VGetArg(upenv, 46-1, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.143 0 0) ((bruijn ##k.98 45 0) (##string ##string.391)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic2_k147) (bruijn ##x.4 45 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 0)), runtime,
      VEncodePointer(&_V10string_D391.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k147, env)}),
      VGetArg(upenv, 45-1, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) ((bruijn ##k.98 44 0) (##string ##string.390)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic2_k146) (bruijn ##x.4 44 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 0)), runtime,
      VEncodePointer(&_V10string_D390.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k146, env)}),
      VGetArg(upenv, 44-1, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn ##k.98 43 0) (##string ##string.389)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic2_k145) (bruijn ##x.4 43 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 0)), runtime,
      VEncodePointer(&_V10string_D389.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k145, env)}),
      VGetArg(upenv, 43-1, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 0 0) ((bruijn ##k.98 42 0) (##string ##string.388)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic2_k144) (bruijn ##x.4 42 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 0)), runtime,
      VEncodePointer(&_V10string_D388.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k144, env)}),
      VGetArg(upenv, 42-1, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.139 0 0) ((bruijn ##k.98 41 0) (##string ##string.387)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic2_k143) (bruijn ##x.4 41 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 0)), runtime,
      VEncodePointer(&_V10string_D387.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k143, env)}),
      VGetArg(upenv, 41-1, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.138 0 0) ((bruijn ##k.98 40 0) (##string ##string.386)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic2_k142) (bruijn ##x.4 40 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 0)), runtime,
      VEncodePointer(&_V10string_D386.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k142, env)}),
      VGetArg(upenv, 40-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k217, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.175 0 0) ((bruijn ##k.98 78 0) (##string ##string.423)) ((bruijn ##k.98 78 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 0)), runtime,
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__intrinsic2_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) ((bruijn ##k.98 77 0) (##string ##string.422)) ((bruijn eqv? 83 5) (close _V0lookup__intrinsic2_k217) (bruijn ##x.4 77 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodePointer(&_V10string_D422.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 83-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k217, env)}),
      VGetArg(upenv, 77-1, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((bruijn ##k.98 76 0) (##string ##string.421)) ((bruijn eqv? 82 5) (close _V0lookup__intrinsic2_k216) (bruijn ##x.4 76 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 0)), runtime,
      VEncodePointer(&_V10string_D421.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 82-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k216, env)}),
      VGetArg(upenv, 76-1, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.172 0 0) ((bruijn ##k.98 75 0) (##string ##string.420)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic2_k215) (bruijn ##x.4 75 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 0)), runtime,
      VEncodePointer(&_V10string_D420.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 81-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k215, env)}),
      VGetArg(upenv, 75-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.171 0 0) ((bruijn ##k.98 74 0) (##string ##string.419)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic2_k214) (bruijn ##x.4 74 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 0)), runtime,
      VEncodePointer(&_V10string_D419.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 80-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k214, env)}),
      VGetArg(upenv, 74-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.170 0 0) ((bruijn ##k.98 73 0) (##string ##string.418)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic2_k213) (bruijn ##x.4 73 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 0)), runtime,
      VEncodePointer(&_V10string_D418.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 79-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k213, env)}),
      VGetArg(upenv, 73-1, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.169 0 0) ((bruijn ##k.98 72 0) (##string ##string.417)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic2_k212) (bruijn ##x.4 72 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 0)), runtime,
      VEncodePointer(&_V10string_D417.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k212, env)}),
      VGetArg(upenv, 72-1, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.168 0 0) ((bruijn ##k.98 71 0) (##string ##string.416)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic2_k211) (bruijn ##x.4 71 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 0)), runtime,
      VEncodePointer(&_V10string_D416.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k211, env)}),
      VGetArg(upenv, 71-1, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.167 0 0) ((bruijn ##k.98 70 0) (##string ##string.415)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic2_k210) (bruijn ##x.4 70 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 0)), runtime,
      VEncodePointer(&_V10string_D415.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k210, env)}),
      VGetArg(upenv, 70-1, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.98 69 0) (##string ##string.414)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic2_k209) (bruijn ##x.4 69 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 0)), runtime,
      VEncodePointer(&_V10string_D414.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k209, env)}),
      VGetArg(upenv, 69-1, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) ((bruijn ##k.98 68 0) (##string ##string.413)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic2_k208) (bruijn ##x.4 68 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 0)), runtime,
      VEncodePointer(&_V10string_D413.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k208, env)}),
      VGetArg(upenv, 68-1, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) ((bruijn ##k.98 67 0) (##string ##string.412)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic2_k207) (bruijn ##x.4 67 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 0)), runtime,
      VEncodePointer(&_V10string_D412.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k207, env)}),
      VGetArg(upenv, 67-1, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) ((bruijn ##k.98 66 0) (##string ##string.411)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic2_k206) (bruijn ##x.4 66 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 0)), runtime,
      VEncodePointer(&_V10string_D411.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k206, env)}),
      VGetArg(upenv, 66-1, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.162 0 0) ((bruijn ##k.98 65 0) (##string ##string.410)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic2_k205) (bruijn ##x.4 65 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 0)), runtime,
      VEncodePointer(&_V10string_D410.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k205, env)}),
      VGetArg(upenv, 65-1, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) ((bruijn ##k.98 64 0) (##string ##string.409)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic2_k204) (bruijn ##x.4 64 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 0)), runtime,
      VEncodePointer(&_V10string_D409.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k204, env)}),
      VGetArg(upenv, 64-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) ((bruijn ##k.98 63 0) (##string ##string.408)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic2_k203) (bruijn ##x.4 63 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 0)), runtime,
      VEncodePointer(&_V10string_D408.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k203, env)}),
      VGetArg(upenv, 63-1, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) ((bruijn ##k.98 62 0) (##string ##string.407)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic2_k202) (bruijn ##x.4 62 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 0)), runtime,
      VEncodePointer(&_V10string_D407.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k202, env)}),
      VGetArg(upenv, 62-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) ((bruijn ##k.98 61 0) (##string ##string.406)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic2_k201) (bruijn ##x.4 61 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 0)), runtime,
      VEncodePointer(&_V10string_D406.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k201, env)}),
      VGetArg(upenv, 61-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) ((bruijn ##k.98 60 0) (##string ##string.405)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic2_k200) (bruijn ##x.4 60 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 0)), runtime,
      VEncodePointer(&_V10string_D405.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k200, env)}),
      VGetArg(upenv, 60-1, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) ((bruijn ##k.98 59 0) (##string ##string.404)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic2_k199) (bruijn ##x.4 59 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 0)), runtime,
      VEncodePointer(&_V10string_D404.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k199, env)}),
      VGetArg(upenv, 59-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn ##k.98 58 0) (##string ##string.403)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic2_k198) (bruijn ##x.4 58 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 0)), runtime,
      VEncodePointer(&_V10string_D403.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k198, env)}),
      VGetArg(upenv, 58-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) ((bruijn ##k.98 57 0) (##string ##string.402)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic2_k197) (bruijn ##x.4 57 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 0)), runtime,
      VEncodePointer(&_V10string_D402.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k197, env)}),
      VGetArg(upenv, 57-1, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) ((bruijn ##k.98 56 0) (##string ##string.401)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic2_k196) (bruijn ##x.4 56 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 0)), runtime,
      VEncodePointer(&_V10string_D401.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k196, env)}),
      VGetArg(upenv, 56-1, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.152 0 0) ((bruijn ##k.98 55 0) (##string ##string.400)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic2_k195) (bruijn ##x.4 55 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 0)), runtime,
      VEncodePointer(&_V10string_D400.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k195, env)}),
      VGetArg(upenv, 55-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.98 54 0) (##string ##string.399)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic2_k194) (bruijn ##x.4 54 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 0)), runtime,
      VEncodePointer(&_V10string_D399.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k194, env)}),
      VGetArg(upenv, 54-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) ((bruijn ##k.98 53 0) (##string ##string.398)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic2_k193) (bruijn ##x.4 53 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 0)), runtime,
      VEncodePointer(&_V10string_D398.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k193, env)}),
      VGetArg(upenv, 53-1, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.98 52 0) (##string ##string.397)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic2_k192) (bruijn ##x.4 52 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 0)), runtime,
      VEncodePointer(&_V10string_D397.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k192, env)}),
      VGetArg(upenv, 52-1, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.98 51 0) (##string ##string.396)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic2_k191) (bruijn ##x.4 51 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 0)), runtime,
      VEncodePointer(&_V10string_D396.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k191, env)}),
      VGetArg(upenv, 51-1, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn ##k.98 50 0) (##string ##string.395)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic2_k190) (bruijn ##x.4 50 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 0)), runtime,
      VEncodePointer(&_V10string_D395.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k190, env)}),
      VGetArg(upenv, 50-1, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.146 0 0) ((bruijn ##k.98 49 0) (##string ##string.394)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic2_k189) (bruijn ##x.4 49 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 0)), runtime,
      VEncodePointer(&_V10string_D394.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k189, env)}),
      VGetArg(upenv, 49-1, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) ((bruijn ##k.98 48 0) (##string ##string.393)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic2_k188) (bruijn ##x.4 48 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 0)), runtime,
      VEncodePointer(&_V10string_D393.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k188, env)}),
      VGetArg(upenv, 48-1, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.144 0 0) ((bruijn ##k.98 47 0) (##string ##string.392)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic2_k187) (bruijn ##x.4 47 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 0)), runtime,
      VEncodePointer(&_V10string_D392.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k187, env)}),
      VGetArg(upenv, 47-1, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.143 0 0) ((bruijn ##k.98 46 0) (##string ##string.391)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic2_k186) (bruijn ##x.4 46 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 0)), runtime,
      VEncodePointer(&_V10string_D391.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k186, env)}),
      VGetArg(upenv, 46-1, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) ((bruijn ##k.98 45 0) (##string ##string.390)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic2_k185) (bruijn ##x.4 45 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 0)), runtime,
      VEncodePointer(&_V10string_D390.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k185, env)}),
      VGetArg(upenv, 45-1, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn ##k.98 44 0) (##string ##string.389)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic2_k184) (bruijn ##x.4 44 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 0)), runtime,
      VEncodePointer(&_V10string_D389.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k184, env)}),
      VGetArg(upenv, 44-1, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 0 0) ((bruijn ##k.98 43 0) (##string ##string.388)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic2_k183) (bruijn ##x.4 43 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 0)), runtime,
      VEncodePointer(&_V10string_D388.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k183, env)}),
      VGetArg(upenv, 43-1, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.139 0 0) ((bruijn ##k.98 42 0) (##string ##string.387)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic2_k182) (bruijn ##x.4 42 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 0)), runtime,
      VEncodePointer(&_V10string_D387.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k182, env)}),
      VGetArg(upenv, 42-1, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.138 0 0) ((bruijn ##k.98 41 0) (##string ##string.386)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic2_k181) (bruijn ##x.4 41 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 0)), runtime,
      VEncodePointer(&_V10string_D386.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k181, env)}),
      VGetArg(upenv, 41-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) ((bruijn ##k.98 40 0) (##string ##string.385)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic2_k180) (bruijn ##x.4 40 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 0)), runtime,
      VEncodePointer(&_V10string_D385.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k180, env)}),
      VGetArg(upenv, 40-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) (if (bruijn ##p.176 0 0) ((bruijn ##k.98 39 0) (##string ##string.385)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic2_k141) (bruijn ##x.4 39 1) (quote ##sys.car))) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic2_k179) (bruijn ##x.4 39 1) (quote ##sys.qcons)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 0)), runtime,
      VEncodePointer(&_V10string_D385.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k141, env)}),
      VGetArg(upenv, 39-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k179, env)}),
      VGetArg(upenv, 39-1, 1),
      VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn ##k.98 38 0) (##string ##string.384)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic2_k140) (bruijn ##x.4 38 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 0)), runtime,
      VEncodePointer(&_V10string_D384.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k140, env)}),
      VGetArg(upenv, 38-1, 1),
      VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.135 0 0) ((bruijn ##k.98 37 0) (##string ##string.383)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic2_k139) (bruijn ##x.4 37 1) (quote ##vcore.load-library)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 0)), runtime,
      VEncodePointer(&_V10string_D383.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k139, env)}),
      VGetArg(upenv, 37-1, 1),
      VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.134 0 0) ((bruijn ##k.98 36 0) (##string ##string.382)) ((bruijn eqv? 42 5) (close _V0lookup__intrinsic2_k138) (bruijn ##x.4 36 1) (quote ##vcore.make-import)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 0)), runtime,
      VEncodePointer(&_V10string_D382.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k138, env)}),
      VGetArg(upenv, 36-1, 1),
      VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.133 0 0) ((bruijn ##k.98 35 0) (##string ##string.381)) ((bruijn eqv? 41 5) (close _V0lookup__intrinsic2_k137) (bruijn ##x.4 35 1) (quote ##vcore.lookup-library)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 0)), runtime,
      VEncodePointer(&_V10string_D381.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k137, env)}),
      VGetArg(upenv, 35-1, 1),
      VEncodePointer(&_V10vcore_Dlookup__library.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 0 0) ((bruijn ##k.98 34 0) (##string ##string.380)) ((bruijn eqv? 40 5) (close _V0lookup__intrinsic2_k136) (bruijn ##x.4 34 1) (quote ##vcore.multidefine)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 0)), runtime,
      VEncodePointer(&_V10string_D380.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k136, env)}),
      VGetArg(upenv, 34-1, 1),
      VEncodePointer(&_V10vcore_Dmultidefine.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.131 0 0) ((bruijn ##k.98 33 0) (##string ##string.379)) ((bruijn eqv? 39 5) (close _V0lookup__intrinsic2_k135) (bruijn ##x.4 33 1) (quote ##vcore.define)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 0)), runtime,
      VEncodePointer(&_V10string_D379.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k135, env)}),
      VGetArg(upenv, 33-1, 1),
      VEncodePointer(&_V10vcore_Ddefine.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.130 0 0) ((bruijn ##k.98 32 0) (##string ##string.378)) ((bruijn eqv? 38 5) (close _V0lookup__intrinsic2_k134) (bruijn ##x.4 32 1) (quote ##vcore.function)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 0)), runtime,
      VEncodePointer(&_V10string_D378.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k134, env)}),
      VGetArg(upenv, 32-1, 1),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.129 0 0) ((bruijn ##k.98 31 0) (##string ##string.377)) ((bruijn eqv? 37 5) (close _V0lookup__intrinsic2_k133) (bruijn ##x.4 31 1) (quote ##sys.import)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 0)), runtime,
      VEncodePointer(&_V10string_D377.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k133, env)}),
      VGetArg(upenv, 31-1, 1),
      VEncodePointer(&_V10sys_Dimport.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.128 0 0) ((bruijn ##k.98 30 0) (##string ##string.376)) ((bruijn eqv? 36 5) (close _V0lookup__intrinsic2_k132) (bruijn ##x.4 30 1) (quote ##sys.exit)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 0)), runtime,
      VEncodePointer(&_V10string_D376.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k132, env)}),
      VGetArg(upenv, 30-1, 1),
      VEncodePointer(&_V10sys_Dexit.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.127 0 0) ((bruijn ##k.98 29 0) (##string ##string.375)) ((bruijn eqv? 35 5) (close _V0lookup__intrinsic2_k131) (bruijn ##x.4 29 1) (quote ##sys.abort)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 0)), runtime,
      VEncodePointer(&_V10string_D375.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k131, env)}),
      VGetArg(upenv, 29-1, 1),
      VEncodePointer(&_V10sys_Dabort.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.126 0 0) ((bruijn ##k.98 28 0) (##string ##string.374)) ((bruijn eqv? 34 5) (close _V0lookup__intrinsic2_k130) (bruijn ##x.4 28 1) (quote ##sys.apply)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 0)), runtime,
      VEncodePointer(&_V10string_D374.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k130, env)}),
      VGetArg(upenv, 28-1, 1),
      VEncodePointer(&_V10sys_Dapply.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.125 0 0) ((bruijn ##k.98 27 0) (##string ##string.373)) ((bruijn eqv? 33 5) (close _V0lookup__intrinsic2_k129) (bruijn ##x.4 27 1) (quote ##sys.call-with-values)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 0)), runtime,
      VEncodePointer(&_V10string_D373.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k129, env)}),
      VGetArg(upenv, 27-1, 1),
      VEncodePointer(&_V10sys_Dcall__with__values.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.124 0 0) ((bruijn ##k.98 26 0) (##string ##string.372)) ((bruijn eqv? 32 5) (close _V0lookup__intrinsic2_k128) (bruijn ##x.4 26 1) (quote ##sys.call/cc)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 0)), runtime,
      VEncodePointer(&_V10string_D372.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k128, env)}),
      VGetArg(upenv, 26-1, 1),
      VEncodePointer(&_V10sys_Dcall_Wcc.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.123 0 0) ((bruijn ##k.98 25 0) (##string ##string.371)) ((bruijn eqv? 31 5) (close _V0lookup__intrinsic2_k127) (bruijn ##x.4 25 1) (quote ##sys.next)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 0)), runtime,
      VEncodePointer(&_V10string_D371.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k127, env)}),
      VGetArg(upenv, 25-1, 1),
      VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.122 0 0) ((bruijn ##k.98 24 0) #t) ((bruijn eqv? 30 5) (close _V0lookup__intrinsic2_k126) (bruijn ##x.4 24 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k126, env)}),
      VGetArg(upenv, 24-1, 1),
      VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.121 0 0) ((bruijn ##k.98 23 0) #t) ((bruijn eqv? 29 5) (close _V0lookup__intrinsic2_k125) (bruijn ##x.4 23 1) (quote ##sys.or)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k125, env)}),
      VGetArg(upenv, 23-1, 1),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn ##k.98 22 0) #t) ((bruijn eqv? 28 5) (close _V0lookup__intrinsic2_k124) (bruijn ##x.4 22 1) (quote ##sys.and)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k124, env)}),
      VGetArg(upenv, 22-1, 1),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.119 0 0) ((bruijn ##k.98 21 0) #t) ((bruijn eqv? 27 5) (close _V0lookup__intrinsic2_k123) (bruijn ##x.4 21 1) (quote ##sys.begin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k123, env)}),
      VGetArg(upenv, 21-1, 1),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) ((bruijn ##k.98 20 0) (##string ##string.370)) ((bruijn eqv? 26 5) (close _V0lookup__intrinsic2_k122) (bruijn ##x.4 20 1) (quote ##sys.if)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 0)), runtime,
      VEncodePointer(&_V10string_D370.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k122, env)}),
      VGetArg(upenv, 20-1, 1),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn ##k.98 19 0) (##string ##string.369)) ((bruijn eqv? 25 5) (close _V0lookup__intrinsic2_k121) (bruijn ##x.4 19 1) (quote ##sys.blob=?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 0)), runtime,
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k121, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodePointer(&_V10sys_Dblob_E_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.116 0 0) ((bruijn ##k.98 18 0) (##string ##string.368)) ((bruijn eqv? 24 5) (close _V0lookup__intrinsic2_k120) (bruijn ##x.4 18 1) (quote ##sys.symbol=?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 0)), runtime,
      VEncodePointer(&_V10string_D368.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k120, env)}),
      VGetArg(upenv, 18-1, 1),
      VEncodePointer(&_V10sys_Dsymbol_E_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.115 0 0) ((bruijn ##k.98 17 0) (##string ##string.367)) ((bruijn eqv? 23 5) (close _V0lookup__intrinsic2_k119) (bruijn ##x.4 17 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 0)), runtime,
      VEncodePointer(&_V10string_D367.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k119, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.114 0 0) ((bruijn ##k.98 16 0) (##string ##string.366)) ((bruijn eqv? 22 5) (close _V0lookup__intrinsic2_k118) (bruijn ##x.4 16 1) (quote ##sys.char?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 0)), runtime,
      VEncodePointer(&_V10string_D366.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k118, env)}),
      VGetArg(upenv, 16-1, 1),
      VEncodePointer(&_V10sys_Dchar_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.113 0 0) ((bruijn ##k.98 15 0) (##string ##string.365)) ((bruijn eqv? 21 5) (close _V0lookup__intrinsic2_k117) (bruijn ##x.4 15 1) (quote ##sys.double?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 0)), runtime,
      VEncodePointer(&_V10string_D365.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k117, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodePointer(&_V10sys_Ddouble_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.112 0 0) ((bruijn ##k.98 14 0) (##string ##string.364)) ((bruijn eqv? 20 5) (close _V0lookup__intrinsic2_k116) (bruijn ##x.4 14 1) (quote ##sys.int?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 0)), runtime,
      VEncodePointer(&_V10string_D364.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k116, env)}),
      VGetArg(upenv, 14-1, 1),
      VEncodePointer(&_V10sys_Dint_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.111 0 0) ((bruijn ##k.98 13 0) (##string ##string.363)) ((bruijn eqv? 19 5) (close _V0lookup__intrinsic2_k115) (bruijn ##x.4 13 1) (quote ##sys.string?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodePointer(&_V10string_D363.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k115, env)}),
      VGetArg(upenv, 13-1, 1),
      VEncodePointer(&_V10sys_Dstring_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.110 0 0) ((bruijn ##k.98 12 0) (##string ##string.362)) ((bruijn eqv? 18 5) (close _V0lookup__intrinsic2_k114) (bruijn ##x.4 12 1) (quote ##sys.symbol?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodePointer(&_V10string_D362.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k114, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodePointer(&_V10sys_Dsymbol_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.109 0 0) ((bruijn ##k.98 11 0) (##string ##string.361)) ((bruijn eqv? 17 5) (close _V0lookup__intrinsic2_k113) (bruijn ##x.4 11 1) (quote ##sys.blob?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VEncodePointer(&_V10string_D361.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k113, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodePointer(&_V10sys_Dblob_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) ((bruijn ##k.98 10 0) (##string ##string.360)) ((bruijn eqv? 16 5) (close _V0lookup__intrinsic2_k112) (bruijn ##x.4 10 1) (quote ##sys.procedure?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
      VEncodePointer(&_V10string_D360.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k112, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodePointer(&_V10sys_Dprocedure_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.107 0 0) ((bruijn ##k.98 9 0) (##string ##string.359)) ((bruijn eqv? 15 5) (close _V0lookup__intrinsic2_k111) (bruijn ##x.4 9 1) (quote ##sys.vector?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VEncodePointer(&_V10string_D359.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k111, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodePointer(&_V10sys_Dvector_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.106 0 0) ((bruijn ##k.98 8 0) (##string ##string.358)) ((bruijn eqv? 14 5) (close _V0lookup__intrinsic2_k110) (bruijn ##x.4 8 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodePointer(&_V10string_D358.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k110, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn ##k.98 7 0) (##string ##string.357)) ((bruijn eqv? 13 5) (close _V0lookup__intrinsic2_k109) (bruijn ##x.4 7 1) (quote ##sys.null?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D357.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k109, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) ((bruijn ##k.98 6 0) (##string ##string.356)) ((bruijn eqv? 12 5) (close _V0lookup__intrinsic2_k108) (bruijn ##x.4 6 1) (quote ##sys.remainder)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D356.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k108, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodePointer(&_V10sys_Dremainder.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.103 0 0) ((bruijn ##k.98 5 0) (##string ##string.355)) ((bruijn eqv? 11 5) (close _V0lookup__intrinsic2_k107) (bruijn ##x.4 5 1) (quote ##sys.quotient)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 0)), runtime,
      VEncodePointer(&_V10string_D355.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k107, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodePointer(&_V10sys_Dquotient.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) ((bruijn ##k.98 4 0) (##string ##string.354)) ((bruijn eqv? 10 5) (close _V0lookup__intrinsic2_k106) (bruijn ##x.4 4 1) (quote ##sys.cmp)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D354.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k106, env)}),
      upenv->up->up->up->vars[1],
      VEncodePointer(&_V10sys_Dcmp.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.101 0 0) ((bruijn ##k.98 3 0) (##string ##string.353)) ((bruijn eqv? 9 5) (close _V0lookup__intrinsic2_k105) (bruijn ##x.4 3 1) (quote ##sys./)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D353.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k105, env)}),
      upenv->up->up->vars[1],
      VEncodePointer(&_V10sys_D_W.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.100 0 0) ((bruijn ##k.98 2 0) (##string ##string.352)) ((bruijn eqv? 8 5) (close _V0lookup__intrinsic2_k104) (bruijn ##x.4 2 1) (quote ##sys.*)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D352.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k104, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10sys_D_S.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic2_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.99 0 0) ((bruijn ##k.98 1 0) (##string ##string.351)) ((bruijn eqv? 7 5) (close _V0lookup__intrinsic2_k103) (bruijn ##x.4 1 1) (quote ##sys.-)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodePointer(&_V10string_D351.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k103, env)}),
      upenv->vars[1],
      VEncodePointer(&_V10sys_D__.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic2_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic2_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__intrinsic2_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic2_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 6 5) (close _V0lookup__intrinsic2_k102) (bruijn ##x.4 0 1) (quote ##sys.+))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_k102, env)}),
      _var1,
      VEncodePointer(&_V10sys_D_P.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close variables_k40) (bruijn lookup-intrinsic2 4 5) (close _V0lookup__intrinsic2_lambda13))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k40, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic2_lambda13, env)})
    );
 }
}
static void _V0lookup__intrinsic_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k294, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.255 0 0) ((bruijn ##k.178 77 0) (##string ##string.496)) ((bruijn ##k.178 77 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__intrinsic_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.254 0 0) ((bruijn ##k.178 76 0) (##string ##string.495)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic_k294) (bruijn ##x.3 76 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 0)), runtime,
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 81-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k294, env)}),
      VGetArg(upenv, 76-1, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 0 0) ((bruijn ##k.178 75 0) (##string ##string.494)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic_k293) (bruijn ##x.3 75 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 0)), runtime,
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 80-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k293, env)}),
      VGetArg(upenv, 75-1, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn ##k.178 74 0) (##string ##string.493)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic_k292) (bruijn ##x.3 74 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 0)), runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 79-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k292, env)}),
      VGetArg(upenv, 74-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 0 0) ((bruijn ##k.178 73 0) (##string ##string.492)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic_k291) (bruijn ##x.3 73 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 0)), runtime,
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k291, env)}),
      VGetArg(upenv, 73-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn ##k.178 72 0) (##string ##string.491)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic_k290) (bruijn ##x.3 72 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 0)), runtime,
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k290, env)}),
      VGetArg(upenv, 72-1, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn ##k.178 71 0) (##string ##string.490)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic_k289) (bruijn ##x.3 71 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 0)), runtime,
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k289, env)}),
      VGetArg(upenv, 71-1, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 0 0) ((bruijn ##k.178 70 0) (##string ##string.489)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic_k288) (bruijn ##x.3 70 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 0)), runtime,
      VEncodePointer(&_V10string_D489.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k288, env)}),
      VGetArg(upenv, 70-1, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn ##k.178 69 0) (##string ##string.488)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic_k287) (bruijn ##x.3 69 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 0)), runtime,
      VEncodePointer(&_V10string_D488.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k287, env)}),
      VGetArg(upenv, 69-1, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.246 0 0) ((bruijn ##k.178 68 0) (##string ##string.487)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic_k286) (bruijn ##x.3 68 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 0)), runtime,
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k286, env)}),
      VGetArg(upenv, 68-1, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 0 0) ((bruijn ##k.178 67 0) (##string ##string.486)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic_k285) (bruijn ##x.3 67 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 0)), runtime,
      VEncodePointer(&_V10string_D486.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k285, env)}),
      VGetArg(upenv, 67-1, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn ##k.178 66 0) (##string ##string.485)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic_k284) (bruijn ##x.3 66 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 0)), runtime,
      VEncodePointer(&_V10string_D485.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k284, env)}),
      VGetArg(upenv, 66-1, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn ##k.178 65 0) (##string ##string.484)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic_k283) (bruijn ##x.3 65 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 0)), runtime,
      VEncodePointer(&_V10string_D484.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k283, env)}),
      VGetArg(upenv, 65-1, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.242 0 0) ((bruijn ##k.178 64 0) (##string ##string.483)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic_k282) (bruijn ##x.3 64 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 0)), runtime,
      VEncodePointer(&_V10string_D483.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k282, env)}),
      VGetArg(upenv, 64-1, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.241 0 0) ((bruijn ##k.178 63 0) (##string ##string.482)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic_k281) (bruijn ##x.3 63 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 0)), runtime,
      VEncodePointer(&_V10string_D482.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k281, env)}),
      VGetArg(upenv, 63-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn ##k.178 62 0) (##string ##string.481)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic_k280) (bruijn ##x.3 62 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 0)), runtime,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k280, env)}),
      VGetArg(upenv, 62-1, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn ##k.178 61 0) (##string ##string.480)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic_k279) (bruijn ##x.3 61 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 0)), runtime,
      VEncodePointer(&_V10string_D480.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k279, env)}),
      VGetArg(upenv, 61-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.238 0 0) ((bruijn ##k.178 60 0) (##string ##string.479)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic_k278) (bruijn ##x.3 60 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 0)), runtime,
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k278, env)}),
      VGetArg(upenv, 60-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) ((bruijn ##k.178 59 0) (##string ##string.478)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic_k277) (bruijn ##x.3 59 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 0)), runtime,
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k277, env)}),
      VGetArg(upenv, 59-1, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn ##k.178 58 0) (##string ##string.477)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic_k276) (bruijn ##x.3 58 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 0)), runtime,
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k276, env)}),
      VGetArg(upenv, 58-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((bruijn ##k.178 57 0) (##string ##string.476)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic_k275) (bruijn ##x.3 57 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 0)), runtime,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k275, env)}),
      VGetArg(upenv, 57-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.234 0 0) ((bruijn ##k.178 56 0) (##string ##string.475)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic_k274) (bruijn ##x.3 56 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 0)), runtime,
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k274, env)}),
      VGetArg(upenv, 56-1, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 0 0) ((bruijn ##k.178 55 0) (##string ##string.474)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic_k273) (bruijn ##x.3 55 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 0)), runtime,
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k273, env)}),
      VGetArg(upenv, 55-1, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.232 0 0) ((bruijn ##k.178 54 0) (##string ##string.473)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic_k272) (bruijn ##x.3 54 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 0)), runtime,
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k272, env)}),
      VGetArg(upenv, 54-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.231 0 0) ((bruijn ##k.178 53 0) (##string ##string.472)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic_k271) (bruijn ##x.3 53 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 0)), runtime,
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k271, env)}),
      VGetArg(upenv, 53-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 0 0) ((bruijn ##k.178 52 0) (##string ##string.471)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic_k270) (bruijn ##x.3 52 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 0)), runtime,
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k270, env)}),
      VGetArg(upenv, 52-1, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.229 0 0) ((bruijn ##k.178 51 0) (##string ##string.470)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic_k269) (bruijn ##x.3 51 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 0)), runtime,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k269, env)}),
      VGetArg(upenv, 51-1, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.228 0 0) ((bruijn ##k.178 50 0) (##string ##string.469)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic_k268) (bruijn ##x.3 50 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 0)), runtime,
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k268, env)}),
      VGetArg(upenv, 50-1, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.227 0 0) ((bruijn ##k.178 49 0) (##string ##string.468)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic_k267) (bruijn ##x.3 49 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 0)), runtime,
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k267, env)}),
      VGetArg(upenv, 49-1, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.226 0 0) ((bruijn ##k.178 48 0) (##string ##string.467)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic_k266) (bruijn ##x.3 48 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 0)), runtime,
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k266, env)}),
      VGetArg(upenv, 48-1, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.225 0 0) ((bruijn ##k.178 47 0) (##string ##string.466)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic_k265) (bruijn ##x.3 47 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 0)), runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k265, env)}),
      VGetArg(upenv, 47-1, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((bruijn ##k.178 46 0) (##string ##string.465)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic_k264) (bruijn ##x.3 46 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 0)), runtime,
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k264, env)}),
      VGetArg(upenv, 46-1, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((bruijn ##k.178 45 0) (##string ##string.464)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic_k263) (bruijn ##x.3 45 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 0)), runtime,
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k263, env)}),
      VGetArg(upenv, 45-1, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) ((bruijn ##k.178 44 0) (##string ##string.463)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic_k262) (bruijn ##x.3 44 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 0)), runtime,
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k262, env)}),
      VGetArg(upenv, 44-1, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.221 0 0) ((bruijn ##k.178 43 0) (##string ##string.462)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic_k261) (bruijn ##x.3 43 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 0)), runtime,
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k261, env)}),
      VGetArg(upenv, 43-1, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.220 0 0) ((bruijn ##k.178 42 0) (##string ##string.461)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic_k260) (bruijn ##x.3 42 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 0)), runtime,
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k260, env)}),
      VGetArg(upenv, 42-1, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) ((bruijn ##k.178 41 0) (##string ##string.460)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic_k259) (bruijn ##x.3 41 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 0)), runtime,
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k259, env)}),
      VGetArg(upenv, 41-1, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) ((bruijn ##k.178 40 0) (##string ##string.459)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic_k258) (bruijn ##x.3 40 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 0)), runtime,
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k258, env)}),
      VGetArg(upenv, 40-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k333, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.255 0 0) ((bruijn ##k.178 78 0) (##string ##string.496)) ((bruijn ##k.178 78 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 0)), runtime,
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__intrinsic_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.254 0 0) ((bruijn ##k.178 77 0) (##string ##string.495)) ((bruijn eqv? 82 5) (close _V0lookup__intrinsic_k333) (bruijn ##x.3 77 1) (quote ##sys.command-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 0)), runtime,
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 82-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k333, env)}),
      VGetArg(upenv, 77-1, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 0 0) ((bruijn ##k.178 76 0) (##string ##string.494)) ((bruijn eqv? 81 5) (close _V0lookup__intrinsic_k332) (bruijn ##x.3 76 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 0)), runtime,
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 81-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k332, env)}),
      VGetArg(upenv, 76-1, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn ##k.178 75 0) (##string ##string.493)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic_k331) (bruijn ##x.3 75 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 0)), runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 80-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k331, env)}),
      VGetArg(upenv, 75-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 0 0) ((bruijn ##k.178 74 0) (##string ##string.492)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic_k330) (bruijn ##x.3 74 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 0)), runtime,
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 79-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k330, env)}),
      VGetArg(upenv, 74-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn ##k.178 73 0) (##string ##string.491)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic_k329) (bruijn ##x.3 73 1) (quote ##sys.system)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 0)), runtime,
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 78-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k329, env)}),
      VGetArg(upenv, 73-1, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn ##k.178 72 0) (##string ##string.490)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic_k328) (bruijn ##x.3 72 1) (quote ##sys.newline)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 0)), runtime,
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 77-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k328, env)}),
      VGetArg(upenv, 72-1, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 0 0) ((bruijn ##k.178 71 0) (##string ##string.489)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic_k327) (bruijn ##x.3 71 1) (quote ##sys.write)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 0)), runtime,
      VEncodePointer(&_V10string_D489.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 76-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k327, env)}),
      VGetArg(upenv, 71-1, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn ##k.178 70 0) (##string ##string.488)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic_k326) (bruijn ##x.3 70 1) (quote ##sys.display-word)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 0)), runtime,
      VEncodePointer(&_V10string_D488.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 75-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k326, env)}),
      VGetArg(upenv, 70-1, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.246 0 0) ((bruijn ##k.178 69 0) (##string ##string.487)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic_k325) (bruijn ##x.3 69 1) (quote ##sys.read)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 0)), runtime,
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k325, env)}),
      VGetArg(upenv, 69-1, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 0 0) ((bruijn ##k.178 68 0) (##string ##string.486)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic_k324) (bruijn ##x.3 68 1) (quote ##sys.read-line)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 0)), runtime,
      VEncodePointer(&_V10string_D486.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 73-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k324, env)}),
      VGetArg(upenv, 68-1, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn ##k.178 67 0) (##string ##string.485)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic_k323) (bruijn ##x.3 67 1) (quote ##sys.read-char)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 0)), runtime,
      VEncodePointer(&_V10string_D485.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k323, env)}),
      VGetArg(upenv, 67-1, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn ##k.178 66 0) (##string ##string.484)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic_k322) (bruijn ##x.3 66 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 0)), runtime,
      VEncodePointer(&_V10string_D484.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k322, env)}),
      VGetArg(upenv, 66-1, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.242 0 0) ((bruijn ##k.178 65 0) (##string ##string.483)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic_k321) (bruijn ##x.3 65 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 0)), runtime,
      VEncodePointer(&_V10string_D483.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k321, env)}),
      VGetArg(upenv, 65-1, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.241 0 0) ((bruijn ##k.178 64 0) (##string ##string.482)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic_k320) (bruijn ##x.3 64 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 0)), runtime,
      VEncodePointer(&_V10string_D482.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k320, env)}),
      VGetArg(upenv, 64-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn ##k.178 63 0) (##string ##string.481)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic_k319) (bruijn ##x.3 63 1) (quote ##sys.close-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 0)), runtime,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k319, env)}),
      VGetArg(upenv, 63-1, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn ##k.178 62 0) (##string ##string.480)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic_k318) (bruijn ##x.3 62 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 0)), runtime,
      VEncodePointer(&_V10string_D480.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k318, env)}),
      VGetArg(upenv, 62-1, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.238 0 0) ((bruijn ##k.178 61 0) (##string ##string.479)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic_k317) (bruijn ##x.3 61 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 0)), runtime,
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k317, env)}),
      VGetArg(upenv, 61-1, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) ((bruijn ##k.178 60 0) (##string ##string.478)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic_k316) (bruijn ##x.3 60 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 0)), runtime,
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k316, env)}),
      VGetArg(upenv, 60-1, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn ##k.178 59 0) (##string ##string.477)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic_k315) (bruijn ##x.3 59 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 0)), runtime,
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k315, env)}),
      VGetArg(upenv, 59-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((bruijn ##k.178 58 0) (##string ##string.476)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic_k314) (bruijn ##x.3 58 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 0)), runtime,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k314, env)}),
      VGetArg(upenv, 58-1, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.234 0 0) ((bruijn ##k.178 57 0) (##string ##string.475)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic_k313) (bruijn ##x.3 57 1) (quote ##sys.char-integer)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 0)), runtime,
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k313, env)}),
      VGetArg(upenv, 57-1, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 0 0) ((bruijn ##k.178 56 0) (##string ##string.474)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic_k312) (bruijn ##x.3 56 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 0)), runtime,
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k312, env)}),
      VGetArg(upenv, 56-1, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.232 0 0) ((bruijn ##k.178 55 0) (##string ##string.473)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic_k311) (bruijn ##x.3 55 1) (quote ##sys.string->number)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 0)), runtime,
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k311, env)}),
      VGetArg(upenv, 55-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.231 0 0) ((bruijn ##k.178 54 0) (##string ##string.472)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic_k310) (bruijn ##x.3 54 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 0)), runtime,
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k310, env)}),
      VGetArg(upenv, 54-1, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 0 0) ((bruijn ##k.178 53 0) (##string ##string.471)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic_k309) (bruijn ##x.3 53 1) (quote ##sys.string-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 0)), runtime,
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k309, env)}),
      VGetArg(upenv, 53-1, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.229 0 0) ((bruijn ##k.178 52 0) (##string ##string.470)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic_k308) (bruijn ##x.3 52 1) (quote ##sys.string-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 0)), runtime,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k308, env)}),
      VGetArg(upenv, 52-1, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.228 0 0) ((bruijn ##k.178 51 0) (##string ##string.469)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic_k307) (bruijn ##x.3 51 1) (quote ##sys.string-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 0)), runtime,
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k307, env)}),
      VGetArg(upenv, 51-1, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.227 0 0) ((bruijn ##k.178 50 0) (##string ##string.468)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic_k306) (bruijn ##x.3 50 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 0)), runtime,
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k306, env)}),
      VGetArg(upenv, 50-1, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.226 0 0) ((bruijn ##k.178 49 0) (##string ##string.467)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic_k305) (bruijn ##x.3 49 1) (quote ##sys.substring)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 0)), runtime,
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k305, env)}),
      VGetArg(upenv, 49-1, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.225 0 0) ((bruijn ##k.178 48 0) (##string ##string.466)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic_k304) (bruijn ##x.3 48 1) (quote ##sys.make-string)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 0)), runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k304, env)}),
      VGetArg(upenv, 48-1, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((bruijn ##k.178 47 0) (##string ##string.465)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic_k303) (bruijn ##x.3 47 1) (quote ##sys.vector-length)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 0)), runtime,
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k303, env)}),
      VGetArg(upenv, 47-1, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((bruijn ##k.178 46 0) (##string ##string.464)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic_k302) (bruijn ##x.3 46 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 0)), runtime,
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k302, env)}),
      VGetArg(upenv, 46-1, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) ((bruijn ##k.178 45 0) (##string ##string.463)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic_k301) (bruijn ##x.3 45 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 0)), runtime,
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k301, env)}),
      VGetArg(upenv, 45-1, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.221 0 0) ((bruijn ##k.178 44 0) (##string ##string.462)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic_k300) (bruijn ##x.3 44 1) (quote ##sys.list->vector)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 0)), runtime,
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k300, env)}),
      VGetArg(upenv, 44-1, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.220 0 0) ((bruijn ##k.178 43 0) (##string ##string.461)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic_k299) (bruijn ##x.3 43 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 0)), runtime,
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k299, env)}),
      VGetArg(upenv, 43-1, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) ((bruijn ##k.178 42 0) (##string ##string.460)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic_k298) (bruijn ##x.3 42 1) (quote ##sys.set-car!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 0)), runtime,
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k298, env)}),
      VGetArg(upenv, 42-1, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) ((bruijn ##k.178 41 0) (##string ##string.459)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic_k297) (bruijn ##x.3 41 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 0)), runtime,
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k297, env)}),
      VGetArg(upenv, 41-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.217 0 0) ((bruijn ##k.178 40 0) (##string ##string.458)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic_k296) (bruijn ##x.3 40 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 0)), runtime,
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k296, env)}),
      VGetArg(upenv, 40-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.256 0 0) (if (bruijn ##p.256 0 0) ((bruijn ##k.178 39 0) (##string ##string.458)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic_k257) (bruijn ##x.3 39 1) (quote ##sys.car))) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic_k295) (bruijn ##x.3 39 1) (quote ##sys.qcons)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 0)), runtime,
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k257, env)}),
      VGetArg(upenv, 39-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k295, env)}),
      VGetArg(upenv, 39-1, 1),
      VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.216 0 0) ((bruijn ##k.178 38 0) (##string ##string.457)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic_k256) (bruijn ##x.3 38 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 0)), runtime,
      VEncodePointer(&_V10string_D457.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k256, env)}),
      VGetArg(upenv, 38-1, 1),
      VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.215 0 0) ((bruijn ##k.178 37 0) (##string ##string.456)) ((bruijn eqv? 42 5) (close _V0lookup__intrinsic_k255) (bruijn ##x.3 37 1) (quote ##vcore.load-library)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 0)), runtime,
      VEncodePointer(&_V10string_D456.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k255, env)}),
      VGetArg(upenv, 37-1, 1),
      VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.214 0 0) ((bruijn ##k.178 36 0) (##string ##string.455)) ((bruijn eqv? 41 5) (close _V0lookup__intrinsic_k254) (bruijn ##x.3 36 1) (quote ##vcore.make-import)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 0)), runtime,
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k254, env)}),
      VGetArg(upenv, 36-1, 1),
      VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) ((bruijn ##k.178 35 0) (##string ##string.454)) ((bruijn eqv? 40 5) (close _V0lookup__intrinsic_k253) (bruijn ##x.3 35 1) (quote ##vcore.lookup-library)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 0)), runtime,
      VEncodePointer(&_V10string_D454.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k253, env)}),
      VGetArg(upenv, 35-1, 1),
      VEncodePointer(&_V10vcore_Dlookup__library.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.212 0 0) ((bruijn ##k.178 34 0) (##string ##string.453)) ((bruijn eqv? 39 5) (close _V0lookup__intrinsic_k252) (bruijn ##x.3 34 1) (quote ##vcore.multidefine)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 0)), runtime,
      VEncodePointer(&_V10string_D453.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k252, env)}),
      VGetArg(upenv, 34-1, 1),
      VEncodePointer(&_V10vcore_Dmultidefine.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.211 0 0) ((bruijn ##k.178 33 0) (##string ##string.452)) ((bruijn eqv? 38 5) (close _V0lookup__intrinsic_k251) (bruijn ##x.3 33 1) (quote ##vcore.define)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 0)), runtime,
      VEncodePointer(&_V10string_D452.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k251, env)}),
      VGetArg(upenv, 33-1, 1),
      VEncodePointer(&_V10vcore_Ddefine.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.210 0 0) ((bruijn ##k.178 32 0) (##string ##string.451)) ((bruijn eqv? 37 5) (close _V0lookup__intrinsic_k250) (bruijn ##x.3 32 1) (quote ##vcore.function)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 0)), runtime,
      VEncodePointer(&_V10string_D451.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k250, env)}),
      VGetArg(upenv, 32-1, 1),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) ((bruijn ##k.178 31 0) (##string ##string.450)) ((bruijn eqv? 36 5) (close _V0lookup__intrinsic_k249) (bruijn ##x.3 31 1) (quote ##sys.import)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 0)), runtime,
      VEncodePointer(&_V10string_D450.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k249, env)}),
      VGetArg(upenv, 31-1, 1),
      VEncodePointer(&_V10sys_Dimport.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) ((bruijn ##k.178 30 0) (##string ##string.449)) ((bruijn eqv? 35 5) (close _V0lookup__intrinsic_k248) (bruijn ##x.3 30 1) (quote ##sys.exit)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 0)), runtime,
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k248, env)}),
      VGetArg(upenv, 30-1, 1),
      VEncodePointer(&_V10sys_Dexit.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.207 0 0) ((bruijn ##k.178 29 0) (##string ##string.448)) ((bruijn eqv? 34 5) (close _V0lookup__intrinsic_k247) (bruijn ##x.3 29 1) (quote ##sys.abort)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 0)), runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k247, env)}),
      VGetArg(upenv, 29-1, 1),
      VEncodePointer(&_V10sys_Dabort.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.206 0 0) ((bruijn ##k.178 28 0) (##string ##string.447)) ((bruijn eqv? 33 5) (close _V0lookup__intrinsic_k246) (bruijn ##x.3 28 1) (quote ##sys.apply)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 0)), runtime,
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k246, env)}),
      VGetArg(upenv, 28-1, 1),
      VEncodePointer(&_V10sys_Dapply.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) ((bruijn ##k.178 27 0) (##string ##string.446)) ((bruijn eqv? 32 5) (close _V0lookup__intrinsic_k245) (bruijn ##x.3 27 1) (quote ##sys.call-with-values)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 0)), runtime,
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k245, env)}),
      VGetArg(upenv, 27-1, 1),
      VEncodePointer(&_V10sys_Dcall__with__values.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) ((bruijn ##k.178 26 0) (##string ##string.445)) ((bruijn eqv? 31 5) (close _V0lookup__intrinsic_k244) (bruijn ##x.3 26 1) (quote ##sys.call/cc)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 0)), runtime,
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k244, env)}),
      VGetArg(upenv, 26-1, 1),
      VEncodePointer(&_V10sys_Dcall_Wcc.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.203 0 0) ((bruijn ##k.178 25 0) (##string ##string.444)) ((bruijn eqv? 30 5) (close _V0lookup__intrinsic_k243) (bruijn ##x.3 25 1) (quote ##sys.next)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 0)), runtime,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k243, env)}),
      VGetArg(upenv, 25-1, 1),
      VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.202 0 0) ((bruijn ##k.178 24 0) #t) ((bruijn eqv? 29 5) (close _V0lookup__intrinsic_k242) (bruijn ##x.3 24 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k242, env)}),
      VGetArg(upenv, 24-1, 1),
      VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.201 0 0) ((bruijn ##k.178 23 0) #t) ((bruijn eqv? 28 5) (close _V0lookup__intrinsic_k241) (bruijn ##x.3 23 1) (quote ##sys.or)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k241, env)}),
      VGetArg(upenv, 23-1, 1),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.200 0 0) ((bruijn ##k.178 22 0) #t) ((bruijn eqv? 27 5) (close _V0lookup__intrinsic_k240) (bruijn ##x.3 22 1) (quote ##sys.and)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k240, env)}),
      VGetArg(upenv, 22-1, 1),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.199 0 0) ((bruijn ##k.178 21 0) #t) ((bruijn eqv? 26 5) (close _V0lookup__intrinsic_k239) (bruijn ##x.3 21 1) (quote ##sys.begin)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 0)), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k239, env)}),
      VGetArg(upenv, 21-1, 1),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((bruijn ##k.178 20 0) (##string ##string.443)) ((bruijn eqv? 25 5) (close _V0lookup__intrinsic_k238) (bruijn ##x.3 20 1) (quote ##sys.if)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 0)), runtime,
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k238, env)}),
      VGetArg(upenv, 20-1, 1),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.197 0 0) ((bruijn ##k.178 19 0) (##string ##string.442)) ((bruijn eqv? 24 5) (close _V0lookup__intrinsic_k237) (bruijn ##x.3 19 1) (quote ##sys.blob=?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 0)), runtime,
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k237, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodePointer(&_V10sys_Dblob_E_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.196 0 0) ((bruijn ##k.178 18 0) (##string ##string.441)) ((bruijn eqv? 23 5) (close _V0lookup__intrinsic_k236) (bruijn ##x.3 18 1) (quote ##sys.symbol=?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 0)), runtime,
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k236, env)}),
      VGetArg(upenv, 18-1, 1),
      VEncodePointer(&_V10sys_Dsymbol_E_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.195 0 0) ((bruijn ##k.178 17 0) (##string ##string.440)) ((bruijn eqv? 22 5) (close _V0lookup__intrinsic_k235) (bruijn ##x.3 17 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 0)), runtime,
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k235, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.194 0 0) ((bruijn ##k.178 16 0) (##string ##string.439)) ((bruijn eqv? 21 5) (close _V0lookup__intrinsic_k234) (bruijn ##x.3 16 1) (quote ##sys.char?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 0)), runtime,
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k234, env)}),
      VGetArg(upenv, 16-1, 1),
      VEncodePointer(&_V10sys_Dchar_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.193 0 0) ((bruijn ##k.178 15 0) (##string ##string.438)) ((bruijn eqv? 20 5) (close _V0lookup__intrinsic_k233) (bruijn ##x.3 15 1) (quote ##sys.double?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 0)), runtime,
      VEncodePointer(&_V10string_D438.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k233, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodePointer(&_V10sys_Ddouble_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.192 0 0) ((bruijn ##k.178 14 0) (##string ##string.437)) ((bruijn eqv? 19 5) (close _V0lookup__intrinsic_k232) (bruijn ##x.3 14 1) (quote ##sys.int?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 0)), runtime,
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k232, env)}),
      VGetArg(upenv, 14-1, 1),
      VEncodePointer(&_V10sys_Dint_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.191 0 0) ((bruijn ##k.178 13 0) (##string ##string.436)) ((bruijn eqv? 18 5) (close _V0lookup__intrinsic_k231) (bruijn ##x.3 13 1) (quote ##sys.string?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodePointer(&_V10string_D436.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k231, env)}),
      VGetArg(upenv, 13-1, 1),
      VEncodePointer(&_V10sys_Dstring_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.190 0 0) ((bruijn ##k.178 12 0) (##string ##string.435)) ((bruijn eqv? 17 5) (close _V0lookup__intrinsic_k230) (bruijn ##x.3 12 1) (quote ##sys.symbol?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodePointer(&_V10string_D435.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k230, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodePointer(&_V10sys_Dsymbol_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.189 0 0) ((bruijn ##k.178 11 0) (##string ##string.434)) ((bruijn eqv? 16 5) (close _V0lookup__intrinsic_k229) (bruijn ##x.3 11 1) (quote ##sys.blob?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VEncodePointer(&_V10string_D434.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k229, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodePointer(&_V10sys_Dblob_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.188 0 0) ((bruijn ##k.178 10 0) (##string ##string.433)) ((bruijn eqv? 15 5) (close _V0lookup__intrinsic_k228) (bruijn ##x.3 10 1) (quote ##sys.procedure?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
      VEncodePointer(&_V10string_D433.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k228, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodePointer(&_V10sys_Dprocedure_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.187 0 0) ((bruijn ##k.178 9 0) (##string ##string.432)) ((bruijn eqv? 14 5) (close _V0lookup__intrinsic_k227) (bruijn ##x.3 9 1) (quote ##sys.vector?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VEncodePointer(&_V10string_D432.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k227, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodePointer(&_V10sys_Dvector_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn ##k.178 8 0) (##string ##string.431)) ((bruijn eqv? 13 5) (close _V0lookup__intrinsic_k226) (bruijn ##x.3 8 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodePointer(&_V10string_D431.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k226, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((bruijn ##k.178 7 0) (##string ##string.430)) ((bruijn eqv? 12 5) (close _V0lookup__intrinsic_k225) (bruijn ##x.3 7 1) (quote ##sys.null?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D430.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k225, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.184 0 0) ((bruijn ##k.178 6 0) (##string ##string.429)) ((bruijn eqv? 11 5) (close _V0lookup__intrinsic_k224) (bruijn ##x.3 6 1) (quote ##sys.remainder)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D429.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k224, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodePointer(&_V10sys_Dremainder.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.183 0 0) ((bruijn ##k.178 5 0) (##string ##string.428)) ((bruijn eqv? 10 5) (close _V0lookup__intrinsic_k223) (bruijn ##x.3 5 1) (quote ##sys.quotient)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 0)), runtime,
      VEncodePointer(&_V10string_D428.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k223, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodePointer(&_V10sys_Dquotient.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 0 0) ((bruijn ##k.178 4 0) (##string ##string.427)) ((bruijn eqv? 9 5) (close _V0lookup__intrinsic_k222) (bruijn ##x.3 4 1) (quote ##sys.cmp)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D427.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k222, env)}),
      upenv->up->up->up->vars[1],
      VEncodePointer(&_V10sys_Dcmp.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.181 0 0) ((bruijn ##k.178 3 0) (##string ##string.426)) ((bruijn eqv? 8 5) (close _V0lookup__intrinsic_k221) (bruijn ##x.3 3 1) (quote ##sys./)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k221, env)}),
      upenv->up->up->vars[1],
      VEncodePointer(&_V10sys_D_W.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.180 0 0) ((bruijn ##k.178 2 0) (##string ##string.425)) ((bruijn eqv? 7 5) (close _V0lookup__intrinsic_k220) (bruijn ##x.3 2 1) (quote ##sys.*)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k220, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10sys_D_S.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__intrinsic_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.179 0 0) ((bruijn ##k.178 1 0) (##string ##string.424)) ((bruijn eqv? 6 5) (close _V0lookup__intrinsic_k219) (bruijn ##x.3 1 1) (quote ##sys.-)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodePointer(&_V10string_D424.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k219, env)}),
      upenv->vars[1],
      VEncodePointer(&_V10sys_D__.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__intrinsic_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_lambda14" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__intrinsic_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__intrinsic_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 5 5) (close _V0lookup__intrinsic_k218) (bruijn ##x.3 0 1) (quote ##sys.+))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_k218, env)}),
      _var1,
      VEncodePointer(&_V10sys_D_P.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close variables_k39) (bruijn lookup-intrinsic 3 4) (close _V0lookup__intrinsic_lambda14))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k39, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__intrinsic_lambda14, env)})
    );
 }
}
static void _V0lookup__inline_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k340, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.265 0 0) ((bruijn ##k.258 7 0) (##string ##string.503)) ((bruijn ##k.258 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__inline_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((bruijn ##k.258 6 0) (##string ##string.502)) ((bruijn eqv? 10 5) (close _V0lookup__inline_k340) (bruijn ##x.2 6 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k340, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k343, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.265 0 0) ((bruijn ##k.258 8 0) (##string ##string.503)) ((bruijn ##k.258 8 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lookup__inline_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((bruijn ##k.258 7 0) (##string ##string.502)) ((bruijn eqv? 11 5) (close _V0lookup__inline_k343) (bruijn ##x.2 7 1) (quote ##sys.cdr)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k343, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.263 0 0) ((bruijn ##k.258 6 0) (##string ##string.501)) ((bruijn eqv? 10 5) (close _V0lookup__inline_k342) (bruijn ##x.2 6 1) (quote ##sys.car)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k342, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.266 0 0) (if (bruijn ##p.266 0 0) ((bruijn ##k.258 5 0) (##string ##string.501)) ((bruijn eqv? 9 5) (close _V0lookup__inline_k339) (bruijn ##x.2 5 1) (quote ##sys.car))) ((bruijn eqv? 9 5) (close _V0lookup__inline_k341) (bruijn ##x.2 5 1) (quote ##sys.qcons)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 0)), runtime,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k339, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k341, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((bruijn ##k.258 4 0) (##string ##string.500)) ((bruijn eqv? 8 5) (close _V0lookup__inline_k338) (bruijn ##x.2 4 1) (quote ##sys.cons)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D500.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k338, env)}),
      upenv->up->up->up->vars[1],
      VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn ##k.258 3 0) (##string ##string.499)) ((bruijn eqv? 7 5) (close _V0lookup__inline_k337) (bruijn ##x.2 3 1) (quote ##sys.eq?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D499.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k337, env)}),
      upenv->up->up->vars[1],
      VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.260 0 0) ((bruijn ##k.258 2 0) (##string ##string.498)) ((bruijn eqv? 6 5) (close _V0lookup__inline_k336) (bruijn ##x.2 2 1) (quote ##sys.not)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k336, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup__inline_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup__inline_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 0 0) ((bruijn ##k.258 1 0) (##string ##string.497)) ((bruijn eqv? 5 5) (close _V0lookup__inline_k335) (bruijn ##x.2 1 1) (quote ##sys.pair?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k335, env)}),
      upenv->vars[1],
      VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lookup__inline_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup__inline_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup__inline_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0lookup__inline_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 4 5) (close _V0lookup__inline_k334) (bruijn ##x.2 0 1) (quote ##sys.null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[5]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_k334, env)}),
      _var1,
      VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close variables_k38) (bruijn lookup-inline 2 3) (close _V0lookup__inline_lambda15))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k38, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0lookup__inline_lambda15, env)})
    );
 }
}
static void _V0mangle__library_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 7 22) (bruijn ##k.267 4 0) (bruijn string-append 7 21) (##string ##string.504) (bruijn ##x.270 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 22)), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 21),
      VEncodePointer(&_V10string_D504.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0mangle__library_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 6 18) (close _V0mangle__library_k347) (bruijn ##x.271 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k347, env)}),
      _var0
    );
 }
}
static void _V0mangle__library_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn symbol->string 8 19) (bruijn ##k.272 2 0) (bruijn ##x.274 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 19)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0mangle__library_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.273 0 0) ((bruijn mangle-symbol 6 1) (close _V0mangle__library_k349) (bruijn e 1 1)) ((bruijn error 7 23) (bruijn ##k.272 1 0) (##string ##string.505) (bruijn e 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k349, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 23)), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D505.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
}
 }
}
static void _V0mangle__library_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda17" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__library_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 6 15) (close _V0mangle__library_k348) (bruijn e 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k348, env)}),
      _var1
    );
 }
}
static void _V0mangle__library_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.269 0 0) ((bruijn map 5 20) (close _V0mangle__library_k346) (close _V0mangle__library_lambda17) (bruijn lib 2 1)) ((bruijn error 5 23) (bruijn ##k.267 2 0) (##string ##string.506) (bruijn lib 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k346, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_lambda17, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 23)), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D506.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0mangle__library_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__library_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__library_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.268 0 0) ((bruijn ##k.267 1 0) (bruijn lib 1 1)) ((bruijn pair? 4 2) (close _V0mangle__library_k345) (bruijn lib 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[2]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k345, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0mangle__library_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda16" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__library_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__library_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 3 17) (close _V0mangle__library_k344) (bruijn lib 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[17]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_k344, env)}),
      _var1
    );
 }
}
static void variables_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close variables_k37) (bruijn mangle-library 1 2) (close _V0mangle__library_lambda16))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k37, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__library_lambda16, env)})
    );
 }
}
static void _V0mangle__symbol_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.280 1 0) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k359, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 17 30) (bruijn ##k.284 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 30)), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn close-port 16 29) (close _V0loop_k359) (bruijn port 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 29)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k359, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda24) (bruijn ##k.282 2 0) (bruijn ##x.286 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda24, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k379, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.309 0 0) ((bruijn ##k.290 19 0) (##string ##string.525)) ((bruijn string-ref 35 27) (bruijn ##k.290 19 0) (bruijn str 31 1) (bruijn i 22 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 0)), runtime,
      VEncodePointer(&_V10string_D525.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 27)), runtime,
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 31-1, 1),
      VGetArg(upenv, 22-1, 1)
    );
}
 }
}
static void _V0loop_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.308 0 0) ((bruijn ##k.290 18 0) (##string ##string.524)) ((bruijn eqv? 34 5) (close _V0loop_k379) (bruijn ##x.1 18 1) (quote #\@)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 0)), runtime,
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k379, env)}),
      VGetArg(upenv, 18-1, 1),
      VEncodeChar('@')
    );
}
 }
}
static void _V0loop_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.307 0 0) ((bruijn ##k.290 17 0) (##string ##string.523)) ((bruijn eqv? 33 5) (close _V0loop_k378) (bruijn ##x.1 17 1) (quote #\.)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 0)), runtime,
      VEncodePointer(&_V10string_D523.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k378, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeChar('.')
    );
}
 }
}
static void _V0loop_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.306 0 0) ((bruijn ##k.290 16 0) (##string ##string.522)) ((bruijn eqv? 32 5) (close _V0loop_k377) (bruijn ##x.1 16 1) (quote #\-)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 0)), runtime,
      VEncodePointer(&_V10string_D522.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k377, env)}),
      VGetArg(upenv, 16-1, 1),
      VEncodeChar('-')
    );
}
 }
}
static void _V0loop_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.305 0 0) ((bruijn ##k.290 15 0) (##string ##string.521)) ((bruijn eqv? 31 5) (close _V0loop_k376) (bruijn ##x.1 15 1) (quote #\+)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 0)), runtime,
      VEncodePointer(&_V10string_D521.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k376, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeChar('+')
    );
}
 }
}
static void _V0loop_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.304 0 0) ((bruijn ##k.290 14 0) (##string ##string.520)) ((bruijn eqv? 30 5) (close _V0loop_k375) (bruijn ##x.1 14 1) (quote #\~)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 0)), runtime,
      VEncodePointer(&_V10string_D520.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k375, env)}),
      VGetArg(upenv, 14-1, 1),
      VEncodeChar('~')
    );
}
 }
}
static void _V0loop_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 0 0) ((bruijn ##k.290 13 0) (##string ##string.519)) ((bruijn eqv? 29 5) (close _V0loop_k374) (bruijn ##x.1 13 1) (quote #\_)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodePointer(&_V10string_D519.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k374, env)}),
      VGetArg(upenv, 13-1, 1),
      VEncodeChar('_')
    );
}
 }
}
static void _V0loop_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.302 0 0) ((bruijn ##k.290 12 0) (##string ##string.518)) ((bruijn eqv? 28 5) (close _V0loop_k373) (bruijn ##x.1 12 1) (quote #\^)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodePointer(&_V10string_D518.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k373, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeChar('^')
    );
}
 }
}
static void _V0loop_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.301 0 0) ((bruijn ##k.290 11 0) (##string ##string.517)) ((bruijn eqv? 27 5) (close _V0loop_k372) (bruijn ##x.1 11 1) (quote #\?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VEncodePointer(&_V10string_D517.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k372, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.300 0 0) ((bruijn ##k.290 10 0) (##string ##string.516)) ((bruijn eqv? 26 5) (close _V0loop_k371) (bruijn ##x.1 10 1) (quote #\>)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
      VEncodePointer(&_V10string_D516.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k371, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeChar('>')
    );
}
 }
}
static void _V0loop_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.299 0 0) ((bruijn ##k.290 9 0) (##string ##string.515)) ((bruijn eqv? 25 5) (close _V0loop_k370) (bruijn ##x.1 9 1) (quote #\=)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VEncodePointer(&_V10string_D515.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k370, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodeChar('=')
    );
}
 }
}
static void _V0loop_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.298 0 0) ((bruijn ##k.290 8 0) (##string ##string.514)) ((bruijn eqv? 24 5) (close _V0loop_k369) (bruijn ##x.1 8 1) (quote #\<)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodePointer(&_V10string_D514.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k369, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodeChar('<')
    );
}
 }
}
static void _V0loop_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.297 0 0) ((bruijn ##k.290 7 0) (##string ##string.513)) ((bruijn eqv? 23 5) (close _V0loop_k368) (bruijn ##x.1 7 1) (quote #\:)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D513.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k368, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeChar(':')
    );
}
 }
}
static void _V0loop_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.296 0 0) ((bruijn ##k.290 6 0) (##string ##string.512)) ((bruijn eqv? 22 5) (close _V0loop_k367) (bruijn ##x.1 6 1) (quote #\/)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D512.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k367, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('/')
    );
}
 }
}
static void _V0loop_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.295 0 0) ((bruijn ##k.290 5 0) (##string ##string.511)) ((bruijn eqv? 21 5) (close _V0loop_k366) (bruijn ##x.1 5 1) (quote #\*)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 0)), runtime,
      VEncodePointer(&_V10string_D511.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k366, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('*')
    );
}
 }
}
static void _V0loop_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.294 0 0) ((bruijn ##k.290 4 0) (##string ##string.510)) ((bruijn eqv? 20 5) (close _V0loop_k365) (bruijn ##x.1 4 1) (quote #\&)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D510.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k365, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('&')
    );
}
 }
}
static void _V0loop_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.293 0 0) ((bruijn ##k.290 3 0) (##string ##string.509)) ((bruijn eqv? 19 5) (close _V0loop_k364) (bruijn ##x.1 3 1) (quote #\%)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D509.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k364, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('%')
    );
}
 }
}
static void _V0loop_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.292 0 0) ((bruijn ##k.290 2 0) (##string ##string.508)) ((bruijn eqv? 18 5) (close _V0loop_k363) (bruijn ##x.1 2 1) (quote #\$)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D508.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k363, env)}),
      upenv->up->vars[1],
      VEncodeChar('$')
    );
}
 }
}
static void _V0loop_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.291 0 0) ((bruijn ##k.290 1 0) (##string ##string.507)) ((bruijn eqv? 17 5) (close _V0loop_k362) (bruijn ##x.1 1 1) (quote #\!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodePointer(&_V10string_D507.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k362, env)}),
      upenv->vars[1],
      VEncodeChar('!')
    );
}
 }
}
static void _V0loop_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 16 5) (close _V0loop_k361) (bruijn ##x.1 0 1) (quote #\#))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k361, env)}),
      _var1,
      VEncodeChar('#')
    );
 }
}
static void _V0loop_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.282 5 0) (bruijn ##x.288 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 17 25) (close _V0loop_k382) (bruijn i 4 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k382, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 16 26) (close _V0loop_k381) (bruijn ##x.289 0 0) (bruijn port 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k381, env)}),
      _var0,
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda25) (close _V0loop_k380) (bruijn ##x.310 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda25, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k380, env)}),
      _var0
    );
 }
}
static void _V0loop_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.283 0 0) ((bruijn get-output-string 14 31) (close _V0loop_k358) (bruijn port 6 1)) ((bruijn string-ref 14 27) (close _V0loop_k360) (bruijn str 10 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 31)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k358, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k360, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 13 28) (close _V0loop_k357) (bruijn i 0 1) (bruijn strlen 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k357, env)}),
      _var1,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0mangle__symbol_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0mangle__symbol_k356) (bruijn loop 0 1) (close _V0loop_lambda23))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k356, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda23, env)})
    );
 }
}
static void _V0mangle__symbol_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda22) (bruijn ##k.278 3 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda22, env)}, runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0mangle__symbol_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.280 1 0) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 17 30) (bruijn ##k.284 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 30)), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn close-port 16 29) (close _V0loop_k387) (bruijn port 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 29)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k387, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda28) (bruijn ##k.282 2 0) (bruijn ##x.286 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda28, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k407, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.309 0 0) ((bruijn ##k.290 19 0) (##string ##string.525)) ((bruijn string-ref 35 27) (bruijn ##k.290 19 0) (bruijn str 31 1) (bruijn i 22 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 0)), runtime,
      VEncodePointer(&_V10string_D525.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 27)), runtime,
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 31-1, 1),
      VGetArg(upenv, 22-1, 1)
    );
}
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.308 0 0) ((bruijn ##k.290 18 0) (##string ##string.524)) ((bruijn eqv? 34 5) (close _V0loop_k407) (bruijn ##x.1 18 1) (quote #\@)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 0)), runtime,
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k407, env)}),
      VGetArg(upenv, 18-1, 1),
      VEncodeChar('@')
    );
}
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.307 0 0) ((bruijn ##k.290 17 0) (##string ##string.523)) ((bruijn eqv? 33 5) (close _V0loop_k406) (bruijn ##x.1 17 1) (quote #\.)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 0)), runtime,
      VEncodePointer(&_V10string_D523.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k406, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeChar('.')
    );
}
 }
}
static void _V0loop_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.306 0 0) ((bruijn ##k.290 16 0) (##string ##string.522)) ((bruijn eqv? 32 5) (close _V0loop_k405) (bruijn ##x.1 16 1) (quote #\-)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 0)), runtime,
      VEncodePointer(&_V10string_D522.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k405, env)}),
      VGetArg(upenv, 16-1, 1),
      VEncodeChar('-')
    );
}
 }
}
static void _V0loop_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.305 0 0) ((bruijn ##k.290 15 0) (##string ##string.521)) ((bruijn eqv? 31 5) (close _V0loop_k404) (bruijn ##x.1 15 1) (quote #\+)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 0)), runtime,
      VEncodePointer(&_V10string_D521.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k404, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeChar('+')
    );
}
 }
}
static void _V0loop_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.304 0 0) ((bruijn ##k.290 14 0) (##string ##string.520)) ((bruijn eqv? 30 5) (close _V0loop_k403) (bruijn ##x.1 14 1) (quote #\~)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 0)), runtime,
      VEncodePointer(&_V10string_D520.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k403, env)}),
      VGetArg(upenv, 14-1, 1),
      VEncodeChar('~')
    );
}
 }
}
static void _V0loop_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 0 0) ((bruijn ##k.290 13 0) (##string ##string.519)) ((bruijn eqv? 29 5) (close _V0loop_k402) (bruijn ##x.1 13 1) (quote #\_)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodePointer(&_V10string_D519.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k402, env)}),
      VGetArg(upenv, 13-1, 1),
      VEncodeChar('_')
    );
}
 }
}
static void _V0loop_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.302 0 0) ((bruijn ##k.290 12 0) (##string ##string.518)) ((bruijn eqv? 28 5) (close _V0loop_k401) (bruijn ##x.1 12 1) (quote #\^)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodePointer(&_V10string_D518.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k401, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeChar('^')
    );
}
 }
}
static void _V0loop_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.301 0 0) ((bruijn ##k.290 11 0) (##string ##string.517)) ((bruijn eqv? 27 5) (close _V0loop_k400) (bruijn ##x.1 11 1) (quote #\?)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VEncodePointer(&_V10string_D517.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k400, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.300 0 0) ((bruijn ##k.290 10 0) (##string ##string.516)) ((bruijn eqv? 26 5) (close _V0loop_k399) (bruijn ##x.1 10 1) (quote #\>)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
      VEncodePointer(&_V10string_D516.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k399, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeChar('>')
    );
}
 }
}
static void _V0loop_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.299 0 0) ((bruijn ##k.290 9 0) (##string ##string.515)) ((bruijn eqv? 25 5) (close _V0loop_k398) (bruijn ##x.1 9 1) (quote #\=)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VEncodePointer(&_V10string_D515.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k398, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodeChar('=')
    );
}
 }
}
static void _V0loop_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.298 0 0) ((bruijn ##k.290 8 0) (##string ##string.514)) ((bruijn eqv? 24 5) (close _V0loop_k397) (bruijn ##x.1 8 1) (quote #\<)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodePointer(&_V10string_D514.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k397, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodeChar('<')
    );
}
 }
}
static void _V0loop_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.297 0 0) ((bruijn ##k.290 7 0) (##string ##string.513)) ((bruijn eqv? 23 5) (close _V0loop_k396) (bruijn ##x.1 7 1) (quote #\:)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 0)), runtime,
      VEncodePointer(&_V10string_D513.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k396, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeChar(':')
    );
}
 }
}
static void _V0loop_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.296 0 0) ((bruijn ##k.290 6 0) (##string ##string.512)) ((bruijn eqv? 22 5) (close _V0loop_k395) (bruijn ##x.1 6 1) (quote #\/)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VEncodePointer(&_V10string_D512.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k395, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('/')
    );
}
 }
}
static void _V0loop_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.295 0 0) ((bruijn ##k.290 5 0) (##string ##string.511)) ((bruijn eqv? 21 5) (close _V0loop_k394) (bruijn ##x.1 5 1) (quote #\*)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 0)), runtime,
      VEncodePointer(&_V10string_D511.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k394, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('*')
    );
}
 }
}
static void _V0loop_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.294 0 0) ((bruijn ##k.290 4 0) (##string ##string.510)) ((bruijn eqv? 20 5) (close _V0loop_k393) (bruijn ##x.1 4 1) (quote #\&)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D510.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k393, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('&')
    );
}
 }
}
static void _V0loop_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.293 0 0) ((bruijn ##k.290 3 0) (##string ##string.509)) ((bruijn eqv? 19 5) (close _V0loop_k392) (bruijn ##x.1 3 1) (quote #\%)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D509.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k392, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('%')
    );
}
 }
}
static void _V0loop_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.292 0 0) ((bruijn ##k.290 2 0) (##string ##string.508)) ((bruijn eqv? 18 5) (close _V0loop_k391) (bruijn ##x.1 2 1) (quote #\$)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodePointer(&_V10string_D508.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k391, env)}),
      upenv->up->vars[1],
      VEncodeChar('$')
    );
}
 }
}
static void _V0loop_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.291 0 0) ((bruijn ##k.290 1 0) (##string ##string.507)) ((bruijn eqv? 17 5) (close _V0loop_k390) (bruijn ##x.1 1 1) (quote #\!)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodePointer(&_V10string_D507.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k390, env)}),
      upenv->vars[1],
      VEncodeChar('!')
    );
}
 }
}
static void _V0loop_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 16 5) (close _V0loop_k389) (bruijn ##x.1 0 1) (quote #\#))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k389, env)}),
      _var1,
      VEncodeChar('#')
    );
 }
}
static void _V0loop_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k410, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.282 5 0) (bruijn ##x.288 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 17 25) (close _V0loop_k410) (bruijn i 4 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k410, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 16 26) (close _V0loop_k409) (bruijn ##x.289 0 0) (bruijn port 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k409, env)}),
      _var0,
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda29) (close _V0loop_k408) (bruijn ##x.310 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda29, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k408, env)}),
      _var0
    );
 }
}
static void _V0loop_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.283 0 0) ((bruijn get-output-string 14 31) (close _V0loop_k386) (bruijn port 6 1)) ((bruijn string-ref 14 27) (close _V0loop_k388) (bruijn str 10 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 31)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k386, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k388, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda27" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 13 28) (close _V0loop_k385) (bruijn i 0 1) (bruijn strlen 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k385, env)}),
      _var1,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0mangle__symbol_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0mangle__symbol_k384) (bruijn loop 0 1) (close _V0loop_lambda27))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k384, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda27, env)})
    );
 }
}
static void _V0mangle__symbol_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda26) (bruijn ##k.278 3 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda26, env)}, runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0mangle__symbol_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 0 0) ((bruijn display 10 26) (close _V0mangle__symbol_k355) (##string ##string.526) (bruijn port 2 1)) ((bruijn display 10 26) (close _V0mangle__symbol_k383) (##string ##string.527) (bruijn port 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k355, env)}),
      VEncodePointer(&_V10string_D526.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k383, env)}),
      VEncodePointer(&_V10string_D527.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0mangle__symbol_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 9 24) (close _V0mangle__symbol_k354) (bruijn ##x.312 0 0) #\#)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 24)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k354, env)}),
      _var0,
      VEncodeChar('#')
    );
 }
}
static void _V0mangle__symbol_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-ref 8 27) (close _V0mangle__symbol_k353) (bruijn str 4 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k353, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0mangle__symbol_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda21) (bruijn ##k.277 1 0) (bruijn ##x.313 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda21, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0mangle__symbol_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn open-output-string 6 32) (close _V0mangle__symbol_k352))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 32)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k352, env)})
    );
 }
}
static void _V0mangle__symbol_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda20) (bruijn ##k.276 1 0) (bruijn ##x.314 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda20, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0mangle__symbol_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 4 33) (close _V0mangle__symbol_k351) (bruijn str 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[33]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k351, env)}),
      _var1
    );
 }
}
static void _V0mangle__symbol_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0mangle__symbol_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0mangle__symbol_lambda19) (bruijn ##k.275 1 0) (bruijn ##x.315 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda19, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0mangle__symbol_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda18" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__symbol_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0mangle__symbol_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol->string 2 19) (close _V0mangle__symbol_k350) (bruijn sym 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[19]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_k350, env)}),
      _var1
    );
 }
}
static void variables_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "variables_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)variables_lambda4, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close variables_k36) (bruijn mangle-symbol 0 1) (close _V0mangle__symbol_lambda18))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k36, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0mangle__symbol_lambda18, env)})
    );
 }
}
static void variables_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33) {
 static VDebugInfo dbg = { "variables_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)variables_lambda3, runtime, upenv, 34, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33) {
  struct { VEnv env; VWORD argv[34]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 34; env->var_len = 34; env->up = upenv;
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
  // ((close variables_lambda4) (bruijn ##k.7 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)variables_lambda4, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void variables_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close variables_lambda3) (bruijn ##k.6 33 0) (bruijn ##x.316 32 0) (bruijn ##x.317 31 0) (bruijn ##x.318 30 0) (bruijn ##x.319 29 0) (bruijn ##x.320 28 0) (bruijn ##x.321 27 0) (bruijn ##x.322 26 0) (bruijn ##x.323 25 0) (bruijn ##x.324 24 0) (bruijn ##x.325 23 0) (bruijn ##x.326 22 0) (bruijn ##x.327 21 0) (bruijn ##x.328 20 0) (bruijn ##x.329 19 0) (bruijn ##x.330 18 0) (bruijn ##x.331 17 0) (bruijn ##x.332 16 0) (bruijn ##x.333 15 0) (bruijn ##x.334 14 0) (bruijn ##x.335 13 0) (bruijn ##x.336 12 0) (bruijn ##x.337 11 0) (bruijn ##x.338 10 0) (bruijn ##x.339 9 0) (bruijn ##x.340 8 0) (bruijn ##x.341 7 0) (bruijn ##x.342 6 0) (bruijn ##x.343 5 0) (bruijn ##x.344 4 0) (bruijn ##x.345 3 0) (bruijn ##x.346 2 0) (bruijn ##x.347 1 0) (bruijn ##x.348 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)variables_lambda3, env)}, runtime,
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
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
      _var0
    );
 }
}
static void variables_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 1) (close variables_k35) (quote string-length))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k35, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 1) (close variables_k34) (quote open-output-string))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k34, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 1) (close variables_k33) (quote get-output-string))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k33, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 1) (close variables_k32) (quote string->symbol))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k32, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 1) (close variables_k31) (quote close-port))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k31, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 1) (close variables_k30) (quote =))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k30, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 1) (close variables_k29) (quote string-ref))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k29, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 1) (close variables_k28) (quote display))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k28, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 1) (close variables_k27) (quote +))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k27, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 1) (close variables_k26) (quote eq?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k26, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 1) (close variables_k25) (quote error))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k25, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 1) (close variables_k24) (quote fold))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k24, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 1) (close variables_k23) (quote string-append))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k23, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 1) (close variables_k22) (quote map))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k22, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 1) (close variables_k21) (quote symbol->string))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k21, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 1) (close variables_k20) (quote reverse))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k20, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 1) (close variables_k19) (quote string?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k19, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 1) (close variables_k18) (quote list))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k18, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 1) (close variables_k17) (quote symbol?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k17, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 1) (close variables_k16) (quote atom?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k16, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 1) (close variables_k15) (quote cadddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k15, env)}),
      VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 1) (close variables_k14) (quote caddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k14, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 1) (close variables_k13) (quote memv))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k13, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 1) (close variables_k12) (quote cddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k12, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 1) (close variables_k11) (quote cadr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k11, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 1) (close variables_k10) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k10, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close variables_k9) (quote cdar))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k9, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close variables_k8) (quote caar))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k8, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close variables_k7) (quote eqv?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k7, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close variables_k6) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k6, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close variables_k5) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k5, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close variables_k4) (quote pair?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k4, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "variables_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)variables_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close variables_k3) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k3, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close variables_lambda2) (bruijn ##k.5 2 0) (bruijn ##x.349 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)variables_lambda2, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void variables_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close variables_k2) (##string ##string.528) (bruijn ##x.350 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k2, env)}),
      VEncodePointer(&_V10string_D528.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void variables_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "variables_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to variables_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)variables_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close variables_k1) (##string ##string.529))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)variables_k1, env)}),
      VEncodePointer(&_V10string_D529.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 variables = (VFunc2)variables_lambda1;
