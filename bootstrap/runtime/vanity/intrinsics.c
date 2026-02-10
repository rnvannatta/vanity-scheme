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
VBlob * VInternSymbol(int hash, VBlob * sym);

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0intrinsics;

VWEAK VWORD _V0is__basic__intrinsic_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0is__basic__intrinsic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "is-basic-intrinsic\?" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCdr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCar2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlineCons2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineEq2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineNot2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlinePairP2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlineNullP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBitCount" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VArithmeticShift" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC1" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC1" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseNand" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseXnor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseAnd" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseXor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseIor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNot" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VJiffiesPerSecond" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCurrentJiffy" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAccess" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRealpath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VRegisterSigint" };
VWEAK VWORD _V10vcore_Dregister__sigint;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dregister__sigint = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.register-sigint" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VYieldToHostMajor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VYieldToHost" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VNewlineStdout" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VWriteStdout" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VDisplayStdout" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VTtyPortP" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VIntChar" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VGensym" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableVector" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRecordLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordRef2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VCreateRecord2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D646 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VReadU8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D645 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VS8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D644 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D643 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D642 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListS8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D641 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeS8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D640 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS8VectorP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D639 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VS8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D638 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VU8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D637 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D636 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D635 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListU8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D634 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeU8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D633 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU8VectorP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D632 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VU8Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D631 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D630 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D629 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D628 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D627 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D626 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS16VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D625 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS16Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D624 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VU16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D623 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D622 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D621 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListU16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D620 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeU16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D619 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VU16VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D618 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU16Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D617 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D616 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D615 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D614 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D613 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D612 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS32VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D611 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS32Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D607 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D606 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D605 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF32VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D604 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VF32Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D603 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF64VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D602 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D601 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D600 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D599 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF64Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D598 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF64VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D597 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D596 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D595 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D594 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D593 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D592 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeVector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D591 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCreateVector" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D590 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D589 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D588 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D587 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D586 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D585 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VUnloadLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D584 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D583 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D582 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D581 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D580 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSetDeclare" };
VWEAK VWORD _V10vcore_Dset__declare_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dset__declare_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.set-declare!" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D579 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction3" };
VWEAK VWORD _V10vcore_Dfunction3;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dfunction3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.function3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D578 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D577 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSetGlobalVar2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D576 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D575 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VApplyCps" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRaise" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VPopExceptionHandler" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VPushExceptionHandler" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VGetExceptionHandler" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VPopDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VPushDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VGetDynamics" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VForeignPointerP2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VNullptrP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VVoidP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VHashTableP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRecordP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGe" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpEq" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLe" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExact" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VInexact" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V40_V10vcore_Dbit__count;
VWEAK VClosure _VW_V40_V10vcore_Dbit__count = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitCount, NULL };
VWEAK VWORD _V10vcore_Dbit__count;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dbit__count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.bit-count" };
VWEAK VWORD _V40_V10vcore_Darithmetic__shift;
VWEAK VClosure _VW_V40_V10vcore_Darithmetic__shift = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VArithmeticShift, NULL };
VWEAK VWORD _V10vcore_Darithmetic__shift;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Darithmetic__shift = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.arithmetic-shift" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc2;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC2, NULL };
VWEAK VWORD _V10vcore_Dbitwise__orc2;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc1;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC1, NULL };
VWEAK VWORD _V10vcore_Dbitwise__orc1;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc2;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC2, NULL };
VWEAK VWORD _V10vcore_Dbitwise__andc2;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc1;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC1, NULL };
VWEAK VWORD _V10vcore_Dbitwise__andc1;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__nor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__nor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-nor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nand;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nand = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNand, NULL };
VWEAK VWORD _V10vcore_Dbitwise__nand;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__nand = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-nand" };
VWEAK VWORD _V40_V10vcore_Dbitwise__xnor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xnor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXnor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__xnor;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__xnor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-xnor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__and;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__and = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAnd, NULL };
VWEAK VWORD _V10vcore_Dbitwise__and;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-and" };
VWEAK VWORD _V40_V10vcore_Dbitwise__xor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__xor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-xor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__ior;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__ior = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseIor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__ior;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__ior = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-ior" };
VWEAK VWORD _V40_V10vcore_Dbitwise__not;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__not = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNot, NULL };
VWEAK VWORD _V10vcore_Dbitwise__not;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-not" };
VWEAK VWORD _V40_V10vcore_Djiffies__per__second;
VWEAK VClosure _VW_V40_V10vcore_Djiffies__per__second = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VJiffiesPerSecond, NULL };
VWEAK VWORD _V10vcore_Djiffies__per__second;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Djiffies__per__second = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.jiffies-per-second" };
VWEAK VWORD _V40_V10vcore_Dcurrent__jiffy;
VWEAK VClosure _VW_V40_V10vcore_Dcurrent__jiffy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCurrentJiffy, NULL };
VWEAK VWORD _V10vcore_Dcurrent__jiffy;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dcurrent__jiffy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.current-jiffy" };
VWEAK VWORD _V40_V10vcore_Daccess;
VWEAK VClosure _VW_V40_V10vcore_Daccess = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAccess, NULL };
VWEAK VWORD _V10vcore_Daccess;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Daccess = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.access" };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;
VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V10vcore_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dmake__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.make-temporary-file" };
VWEAK VWORD _V40_V10vcore_Drealpath;
VWEAK VClosure _VW_V40_V10vcore_Drealpath = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRealpath, NULL };
VWEAK VWORD _V10vcore_Drealpath;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Drealpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.realpath" };
VWEAK VWORD _V40_V10vcore_Dawait;
VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V10vcore_Dawait;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dawait = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.await" };
VWEAK VWORD _V40_V10vcore_Dasync;
VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V10vcore_Dasync;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dasync = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.async" };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;
VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
VWEAK VWORD _V10vcore_Dfiber__fork__list;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dfiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.fiber-fork-list" };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.random-advance!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample__bounded_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__bounded_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleBounded, NULL };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSample, NULL };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V40_V10vcore_Drandom__copy;
VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V40_V10vcore_Dmake__random;
VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-random" };
VWEAK VWORD _V40_V10vcore_Dcommand__line;
VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V10vcore_Dcommand__line;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dcommand__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.command-line" };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dopen__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.open-output-process" };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;
VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V10vcore_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-input-process" };
VWEAK VWORD _V40_V10vcore_Dsystem;
VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V10vcore_Dsystem;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsystem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.system" };
VWEAK VWORD _V40_V10vcore_Dyield__to__host__major;
VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host__major = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHostMajor, NULL };
VWEAK VWORD _V10vcore_Dyield__to__host__major;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dyield__to__host__major = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.yield-to-host-major" };
VWEAK VWORD _V40_V10vcore_Dyield__to__host;
VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHost, NULL };
VWEAK VWORD _V10vcore_Dyield__to__host;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dyield__to__host = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.yield-to-host" };
VWEAK VWORD _V40_V10vcore_Dgarbage__collect;
VWEAK VClosure _VW_V40_V10vcore_Dgarbage__collect = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGarbageCollect, NULL };
VWEAK VWORD _V10vcore_Dgarbage__collect;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dgarbage__collect = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.garbage-collect" };
VWEAK VWORD _V40_V10vcore_Dfinalize_B;
VWEAK VClosure _VW_V40_V10vcore_Dfinalize_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFinalize, NULL };
VWEAK VWORD _V10vcore_Dfinalize_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dfinalize_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.finalize!" };
VWEAK VWORD _V40_V10vcore_Dhas__finalizer_Q;
VWEAK VClosure _VW_V40_V10vcore_Dhas__finalizer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHasFinalizer, NULL };
VWEAK VWORD _V10vcore_Dhas__finalizer_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhas__finalizer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.has-finalizer\?" };
VWEAK VWORD _V40_V10vcore_Dset__finalizer_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__finalizer_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetFinalizer, NULL };
VWEAK VWORD _V10vcore_Dset__finalizer_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dset__finalizer_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.set-finalizer!" };
VWEAK VWORD _V40_V10vcore_Dnewline__stdout;
VWEAK VClosure _VW_V40_V10vcore_Dnewline__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewlineStdout, NULL };
VWEAK VWORD _V10vcore_Dnewline__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dnewline__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.newline-stdout" };
VWEAK VWORD _V40_V10vcore_Dwrite__stdout;
VWEAK VClosure _VW_V40_V10vcore_Dwrite__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWriteStdout, NULL };
VWEAK VWORD _V10vcore_Dwrite__stdout;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dwrite__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.write-stdout" };
VWEAK VWORD _V40_V10vcore_Ddisplay__stdout;
VWEAK VClosure _VW_V40_V10vcore_Ddisplay__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplayStdout, NULL };
VWEAK VWORD _V10vcore_Ddisplay__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ddisplay__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.display-stdout" };
VWEAK VWORD _V40_V10vcore_Dnewline;
VWEAK VClosure _VW_V40_V10vcore_Dnewline = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewline2, NULL };
VWEAK VWORD _V10vcore_Dnewline;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dnewline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.newline" };
VWEAK VWORD _V40_V10vcore_Dwrite;
VWEAK VClosure _VW_V40_V10vcore_Dwrite = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWrite2, NULL };
VWEAK VWORD _V10vcore_Dwrite;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dwrite = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.write" };
VWEAK VWORD _V40_V10vcore_Ddisplay__word;
VWEAK VClosure _VW_V40_V10vcore_Ddisplay__word = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplay2, NULL };
VWEAK VWORD _V10vcore_Ddisplay__word;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ddisplay__word = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.display-word" };
VWEAK VWORD _V40_V10vcore_Dread;
VWEAK VClosure _VW_V40_V10vcore_Dread = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRead2, NULL };
VWEAK VWORD _V10vcore_Dread;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dread = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.read" };
VWEAK VWORD _V40_V10vcore_Dread__line2;
VWEAK VClosure _VW_V40_V10vcore_Dread__line2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine3, NULL };
VWEAK VWORD _V10vcore_Dread__line2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dread__line2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.read-line2" };
VWEAK VWORD _V40_V10vcore_Dread__line;
VWEAK VClosure _VW_V40_V10vcore_Dread__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine2, NULL };
VWEAK VWORD _V10vcore_Dread__line;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-line" };
VWEAK VWORD _V40_V10vcore_Dread__char;
VWEAK VClosure _VW_V40_V10vcore_Dread__char = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadChar2, NULL };
VWEAK VWORD _V10vcore_Dread__char;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-char" };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;
VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V10vcore_Deof__object_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Deof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.eof-object\?" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;
VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
VWEAK VWORD _V10vcore_Dget__output__string;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dget__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.get-output-string" };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__string;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-string" };
VWEAK VWORD _V40_V10vcore_Dtty__port_Q;
VWEAK VClosure _VW_V40_V10vcore_Dtty__port_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VTtyPortP, NULL };
VWEAK VWORD _V10vcore_Dtty__port_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dtty__port_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.tty-port\?" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;
VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V10vcore_Dclose__stream;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dclose__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.close-stream" };
VWEAK VWORD _V40_V10vcore_Dopen__output__stream;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputStream2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__stream;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-stream" };
VWEAK VWORD _V40_V10vcore_Dopen__input__stream;
VWEAK VClosure _VW_V40_V10vcore_Dopen__input__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputStream2, NULL };
VWEAK VWORD _V10vcore_Dopen__input__stream;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dopen__input__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.open-input-stream" };
VWEAK VWORD _V40_V10vcore_Ddup__stderr;
VWEAK VClosure _VW_V40_V10vcore_Ddup__stderr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStderr2, NULL };
VWEAK VWORD _V10vcore_Ddup__stderr;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ddup__stderr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.dup-stderr" };
VWEAK VWORD _V40_V10vcore_Ddup__stdout;
VWEAK VClosure _VW_V40_V10vcore_Ddup__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStdout2, NULL };
VWEAK VWORD _V10vcore_Ddup__stdout;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ddup__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.dup-stdout" };
VWEAK VWORD _V40_V10vcore_Ddup__stdin;
VWEAK VClosure _VW_V40_V10vcore_Ddup__stdin = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStdin2, NULL };
VWEAK VWORD _V10vcore_Ddup__stdin;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ddup__stdin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.dup-stdin" };
VWEAK VWORD _V40_V10vcore_Dstderr___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstderr___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStderrPort, NULL };
VWEAK VWORD _V10vcore_Dstderr___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstderr___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stderr->port" };
VWEAK VWORD _V40_V10vcore_Dstdout___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstdout___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdoutPort, NULL };
VWEAK VWORD _V10vcore_Dstdout___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstdout___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stdout->port" };
VWEAK VWORD _V40_V10vcore_Dstdin___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstdin___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdinPort, NULL };
VWEAK VWORD _V10vcore_Dstdin___Gport;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstdin___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.stdin->port" };
VWEAK VWORD _V40_V10vcore_Dinteger___Gchar;
VWEAK VClosure _VW_V40_V10vcore_Dinteger___Gchar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntChar, NULL };
VWEAK VWORD _V10vcore_Dinteger___Gchar;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dinteger___Gchar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.integer->char" };
VWEAK VWORD _V40_V10vcore_Dchar__integer;
VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V10vcore_Dchar__integer;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dchar__integer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.char-integer" };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
VWEAK VWORD _V10vcore_Dgensym;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dgensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.gensym" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V10vcore_Dsymbol___Gstring;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dsymbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.symbol->string" };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V10vcore_Dstring___Gnumber;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->number" };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V10vcore_Dstring___Gsymbol;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->symbol" };
VWEAK VWORD _V40_V10vcore_Dstring__length;
VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V10vcore_Dstring__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dstring__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.string-length" };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V10vcore_Dstring__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstring__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.string-set!" };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V10vcore_Dstring__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dstring__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.string-ref" };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V10vcore_Dstring__copy_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstring__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.string-copy!" };
VWEAK VWORD _V40_V10vcore_Dsubstring;
VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V10vcore_Dsubstring;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dsubstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.substring" };
VWEAK VWORD _V40_V10vcore_Dmake__string;
VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V10vcore_Dmake__string;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-string" };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V10vcore_Dhash__table__delete_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dhash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.hash-table-delete!" };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
VWEAK VWORD _V10vcore_Dhash__table__set_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dhash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.hash-table-set!" };
VWEAK VWORD _V40_V10vcore_Dhash__table__ref;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableRef, NULL };
VWEAK VWORD _V10vcore_Dhash__table__ref;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.hash-table-ref" };
VWEAK VWORD _V40_V10vcore_Dhash__table__vector;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableVector, NULL };
VWEAK VWORD _V10vcore_Dhash__table__vector;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dhash__table__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.hash-table-vector" };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "##vcore.hash-table-hash-function" };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V40_V10vcore_Dmake__hash__table;
VWEAK VClosure _VW_V40_V10vcore_Dmake__hash__table = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTable, NULL };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V40_V10vcore_Dread__u8vector;
VWEAK VClosure _VW_V40_V10vcore_Dread__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadU8Vector, NULL };
VWEAK VWORD _V10vcore_Dread__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dread__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.read-u8vector" };
VWEAK VWORD _V40_V10vcore_Ds8vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Ds8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.s8vector-length" };
VWEAK VWORD _V40_V10vcore_Ds8vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s8vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds8vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ds8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.s8vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs8vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS8Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s8vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS8Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__s8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-s8vector" };
VWEAK VWORD _V40_V10vcore_Ds8vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorP, NULL };
VWEAK VWORD _V10vcore_Ds8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s8vector\?" };
VWEAK VWORD _V40_V10vcore_Ds8vector;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8Vector, NULL };
VWEAK VWORD _V10vcore_Ds8vector;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Ds8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.s8vector" };
VWEAK VWORD _V40_V10vcore_Du8vector__length;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorLength, NULL };
VWEAK VWORD _V10vcore_Du8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Du8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.u8vector-length" };
VWEAK VWORD _V40_V10vcore_Du8vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSet, NULL };
VWEAK VWORD _V10vcore_Du8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u8vector-set!" };
VWEAK VWORD _V40_V10vcore_Du8vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRef, NULL };
VWEAK VWORD _V10vcore_Du8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Du8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.u8vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu8vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU8Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u8vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU8Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-u8vector" };
VWEAK VWORD _V40_V10vcore_Du8vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Du8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorP, NULL };
VWEAK VWORD _V10vcore_Du8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Du8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.u8vector\?" };
VWEAK VWORD _V40_V10vcore_Du8vector;
VWEAK VClosure _VW_V40_V10vcore_Du8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8Vector, NULL };
VWEAK VWORD _V10vcore_Du8vector;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Du8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.u8vector" };
VWEAK VWORD _V40_V10vcore_Ds16vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s16vector-length" };
VWEAK VWORD _V40_V10vcore_Ds16vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s16vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds16vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s16vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs16vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS16Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s16vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS16Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s16vector" };
VWEAK VWORD _V40_V10vcore_Ds16vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorP, NULL };
VWEAK VWORD _V10vcore_Ds16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s16vector\?" };
VWEAK VWORD _V40_V10vcore_Ds16vector;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16Vector, NULL };
VWEAK VWORD _V10vcore_Ds16vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s16vector" };
VWEAK VWORD _V40_V10vcore_Du16vector__length;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorLength, NULL };
VWEAK VWORD _V10vcore_Du16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Du16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.u16vector-length" };
VWEAK VWORD _V40_V10vcore_Du16vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorSet, NULL };
VWEAK VWORD _V10vcore_Du16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Du16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.u16vector-set!" };
VWEAK VWORD _V40_V10vcore_Du16vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorRef, NULL };
VWEAK VWORD _V10vcore_Du16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u16vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu16vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU16Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u16vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__u16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU16Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__u16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-u16vector" };
VWEAK VWORD _V40_V10vcore_Du16vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Du16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorP, NULL };
VWEAK VWORD _V10vcore_Du16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Du16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.u16vector\?" };
VWEAK VWORD _V40_V10vcore_Du16vector;
VWEAK VClosure _VW_V40_V10vcore_Du16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16Vector, NULL };
VWEAK VWORD _V10vcore_Du16vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Du16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.u16vector" };
VWEAK VWORD _V40_V10vcore_Ds32vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s32vector-length" };
VWEAK VWORD _V40_V10vcore_Ds32vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s32vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds32vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s32vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs32vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS32Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s32vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS32Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s32vector" };
VWEAK VWORD _V40_V10vcore_Ds32vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorP, NULL };
VWEAK VWORD _V10vcore_Ds32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s32vector\?" };
VWEAK VWORD _V40_V10vcore_Ds32vector;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32Vector, NULL };
VWEAK VWORD _V10vcore_Ds32vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s32vector" };
VWEAK VWORD _V40_V10vcore_Df32vector__length;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorLength, NULL };
VWEAK VWORD _V10vcore_Df32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f32vector-length" };
VWEAK VWORD _V40_V10vcore_Df32vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorSet, NULL };
VWEAK VWORD _V10vcore_Df32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f32vector-set!" };
VWEAK VWORD _V40_V10vcore_Df32vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorRef, NULL };
VWEAK VWORD _V10vcore_Df32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f32vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf32vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF32Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f32vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__f32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF32Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__f32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f32vector" };
VWEAK VWORD _V40_V10vcore_Df32vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Df32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorP, NULL };
VWEAK VWORD _V10vcore_Df32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f32vector\?" };
VWEAK VWORD _V40_V10vcore_Df32vector;
VWEAK VClosure _VW_V40_V10vcore_Df32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32Vector, NULL };
VWEAK VWORD _V10vcore_Df32vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Df32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.f32vector" };
VWEAK VWORD _V40_V10vcore_Df64vector__length;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorLength, NULL };
VWEAK VWORD _V10vcore_Df64vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df64vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f64vector-length" };
VWEAK VWORD _V40_V10vcore_Df64vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorSet, NULL };
VWEAK VWORD _V10vcore_Df64vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df64vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f64vector-set!" };
VWEAK VWORD _V40_V10vcore_Df64vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorRef, NULL };
VWEAK VWORD _V10vcore_Df64vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df64vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f64vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf64vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF64Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f64vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__f64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF64Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__f64vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f64vector" };
VWEAK VWORD _V40_V10vcore_Df64vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Df64vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorP, NULL };
VWEAK VWORD _V10vcore_Df64vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df64vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f64vector\?" };
VWEAK VWORD _V40_V10vcore_Df64vector;
VWEAK VClosure _VW_V40_V10vcore_Df64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64Vector, NULL };
VWEAK VWORD _V10vcore_Df64vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Df64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.f64vector" };
VWEAK VWORD _V40_V10vcore_Dvector__length;
VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V10vcore_Dvector__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dvector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.vector-length" };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V10vcore_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dvector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.vector-set!" };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V10vcore_Dvector__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dvector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
VWEAK VWORD _V10vcore_Dmake__vector;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-vector" };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V10vcore_Dvector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.vector" };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V10vcore_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-cdr!" };
VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V10vcore_Dset__car_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-car!" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V10vcore_Dqcons;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.qcons" };
VWEAK VWORD _V40_V10vcore_Dunload__library;
VWEAK VClosure _VW_V40_V10vcore_Dunload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VUnloadLibrary2, NULL };
VWEAK VWORD _V10vcore_Dunload__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dunload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.unload-library" };
VWEAK VWORD _V40_V10vcore_Dload__library;
VWEAK VClosure _VW_V40_V10vcore_Dload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLoadLibrary2, NULL };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V40_V10vcore_Dmake__import;
VWEAK VClosure _VW_V40_V10vcore_Dmake__import = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeImport2, NULL };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V40_V10vcore_Dlookup__library;
VWEAK VClosure _VW_V40_V10vcore_Dlookup__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLookupLibrary2, NULL };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V40_V10vcore_Dmultidefine;
VWEAK VClosure _VW_V40_V10vcore_Dmultidefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiDefine2, NULL };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V40_V10vcore_Ddefine;
VWEAK VClosure _VW_V40_V10vcore_Ddefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V40_V10vcore_Dfunction;
VWEAK VClosure _VW_V40_V10vcore_Dfunction = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction2, NULL };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
VWEAK VWORD _V40_V10vcore_Drecord__length;
VWEAK VClosure _VW_V40_V10vcore_Drecord__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordLength2, NULL };
VWEAK VWORD _V10vcore_Drecord__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Drecord__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.record-length" };
VWEAK VWORD _V40_V10vcore_Drecord__set_B;
VWEAK VClosure _VW_V40_V10vcore_Drecord__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordSet2, NULL };
VWEAK VWORD _V10vcore_Drecord__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drecord__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.record-set!" };
VWEAK VWORD _V40_V10vcore_Drecord__ref;
VWEAK VClosure _VW_V40_V10vcore_Drecord__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordRef2, NULL };
VWEAK VWORD _V10vcore_Drecord__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Drecord__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.record-ref" };
VWEAK VWORD _V40_V10vcore_Drecord;
VWEAK VClosure _VW_V40_V10vcore_Drecord = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateRecord2, NULL };
VWEAK VWORD _V10vcore_Drecord;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Drecord = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.record" };
VWEAK VWORD _V40_V10vcore_Dset__global_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__global_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Dset__global_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dset__global_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.set-global!" };
VWEAK VWORD _V40_V10vcore_Ddefine__global;
VWEAK VClosure _VW_V40_V10vcore_Ddefine__global = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Ddefine__global;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ddefine__global = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.define-global" };
VWEAK VWORD _V40_V10vcore_Dexit;
VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V10vcore_Dexit;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dexit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.exit" };
VWEAK VWORD _V40_V10vcore_Dabort;
VWEAK VClosure _VW_V40_V10vcore_Dabort = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAbort2, NULL };
VWEAK VWORD _V10vcore_Dabort;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dabort = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.abort" };
VWEAK VWORD _V40_V10vcore_Dapply__cps;
VWEAK VClosure _VW_V40_V10vcore_Dapply__cps = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApplyCps, NULL };
VWEAK VWORD _V10vcore_Dapply__cps;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dapply__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.apply-cps" };
VWEAK VWORD _V40_V10vcore_Dapply;
VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V10vcore_Dapply;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.apply" };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;
VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;
VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
VWEAK VWORD _V40_V10vcore_Dnext;
VWEAK VClosure _VW_V40_V10vcore_Dnext = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNext2, NULL };
VWEAK VWORD _V10vcore_Dnext;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.next" };
VWEAK VWORD _V40_V10vcore_Draise;
VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
VWEAK VWORD _V10vcore_Draise;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Draise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.raise" };
VWEAK VWORD _V40_V10vcore_Dpop__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dpop__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dpop__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dpop__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.pop-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dpush__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dpush__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dpush__exception__handler;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Dpush__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.push-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dget__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dget__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dget__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dget__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.get-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dpop__dynamic;
VWEAK VClosure _VW_V40_V10vcore_Dpop__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopDynamic, NULL };
VWEAK VWORD _V10vcore_Dpop__dynamic;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dpop__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.pop-dynamic" };
VWEAK VWORD _V40_V10vcore_Dpush__dynamic;
VWEAK VClosure _VW_V40_V10vcore_Dpush__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushDynamic, NULL };
VWEAK VWORD _V10vcore_Dpush__dynamic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dpush__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.push-dynamic" };
VWEAK VWORD _V40_V10vcore_Dget__dynamics;
VWEAK VClosure _VW_V40_V10vcore_Dget__dynamics = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetDynamics, NULL };
VWEAK VWORD _V10vcore_Dget__dynamics;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dget__dynamics = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.get-dynamics" };
VWEAK VWORD _V40_V10vcore_Dnot;
VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Deqv_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Deqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.eqv\?" };
VWEAK VWORD _V40_V10vcore_Dblob_E_Q;
VWEAK VClosure _VW_V40_V10vcore_Dblob_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobEqv2, NULL };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_E_Q;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolEqv2, NULL };
VWEAK VWORD _V10vcore_Dsymbol_E_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dsymbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.symbol=\?" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V40_V10vcore_Dforeign__pointer_Q;
VWEAK VClosure _VW_V40_V10vcore_Dforeign__pointer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VForeignPointerP2, NULL };
VWEAK VWORD _V10vcore_Dforeign__pointer_Q;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dforeign__pointer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.foreign-pointer\?" };
VWEAK VWORD _V40_V10vcore_Dnullptr_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnullptr_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullptrP2, NULL };
VWEAK VWORD _V10vcore_Dnullptr_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dnullptr_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.nullptr\?" };
VWEAK VWORD _V40_V10vcore_Dvoid_Q;
VWEAK VClosure _VW_V40_V10vcore_Dvoid_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVoidP2, NULL };
VWEAK VWORD _V10vcore_Dvoid_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dvoid_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.void\?" };
VWEAK VWORD _V40_V10vcore_Dchar_Q;
VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V10vcore_Dchar_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dchar_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.char\?" };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;
VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V10vcore_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddouble_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.double\?" };
VWEAK VWORD _V40_V10vcore_Dint_Q;
VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V10vcore_Dint_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dint_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.int\?" };
VWEAK VWORD _V40_V10vcore_Dstring_Q;
VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V10vcore_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dsymbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.symbol\?" };
VWEAK VWORD _V40_V10vcore_Dblob_Q;
VWEAK VClosure _VW_V40_V10vcore_Dblob_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobP2, NULL };
VWEAK VWORD _V10vcore_Dblob_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dblob_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.blob\?" };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;
VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V10vcore_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dprocedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.procedure\?" };
VWEAK VWORD _V40_V10vcore_Drecord_Q;
VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
VWEAK VWORD _V10vcore_Drecord_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Drecord_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.record\?" };
VWEAK VWORD _V40_V10vcore_Dhash__table_Q;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableP, NULL };
VWEAK VWORD _V10vcore_Dhash__table_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dhash__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.hash-table\?" };
VWEAK VWORD _V40_V10vcore_Dvector_Q;
VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V10vcore_Dvector_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dvector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.vector\?" };
VWEAK VWORD _V40_V10vcore_Dpair_Q;
VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
VWEAK VWORD _V40_V10vcore_Dremainder;
VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V10vcore_Dremainder;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dremainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.remainder" };
VWEAK VWORD _V40_V10vcore_Dquotient;
VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V10vcore_Dquotient;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dquotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.quotient" };
VWEAK VWORD _V40_V10vcore_D_G;
VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V10vcore_D_G;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.>" };
VWEAK VWORD _V40_V10vcore_D_G_E;
VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V10vcore_D_G_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.>=" };
VWEAK VWORD _V40_V10vcore_D_E;
VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V10vcore_D_E;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.=" };
VWEAK VWORD _V40_V10vcore_D_L;
VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V10vcore_D_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.<" };
VWEAK VWORD _V40_V10vcore_D_L_E;
VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V10vcore_D_L_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.<=" };
VWEAK VWORD _V40_V10vcore_Dcmp;
VWEAK VClosure _VW_V40_V10vcore_Dcmp = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmp2, NULL };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V40_V10vcore_D_W;
VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V10vcore_D_W;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore./" };
VWEAK VWORD _V40_V10vcore_D_S;
VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V10vcore_D_S;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.*" };
VWEAK VWORD _V40_V10vcore_D__;
VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V10vcore_D__;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.-" };
VWEAK VWORD _V40_V10vcore_D_P;
VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V10vcore_D_P;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.+" };
VWEAK VWORD _V40_V10vcore_Dexact;
VWEAK VClosure _VW_V40_V10vcore_Dexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExact, NULL };
VWEAK VWORD _V10vcore_Dexact;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.exact" };
VWEAK VWORD _V40_V10vcore_Dinexact;
VWEAK VClosure _VW_V40_V10vcore_Dinexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VInexact, NULL };
VWEAK VWORD _V10vcore_Dinexact;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dinexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.inexact" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0is__basic__intrinsic_Q = VEncodePointer(VInternSymbol(-832470335, &_VW_V0is__basic__intrinsic_Q.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VInternSymbol(-127727763, &_VW_V0lookup__inline__name.sym), VPOINTER_OTHER);
  _V10vcore_Dregister__sigint = VEncodePointer(VInternSymbol(847283797, &_VW_V10vcore_Dregister__sigint.sym), VPOINTER_OTHER);
  _V10vcore_Dset__declare_B = VEncodePointer(VInternSymbol(940374228, &_VW_V10vcore_Dset__declare_B.sym), VPOINTER_OTHER);
  _V10vcore_Dfunction3 = VEncodePointer(VInternSymbol(-501529761, &_VW_V10vcore_Dfunction3.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbit__count = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbit__count", &_VW_V40_V10vcore_Dbit__count), VPOINTER_CLOSURE);
  _V10vcore_Dbit__count = VEncodePointer(VInternSymbol(700512465, &_VW_V10vcore_Dbit__count.sym), VPOINTER_OTHER);
  _V40_V10vcore_Darithmetic__shift = VEncodePointer(VLookupConstant("_V40_V10vcore_Darithmetic__shift", &_VW_V40_V10vcore_Darithmetic__shift), VPOINTER_CLOSURE);
  _V10vcore_Darithmetic__shift = VEncodePointer(VInternSymbol(1115370201, &_VW_V10vcore_Darithmetic__shift.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__orc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc2", &_VW_V40_V10vcore_Dbitwise__orc2), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__orc2 = VEncodePointer(VInternSymbol(1312963638, &_VW_V10vcore_Dbitwise__orc2.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__orc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc1", &_VW_V40_V10vcore_Dbitwise__orc1), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__orc1 = VEncodePointer(VInternSymbol(-1464552358, &_VW_V10vcore_Dbitwise__orc1.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__andc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc2", &_VW_V40_V10vcore_Dbitwise__andc2), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__andc2 = VEncodePointer(VInternSymbol(1145448127, &_VW_V10vcore_Dbitwise__andc2.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__andc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc1", &_VW_V40_V10vcore_Dbitwise__andc1), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__andc1 = VEncodePointer(VInternSymbol(819454810, &_VW_V10vcore_Dbitwise__andc1.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__nor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nor", &_VW_V40_V10vcore_Dbitwise__nor), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__nor = VEncodePointer(VInternSymbol(-1685079465, &_VW_V10vcore_Dbitwise__nor.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__nand = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nand", &_VW_V40_V10vcore_Dbitwise__nand), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__nand = VEncodePointer(VInternSymbol(-1295764500, &_VW_V10vcore_Dbitwise__nand.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__xnor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xnor", &_VW_V40_V10vcore_Dbitwise__xnor), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__xnor = VEncodePointer(VInternSymbol(1177501829, &_VW_V10vcore_Dbitwise__xnor.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__and = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__and", &_VW_V40_V10vcore_Dbitwise__and), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__and = VEncodePointer(VInternSymbol(-1896169105, &_VW_V10vcore_Dbitwise__and.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__xor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xor", &_VW_V40_V10vcore_Dbitwise__xor), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__xor = VEncodePointer(VInternSymbol(1245954163, &_VW_V10vcore_Dbitwise__xor.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__ior = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__ior", &_VW_V40_V10vcore_Dbitwise__ior), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__ior = VEncodePointer(VInternSymbol(-942170661, &_VW_V10vcore_Dbitwise__ior.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__not = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__not", &_VW_V40_V10vcore_Dbitwise__not), VPOINTER_CLOSURE);
  _V10vcore_Dbitwise__not = VEncodePointer(VInternSymbol(1865478194, &_VW_V10vcore_Dbitwise__not.sym), VPOINTER_OTHER);
  _V40_V10vcore_Djiffies__per__second = VEncodePointer(VLookupConstant("_V40_V10vcore_Djiffies__per__second", &_VW_V40_V10vcore_Djiffies__per__second), VPOINTER_CLOSURE);
  _V10vcore_Djiffies__per__second = VEncodePointer(VInternSymbol(471812165, &_VW_V10vcore_Djiffies__per__second.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcurrent__jiffy = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcurrent__jiffy", &_VW_V40_V10vcore_Dcurrent__jiffy), VPOINTER_CLOSURE);
  _V10vcore_Dcurrent__jiffy = VEncodePointer(VInternSymbol(671239984, &_VW_V10vcore_Dcurrent__jiffy.sym), VPOINTER_OTHER);
  _V40_V10vcore_Daccess = VEncodePointer(VLookupConstant("_V40_V10vcore_Daccess", &_VW_V40_V10vcore_Daccess), VPOINTER_CLOSURE);
  _V10vcore_Daccess = VEncodePointer(VInternSymbol(-102570934, &_VW_V10vcore_Daccess.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V10vcore_Dmake__temporary__file = VEncodePointer(VInternSymbol(-2135995161, &_VW_V10vcore_Dmake__temporary__file.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drealpath = VEncodePointer(VLookupConstant("_V40_V10vcore_Drealpath", &_VW_V40_V10vcore_Drealpath), VPOINTER_CLOSURE);
  _V10vcore_Drealpath = VEncodePointer(VInternSymbol(878551929, &_VW_V10vcore_Drealpath.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V10vcore_Dawait = VEncodePointer(VInternSymbol(-3363662, &_VW_V10vcore_Dawait.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V10vcore_Dasync = VEncodePointer(VInternSymbol(-2075391417, &_VW_V10vcore_Dasync.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V10vcore_Dfiber__fork__list = VEncodePointer(VInternSymbol(1220448136, &_VW_V10vcore_Dfiber__fork__list.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V10vcore_Drandom__advance_B = VEncodePointer(VInternSymbol(-243223548, &_VW_V10vcore_Drandom__advance_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VInternSymbol(1607740539, &_VW_V10vcore_Drandom__sample__float_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__bounded_B", &_VW_V40_V10vcore_Drandom__sample__bounded_B), VPOINTER_CLOSURE);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VInternSymbol(-894981541, &_VW_V10vcore_Drandom__sample__bounded_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample_B", &_VW_V40_V10vcore_Drandom__sample_B), VPOINTER_CLOSURE);
  _V10vcore_Drandom__sample_B = VEncodePointer(VInternSymbol(-952916642, &_VW_V10vcore_Drandom__sample_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V10vcore_Drandom__copy = VEncodePointer(VInternSymbol(-188815275, &_VW_V10vcore_Drandom__copy.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V10vcore_Dmake__random = VEncodePointer(VInternSymbol(1229194915, &_VW_V10vcore_Dmake__random.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V10vcore_Dcommand__line = VEncodePointer(VInternSymbol(648817384, &_VW_V10vcore_Dcommand__line.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V10vcore_Dopen__output__process = VEncodePointer(VInternSymbol(-882281378, &_VW_V10vcore_Dopen__output__process.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V10vcore_Dopen__input__process = VEncodePointer(VInternSymbol(-1182050525, &_VW_V10vcore_Dopen__input__process.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V10vcore_Dsystem = VEncodePointer(VInternSymbol(935667990, &_VW_V10vcore_Dsystem.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dyield__to__host__major = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host__major", &_VW_V40_V10vcore_Dyield__to__host__major), VPOINTER_CLOSURE);
  _V10vcore_Dyield__to__host__major = VEncodePointer(VInternSymbol(1829697112, &_VW_V10vcore_Dyield__to__host__major.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dyield__to__host = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host", &_VW_V40_V10vcore_Dyield__to__host), VPOINTER_CLOSURE);
  _V10vcore_Dyield__to__host = VEncodePointer(VInternSymbol(282732110, &_VW_V10vcore_Dyield__to__host.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dgarbage__collect = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgarbage__collect", &_VW_V40_V10vcore_Dgarbage__collect), VPOINTER_CLOSURE);
  _V10vcore_Dgarbage__collect = VEncodePointer(VInternSymbol(-1978291771, &_VW_V10vcore_Dgarbage__collect.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dfinalize_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfinalize_B", &_VW_V40_V10vcore_Dfinalize_B), VPOINTER_CLOSURE);
  _V10vcore_Dfinalize_B = VEncodePointer(VInternSymbol(846452306, &_VW_V10vcore_Dfinalize_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhas__finalizer_Q", &_VW_V40_V10vcore_Dhas__finalizer_Q), VPOINTER_CLOSURE);
  _V10vcore_Dhas__finalizer_Q = VEncodePointer(VInternSymbol(-965442188, &_VW_V10vcore_Dhas__finalizer_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__finalizer_B", &_VW_V40_V10vcore_Dset__finalizer_B), VPOINTER_CLOSURE);
  _V10vcore_Dset__finalizer_B = VEncodePointer(VInternSymbol(1182306547, &_VW_V10vcore_Dset__finalizer_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnewline__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline__stdout", &_VW_V40_V10vcore_Dnewline__stdout), VPOINTER_CLOSURE);
  _V10vcore_Dnewline__stdout = VEncodePointer(VInternSymbol(2087695336, &_VW_V10vcore_Dnewline__stdout.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dwrite__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite__stdout", &_VW_V40_V10vcore_Dwrite__stdout), VPOINTER_CLOSURE);
  _V10vcore_Dwrite__stdout = VEncodePointer(VInternSymbol(415233662, &_VW_V10vcore_Dwrite__stdout.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddisplay__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__stdout", &_VW_V40_V10vcore_Ddisplay__stdout), VPOINTER_CLOSURE);
  _V10vcore_Ddisplay__stdout = VEncodePointer(VInternSymbol(1962598561, &_VW_V10vcore_Ddisplay__stdout.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnewline = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline", &_VW_V40_V10vcore_Dnewline), VPOINTER_CLOSURE);
  _V10vcore_Dnewline = VEncodePointer(VInternSymbol(1495081256, &_VW_V10vcore_Dnewline.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dwrite = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite", &_VW_V40_V10vcore_Dwrite), VPOINTER_CLOSURE);
  _V10vcore_Dwrite = VEncodePointer(VInternSymbol(470178830, &_VW_V10vcore_Dwrite.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddisplay__word = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__word", &_VW_V40_V10vcore_Ddisplay__word), VPOINTER_CLOSURE);
  _V10vcore_Ddisplay__word = VEncodePointer(VInternSymbol(1671076545, &_VW_V10vcore_Ddisplay__word.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dread = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread", &_VW_V40_V10vcore_Dread), VPOINTER_CLOSURE);
  _V10vcore_Dread = VEncodePointer(VInternSymbol(2066060051, &_VW_V10vcore_Dread.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dread__line2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line2", &_VW_V40_V10vcore_Dread__line2), VPOINTER_CLOSURE);
  _V10vcore_Dread__line2 = VEncodePointer(VInternSymbol(-368957830, &_VW_V10vcore_Dread__line2.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dread__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line", &_VW_V40_V10vcore_Dread__line), VPOINTER_CLOSURE);
  _V10vcore_Dread__line = VEncodePointer(VInternSymbol(756554351, &_VW_V10vcore_Dread__line.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dread__char = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__char", &_VW_V40_V10vcore_Dread__char), VPOINTER_CLOSURE);
  _V10vcore_Dread__char = VEncodePointer(VInternSymbol(48955712, &_VW_V10vcore_Dread__char.sym), VPOINTER_OTHER);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V10vcore_Deof__object_Q = VEncodePointer(VInternSymbol(1702741960, &_VW_V10vcore_Deof__object_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V10vcore_Dget__output__string = VEncodePointer(VInternSymbol(-1029405022, &_VW_V10vcore_Dget__output__string.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__string", &_VW_V40_V10vcore_Dopen__output__string), VPOINTER_CLOSURE);
  _V10vcore_Dopen__output__string = VEncodePointer(VInternSymbol(-1362250334, &_VW_V10vcore_Dopen__output__string.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dtty__port_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dtty__port_Q", &_VW_V40_V10vcore_Dtty__port_Q), VPOINTER_CLOSURE);
  _V10vcore_Dtty__port_Q = VEncodePointer(VInternSymbol(-855771870, &_VW_V10vcore_Dtty__port_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V10vcore_Dclose__stream = VEncodePointer(VInternSymbol(568955533, &_VW_V10vcore_Dclose__stream.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__output__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__stream", &_VW_V40_V10vcore_Dopen__output__stream), VPOINTER_CLOSURE);
  _V10vcore_Dopen__output__stream = VEncodePointer(VInternSymbol(997507113, &_VW_V10vcore_Dopen__output__stream.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__input__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__stream", &_VW_V40_V10vcore_Dopen__input__stream), VPOINTER_CLOSURE);
  _V10vcore_Dopen__input__stream = VEncodePointer(VInternSymbol(-1954281109, &_VW_V10vcore_Dopen__input__stream.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddup__stderr = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stderr", &_VW_V40_V10vcore_Ddup__stderr), VPOINTER_CLOSURE);
  _V10vcore_Ddup__stderr = VEncodePointer(VInternSymbol(-1558335369, &_VW_V10vcore_Ddup__stderr.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddup__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stdout", &_VW_V40_V10vcore_Ddup__stdout), VPOINTER_CLOSURE);
  _V10vcore_Ddup__stdout = VEncodePointer(VInternSymbol(1431711582, &_VW_V10vcore_Ddup__stdout.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddup__stdin = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stdin", &_VW_V40_V10vcore_Ddup__stdin), VPOINTER_CLOSURE);
  _V10vcore_Ddup__stdin = VEncodePointer(VInternSymbol(1769759438, &_VW_V10vcore_Ddup__stdin.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstderr___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstderr___Gport", &_VW_V40_V10vcore_Dstderr___Gport), VPOINTER_CLOSURE);
  _V10vcore_Dstderr___Gport = VEncodePointer(VInternSymbol(1200150723, &_VW_V10vcore_Dstderr___Gport.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstdout___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdout___Gport", &_VW_V40_V10vcore_Dstdout___Gport), VPOINTER_CLOSURE);
  _V10vcore_Dstdout___Gport = VEncodePointer(VInternSymbol(26194562, &_VW_V10vcore_Dstdout___Gport.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstdin___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdin___Gport", &_VW_V40_V10vcore_Dstdin___Gport), VPOINTER_CLOSURE);
  _V10vcore_Dstdin___Gport = VEncodePointer(VInternSymbol(787036741, &_VW_V10vcore_Dstdin___Gport.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dinteger___Gchar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinteger___Gchar", &_VW_V40_V10vcore_Dinteger___Gchar), VPOINTER_CLOSURE);
  _V10vcore_Dinteger___Gchar = VEncodePointer(VInternSymbol(-225562773, &_VW_V10vcore_Dinteger___Gchar.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V10vcore_Dchar__integer = VEncodePointer(VInternSymbol(-1709202038, &_VW_V10vcore_Dchar__integer.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V10vcore_Dgensym = VEncodePointer(VInternSymbol(-156380267, &_VW_V10vcore_Dgensym.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V10vcore_Dsymbol___Gstring = VEncodePointer(VInternSymbol(-1755717450, &_VW_V10vcore_Dsymbol___Gstring.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V10vcore_Dstring___Gnumber = VEncodePointer(VInternSymbol(1464887667, &_VW_V10vcore_Dstring___Gnumber.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V10vcore_Dstring___Gsymbol = VEncodePointer(VInternSymbol(653165939, &_VW_V10vcore_Dstring___Gsymbol.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V10vcore_Dstring__length = VEncodePointer(VInternSymbol(-1892902993, &_VW_V10vcore_Dstring__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V10vcore_Dstring__set_B = VEncodePointer(VInternSymbol(61416737, &_VW_V10vcore_Dstring__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V10vcore_Dstring__ref = VEncodePointer(VInternSymbol(1934412251, &_VW_V10vcore_Dstring__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V10vcore_Dstring__copy_B = VEncodePointer(VInternSymbol(1008644500, &_VW_V10vcore_Dstring__copy_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V10vcore_Dsubstring = VEncodePointer(VInternSymbol(-1499057758, &_VW_V10vcore_Dsubstring.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V10vcore_Dmake__string = VEncodePointer(VInternSymbol(-812690547, &_VW_V10vcore_Dmake__string.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__delete_B = VEncodePointer(VInternSymbol(235301299, &_VW_V10vcore_Dhash__table__delete_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__set_B", &_VW_V40_V10vcore_Dhash__table__set_B), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__set_B = VEncodePointer(VInternSymbol(-1127922867, &_VW_V10vcore_Dhash__table__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__ref", &_VW_V40_V10vcore_Dhash__table__ref), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__ref = VEncodePointer(VInternSymbol(962111802, &_VW_V10vcore_Dhash__table__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__vector", &_VW_V40_V10vcore_Dhash__table__vector), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__vector = VEncodePointer(VInternSymbol(1800956393, &_VW_V10vcore_Dhash__table__vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VInternSymbol(-65977091, &_VW_V10vcore_Dhash__table__hash__function.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VInternSymbol(560212050, &_VW_V10vcore_Dhash__table__equivalence__function.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__hash__table", &_VW_V40_V10vcore_Dmake__hash__table), VPOINTER_CLOSURE);
  _V10vcore_Dmake__hash__table = VEncodePointer(VInternSymbol(264423349, &_VW_V10vcore_Dmake__hash__table.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dread__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__u8vector", &_VW_V40_V10vcore_Dread__u8vector), VPOINTER_CLOSURE);
  _V10vcore_Dread__u8vector = VEncodePointer(VInternSymbol(1918205805, &_VW_V10vcore_Dread__u8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__length", &_VW_V40_V10vcore_Ds8vector__length), VPOINTER_CLOSURE);
  _V10vcore_Ds8vector__length = VEncodePointer(VInternSymbol(-162998119, &_VW_V10vcore_Ds8vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__set_B", &_VW_V40_V10vcore_Ds8vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Ds8vector__set_B = VEncodePointer(VInternSymbol(626079132, &_VW_V10vcore_Ds8vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__ref", &_VW_V40_V10vcore_Ds8vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Ds8vector__ref = VEncodePointer(VInternSymbol(-1870319227, &_VW_V10vcore_Ds8vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs8vector", &_VW_V40_V10vcore_Dlist___Gs8vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VInternSymbol(-1495667680, &_VW_V10vcore_Dlist___Gs8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__s8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s8vector", &_VW_V40_V10vcore_Dmake__s8vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__s8vector = VEncodePointer(VInternSymbol(-340586998, &_VW_V10vcore_Dmake__s8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector_Q", &_VW_V40_V10vcore_Ds8vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Ds8vector_Q = VEncodePointer(VInternSymbol(1757266961, &_VW_V10vcore_Ds8vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector", &_VW_V40_V10vcore_Ds8vector), VPOINTER_CLOSURE);
  _V10vcore_Ds8vector = VEncodePointer(VInternSymbol(1166815344, &_VW_V10vcore_Ds8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__length", &_VW_V40_V10vcore_Du8vector__length), VPOINTER_CLOSURE);
  _V10vcore_Du8vector__length = VEncodePointer(VInternSymbol(1393581960, &_VW_V10vcore_Du8vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__set_B", &_VW_V40_V10vcore_Du8vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Du8vector__set_B = VEncodePointer(VInternSymbol(-984050941, &_VW_V10vcore_Du8vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__ref", &_VW_V40_V10vcore_Du8vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Du8vector__ref = VEncodePointer(VInternSymbol(-1146944916, &_VW_V10vcore_Du8vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gu8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu8vector", &_VW_V40_V10vcore_Dlist___Gu8vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VInternSymbol(-398660499, &_VW_V10vcore_Dlist___Gu8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u8vector", &_VW_V40_V10vcore_Dmake__u8vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__u8vector = VEncodePointer(VInternSymbol(-1141430116, &_VW_V10vcore_Dmake__u8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector_Q", &_VW_V40_V10vcore_Du8vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Du8vector_Q = VEncodePointer(VInternSymbol(456948252, &_VW_V10vcore_Du8vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector", &_VW_V40_V10vcore_Du8vector), VPOINTER_CLOSURE);
  _V10vcore_Du8vector = VEncodePointer(VInternSymbol(2084266384, &_VW_V10vcore_Du8vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__length", &_VW_V40_V10vcore_Ds16vector__length), VPOINTER_CLOSURE);
  _V10vcore_Ds16vector__length = VEncodePointer(VInternSymbol(-727070483, &_VW_V10vcore_Ds16vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__set_B", &_VW_V40_V10vcore_Ds16vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Ds16vector__set_B = VEncodePointer(VInternSymbol(-1250451481, &_VW_V10vcore_Ds16vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__ref", &_VW_V40_V10vcore_Ds16vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Ds16vector__ref = VEncodePointer(VInternSymbol(-122569208, &_VW_V10vcore_Ds16vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs16vector", &_VW_V40_V10vcore_Dlist___Gs16vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VInternSymbol(-604043574, &_VW_V10vcore_Dlist___Gs16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__s16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s16vector", &_VW_V40_V10vcore_Dmake__s16vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__s16vector = VEncodePointer(VInternSymbol(-1689014685, &_VW_V10vcore_Dmake__s16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector_Q", &_VW_V40_V10vcore_Ds16vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Ds16vector_Q = VEncodePointer(VInternSymbol(-1488392107, &_VW_V10vcore_Ds16vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector", &_VW_V40_V10vcore_Ds16vector), VPOINTER_CLOSURE);
  _V10vcore_Ds16vector = VEncodePointer(VInternSymbol(1282603556, &_VW_V10vcore_Ds16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__length", &_VW_V40_V10vcore_Du16vector__length), VPOINTER_CLOSURE);
  _V10vcore_Du16vector__length = VEncodePointer(VInternSymbol(-1697358903, &_VW_V10vcore_Du16vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__set_B", &_VW_V40_V10vcore_Du16vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Du16vector__set_B = VEncodePointer(VInternSymbol(1946309558, &_VW_V10vcore_Du16vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__ref", &_VW_V40_V10vcore_Du16vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Du16vector__ref = VEncodePointer(VInternSymbol(-776529331, &_VW_V10vcore_Du16vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gu16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu16vector", &_VW_V40_V10vcore_Dlist___Gu16vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VInternSymbol(-288736869, &_VW_V10vcore_Dlist___Gu16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__u16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u16vector", &_VW_V40_V10vcore_Dmake__u16vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__u16vector = VEncodePointer(VInternSymbol(-912694225, &_VW_V10vcore_Dmake__u16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector_Q", &_VW_V40_V10vcore_Du16vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Du16vector_Q = VEncodePointer(VInternSymbol(1581038774, &_VW_V10vcore_Du16vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector", &_VW_V40_V10vcore_Du16vector), VPOINTER_CLOSURE);
  _V10vcore_Du16vector = VEncodePointer(VInternSymbol(-106839034, &_VW_V10vcore_Du16vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__length", &_VW_V40_V10vcore_Ds32vector__length), VPOINTER_CLOSURE);
  _V10vcore_Ds32vector__length = VEncodePointer(VInternSymbol(1983587795, &_VW_V10vcore_Ds32vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__set_B", &_VW_V40_V10vcore_Ds32vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Ds32vector__set_B = VEncodePointer(VInternSymbol(-93372752, &_VW_V10vcore_Ds32vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__ref", &_VW_V40_V10vcore_Ds32vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Ds32vector__ref = VEncodePointer(VInternSymbol(2094752532, &_VW_V10vcore_Ds32vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs32vector", &_VW_V40_V10vcore_Dlist___Gs32vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VInternSymbol(-1792200977, &_VW_V10vcore_Dlist___Gs32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__s32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s32vector", &_VW_V40_V10vcore_Dmake__s32vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__s32vector = VEncodePointer(VInternSymbol(-339457972, &_VW_V10vcore_Dmake__s32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector_Q", &_VW_V40_V10vcore_Ds32vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Ds32vector_Q = VEncodePointer(VInternSymbol(533915332, &_VW_V10vcore_Ds32vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector", &_VW_V40_V10vcore_Ds32vector), VPOINTER_CLOSURE);
  _V10vcore_Ds32vector = VEncodePointer(VInternSymbol(-826393434, &_VW_V10vcore_Ds32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__length", &_VW_V40_V10vcore_Df32vector__length), VPOINTER_CLOSURE);
  _V10vcore_Df32vector__length = VEncodePointer(VInternSymbol(-1972159185, &_VW_V10vcore_Df32vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__set_B", &_VW_V40_V10vcore_Df32vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Df32vector__set_B = VEncodePointer(VInternSymbol(1089212958, &_VW_V10vcore_Df32vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__ref", &_VW_V40_V10vcore_Df32vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Df32vector__ref = VEncodePointer(VInternSymbol(252270527, &_VW_V10vcore_Df32vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gf32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf32vector", &_VW_V40_V10vcore_Dlist___Gf32vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VInternSymbol(-797019339, &_VW_V10vcore_Dlist___Gf32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__f32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f32vector", &_VW_V40_V10vcore_Dmake__f32vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__f32vector = VEncodePointer(VInternSymbol(-1013795764, &_VW_V10vcore_Dmake__f32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector_Q", &_VW_V40_V10vcore_Df32vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Df32vector_Q = VEncodePointer(VInternSymbol(-817990383, &_VW_V10vcore_Df32vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector", &_VW_V40_V10vcore_Df32vector), VPOINTER_CLOSURE);
  _V10vcore_Df32vector = VEncodePointer(VInternSymbol(417631813, &_VW_V10vcore_Df32vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__length", &_VW_V40_V10vcore_Df64vector__length), VPOINTER_CLOSURE);
  _V10vcore_Df64vector__length = VEncodePointer(VInternSymbol(-1894634683, &_VW_V10vcore_Df64vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__set_B", &_VW_V40_V10vcore_Df64vector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Df64vector__set_B = VEncodePointer(VInternSymbol(1969529339, &_VW_V10vcore_Df64vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__ref", &_VW_V40_V10vcore_Df64vector__ref), VPOINTER_CLOSURE);
  _V10vcore_Df64vector__ref = VEncodePointer(VInternSymbol(1036348913, &_VW_V10vcore_Df64vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gf64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf64vector", &_VW_V40_V10vcore_Dlist___Gf64vector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VInternSymbol(-1111467472, &_VW_V10vcore_Dlist___Gf64vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__f64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f64vector", &_VW_V40_V10vcore_Dmake__f64vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__f64vector = VEncodePointer(VInternSymbol(829175144, &_VW_V10vcore_Dmake__f64vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector_Q", &_VW_V40_V10vcore_Df64vector_Q), VPOINTER_CLOSURE);
  _V10vcore_Df64vector_Q = VEncodePointer(VInternSymbol(1475204336, &_VW_V10vcore_Df64vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector", &_VW_V40_V10vcore_Df64vector), VPOINTER_CLOSURE);
  _V10vcore_Df64vector = VEncodePointer(VInternSymbol(-1067922825, &_VW_V10vcore_Df64vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V10vcore_Dvector__length = VEncodePointer(VInternSymbol(2016980216, &_VW_V10vcore_Dvector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V10vcore_Dvector__set_B = VEncodePointer(VInternSymbol(1062100534, &_VW_V10vcore_Dvector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V10vcore_Dvector__ref = VEncodePointer(VInternSymbol(-487754107, &_VW_V10vcore_Dvector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V10vcore_Dlist___Gvector = VEncodePointer(VInternSymbol(484282061, &_VW_V10vcore_Dlist___Gvector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V10vcore_Dmake__vector = VEncodePointer(VInternSymbol(-912906856, &_VW_V10vcore_Dmake__vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V10vcore_Dvector = VEncodePointer(VInternSymbol(-1789602761, &_VW_V10vcore_Dvector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V10vcore_Dset__cdr_B = VEncodePointer(VInternSymbol(-1721050845, &_VW_V10vcore_Dset__cdr_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V10vcore_Dset__car_B = VEncodePointer(VInternSymbol(1079502229, &_VW_V10vcore_Dset__car_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V10vcore_Dcdr = VEncodePointer(VInternSymbol(-1160051211, &_VW_V10vcore_Dcdr.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V10vcore_Dcar = VEncodePointer(VInternSymbol(976741304, &_VW_V10vcore_Dcar.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V10vcore_Dqcons = VEncodePointer(VInternSymbol(-1450939338, &_VW_V10vcore_Dqcons.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dunload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dunload__library", &_VW_V40_V10vcore_Dunload__library), VPOINTER_CLOSURE);
  _V10vcore_Dunload__library = VEncodePointer(VInternSymbol(514499771, &_VW_V10vcore_Dunload__library.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dload__library", &_VW_V40_V10vcore_Dload__library), VPOINTER_CLOSURE);
  _V10vcore_Dload__library = VEncodePointer(VInternSymbol(-798060666, &_VW_V10vcore_Dload__library.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__import", &_VW_V40_V10vcore_Dmake__import), VPOINTER_CLOSURE);
  _V10vcore_Dmake__import = VEncodePointer(VInternSymbol(-743613550, &_VW_V10vcore_Dmake__import.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlookup__library", &_VW_V40_V10vcore_Dlookup__library), VPOINTER_CLOSURE);
  _V10vcore_Dlookup__library = VEncodePointer(VInternSymbol(891695491, &_VW_V10vcore_Dlookup__library.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmultidefine", &_VW_V40_V10vcore_Dmultidefine), VPOINTER_CLOSURE);
  _V10vcore_Dmultidefine = VEncodePointer(VInternSymbol(2021955755, &_VW_V10vcore_Dmultidefine.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine", &_VW_V40_V10vcore_Ddefine), VPOINTER_CLOSURE);
  _V10vcore_Ddefine = VEncodePointer(VInternSymbol(-65267310, &_VW_V10vcore_Ddefine.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfunction", &_VW_V40_V10vcore_Dfunction), VPOINTER_CLOSURE);
  _V10vcore_Dfunction = VEncodePointer(VInternSymbol(995907794, &_VW_V10vcore_Dfunction.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__length", &_VW_V40_V10vcore_Drecord__length), VPOINTER_CLOSURE);
  _V10vcore_Drecord__length = VEncodePointer(VInternSymbol(-1182838825, &_VW_V10vcore_Drecord__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__set_B", &_VW_V40_V10vcore_Drecord__set_B), VPOINTER_CLOSURE);
  _V10vcore_Drecord__set_B = VEncodePointer(VInternSymbol(520756061, &_VW_V10vcore_Drecord__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__ref", &_VW_V40_V10vcore_Drecord__ref), VPOINTER_CLOSURE);
  _V10vcore_Drecord__ref = VEncodePointer(VInternSymbol(617706384, &_VW_V10vcore_Drecord__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drecord = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord", &_VW_V40_V10vcore_Drecord), VPOINTER_CLOSURE);
  _V10vcore_Drecord = VEncodePointer(VInternSymbol(743129318, &_VW_V10vcore_Drecord.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__global_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__global_B", &_VW_V40_V10vcore_Dset__global_B), VPOINTER_CLOSURE);
  _V10vcore_Dset__global_B = VEncodePointer(VInternSymbol(-121985904, &_VW_V10vcore_Dset__global_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddefine__global = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine__global", &_VW_V40_V10vcore_Ddefine__global), VPOINTER_CLOSURE);
  _V10vcore_Ddefine__global = VEncodePointer(VInternSymbol(-346187274, &_VW_V10vcore_Ddefine__global.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V10vcore_Dexit = VEncodePointer(VInternSymbol(1029128203, &_VW_V10vcore_Dexit.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dabort = VEncodePointer(VLookupConstant("_V40_V10vcore_Dabort", &_VW_V40_V10vcore_Dabort), VPOINTER_CLOSURE);
  _V10vcore_Dabort = VEncodePointer(VInternSymbol(-2005265993, &_VW_V10vcore_Dabort.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dapply__cps = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply__cps", &_VW_V40_V10vcore_Dapply__cps), VPOINTER_CLOSURE);
  _V10vcore_Dapply__cps = VEncodePointer(VInternSymbol(1050237310, &_VW_V10vcore_Dapply__cps.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V10vcore_Dapply = VEncodePointer(VInternSymbol(1029936291, &_VW_V10vcore_Dapply.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V10vcore_Dcall_Wcc = VEncodePointer(VInternSymbol(482979242, &_VW_V10vcore_Dcall_Wcc.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnext = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnext", &_VW_V40_V10vcore_Dnext), VPOINTER_CLOSURE);
  _V10vcore_Dnext = VEncodePointer(VInternSymbol(-652201311, &_VW_V10vcore_Dnext.sym), VPOINTER_OTHER);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V10vcore_Draise = VEncodePointer(VInternSymbol(1209083558, &_VW_V10vcore_Draise.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpop__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__exception__handler", &_VW_V40_V10vcore_Dpop__exception__handler), VPOINTER_CLOSURE);
  _V10vcore_Dpop__exception__handler = VEncodePointer(VInternSymbol(1091879845, &_VW_V10vcore_Dpop__exception__handler.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpush__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__exception__handler", &_VW_V40_V10vcore_Dpush__exception__handler), VPOINTER_CLOSURE);
  _V10vcore_Dpush__exception__handler = VEncodePointer(VInternSymbol(220440008, &_VW_V10vcore_Dpush__exception__handler.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dget__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__exception__handler", &_VW_V40_V10vcore_Dget__exception__handler), VPOINTER_CLOSURE);
  _V10vcore_Dget__exception__handler = VEncodePointer(VInternSymbol(636545418, &_VW_V10vcore_Dget__exception__handler.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpop__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__dynamic", &_VW_V40_V10vcore_Dpop__dynamic), VPOINTER_CLOSURE);
  _V10vcore_Dpop__dynamic = VEncodePointer(VInternSymbol(-1981597861, &_VW_V10vcore_Dpop__dynamic.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpush__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__dynamic", &_VW_V40_V10vcore_Dpush__dynamic), VPOINTER_CLOSURE);
  _V10vcore_Dpush__dynamic = VEncodePointer(VInternSymbol(1879853356, &_VW_V10vcore_Dpush__dynamic.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dget__dynamics = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__dynamics", &_VW_V40_V10vcore_Dget__dynamics), VPOINTER_CLOSURE);
  _V10vcore_Dget__dynamics = VEncodePointer(VInternSymbol(-905110170, &_VW_V10vcore_Dget__dynamics.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V10vcore_Dnot = VEncodePointer(VInternSymbol(904118690, &_VW_V10vcore_Dnot.sym), VPOINTER_OTHER);
  _V10vcore_Deqv_Q = VEncodePointer(VInternSymbol(-1972763382, &_VW_V10vcore_Deqv_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_E_Q", &_VW_V40_V10vcore_Dblob_E_Q), VPOINTER_CLOSURE);
  _V10vcore_Dblob_E_Q = VEncodePointer(VInternSymbol(36075437, &_VW_V10vcore_Dblob_E_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_E_Q", &_VW_V40_V10vcore_Dsymbol_E_Q), VPOINTER_CLOSURE);
  _V10vcore_Dsymbol_E_Q = VEncodePointer(VInternSymbol(1730793190, &_VW_V10vcore_Dsymbol_E_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10vcore_Deq_Q = VEncodePointer(VInternSymbol(434979212, &_VW_V10vcore_Deq_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dforeign__pointer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dforeign__pointer_Q", &_VW_V40_V10vcore_Dforeign__pointer_Q), VPOINTER_CLOSURE);
  _V10vcore_Dforeign__pointer_Q = VEncodePointer(VInternSymbol(1994122350, &_VW_V10vcore_Dforeign__pointer_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnullptr_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnullptr_Q", &_VW_V40_V10vcore_Dnullptr_Q), VPOINTER_CLOSURE);
  _V10vcore_Dnullptr_Q = VEncodePointer(VInternSymbol(-1069195546, &_VW_V10vcore_Dnullptr_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvoid_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvoid_Q", &_VW_V40_V10vcore_Dvoid_Q), VPOINTER_CLOSURE);
  _V10vcore_Dvoid_Q = VEncodePointer(VInternSymbol(1114669637, &_VW_V10vcore_Dvoid_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V10vcore_Dchar_Q = VEncodePointer(VInternSymbol(1043052971, &_VW_V10vcore_Dchar_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V10vcore_Ddouble_Q = VEncodePointer(VInternSymbol(-751088721, &_VW_V10vcore_Ddouble_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V10vcore_Dint_Q = VEncodePointer(VInternSymbol(-1033406073, &_VW_V10vcore_Dint_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V10vcore_Dstring_Q = VEncodePointer(VInternSymbol(-1296233363, &_VW_V10vcore_Dstring_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V10vcore_Dsymbol_Q = VEncodePointer(VInternSymbol(1503200735, &_VW_V10vcore_Dsymbol_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_Q", &_VW_V40_V10vcore_Dblob_Q), VPOINTER_CLOSURE);
  _V10vcore_Dblob_Q = VEncodePointer(VInternSymbol(-854351002, &_VW_V10vcore_Dblob_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V10vcore_Dprocedure_Q = VEncodePointer(VInternSymbol(-1159898044, &_VW_V10vcore_Dprocedure_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
  _V10vcore_Drecord_Q = VEncodePointer(VInternSymbol(1032511328, &_VW_V10vcore_Drecord_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table_Q", &_VW_V40_V10vcore_Dhash__table_Q), VPOINTER_CLOSURE);
  _V10vcore_Dhash__table_Q = VEncodePointer(VInternSymbol(1037822878, &_VW_V10vcore_Dhash__table_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V10vcore_Dvector_Q = VEncodePointer(VInternSymbol(1615080895, &_VW_V10vcore_Dvector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V10vcore_Dpair_Q = VEncodePointer(VInternSymbol(-2140366458, &_VW_V10vcore_Dpair_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V10vcore_Dnull_Q = VEncodePointer(VInternSymbol(-577062031, &_VW_V10vcore_Dnull_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V10vcore_Dremainder = VEncodePointer(VInternSymbol(1852746574, &_VW_V10vcore_Dremainder.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V10vcore_Dquotient = VEncodePointer(VInternSymbol(-885327668, &_VW_V10vcore_Dquotient.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V10vcore_D_G = VEncodePointer(VInternSymbol(2034575128, &_VW_V10vcore_D_G.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V10vcore_D_G_E = VEncodePointer(VInternSymbol(-649527264, &_VW_V10vcore_D_G_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V10vcore_D_E = VEncodePointer(VInternSymbol(-1575520747, &_VW_V10vcore_D_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V10vcore_D_L = VEncodePointer(VInternSymbol(1686200305, &_VW_V10vcore_D_L.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V10vcore_D_L_E = VEncodePointer(VInternSymbol(-443834917, &_VW_V10vcore_D_L_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcmp", &_VW_V40_V10vcore_Dcmp), VPOINTER_CLOSURE);
  _V10vcore_Dcmp = VEncodePointer(VInternSymbol(499420365, &_VW_V10vcore_Dcmp.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V10vcore_D_W = VEncodePointer(VInternSymbol(-1214622260, &_VW_V10vcore_D_W.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V10vcore_D_S = VEncodePointer(VInternSymbol(324676011, &_VW_V10vcore_D_S.sym), VPOINTER_OTHER);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V10vcore_D__ = VEncodePointer(VInternSymbol(861910462, &_VW_V10vcore_D__.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V10vcore_D_P = VEncodePointer(VInternSymbol(419804493, &_VW_V10vcore_D_P.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexact", &_VW_V40_V10vcore_Dexact), VPOINTER_CLOSURE);
  _V10vcore_Dexact = VEncodePointer(VInternSymbol(1125478527, &_VW_V10vcore_Dexact.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V10vcore_Dinexact = VEncodePointer(VInternSymbol(683811701, &_VW_V10vcore_Dinexact.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__inline__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, _var0, _var1);
static void _V0vanity_V0intrinsics_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.19 2 0) (##string ##.string.527) (bruijn ##.x.20 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D527.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0intrinsics_V20_V0k2) (bruijn ##.x.21 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0intrinsics_V20_V0k1) (##string ##.string.528))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D528.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.229 1 0) ((bruijn ##.k.230 0 0) (bruijn ##.p.229 1 0)) ((bruijn ##.k.230 0 0) (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.qcons)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dqcons));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.85 0 0) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.cons)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.car) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.car)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.cdr) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.cdr)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.set-car!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.set-car!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.set-cdr!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.set-cdr!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f64vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f64vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f64vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f64vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-f64vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-f64vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->f64vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->f64vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f64vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f64vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f64vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f64vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f64vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f64vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f32vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f32vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-f32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-f32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->f32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->f32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f32vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f32vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f32vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f32vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.f32vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.f32vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s32vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s32vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-s32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-s32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->s32vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->s32vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s32vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s32vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s32vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s32vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s32vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s32vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u16vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u16vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-u16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-u16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->u16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->u16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u16vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u16vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u16vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u16vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u16vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u16vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s16vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s16vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-s16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-s16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->s16vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->s16vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s16vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s16vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s16vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s16vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s16vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s16vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u8vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u8vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-u8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-u8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->u8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->u8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u8vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u8vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u8vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u8vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.u8vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.u8vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s8vector?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s8vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-s8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-s8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.list->s8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.list->s8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s8vector-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s8vector-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s8vector-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s8vector-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.s8vector-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.s8vector-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.read-u8vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.read-u8vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.record) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.record)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.record-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.record-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.record-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.record-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.record-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.record-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-hash-table) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-hash-table)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-equivalence-function) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-equivalence-function)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-hash-function) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-hash-function)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-vector) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-vector)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.hash-table-delete!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.hash-table-delete!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-string) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-string)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.substring) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.substring)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string-copy!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string-copy!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string-ref) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string-set!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string-length) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string->symbol) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string->symbol)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.string->number) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.string->number)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.symbol->string) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.symbol->string)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.gensym) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.gensym)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.char-integer) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.char-integer)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.integer->char) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.integer->char)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.stdin->port) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.stdin->port)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.stdout->port) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.stdout->port)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.stderr->port) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.stderr->port)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.dup-stdin) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.dup-stdin)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.dup-stdout) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.dup-stdout)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.dup-stderr) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.dup-stderr)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.open-input-stream) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.open-input-stream)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.open-output-stream) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.open-output-stream)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.close-stream) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.close-stream)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.tty-port?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.tty-port?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.open-output-string) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.open-output-string)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.get-output-string) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.get-output-string)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.eof-object?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.eof-object?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.read-char) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.read-char)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.read-line) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.read-line)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.read-line2) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.read-line2)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.read) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.read)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.display-word) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.display-word)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.write) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.write)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.newline) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.newline)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.display-stdout) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.display-stdout)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.write-stdout) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.write-stdout)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.newline-stdout) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.newline-stdout)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.set-finalizer!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.set-finalizer!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.has-finalizer?) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.has-finalizer?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.finalize!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.finalize!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.garbage-collect) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.garbage-collect)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.yield-to-host) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.yield-to-host)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.yield-to-host-major) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.yield-to-host-major)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.system) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.system)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.open-input-process) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.open-input-process)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.open-output-process) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.open-output-process)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.command-line) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.command-line)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-random) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-random)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.random-copy) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.random-copy)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.random-sample!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.random-sample!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.random-sample-bounded!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.random-sample-bounded!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.random-sample-float!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.random-sample-float!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.random-advance!) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.random-advance!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.fiber-fork-list) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.fiber-fork-list)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.async) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.async)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.await) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.await)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.realpath) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.realpath)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.make-temporary-file) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.make-temporary-file)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.access) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.access)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.current-jiffy) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.current-jiffy)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.jiffies-per-second) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.jiffies-per-second)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-not) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-not)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-ior) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-ior)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-xor) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-xor)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-and) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-and)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-xnor) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-xnor)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-nand) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-nand)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-nor) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-nor)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-andc1) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-andc1)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-andc2) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-andc2)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-orc1) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-orc1)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bitwise-orc2) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bitwise-orc2)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.arithmetic-shift) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.arithmetic-shift)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.bit-count) ((bruijn ##.k.23 2 0) (##intrinsic ##vcore.bit-count)) ((bruijn ##.k.23 2 0) #f)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dcons);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcar))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dcar);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcdr))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dcdr);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__car_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dset__car_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__cdr_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dset__cdr_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dvector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gvector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gvector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dvector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dvector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dvector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df64vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df64vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__f64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__f64vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gf64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gf64vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df64vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df64vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df64vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df32vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__f32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__f32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gf32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gf32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df32vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df32vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Df32vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds32vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__s32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gs32vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds32vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds32vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds32vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du16vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__u16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__u16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gu16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gu16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du16vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du16vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du16vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds16vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__s16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gs16vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds16vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds16vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds16vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du8vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__u8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__u8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gu8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gu8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du8vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du8vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Du8vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds8vector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__s8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dlist___Gs8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds8vector__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds8vector__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ds8vector__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__u8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dread__u8vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drecord);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drecord__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drecord__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__hash__table))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__hash__table);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__equivalence__function))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__equivalence__function);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__hash__function))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__hash__function);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__vector);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__delete_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhash__table__delete_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__string);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsubstring))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dsubstring);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__copy_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring__copy_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring___Gsymbol))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring___Gsymbol);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring___Gnumber))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstring___Gnumber);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsymbol___Gstring))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dsymbol___Gstring);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dgensym))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dgensym);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dchar__integer))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dchar__integer);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dinteger___Gchar))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dinteger___Gchar);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstdin___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstdin___Gport);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstdout___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstdout___Gport);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstderr___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dstderr___Gport);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stdin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ddup__stdin);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ddup__stdout);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stderr))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ddup__stderr);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__input__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dopen__input__stream);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dopen__output__stream);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dclose__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dclose__stream);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dtty__port_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dtty__port_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dopen__output__string);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dget__output__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dget__output__string);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Deof__object_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Deof__object_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__char))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dread__char);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__line))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dread__line);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__line2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dread__line2);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dread);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddisplay__word))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ddisplay__word);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dwrite))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dwrite);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dnewline))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dnewline);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddisplay__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Ddisplay__stdout);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dwrite__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dwrite__stdout);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dnewline__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dnewline__stdout);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__finalizer_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dset__finalizer_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhas__finalizer_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dhas__finalizer_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dfinalize_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dfinalize_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dgarbage__collect))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dgarbage__collect);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dyield__to__host))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dyield__to__host);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dyield__to__host__major))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dyield__to__host__major);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsystem))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dsystem);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__input__process))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dopen__input__process);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__process))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dopen__output__process);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcommand__line))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dcommand__line);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__random))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__random);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__copy))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drandom__copy);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drandom__sample_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample__bounded_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drandom__sample__bounded_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample__float_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drandom__sample__float_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__advance_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drandom__advance_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dfiber__fork__list))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dfiber__fork__list);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dasync))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dasync);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dawait))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dawait);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drealpath))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Drealpath);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__temporary__file))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dmake__temporary__file);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Daccess))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Daccess);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcurrent__jiffy))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dcurrent__jiffy);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Djiffies__per__second))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Djiffies__per__second);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__not))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__not);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__ior))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__ior);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__xor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__xor);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__and))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__and);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__xnor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__xnor);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__nand))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__nand);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__nor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__nor);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__andc1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__andc1);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__andc2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__andc2);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__orc1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__orc1);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__orc2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbitwise__orc2);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Darithmetic__shift))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Darithmetic__shift);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbit__count))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dbit__count);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
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
}
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k5))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k5, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.inexact) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.inexact)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.exact) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.exact)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.+) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.+)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.-) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.-)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.*) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.*)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore./) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore./)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.cmp) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.cmp)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.<=) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.<=)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.<) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.<)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.=) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.=)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.>=) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.>=)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.>) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.>)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.quotient) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.quotient)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.remainder) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.remainder)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.null?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.null?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.pair?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.pair?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.vector?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.vector?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.hash-table?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.hash-table?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.record?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.record?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.procedure?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.procedure?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.blob?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.blob?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.symbol?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.symbol?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.string?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.string?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.int?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.int?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.double?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.double?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.char?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.char?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.void?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.void?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.nullptr?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.nullptr?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.foreign-pointer?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.foreign-pointer?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.eq?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.eq?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.symbol=?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.symbol=?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.blob=?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.blob=?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.eqv?) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.eq?)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.not) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.not)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.get-dynamics) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.get-dynamics)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.push-dynamic) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.push-dynamic)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.pop-dynamic) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.pop-dynamic)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.get-exception-handler) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.get-exception-handler)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.push-exception-handler) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.push-exception-handler)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.pop-exception-handler) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.pop-exception-handler)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.raise) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.raise)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.next) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.next)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.call/cc) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.call/cc)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.call-with-values) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.call-with-values)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.apply) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.apply)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.apply-cps) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.apply-cps)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.abort) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.abort)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.exit) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.exit)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.define-global) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.define-global)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.set-global!) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.set-global!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.record) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.record)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.record-ref) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.record-ref)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.record-set!) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.record-set!)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.record-length) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.record-length)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.function) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.function)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.define) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.define)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.multidefine) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.multidefine)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.lookup-library) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.lookup-library)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.make-import) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.make-import)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.load-library) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.load-library)) (if (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.unload-library) ((bruijn ##.k.23 0 0) (##intrinsic ##vcore.unload-library)) ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3) (##inline ##vcore.eq? (bruijn ##.sym.9 0 1) '##vcore.cons)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dinexact))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dinexact);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dexact))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dexact);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_P))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_P);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D__))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D__);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_S))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_S);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_W))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_W);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcmp))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dcmp);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_L_E);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_L);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_E);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_G_E);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_D_G);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dquotient))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dquotient);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dremainder))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dremainder);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnull_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dnull_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpair_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dpair_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dvector_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dhash__table_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dhash__table_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Drecord_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dprocedure_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dprocedure_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dblob_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dblob_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dsymbol_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dsymbol_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dstring_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dint_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dint_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddouble_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Ddouble_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dchar_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dchar_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvoid_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dvoid_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnullptr_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dnullptr_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dforeign__pointer_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dforeign__pointer_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deq_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Deq_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dsymbol_E_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dsymbol_E_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dblob_E_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dblob_E_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deqv_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Deq_Q);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnot))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dnot);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dget__dynamics))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dget__dynamics);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpush__dynamic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dpush__dynamic);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpop__dynamic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dpop__dynamic);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dget__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dget__exception__handler);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpush__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dpush__exception__handler);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpop__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dpop__exception__handler);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Draise))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Draise);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnext))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dnext);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcall_Wcc))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dcall_Wcc);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcall__with__values))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dcall__with__values);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dapply))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dapply);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dapply__cps))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dapply__cps);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dabort))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dabort);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dexit))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dexit);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddefine__global))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Ddefine__global);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dset__global_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dset__global_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Drecord);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Drecord__ref);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Drecord__length);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dfunction))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dfunction);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddefine))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Ddefine);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dmultidefine))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dmultidefine);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dlookup__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dlookup__library);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dmake__import))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dmake__import);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dload__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dload__library);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dunload__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V40_V10vcore_Dunload__library);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3, self)), 1,
      VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcons));
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
}
}
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.+) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.-) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.*) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore./) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.<=) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.<) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.=) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.>=) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.>) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.null?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.pair?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.eof-object?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.record?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.hash-table?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.procedure?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.blob?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.symbol?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.string?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.double?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.int?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.char?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.void?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.nullptr?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.foreign-pointer?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.not) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f64vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f64vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f64vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f64vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f32vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f32vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f32vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.f32vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s32vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s32vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s32vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s32vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s16vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s16vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s16vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s16vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u16vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u16vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u16vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u16vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s8vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s8vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s8vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.s8vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u8vector?) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u8vector-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u8vector-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.u8vector-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.record-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.record-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.string-ref) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.string-set!) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.string-length) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.string->number) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.char-integer) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.read-char) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.display-word) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.write) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.newline) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.display-stdout) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.write-stdout) ((bruijn ##.k.231 0 0) #t) (if (##inline ##vcore.eq? (bruijn ##.sym.11 0 1) '##vcore.newline-stdout) ((bruijn ##.k.231 0 0) #t) ((bruijn ##.k.231 0 0) #f)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_P))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D__))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_S))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_W))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnull_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpair_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deof__object_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dhash__table_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dprocedure_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dblob_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dsymbol_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddouble_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dint_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dchar_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvoid_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnullptr_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dforeign__pointer_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnot))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df64vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df64vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df64vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df64vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Df32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ds8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Du8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring___Gnumber))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dchar__integer))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dread__char))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddisplay__word))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dwrite))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnewline))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddisplay__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dwrite__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnewline__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
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
}
}
}
}
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.508 1 0) ((bruijn ##.k.509 0 0) (bruijn ##.p.508 1 0)) ((bruijn ##.k.509 0 0) (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.qcons)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dqcons));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.k.302 2 0) (##string ##.string.586)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.car) ((bruijn ##.k.302 2 0) (##string ##.string.587)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.cdr) ((bruijn ##.k.302 2 0) (##string ##.string.588)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.set-car!) ((bruijn ##.k.302 2 0) (##string ##.string.589)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.set-cdr!) ((bruijn ##.k.302 2 0) (##string ##.string.590)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.vector) ((bruijn ##.k.302 2 0) (##string ##.string.591)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-vector) ((bruijn ##.k.302 2 0) (##string ##.string.592)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->vector) ((bruijn ##.k.302 2 0) (##string ##.string.593)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->vector) ((bruijn ##.k.302 2 0) (##string ##.string.593)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.594)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.595)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.596)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f64vector) ((bruijn ##.k.302 2 0) (##string ##.string.597)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f64vector?) ((bruijn ##.k.302 2 0) (##string ##.string.598)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-f64vector) ((bruijn ##.k.302 2 0) (##string ##.string.599)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->f64vector) ((bruijn ##.k.302 2 0) (##string ##.string.600)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f64vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.601)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f64vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.602)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f64vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.603)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f32vector) ((bruijn ##.k.302 2 0) (##string ##.string.604)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f32vector?) ((bruijn ##.k.302 2 0) (##string ##.string.605)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-f32vector) ((bruijn ##.k.302 2 0) (##string ##.string.606)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->f32vector) ((bruijn ##.k.302 2 0) (##string ##.string.607)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f32vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.608)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f32vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.609)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.f32vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.610)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s32vector) ((bruijn ##.k.302 2 0) (##string ##.string.611)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s32vector?) ((bruijn ##.k.302 2 0) (##string ##.string.612)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-s32vector) ((bruijn ##.k.302 2 0) (##string ##.string.613)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->s32vector) ((bruijn ##.k.302 2 0) (##string ##.string.614)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s32vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.615)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s32vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.616)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s32vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.617)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u16vector) ((bruijn ##.k.302 2 0) (##string ##.string.618)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u16vector?) ((bruijn ##.k.302 2 0) (##string ##.string.619)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-u16vector) ((bruijn ##.k.302 2 0) (##string ##.string.620)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->u16vector) ((bruijn ##.k.302 2 0) (##string ##.string.621)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u16vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.622)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u16vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.623)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u16vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.624)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s16vector) ((bruijn ##.k.302 2 0) (##string ##.string.625)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s16vector?) ((bruijn ##.k.302 2 0) (##string ##.string.626)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-s16vector) ((bruijn ##.k.302 2 0) (##string ##.string.627)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->s16vector) ((bruijn ##.k.302 2 0) (##string ##.string.628)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s16vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.629)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s16vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.630)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s16vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.631)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u8vector) ((bruijn ##.k.302 2 0) (##string ##.string.632)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u8vector?) ((bruijn ##.k.302 2 0) (##string ##.string.633)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-u8vector) ((bruijn ##.k.302 2 0) (##string ##.string.634)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->u8vector) ((bruijn ##.k.302 2 0) (##string ##.string.635)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u8vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.636)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u8vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.637)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.u8vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.638)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s8vector) ((bruijn ##.k.302 2 0) (##string ##.string.639)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s8vector?) ((bruijn ##.k.302 2 0) (##string ##.string.640)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-s8vector) ((bruijn ##.k.302 2 0) (##string ##.string.641)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.list->s8vector) ((bruijn ##.k.302 2 0) (##string ##.string.642)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s8vector-ref) ((bruijn ##.k.302 2 0) (##string ##.string.643)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s8vector-set!) ((bruijn ##.k.302 2 0) (##string ##.string.644)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.s8vector-length) ((bruijn ##.k.302 2 0) (##string ##.string.645)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.read-u8vector) ((bruijn ##.k.302 2 0) (##string ##.string.646)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.record) ((bruijn ##.k.302 2 0) (##string ##.string.647)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.record-ref) ((bruijn ##.k.302 2 0) (##string ##.string.648)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.record-set!) ((bruijn ##.k.302 2 0) (##string ##.string.649)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.record-length) ((bruijn ##.k.302 2 0) (##string ##.string.650)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-hash-table) ((bruijn ##.k.302 2 0) (##string ##.string.651)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-equivalence-function) ((bruijn ##.k.302 2 0) (##string ##.string.652)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-hash-function) ((bruijn ##.k.302 2 0) (##string ##.string.653)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-vector) ((bruijn ##.k.302 2 0) (##string ##.string.654)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-ref) ((bruijn ##.k.302 2 0) (##string ##.string.655)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-set!) ((bruijn ##.k.302 2 0) (##string ##.string.656)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.hash-table-delete!) ((bruijn ##.k.302 2 0) (##string ##.string.657)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-string) ((bruijn ##.k.302 2 0) (##string ##.string.658)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.substring) ((bruijn ##.k.302 2 0) (##string ##.string.659)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string-copy!) ((bruijn ##.k.302 2 0) (##string ##.string.660)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string-ref) ((bruijn ##.k.302 2 0) (##string ##.string.661)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string-set!) ((bruijn ##.k.302 2 0) (##string ##.string.662)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string-length) ((bruijn ##.k.302 2 0) (##string ##.string.663)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string->symbol) ((bruijn ##.k.302 2 0) (##string ##.string.664)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.string->number) ((bruijn ##.k.302 2 0) (##string ##.string.665)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.symbol->string) ((bruijn ##.k.302 2 0) (##string ##.string.666)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.gensym) ((bruijn ##.k.302 2 0) (##string ##.string.667)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.char-integer) ((bruijn ##.k.302 2 0) (##string ##.string.668)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.integer->char) ((bruijn ##.k.302 2 0) (##string ##.string.669)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.stdin->port) ((bruijn ##.k.302 2 0) (##string ##.string.670)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.stdout->port) ((bruijn ##.k.302 2 0) (##string ##.string.671)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.stderr->port) ((bruijn ##.k.302 2 0) (##string ##.string.672)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.dup-stdin) ((bruijn ##.k.302 2 0) (##string ##.string.673)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.dup-stdout) ((bruijn ##.k.302 2 0) (##string ##.string.674)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.dup-stderr) ((bruijn ##.k.302 2 0) (##string ##.string.675)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.open-input-stream) ((bruijn ##.k.302 2 0) (##string ##.string.676)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.open-output-stream) ((bruijn ##.k.302 2 0) (##string ##.string.677)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.close-stream) ((bruijn ##.k.302 2 0) (##string ##.string.678)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.tty-port?) ((bruijn ##.k.302 2 0) (##string ##.string.679)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.open-output-string) ((bruijn ##.k.302 2 0) (##string ##.string.680)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.get-output-string) ((bruijn ##.k.302 2 0) (##string ##.string.681)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.eof-object?) ((bruijn ##.k.302 2 0) (##string ##.string.682)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.read-char) ((bruijn ##.k.302 2 0) (##string ##.string.683)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.read-line) ((bruijn ##.k.302 2 0) (##string ##.string.684)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.read-line2) ((bruijn ##.k.302 2 0) (##string ##.string.685)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.read) ((bruijn ##.k.302 2 0) (##string ##.string.686)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.display-word) ((bruijn ##.k.302 2 0) (##string ##.string.687)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.write) ((bruijn ##.k.302 2 0) (##string ##.string.688)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.newline) ((bruijn ##.k.302 2 0) (##string ##.string.689)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.display-stdout) ((bruijn ##.k.302 2 0) (##string ##.string.690)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.write-stdout) ((bruijn ##.k.302 2 0) (##string ##.string.691)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.newline-stdout) ((bruijn ##.k.302 2 0) (##string ##.string.692)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.set-finalizer!) ((bruijn ##.k.302 2 0) (##string ##.string.693)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.has-finalizer?) ((bruijn ##.k.302 2 0) (##string ##.string.694)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.finalize!) ((bruijn ##.k.302 2 0) (##string ##.string.695)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.garbage-collect) ((bruijn ##.k.302 2 0) (##string ##.string.696)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.yield-to-host) ((bruijn ##.k.302 2 0) (##string ##.string.697)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.yield-to-host-major) ((bruijn ##.k.302 2 0) (##string ##.string.698)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.system) ((bruijn ##.k.302 2 0) (##string ##.string.699)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.open-input-process) ((bruijn ##.k.302 2 0) (##string ##.string.700)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.open-output-process) ((bruijn ##.k.302 2 0) (##string ##.string.701)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.command-line) ((bruijn ##.k.302 2 0) (##string ##.string.702)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.register-sigint) ((bruijn ##.k.302 2 0) (##string ##.string.703)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-random) ((bruijn ##.k.302 2 0) (##string ##.string.704)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.random-copy) ((bruijn ##.k.302 2 0) (##string ##.string.705)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.random-sample!) ((bruijn ##.k.302 2 0) (##string ##.string.706)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.random-sample-bounded!) ((bruijn ##.k.302 2 0) (##string ##.string.707)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.random-sample-float!) ((bruijn ##.k.302 2 0) (##string ##.string.708)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.random-advance!) ((bruijn ##.k.302 2 0) (##string ##.string.709)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.fiber-fork-list) ((bruijn ##.k.302 2 0) (##string ##.string.710)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.async) ((bruijn ##.k.302 2 0) (##string ##.string.711)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.await) ((bruijn ##.k.302 2 0) (##string ##.string.712)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.realpath) ((bruijn ##.k.302 2 0) (##string ##.string.713)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.make-temporary-file) ((bruijn ##.k.302 2 0) (##string ##.string.714)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.access) ((bruijn ##.k.302 2 0) (##string ##.string.715)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.current-jiffy) ((bruijn ##.k.302 2 0) (##string ##.string.716)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.jiffies-per-second) ((bruijn ##.k.302 2 0) (##string ##.string.717)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-not) ((bruijn ##.k.302 2 0) (##string ##.string.718)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-ior) ((bruijn ##.k.302 2 0) (##string ##.string.719)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-xor) ((bruijn ##.k.302 2 0) (##string ##.string.720)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-and) ((bruijn ##.k.302 2 0) (##string ##.string.721)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-xnor) ((bruijn ##.k.302 2 0) (##string ##.string.722)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-nand) ((bruijn ##.k.302 2 0) (##string ##.string.723)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-nor) ((bruijn ##.k.302 2 0) (##string ##.string.724)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-andc1) ((bruijn ##.k.302 2 0) (##string ##.string.725)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-andc2) ((bruijn ##.k.302 2 0) (##string ##.string.726)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-orc1) ((bruijn ##.k.302 2 0) (##string ##.string.727)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bitwise-orc2) ((bruijn ##.k.302 2 0) (##string ##.string.728)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.arithmetic-shift) ((bruijn ##.k.302 2 0) (##string ##.string.729)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.bit-count) ((bruijn ##.k.302 2 0) (##string ##.string.730)) ((bruijn ##.k.302 2 0) #f)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D586.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcar))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D587.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcdr))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D588.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__car_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D589.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__cdr_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D590.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D591.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D592.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gvector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D593.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gvector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D593.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D594.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D595.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dvector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D596.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D597.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D598.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__f64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D599.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gf64vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D600.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D601.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D602.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df64vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D603.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D604.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D605.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__f32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D606.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gf32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D607.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D608.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D609.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Df32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D610.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D611.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D612.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D613.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs32vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D614.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D615.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D616.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds32vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D617.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D618.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D619.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__u16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D620.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gu16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D621.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D622.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D623.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D624.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D625.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D626.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D627.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs16vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D628.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D629.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D630.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds16vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D631.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D632.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D633.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__u8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D634.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gu8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D635.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D636.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D637.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Du8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D638.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D639.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__s8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D641.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dlist___Gs8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D642.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D643.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D644.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ds8vector__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D645.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__u8vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D646.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D647.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drecord__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__hash__table))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__equivalence__function))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__hash__function))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__vector))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhash__table__delete_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsubstring))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__copy_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__ref))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring__length))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring___Gsymbol))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstring___Gnumber))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsymbol___Gstring))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dgensym))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dchar__integer))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dinteger___Gchar))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstdin___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstdout___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dstderr___Gport))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stdin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddup__stderr))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__input__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dclose__stream))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dtty__port_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D679.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D680.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dget__output__string))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D681.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Deof__object_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D682.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__char))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__line))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread__line2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dread))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddisplay__word))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dwrite))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dnewline))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Ddisplay__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dwrite__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dnewline__stdout))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dset__finalizer_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dhas__finalizer_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dfinalize_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dgarbage__collect))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dyield__to__host))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dyield__to__host__major))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dsystem))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__input__process))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dopen__output__process))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcommand__line))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dregister__sigint))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__random))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__copy))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample__bounded_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__sample__float_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drandom__advance_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dfiber__fork__list))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dasync))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dawait))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Drealpath))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dmake__temporary__file))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Daccess))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcurrent__jiffy))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Djiffies__per__second))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__not))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__ior))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__xor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__and))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__xnor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__nand))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__nor))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__andc1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__andc2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D726.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__orc1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D727.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbitwise__orc2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Darithmetic__shift))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D729.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dbit__count))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D730.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
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
}
}
}
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.inexact) ((bruijn ##.k.302 0 0) (##string ##.string.529)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.exact) ((bruijn ##.k.302 0 0) (##string ##.string.530)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.+) ((bruijn ##.k.302 0 0) (##string ##.string.531)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.-) ((bruijn ##.k.302 0 0) (##string ##.string.532)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.*) ((bruijn ##.k.302 0 0) (##string ##.string.533)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore./) ((bruijn ##.k.302 0 0) (##string ##.string.534)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.cmp) ((bruijn ##.k.302 0 0) (##string ##.string.535)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.<=) ((bruijn ##.k.302 0 0) (##string ##.string.536)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.<) ((bruijn ##.k.302 0 0) (##string ##.string.537)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.=) ((bruijn ##.k.302 0 0) (##string ##.string.538)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.>=) ((bruijn ##.k.302 0 0) (##string ##.string.539)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.>) ((bruijn ##.k.302 0 0) (##string ##.string.540)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.quotient) ((bruijn ##.k.302 0 0) (##string ##.string.541)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.remainder) ((bruijn ##.k.302 0 0) (##string ##.string.542)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.null?) ((bruijn ##.k.302 0 0) (##string ##.string.543)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.pair?) ((bruijn ##.k.302 0 0) (##string ##.string.544)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.record?) ((bruijn ##.k.302 0 0) (##string ##.string.545)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.vector?) ((bruijn ##.k.302 0 0) (##string ##.string.546)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.hash-table?) ((bruijn ##.k.302 0 0) (##string ##.string.547)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.procedure?) ((bruijn ##.k.302 0 0) (##string ##.string.548)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.blob?) ((bruijn ##.k.302 0 0) (##string ##.string.549)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.symbol?) ((bruijn ##.k.302 0 0) (##string ##.string.550)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.string?) ((bruijn ##.k.302 0 0) (##string ##.string.551)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.int?) ((bruijn ##.k.302 0 0) (##string ##.string.552)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.double?) ((bruijn ##.k.302 0 0) (##string ##.string.553)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.char?) ((bruijn ##.k.302 0 0) (##string ##.string.554)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.void?) ((bruijn ##.k.302 0 0) (##string ##.string.555)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.nullptr?) ((bruijn ##.k.302 0 0) (##string ##.string.556)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.foreign-pointer?) ((bruijn ##.k.302 0 0) (##string ##.string.557)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.eq?) ((bruijn ##.k.302 0 0) (##string ##.string.558)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.symbol=?) ((bruijn ##.k.302 0 0) (##string ##.string.559)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.blob=?) ((bruijn ##.k.302 0 0) (##string ##.string.560)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.eqv?) ((bruijn ##.k.302 0 0) (##string ##.string.558)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.not) ((bruijn ##.k.302 0 0) (##string ##.string.561)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.get-dynamics) ((bruijn ##.k.302 0 0) (##string ##.string.562)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.push-dynamic) ((bruijn ##.k.302 0 0) (##string ##.string.563)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.pop-dynamic) ((bruijn ##.k.302 0 0) (##string ##.string.564)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.get-exception-handler) ((bruijn ##.k.302 0 0) (##string ##.string.565)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.push-exception-handler) ((bruijn ##.k.302 0 0) (##string ##.string.566)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.pop-exception-handler) ((bruijn ##.k.302 0 0) (##string ##.string.567)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.raise) ((bruijn ##.k.302 0 0) (##string ##.string.568)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.next) ((bruijn ##.k.302 0 0) (##string ##.string.569)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.call/cc) ((bruijn ##.k.302 0 0) (##string ##.string.570)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.call-with-values) ((bruijn ##.k.302 0 0) (##string ##.string.571)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.apply) ((bruijn ##.k.302 0 0) (##string ##.string.572)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.apply-cps) ((bruijn ##.k.302 0 0) (##string ##.string.573)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.abort) ((bruijn ##.k.302 0 0) (##string ##.string.574)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.exit) ((bruijn ##.k.302 0 0) (##string ##.string.575)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.define-global) ((bruijn ##.k.302 0 0) (##string ##.string.576)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.set-global!) ((bruijn ##.k.302 0 0) (##string ##.string.577)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.function) ((bruijn ##.k.302 0 0) (##string ##.string.578)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.function3) ((bruijn ##.k.302 0 0) (##string ##.string.579)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.set-declare!) ((bruijn ##.k.302 0 0) (##string ##.string.580)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.define) ((bruijn ##.k.302 0 0) (##string ##.string.576)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.multidefine) ((bruijn ##.k.302 0 0) (##string ##.string.581)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.lookup-library) ((bruijn ##.k.302 0 0) (##string ##.string.582)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.make-import) ((bruijn ##.k.302 0 0) (##string ##.string.583)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.load-library) ((bruijn ##.k.302 0 0) (##string ##.string.584)) (if (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.unload-library) ((bruijn ##.k.302 0 0) (##string ##.string.585)) ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k6) (##inline ##vcore.eq? (bruijn ##.sym.13 0 1) '##vcore.cons)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dinexact))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D529.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dexact))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D530.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_P))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D531.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D__))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D532.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_S))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D533.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_W))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D534.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcmp))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D535.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D536.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_L))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D537.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D538.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G_E))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D539.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_D_G))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D540.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dquotient))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D541.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dremainder))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D542.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnull_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D543.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpair_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D544.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Drecord_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D545.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvector_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dhash__table_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D547.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dprocedure_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D548.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dblob_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D549.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dsymbol_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D550.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dstring_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D551.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dint_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D552.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddouble_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D553.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dchar_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D554.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dvoid_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnullptr_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dforeign__pointer_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deq_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dsymbol_E_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dblob_E_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D560.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deqv_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnot))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D561.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dget__dynamics))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D562.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpush__dynamic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D563.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpop__dynamic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D564.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dget__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpush__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpop__exception__handler))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Draise))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D568.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnext))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D569.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcall_Wcc))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D570.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcall__with__values))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D571.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dapply))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D572.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dapply__cps))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D573.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dabort))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D574.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dexit))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D575.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddefine__global))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D576.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dset__global_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D577.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dfunction))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D578.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dfunction3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D579.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dset__declare_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D580.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Ddefine))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D576.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dmultidefine))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D581.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dlookup__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D582.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dmake__import))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D583.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dload__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D584.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dunload__library))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D585.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k6, self)), 1,
      VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcons));
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
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.518 1 0) ((bruijn ##.k.519 0 0) (bruijn ##.p.518 1 0)) ((bruijn ##.k.519 0 0) (##inline ##vcore.eq? (bruijn ##.sym.15 2 1) '##vcore.qcons)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dqcons));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.515 0 0) ((bruijn ##.k.510 2 0) (##string ##.string.735)) (if (##inline ##vcore.eq? (bruijn ##.sym.15 2 1) '##vcore.car) ((bruijn ##.k.510 2 0) (##string ##.string.736)) (if (##inline ##vcore.eq? (bruijn ##.sym.15 2 1) '##vcore.cdr) ((bruijn ##.k.510 2 0) (##string ##.string.737)) ((bruijn ##.k.510 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D735.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcar))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D736.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[1],
        _V10vcore_Dcdr))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D737.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10) (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__inline__name" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.sym.15 0 1) '##vcore.null?) ((bruijn ##.k.510 0 0) (##string ##.string.731)) (if (##inline ##vcore.eq? (bruijn ##.sym.15 0 1) '##vcore.pair?) ((bruijn ##.k.510 0 0) (##string ##.string.732)) (if (##inline ##vcore.eq? (bruijn ##.sym.15 0 1) '##vcore.not) ((bruijn ##.k.510 0 0) (##string ##.string.733)) (if (##inline ##vcore.eq? (bruijn ##.sym.15 0 1) '##vcore.eq?) ((bruijn ##.k.510 0 0) (##string ##.string.734)) ((close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9) (##inline ##vcore.eq? (bruijn ##.sym.15 0 1) '##vcore.cons))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnull_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D731.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dpair_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D732.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Dnot))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D733.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _V10vcore_Deq_Q))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D734.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9, self)), 1,
      VInlineEq2(runtime,
        _var1,
        _V10vcore_Dcons));
}
}
}
}
}
static void _V0vanity_V0intrinsics_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity intrinsics) 4 ((close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic" "_V60_V0vanity_V0intrinsics") (close "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q" "_V60_V0vanity_V0intrinsics") (close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name" "_V60_V0vanity_V0intrinsics") (close "_V50_V0vanity_V0intrinsics_V0lookup__inline__name" "_V60_V0vanity_V0intrinsics")) ((bruijn ##.k.22 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-inline-name (bruijn ##.lookup-inline-name.8 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic-name (bruijn ##.lookup-intrinsic-name.7 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic (bruijn ##.lookup-intrinsic.5 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'is-basic-intrinsic? (bruijn ##.is-basic-intrinsic?.6 0 1)) '()))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    _V60_V0vanity_V0intrinsics = self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, _V60_V0vanity_V0intrinsics))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, _V60_V0vanity_V0intrinsics))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, _V60_V0vanity_V0intrinsics))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name, _V60_V0vanity_V0intrinsics))));
    VRegisterStaticEnv("_V0vanity_V0intrinsics_V20", &_V60_V0vanity_V0intrinsics);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__inline__name,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic__name,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0is__basic__intrinsic_Q,
        self->vars[1]),
        VNULL)))));
    }
}
static void _V0vanity_V0intrinsics_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.18 0 0) (close _V0vanity_V0intrinsics_V20_V0lambda2) (close _V0vanity_V0intrinsics_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0intrinsics_V20 = (VFunc)_V0vanity_V0intrinsics_V20_V0lambda1;
