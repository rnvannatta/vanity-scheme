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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D611 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V40_V10vcore_Dbit__count;VWEAK VClosure _VW_V40_V10vcore_Dbit__count = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitCount, NULL };
VWEAK VWORD _V40_V10vcore_Darithmetic__shift;VWEAK VClosure _VW_V40_V10vcore_Darithmetic__shift = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VArithmeticShift, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc2;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC2, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc1;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC1, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc2;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC2, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc1;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC1, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__nor;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNor, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__nand;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nand = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNand, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__xnor;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xnor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXnor, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__and;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__and = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAnd, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__xor;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXor, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__ior;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__ior = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseIor, NULL };
VWEAK VWORD _V40_V10vcore_Dbitwise__not;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__not = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNot, NULL };
VWEAK VWORD _V40_V10vcore_Djiffies__per__second;VWEAK VClosure _VW_V40_V10vcore_Djiffies__per__second = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VJiffiesPerSecond, NULL };
VWEAK VWORD _V40_V10vcore_Dcurrent__jiffy;VWEAK VClosure _VW_V40_V10vcore_Dcurrent__jiffy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCurrentJiffy, NULL };
VWEAK VWORD _V40_V10vcore_Daccess;VWEAK VClosure _VW_V40_V10vcore_Daccess = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAccess, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10vcore_Drealpath;VWEAK VClosure _VW_V40_V10vcore_Drealpath = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRealpath, NULL };
VWEAK VWORD _V40_V10vcore_Dawait;VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V40_V10vcore_Dasync;VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__bounded_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__bounded_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleBounded, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__sample_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSample, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__random;VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V40_V10vcore_Dcommand__line;VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V40_V10vcore_Dyield__to__host__major;VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host__major = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHostMajor, NULL };
VWEAK VWORD _V40_V10vcore_Dyield__to__host;VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHost, NULL };
VWEAK VWORD _V40_V10vcore_Dgarbage__collect;VWEAK VClosure _VW_V40_V10vcore_Dgarbage__collect = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGarbageCollect, NULL };
VWEAK VWORD _V40_V10vcore_Dfinalize_B;VWEAK VClosure _VW_V40_V10vcore_Dfinalize_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFinalize, NULL };
VWEAK VWORD _V40_V10vcore_Dhas__finalizer_Q;VWEAK VClosure _VW_V40_V10vcore_Dhas__finalizer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHasFinalizer, NULL };
VWEAK VWORD _V40_V10vcore_Dset__finalizer_B;VWEAK VClosure _VW_V40_V10vcore_Dset__finalizer_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetFinalizer, NULL };
VWEAK VWORD _V40_V10vcore_Dnewline__stdout;VWEAK VClosure _VW_V40_V10vcore_Dnewline__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewlineStdout, NULL };
VWEAK VWORD _V40_V10vcore_Dwrite__stdout;VWEAK VClosure _VW_V40_V10vcore_Dwrite__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWriteStdout, NULL };
VWEAK VWORD _V40_V10vcore_Ddisplay__stdout;VWEAK VClosure _VW_V40_V10vcore_Ddisplay__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplayStdout, NULL };
VWEAK VWORD _V40_V10vcore_Dnewline;VWEAK VClosure _VW_V40_V10vcore_Dnewline = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewline2, NULL };
VWEAK VWORD _V40_V10vcore_Dwrite;VWEAK VClosure _VW_V40_V10vcore_Dwrite = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWrite2, NULL };
VWEAK VWORD _V40_V10vcore_Ddisplay__word;VWEAK VClosure _VW_V40_V10vcore_Ddisplay__word = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplay2, NULL };
VWEAK VWORD _V40_V10vcore_Dread;VWEAK VClosure _VW_V40_V10vcore_Dread = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRead2, NULL };
VWEAK VWORD _V40_V10vcore_Dread__line2;VWEAK VClosure _VW_V40_V10vcore_Dread__line2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine3, NULL };
VWEAK VWORD _V40_V10vcore_Dread__line;VWEAK VClosure _VW_V40_V10vcore_Dread__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine2, NULL };
VWEAK VWORD _V40_V10vcore_Dread__char;VWEAK VClosure _VW_V40_V10vcore_Dread__char = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadChar2, NULL };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
VWEAK VWORD _V40_V10vcore_Dtty__port_Q;VWEAK VClosure _VW_V40_V10vcore_Dtty__port_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VTtyPortP, NULL };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__stream;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputStream2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__stream;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputStream2, NULL };
VWEAK VWORD _V40_V10vcore_Ddup__stderr;VWEAK VClosure _VW_V40_V10vcore_Ddup__stderr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStderr2, NULL };
VWEAK VWORD _V40_V10vcore_Ddup__stdout;VWEAK VClosure _VW_V40_V10vcore_Ddup__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStdout2, NULL };
VWEAK VWORD _V40_V10vcore_Ddup__stdin;VWEAK VClosure _VW_V40_V10vcore_Ddup__stdin = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDupStdin2, NULL };
VWEAK VWORD _V40_V10vcore_Dstderr___Gport;VWEAK VClosure _VW_V40_V10vcore_Dstderr___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStderrPort, NULL };
VWEAK VWORD _V40_V10vcore_Dstdout___Gport;VWEAK VClosure _VW_V40_V10vcore_Dstdout___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdoutPort, NULL };
VWEAK VWORD _V40_V10vcore_Dstdin___Gport;VWEAK VClosure _VW_V40_V10vcore_Dstdin___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdinPort, NULL };
VWEAK VWORD _V40_V10vcore_Dchar__integer;VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V40_V10vcore_Dgensym;VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__length;VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__ref;VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V40_V10vcore_Dsubstring;VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__string;VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__ref;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableRef, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__vector;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableVector, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__hash__table;VWEAK VClosure _VW_V40_V10vcore_Dmake__hash__table = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTable, NULL };
VWEAK VWORD _V40_V10vcore_Dread__u8vector;VWEAK VClosure _VW_V40_V10vcore_Dread__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadU8Vector, NULL };
VWEAK VWORD _V40_V10vcore_Ds8vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Ds8vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Ds8vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gs8vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS8Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__s8vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS8Vector, NULL };
VWEAK VWORD _V40_V10vcore_Ds8vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Du8vector__length;VWEAK VClosure _VW_V40_V10vcore_Du8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Du8vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Du8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Du8vector__ref;VWEAK VClosure _VW_V40_V10vcore_Du8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gu8vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU8Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__u8vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU8Vector, NULL };
VWEAK VWORD _V40_V10vcore_Du8vector_Q;VWEAK VClosure _VW_V40_V10vcore_Du8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Ds16vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Ds16vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Ds16vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gs16vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS16Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__s16vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS16Vector, NULL };
VWEAK VWORD _V40_V10vcore_Ds16vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Du16vector__length;VWEAK VClosure _VW_V40_V10vcore_Du16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Du16vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Du16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Du16vector__ref;VWEAK VClosure _VW_V40_V10vcore_Du16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gu16vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU16Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__u16vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__u16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU16Vector, NULL };
VWEAK VWORD _V40_V10vcore_Du16vector_Q;VWEAK VClosure _VW_V40_V10vcore_Du16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Ds32vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Ds32vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Ds32vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gs32vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS32Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__s32vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS32Vector, NULL };
VWEAK VWORD _V40_V10vcore_Ds32vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Df32vector__length;VWEAK VClosure _VW_V40_V10vcore_Df32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Df32vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Df32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Df32vector__ref;VWEAK VClosure _VW_V40_V10vcore_Df32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gf32vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF32Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__f32vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__f32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF32Vector, NULL };
VWEAK VWORD _V40_V10vcore_Df32vector_Q;VWEAK VClosure _VW_V40_V10vcore_Df32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Df64vector__length;VWEAK VClosure _VW_V40_V10vcore_Df64vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorLength, NULL };
VWEAK VWORD _V40_V10vcore_Df64vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Df64vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorSet, NULL };
VWEAK VWORD _V40_V10vcore_Df64vector__ref;VWEAK VClosure _VW_V40_V10vcore_Df64vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorRef, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gf64vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF64Vector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__f64vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__f64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF64Vector, NULL };
VWEAK VWORD _V40_V10vcore_Df64vector_Q;VWEAK VClosure _VW_V40_V10vcore_Df64vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorP, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__car_B;VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dunload__library;VWEAK VClosure _VW_V40_V10vcore_Dunload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VUnloadLibrary2, NULL };
VWEAK VWORD _V40_V10vcore_Dload__library;VWEAK VClosure _VW_V40_V10vcore_Dload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLoadLibrary2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__import;VWEAK VClosure _VW_V40_V10vcore_Dmake__import = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeImport2, NULL };
VWEAK VWORD _V40_V10vcore_Dlookup__library;VWEAK VClosure _VW_V40_V10vcore_Dlookup__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLookupLibrary2, NULL };
VWEAK VWORD _V40_V10vcore_Dmultidefine;VWEAK VClosure _VW_V40_V10vcore_Dmultidefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiDefine2, NULL };
VWEAK VWORD _V40_V10vcore_Ddefine;VWEAK VClosure _VW_V40_V10vcore_Ddefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V40_V10vcore_Dfunction;VWEAK VClosure _VW_V40_V10vcore_Dfunction = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__length;VWEAK VClosure _VW_V40_V10vcore_Drecord__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordLength2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__set_B;VWEAK VClosure _VW_V40_V10vcore_Drecord__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordSet2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__ref;VWEAK VClosure _VW_V40_V10vcore_Drecord__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordRef2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord;VWEAK VClosure _VW_V40_V10vcore_Drecord = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateRecord2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__global_B;VWEAK VClosure _VW_V40_V10vcore_Dset__global_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetGlobalVar2, NULL };
VWEAK VWORD _V40_V10vcore_Ddefine__global;VWEAK VClosure _VW_V40_V10vcore_Ddefine__global = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V40_V10vcore_Dexit;VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V40_V10vcore_Dabort;VWEAK VClosure _VW_V40_V10vcore_Dabort = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAbort2, NULL };
VWEAK VWORD _V40_V10vcore_Dapply__cps;VWEAK VClosure _VW_V40_V10vcore_Dapply__cps = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApplyCps, NULL };
VWEAK VWORD _V40_V10vcore_Dapply;VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V40_V10vcore_Dnext;VWEAK VClosure _VW_V40_V10vcore_Dnext = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNext2, NULL };
VWEAK VWORD _V40_V10vcore_Draise;VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
VWEAK VWORD _V40_V10vcore_Dpop__exception__handler;VWEAK VClosure _VW_V40_V10vcore_Dpop__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopExceptionHandler, NULL };
VWEAK VWORD _V40_V10vcore_Dpush__exception__handler;VWEAK VClosure _VW_V40_V10vcore_Dpush__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushExceptionHandler, NULL };
VWEAK VWORD _V40_V10vcore_Dget__exception__handler;VWEAK VClosure _VW_V40_V10vcore_Dget__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetExceptionHandler, NULL };
VWEAK VWORD _V40_V10vcore_Dpop__dynamic;VWEAK VClosure _VW_V40_V10vcore_Dpop__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopDynamic, NULL };
VWEAK VWORD _V40_V10vcore_Dpush__dynamic;VWEAK VClosure _VW_V40_V10vcore_Dpush__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushDynamic, NULL };
VWEAK VWORD _V40_V10vcore_Dget__dynamics;VWEAK VClosure _VW_V40_V10vcore_Dget__dynamics = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetDynamics, NULL };
VWEAK VWORD _V40_V10vcore_Dnot;VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
VWEAK VWORD _V40_V10vcore_Dblob_E_Q;VWEAK VClosure _VW_V40_V10vcore_Dblob_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobEqv2, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol_E_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolEqv2, NULL };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dforeign__pointer_Q;VWEAK VClosure _VW_V40_V10vcore_Dforeign__pointer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VForeignPointerP2, NULL };
VWEAK VWORD _V40_V10vcore_Dnullptr_Q;VWEAK VClosure _VW_V40_V10vcore_Dnullptr_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullptrP2, NULL };
VWEAK VWORD _V40_V10vcore_Dvoid_Q;VWEAK VClosure _VW_V40_V10vcore_Dvoid_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVoidP2, NULL };
VWEAK VWORD _V40_V10vcore_Dchar_Q;VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V40_V10vcore_Dint_Q;VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring_Q;VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V40_V10vcore_Dblob_Q;VWEAK VClosure _VW_V40_V10vcore_Dblob_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobP2, NULL };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord_Q;VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table_Q;VWEAK VClosure _VW_V40_V10vcore_Dhash__table_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableP, NULL };
VWEAK VWORD _V40_V10vcore_Dvector_Q;VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V40_V10vcore_Dpair_Q;VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V40_V10vcore_Dnull_Q;VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V40_V10vcore_Dremainder;VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V40_V10vcore_Dquotient;VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V40_V10vcore_Dcmp;VWEAK VClosure _VW_V40_V10vcore_Dcmp = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmp2, NULL };
VWEAK VWORD _V40_V10vcore_D_W;VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V40_V10vcore_D_S;VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V40_V10vcore_D__;VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10vcore_Dexact;VWEAK VClosure _VW_V40_V10vcore_Dexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExact, NULL };
VWEAK VWORD _V40_V10vcore_Dinexact;VWEAK VClosure _VW_V40_V10vcore_Dinexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VInexact, NULL };
VWEAK VWORD _V10vcore_Dinexact;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dinexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.inexact" };
VWEAK VWORD _V10vcore_Dexact;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.exact" };
VWEAK VWORD _V10vcore_D_P;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.+" };
VWEAK VWORD _V10vcore_D__;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.-" };
VWEAK VWORD _V10vcore_D_S;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.*" };
VWEAK VWORD _V10vcore_D_W;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore./" };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V10vcore_Dquotient;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dquotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.quotient" };
VWEAK VWORD _V10vcore_Dremainder;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dremainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.remainder" };
VWEAK VWORD _V10vcore_Drecord_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Drecord_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.record\?" };
VWEAK VWORD _V10vcore_Dvector_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dvector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.vector\?" };
VWEAK VWORD _V10vcore_Dhash__table_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dhash__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.hash-table\?" };
VWEAK VWORD _V10vcore_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dprocedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.procedure\?" };
VWEAK VWORD _V10vcore_Dblob_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dblob_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.blob\?" };
VWEAK VWORD _V10vcore_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dsymbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.symbol\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V10vcore_Dint_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dint_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.int\?" };
VWEAK VWORD _V10vcore_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddouble_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.double\?" };
VWEAK VWORD _V10vcore_Dchar_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dchar_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.char\?" };
VWEAK VWORD _V10vcore_Dvoid_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dvoid_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.void\?" };
VWEAK VWORD _V10vcore_Dnullptr_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dnullptr_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.nullptr\?" };
VWEAK VWORD _V10vcore_Dforeign__pointer_Q;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dforeign__pointer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.foreign-pointer\?" };
VWEAK VWORD _V10vcore_Dsymbol_E_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dsymbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.symbol=\?" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Deqv_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Deqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.eqv\?" };
VWEAK VWORD _V10vcore_Dget__dynamics;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dget__dynamics = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.get-dynamics" };
VWEAK VWORD _V10vcore_Dpush__dynamic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dpush__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.push-dynamic" };
VWEAK VWORD _V10vcore_Dpop__dynamic;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dpop__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.pop-dynamic" };
VWEAK VWORD _V10vcore_Dget__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dget__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.get-exception-handler" };
VWEAK VWORD _V10vcore_Dpush__exception__handler;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Dpush__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.push-exception-handler" };
VWEAK VWORD _V10vcore_Dpop__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dpop__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.pop-exception-handler" };
VWEAK VWORD _V10vcore_Draise;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Draise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.raise" };
VWEAK VWORD _V10vcore_Dnext;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.next" };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V10vcore_Dapply;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.apply" };
VWEAK VWORD _V10vcore_Dapply__cps;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dapply__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.apply-cps" };
VWEAK VWORD _V10vcore_Dabort;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dabort = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.abort" };
VWEAK VWORD _V10vcore_Dexit;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dexit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.exit" };
VWEAK VWORD _V10vcore_Ddefine__global;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ddefine__global = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.define-global" };
VWEAK VWORD _V10vcore_Dset__global_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dset__global_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.set-global!" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
VWEAK VWORD _V10vcore_Dset__declare_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dset__declare_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.set-declare!" };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dunload__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dunload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.unload-library" };
VWEAK VWORD _V10vcore_Dset__car_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-car!" };
VWEAK VWORD _V10vcore_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-cdr!" };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V10vcore_Dvector__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dvector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.vector-ref" };
VWEAK VWORD _V10vcore_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dvector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.vector-set!" };
VWEAK VWORD _V10vcore_Dvector__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dvector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.vector-length" };
VWEAK VWORD _V10vcore_Df64vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df64vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f64vector\?" };
VWEAK VWORD _V10vcore_Dmake__f64vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f64vector" };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
VWEAK VWORD _V10vcore_Df64vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df64vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f64vector-ref" };
VWEAK VWORD _V10vcore_Df64vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df64vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f64vector-set!" };
VWEAK VWORD _V10vcore_Df64vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df64vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f64vector-length" };
VWEAK VWORD _V10vcore_Df32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f32vector\?" };
VWEAK VWORD _V10vcore_Dmake__f32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f32vector" };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
VWEAK VWORD _V10vcore_Df32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f32vector-ref" };
VWEAK VWORD _V10vcore_Df32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f32vector-set!" };
VWEAK VWORD _V10vcore_Df32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f32vector-length" };
VWEAK VWORD _V10vcore_Ds32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s32vector\?" };
VWEAK VWORD _V10vcore_Dmake__s32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s32vector" };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
VWEAK VWORD _V10vcore_Ds32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s32vector-ref" };
VWEAK VWORD _V10vcore_Ds32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s32vector-set!" };
VWEAK VWORD _V10vcore_Ds32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s32vector-length" };
VWEAK VWORD _V10vcore_Du16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Du16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.u16vector\?" };
VWEAK VWORD _V10vcore_Dmake__u16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-u16vector" };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
VWEAK VWORD _V10vcore_Du16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u16vector-ref" };
VWEAK VWORD _V10vcore_Du16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Du16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.u16vector-set!" };
VWEAK VWORD _V10vcore_Du16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Du16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.u16vector-length" };
VWEAK VWORD _V10vcore_Ds16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s16vector\?" };
VWEAK VWORD _V10vcore_Dmake__s16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s16vector" };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
VWEAK VWORD _V10vcore_Ds16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s16vector-ref" };
VWEAK VWORD _V10vcore_Ds16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s16vector-set!" };
VWEAK VWORD _V10vcore_Ds16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s16vector-length" };
VWEAK VWORD _V10vcore_Du8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Du8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.u8vector\?" };
VWEAK VWORD _V10vcore_Dmake__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-u8vector" };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
VWEAK VWORD _V10vcore_Du8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Du8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.u8vector-ref" };
VWEAK VWORD _V10vcore_Du8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u8vector-set!" };
VWEAK VWORD _V10vcore_Du8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Du8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.u8vector-length" };
VWEAK VWORD _V10vcore_Ds8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s8vector\?" };
VWEAK VWORD _V10vcore_Dmake__s8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__s8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-s8vector" };
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
VWEAK VWORD _V10vcore_Ds8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ds8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.s8vector-ref" };
VWEAK VWORD _V10vcore_Ds8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s8vector-set!" };
VWEAK VWORD _V10vcore_Ds8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Ds8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.s8vector-length" };
VWEAK VWORD _V10vcore_Dread__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dread__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.read-u8vector" };
VWEAK VWORD _V10vcore_Drecord;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Drecord = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.record" };
VWEAK VWORD _V10vcore_Drecord__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Drecord__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.record-ref" };
VWEAK VWORD _V10vcore_Drecord__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drecord__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.record-set!" };
VWEAK VWORD _V10vcore_Drecord__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Drecord__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.record-length" };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "##vcore.hash-table-hash-function" };
VWEAK VWORD _V10vcore_Dhash__table__vector;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dhash__table__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.hash-table-vector" };
VWEAK VWORD _V10vcore_Dhash__table__ref;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.hash-table-ref" };
VWEAK VWORD _V10vcore_Dhash__table__set_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dhash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.hash-table-set!" };
VWEAK VWORD _V10vcore_Dhash__table__delete_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dhash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.hash-table-delete!" };
VWEAK VWORD _V10vcore_Dmake__string;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-string" };
VWEAK VWORD _V10vcore_Dsubstring;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dsubstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.substring" };
VWEAK VWORD _V10vcore_Dstring__copy_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstring__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.string-copy!" };
VWEAK VWORD _V10vcore_Dstring__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dstring__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.string-ref" };
VWEAK VWORD _V10vcore_Dstring__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstring__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.string-set!" };
VWEAK VWORD _V10vcore_Dstring__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dstring__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.string-length" };
VWEAK VWORD _V10vcore_Dstring___Gsymbol;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->symbol" };
VWEAK VWORD _V10vcore_Dstring___Gnumber;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->number" };
VWEAK VWORD _V10vcore_Dsymbol___Gstring;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dsymbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.symbol->string" };
VWEAK VWORD _V10vcore_Dgensym;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dgensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.gensym" };
VWEAK VWORD _V10vcore_Dchar__integer;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dchar__integer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.char-integer" };
VWEAK VWORD _V10vcore_Dstdin___Gport;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstdin___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.stdin->port" };
VWEAK VWORD _V10vcore_Dstdout___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstdout___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stdout->port" };
VWEAK VWORD _V10vcore_Dstderr___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstderr___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stderr->port" };
VWEAK VWORD _V10vcore_Ddup__stdin;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ddup__stdin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.dup-stdin" };
VWEAK VWORD _V10vcore_Ddup__stdout;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ddup__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.dup-stdout" };
VWEAK VWORD _V10vcore_Ddup__stderr;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ddup__stderr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.dup-stderr" };
VWEAK VWORD _V10vcore_Dopen__input__stream;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dopen__input__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.open-input-stream" };
VWEAK VWORD _V10vcore_Dopen__output__stream;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-stream" };
VWEAK VWORD _V10vcore_Dclose__stream;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dclose__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.close-stream" };
VWEAK VWORD _V10vcore_Dtty__port_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dtty__port_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.tty-port\?" };
VWEAK VWORD _V10vcore_Dopen__output__string;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-string" };
VWEAK VWORD _V10vcore_Dget__output__string;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dget__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.get-output-string" };
VWEAK VWORD _V10vcore_Deof__object_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Deof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.eof-object\?" };
VWEAK VWORD _V10vcore_Dread__char;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-char" };
VWEAK VWORD _V10vcore_Dread__line;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-line" };
VWEAK VWORD _V10vcore_Dread__line2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dread__line2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.read-line2" };
VWEAK VWORD _V10vcore_Dread;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dread = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.read" };
VWEAK VWORD _V10vcore_Ddisplay__word;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ddisplay__word = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.display-word" };
VWEAK VWORD _V10vcore_Dwrite;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dwrite = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.write" };
VWEAK VWORD _V10vcore_Dnewline;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dnewline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.newline" };
VWEAK VWORD _V10vcore_Ddisplay__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ddisplay__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.display-stdout" };
VWEAK VWORD _V10vcore_Dwrite__stdout;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dwrite__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.write-stdout" };
VWEAK VWORD _V10vcore_Dnewline__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dnewline__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.newline-stdout" };
VWEAK VWORD _V10vcore_Dset__finalizer_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dset__finalizer_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.set-finalizer!" };
VWEAK VWORD _V10vcore_Dhas__finalizer_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhas__finalizer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.has-finalizer\?" };
VWEAK VWORD _V10vcore_Dfinalize_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dfinalize_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.finalize!" };
VWEAK VWORD _V10vcore_Dgarbage__collect;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dgarbage__collect = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.garbage-collect" };
VWEAK VWORD _V10vcore_Dyield__to__host;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dyield__to__host = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.yield-to-host" };
VWEAK VWORD _V10vcore_Dyield__to__host__major;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dyield__to__host__major = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.yield-to-host-major" };
VWEAK VWORD _V10vcore_Dsystem;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsystem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.system" };
VWEAK VWORD _V10vcore_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-input-process" };
VWEAK VWORD _V10vcore_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dopen__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.open-output-process" };
VWEAK VWORD _V10vcore_Dcommand__line;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dcommand__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.command-line" };
VWEAK VWORD _V10vcore_Dregister__sigint;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dregister__sigint = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.register-sigint" };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-random" };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.random-advance!" };
VWEAK VWORD _V10vcore_Dfiber__fork__list;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dfiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.fiber-fork-list" };
VWEAK VWORD _V10vcore_Dasync;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dasync = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.async" };
VWEAK VWORD _V10vcore_Dawait;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dawait = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.await" };
VWEAK VWORD _V10vcore_Drealpath;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Drealpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.realpath" };
VWEAK VWORD _V10vcore_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dmake__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.make-temporary-file" };
VWEAK VWORD _V10vcore_Daccess;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Daccess = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.access" };
VWEAK VWORD _V10vcore_Dcurrent__jiffy;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dcurrent__jiffy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.current-jiffy" };
VWEAK VWORD _V10vcore_Djiffies__per__second;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Djiffies__per__second = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.jiffies-per-second" };
VWEAK VWORD _V10vcore_Dbitwise__not;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-not" };
VWEAK VWORD _V10vcore_Dbitwise__ior;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__ior = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-ior" };
VWEAK VWORD _V10vcore_Dbitwise__xor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-xor" };
VWEAK VWORD _V10vcore_Dbitwise__and;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-and" };
VWEAK VWORD _V10vcore_Dbitwise__xnor;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__xnor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-xnor" };
VWEAK VWORD _V10vcore_Dbitwise__nand;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__nand = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-nand" };
VWEAK VWORD _V10vcore_Dbitwise__nor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__nor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-nor" };
VWEAK VWORD _V10vcore_Dbitwise__andc1;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc1" };
VWEAK VWORD _V10vcore_Dbitwise__andc2;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc2" };
VWEAK VWORD _V10vcore_Dbitwise__orc1;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc1" };
VWEAK VWORD _V10vcore_Dbitwise__orc2;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc2" };
VWEAK VWORD _V10vcore_Darithmetic__shift;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Darithmetic__shift = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.arithmetic-shift" };
VWEAK VWORD _V10vcore_Dbit__count;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dbit__count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.bit-count" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBitCount" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VArithmeticShift" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D607 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D606 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC1" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D605 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D604 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC1" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D603 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D602 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseNand" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D601 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseXnor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D600 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseAnd" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D599 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseXor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D598 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseIor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D597 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNot" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D596 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VJiffiesPerSecond" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D595 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCurrentJiffy" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D594 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAccess" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D593 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D592 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRealpath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D591 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D590 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D589 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D588 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D587 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D586 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D585 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D584 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D583 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D582 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VRegisterSigint" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D581 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D580 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D579 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D578 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D577 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VYieldToHostMajor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D576 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VYieldToHost" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D575 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VNewlineStdout" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VWriteStdout" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VDisplayStdout" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VTtyPortP" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VGensym" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableVector" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRecordLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordRef2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VCreateRecord2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VReadU8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VS8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListS8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeS8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS8VectorP" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VU8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListU8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeU8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU8VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS16VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VU16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListU16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeU16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VU16VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS32VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF32VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF64VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF64Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF64VectorP" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VUnloadLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSetDeclare" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSetGlobalVar2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VApplyCps" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRaise" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VPopExceptionHandler" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VPushExceptionHandler" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VGetExceptionHandler" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VPopDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VPushDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VGetDynamics" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEqv" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VForeignPointerP2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VNullptrP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VVoidP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VHashTableP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRecordP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D430 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D424 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExact" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D423 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VInexact" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D422 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCdr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D421 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCar2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D420 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlineCons2" };
VWEAK VWORD _V10vcore_Dqcons;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.qcons" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D419 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineEq2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D418 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineNot2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D417 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlinePairP2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D416 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlineNullP2" };
static __attribute__((constructor)) void VDllMain1() {
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V40_V10vcore_Dbit__count = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbit__count", &_VW_V40_V10vcore_Dbit__count), VPOINTER_CLOSURE);
  _V40_V10vcore_Darithmetic__shift = VEncodePointer(VLookupConstant("_V40_V10vcore_Darithmetic__shift", &_VW_V40_V10vcore_Darithmetic__shift), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__orc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc2", &_VW_V40_V10vcore_Dbitwise__orc2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__orc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc1", &_VW_V40_V10vcore_Dbitwise__orc1), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__andc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc2", &_VW_V40_V10vcore_Dbitwise__andc2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__andc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc1", &_VW_V40_V10vcore_Dbitwise__andc1), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__nor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nor", &_VW_V40_V10vcore_Dbitwise__nor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__nand = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nand", &_VW_V40_V10vcore_Dbitwise__nand), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__xnor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xnor", &_VW_V40_V10vcore_Dbitwise__xnor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__and = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__and", &_VW_V40_V10vcore_Dbitwise__and), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__xor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xor", &_VW_V40_V10vcore_Dbitwise__xor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__ior = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__ior", &_VW_V40_V10vcore_Dbitwise__ior), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__not = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__not", &_VW_V40_V10vcore_Dbitwise__not), VPOINTER_CLOSURE);
  _V40_V10vcore_Djiffies__per__second = VEncodePointer(VLookupConstant("_V40_V10vcore_Djiffies__per__second", &_VW_V40_V10vcore_Djiffies__per__second), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcurrent__jiffy = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcurrent__jiffy", &_VW_V40_V10vcore_Dcurrent__jiffy), VPOINTER_CLOSURE);
  _V40_V10vcore_Daccess = VEncodePointer(VLookupConstant("_V40_V10vcore_Daccess", &_VW_V40_V10vcore_Daccess), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Drealpath = VEncodePointer(VLookupConstant("_V40_V10vcore_Drealpath", &_VW_V40_V10vcore_Drealpath), VPOINTER_CLOSURE);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__bounded_B", &_VW_V40_V10vcore_Drandom__sample__bounded_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample_B", &_VW_V40_V10vcore_Drandom__sample_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V40_V10vcore_Dyield__to__host__major = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host__major", &_VW_V40_V10vcore_Dyield__to__host__major), VPOINTER_CLOSURE);
  _V40_V10vcore_Dyield__to__host = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host", &_VW_V40_V10vcore_Dyield__to__host), VPOINTER_CLOSURE);
  _V40_V10vcore_Dgarbage__collect = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgarbage__collect", &_VW_V40_V10vcore_Dgarbage__collect), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfinalize_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfinalize_B", &_VW_V40_V10vcore_Dfinalize_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhas__finalizer_Q", &_VW_V40_V10vcore_Dhas__finalizer_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__finalizer_B", &_VW_V40_V10vcore_Dset__finalizer_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnewline__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline__stdout", &_VW_V40_V10vcore_Dnewline__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Dwrite__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite__stdout", &_VW_V40_V10vcore_Dwrite__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddisplay__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__stdout", &_VW_V40_V10vcore_Ddisplay__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnewline = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline", &_VW_V40_V10vcore_Dnewline), VPOINTER_CLOSURE);
  _V40_V10vcore_Dwrite = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite", &_VW_V40_V10vcore_Dwrite), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddisplay__word = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__word", &_VW_V40_V10vcore_Ddisplay__word), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread", &_VW_V40_V10vcore_Dread), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__line2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line2", &_VW_V40_V10vcore_Dread__line2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line", &_VW_V40_V10vcore_Dread__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__char = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__char", &_VW_V40_V10vcore_Dread__char), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__string", &_VW_V40_V10vcore_Dopen__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dtty__port_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dtty__port_Q", &_VW_V40_V10vcore_Dtty__port_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__stream", &_VW_V40_V10vcore_Dopen__output__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__stream", &_VW_V40_V10vcore_Dopen__input__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddup__stderr = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stderr", &_VW_V40_V10vcore_Ddup__stderr), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddup__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stdout", &_VW_V40_V10vcore_Ddup__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddup__stdin = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddup__stdin", &_VW_V40_V10vcore_Ddup__stdin), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstderr___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstderr___Gport", &_VW_V40_V10vcore_Dstderr___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstdout___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdout___Gport", &_VW_V40_V10vcore_Dstdout___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstdin___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdin___Gport", &_VW_V40_V10vcore_Dstdin___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__set_B", &_VW_V40_V10vcore_Dhash__table__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__ref", &_VW_V40_V10vcore_Dhash__table__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__vector", &_VW_V40_V10vcore_Dhash__table__vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__hash__table", &_VW_V40_V10vcore_Dmake__hash__table), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__u8vector", &_VW_V40_V10vcore_Dread__u8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__length", &_VW_V40_V10vcore_Ds8vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__set_B", &_VW_V40_V10vcore_Ds8vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__ref", &_VW_V40_V10vcore_Ds8vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs8vector", &_VW_V40_V10vcore_Dlist___Gs8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s8vector", &_VW_V40_V10vcore_Dmake__s8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector_Q", &_VW_V40_V10vcore_Ds8vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__length", &_VW_V40_V10vcore_Du8vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__set_B", &_VW_V40_V10vcore_Du8vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__ref", &_VW_V40_V10vcore_Du8vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gu8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu8vector", &_VW_V40_V10vcore_Dlist___Gu8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u8vector", &_VW_V40_V10vcore_Dmake__u8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector_Q", &_VW_V40_V10vcore_Du8vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__length", &_VW_V40_V10vcore_Ds16vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__set_B", &_VW_V40_V10vcore_Ds16vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__ref", &_VW_V40_V10vcore_Ds16vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs16vector", &_VW_V40_V10vcore_Dlist___Gs16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s16vector", &_VW_V40_V10vcore_Dmake__s16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector_Q", &_VW_V40_V10vcore_Ds16vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__length", &_VW_V40_V10vcore_Du16vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__set_B", &_VW_V40_V10vcore_Du16vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__ref", &_VW_V40_V10vcore_Du16vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gu16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu16vector", &_VW_V40_V10vcore_Dlist___Gu16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__u16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u16vector", &_VW_V40_V10vcore_Dmake__u16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector_Q", &_VW_V40_V10vcore_Du16vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__length", &_VW_V40_V10vcore_Ds32vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__set_B", &_VW_V40_V10vcore_Ds32vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__ref", &_VW_V40_V10vcore_Ds32vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs32vector", &_VW_V40_V10vcore_Dlist___Gs32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s32vector", &_VW_V40_V10vcore_Dmake__s32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector_Q", &_VW_V40_V10vcore_Ds32vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__length", &_VW_V40_V10vcore_Df32vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__set_B", &_VW_V40_V10vcore_Df32vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__ref", &_VW_V40_V10vcore_Df32vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gf32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf32vector", &_VW_V40_V10vcore_Dlist___Gf32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__f32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f32vector", &_VW_V40_V10vcore_Dmake__f32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector_Q", &_VW_V40_V10vcore_Df32vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__length", &_VW_V40_V10vcore_Df64vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__set_B", &_VW_V40_V10vcore_Df64vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__ref", &_VW_V40_V10vcore_Df64vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gf64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf64vector", &_VW_V40_V10vcore_Dlist___Gf64vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__f64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f64vector", &_VW_V40_V10vcore_Dmake__f64vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector_Q", &_VW_V40_V10vcore_Df64vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dunload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dunload__library", &_VW_V40_V10vcore_Dunload__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dload__library", &_VW_V40_V10vcore_Dload__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__import", &_VW_V40_V10vcore_Dmake__import), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlookup__library", &_VW_V40_V10vcore_Dlookup__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmultidefine", &_VW_V40_V10vcore_Dmultidefine), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine", &_VW_V40_V10vcore_Ddefine), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfunction", &_VW_V40_V10vcore_Dfunction), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__length", &_VW_V40_V10vcore_Drecord__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__set_B", &_VW_V40_V10vcore_Drecord__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__ref", &_VW_V40_V10vcore_Drecord__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord", &_VW_V40_V10vcore_Drecord), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__global_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__global_B", &_VW_V40_V10vcore_Dset__global_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddefine__global = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine__global", &_VW_V40_V10vcore_Ddefine__global), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dabort = VEncodePointer(VLookupConstant("_V40_V10vcore_Dabort", &_VW_V40_V10vcore_Dabort), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply__cps = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply__cps", &_VW_V40_V10vcore_Dapply__cps), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnext = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnext", &_VW_V40_V10vcore_Dnext), VPOINTER_CLOSURE);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpop__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__exception__handler", &_VW_V40_V10vcore_Dpop__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpush__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__exception__handler", &_VW_V40_V10vcore_Dpush__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__exception__handler", &_VW_V40_V10vcore_Dget__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpop__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__dynamic", &_VW_V40_V10vcore_Dpop__dynamic), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpush__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__dynamic", &_VW_V40_V10vcore_Dpush__dynamic), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__dynamics = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__dynamics", &_VW_V40_V10vcore_Dget__dynamics), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V40_V10vcore_Deqv_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deqv_Q", &_VW_V40_V10vcore_Deqv_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_E_Q", &_VW_V40_V10vcore_Dblob_E_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_E_Q", &_VW_V40_V10vcore_Dsymbol_E_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dforeign__pointer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dforeign__pointer_Q", &_VW_V40_V10vcore_Dforeign__pointer_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnullptr_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnullptr_Q", &_VW_V40_V10vcore_Dnullptr_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvoid_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvoid_Q", &_VW_V40_V10vcore_Dvoid_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_Q", &_VW_V40_V10vcore_Dblob_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table_Q", &_VW_V40_V10vcore_Dhash__table_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcmp", &_VW_V40_V10vcore_Dcmp), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexact", &_VW_V40_V10vcore_Dexact), VPOINTER_CLOSURE);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V10vcore_Dinexact", &_VW_V10vcore_Dinexact), VPOINTER_OTHER);
  _V10vcore_Dexact = VEncodePointer(VLookupConstant("_V10vcore_Dexact", &_VW_V10vcore_Dexact), VPOINTER_OTHER);
  _V10vcore_D_P = VEncodePointer(VLookupConstant("_V10vcore_D_P", &_VW_V10vcore_D_P), VPOINTER_OTHER);
  _V10vcore_D__ = VEncodePointer(VLookupConstant("_V10vcore_D__", &_VW_V10vcore_D__), VPOINTER_OTHER);
  _V10vcore_D_S = VEncodePointer(VLookupConstant("_V10vcore_D_S", &_VW_V10vcore_D_S), VPOINTER_OTHER);
  _V10vcore_D_W = VEncodePointer(VLookupConstant("_V10vcore_D_W", &_VW_V10vcore_D_W), VPOINTER_OTHER);
  _V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V10vcore_Dcmp", &_VW_V10vcore_Dcmp), VPOINTER_OTHER);
  _V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V10vcore_Dquotient", &_VW_V10vcore_Dquotient), VPOINTER_OTHER);
  _V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V10vcore_Dremainder", &_VW_V10vcore_Dremainder), VPOINTER_OTHER);
  _V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V10vcore_Drecord_Q", &_VW_V10vcore_Drecord_Q), VPOINTER_OTHER);
  _V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V10vcore_Dvector_Q", &_VW_V10vcore_Dvector_Q), VPOINTER_OTHER);
  _V10vcore_Dhash__table_Q = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table_Q", &_VW_V10vcore_Dhash__table_Q), VPOINTER_OTHER);
  _V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V10vcore_Dprocedure_Q", &_VW_V10vcore_Dprocedure_Q), VPOINTER_OTHER);
  _V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V10vcore_Dblob_Q", &_VW_V10vcore_Dblob_Q), VPOINTER_OTHER);
  _V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V10vcore_Dsymbol_Q", &_VW_V10vcore_Dsymbol_Q), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V10vcore_Dstring_Q", &_VW_V10vcore_Dstring_Q), VPOINTER_OTHER);
  _V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V10vcore_Dint_Q", &_VW_V10vcore_Dint_Q), VPOINTER_OTHER);
  _V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V10vcore_Ddouble_Q", &_VW_V10vcore_Ddouble_Q), VPOINTER_OTHER);
  _V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V10vcore_Dchar_Q", &_VW_V10vcore_Dchar_Q), VPOINTER_OTHER);
  _V10vcore_Dvoid_Q = VEncodePointer(VLookupConstant("_V10vcore_Dvoid_Q", &_VW_V10vcore_Dvoid_Q), VPOINTER_OTHER);
  _V10vcore_Dnullptr_Q = VEncodePointer(VLookupConstant("_V10vcore_Dnullptr_Q", &_VW_V10vcore_Dnullptr_Q), VPOINTER_OTHER);
  _V10vcore_Dforeign__pointer_Q = VEncodePointer(VLookupConstant("_V10vcore_Dforeign__pointer_Q", &_VW_V10vcore_Dforeign__pointer_Q), VPOINTER_OTHER);
  _V10vcore_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V10vcore_Dsymbol_E_Q", &_VW_V10vcore_Dsymbol_E_Q), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10vcore_Dblob_E_Q", &_VW_V10vcore_Dblob_E_Q), VPOINTER_OTHER);
  _V10vcore_Deqv_Q = VEncodePointer(VLookupConstant("_V10vcore_Deqv_Q", &_VW_V10vcore_Deqv_Q), VPOINTER_OTHER);
  _V10vcore_Dget__dynamics = VEncodePointer(VLookupConstant("_V10vcore_Dget__dynamics", &_VW_V10vcore_Dget__dynamics), VPOINTER_OTHER);
  _V10vcore_Dpush__dynamic = VEncodePointer(VLookupConstant("_V10vcore_Dpush__dynamic", &_VW_V10vcore_Dpush__dynamic), VPOINTER_OTHER);
  _V10vcore_Dpop__dynamic = VEncodePointer(VLookupConstant("_V10vcore_Dpop__dynamic", &_VW_V10vcore_Dpop__dynamic), VPOINTER_OTHER);
  _V10vcore_Dget__exception__handler = VEncodePointer(VLookupConstant("_V10vcore_Dget__exception__handler", &_VW_V10vcore_Dget__exception__handler), VPOINTER_OTHER);
  _V10vcore_Dpush__exception__handler = VEncodePointer(VLookupConstant("_V10vcore_Dpush__exception__handler", &_VW_V10vcore_Dpush__exception__handler), VPOINTER_OTHER);
  _V10vcore_Dpop__exception__handler = VEncodePointer(VLookupConstant("_V10vcore_Dpop__exception__handler", &_VW_V10vcore_Dpop__exception__handler), VPOINTER_OTHER);
  _V10vcore_Draise = VEncodePointer(VLookupConstant("_V10vcore_Draise", &_VW_V10vcore_Draise), VPOINTER_OTHER);
  _V10vcore_Dnext = VEncodePointer(VLookupConstant("_V10vcore_Dnext", &_VW_V10vcore_Dnext), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V10vcore_Dcall_Wcc", &_VW_V10vcore_Dcall_Wcc), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V10vcore_Dcall__with__values", &_VW_V10vcore_Dcall__with__values), VPOINTER_OTHER);
  _V10vcore_Dapply = VEncodePointer(VLookupConstant("_V10vcore_Dapply", &_VW_V10vcore_Dapply), VPOINTER_OTHER);
  _V10vcore_Dapply__cps = VEncodePointer(VLookupConstant("_V10vcore_Dapply__cps", &_VW_V10vcore_Dapply__cps), VPOINTER_OTHER);
  _V10vcore_Dabort = VEncodePointer(VLookupConstant("_V10vcore_Dabort", &_VW_V10vcore_Dabort), VPOINTER_OTHER);
  _V10vcore_Dexit = VEncodePointer(VLookupConstant("_V10vcore_Dexit", &_VW_V10vcore_Dexit), VPOINTER_OTHER);
  _V10vcore_Ddefine__global = VEncodePointer(VLookupConstant("_V10vcore_Ddefine__global", &_VW_V10vcore_Ddefine__global), VPOINTER_OTHER);
  _V10vcore_Dset__global_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__global_B", &_VW_V10vcore_Dset__global_B), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V10vcore_Dfunction", &_VW_V10vcore_Dfunction), VPOINTER_OTHER);
  _V10vcore_Dset__declare_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__declare_B", &_VW_V10vcore_Dset__declare_B), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V10vcore_Ddefine", &_VW_V10vcore_Ddefine), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V10vcore_Dlookup__library", &_VW_V10vcore_Dlookup__library), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V10vcore_Dmake__import", &_VW_V10vcore_Dmake__import), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10vcore_Dunload__library = VEncodePointer(VLookupConstant("_V10vcore_Dunload__library", &_VW_V10vcore_Dunload__library), VPOINTER_OTHER);
  _V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__car_B", &_VW_V10vcore_Dset__car_B), VPOINTER_OTHER);
  _V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__cdr_B", &_VW_V10vcore_Dset__cdr_B), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gvector", &_VW_V10vcore_Dlist___Gvector), VPOINTER_OTHER);
  _V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V10vcore_Dvector__ref", &_VW_V10vcore_Dvector__ref), VPOINTER_OTHER);
  _V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dvector__set_B", &_VW_V10vcore_Dvector__set_B), VPOINTER_OTHER);
  _V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V10vcore_Dvector__length", &_VW_V10vcore_Dvector__length), VPOINTER_OTHER);
  _V10vcore_Df64vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Df64vector_Q", &_VW_V10vcore_Df64vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__f64vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__f64vector", &_VW_V10vcore_Dmake__f64vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gf64vector", &_VW_V10vcore_Dlist___Gf64vector), VPOINTER_OTHER);
  _V10vcore_Df64vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Df64vector__ref", &_VW_V10vcore_Df64vector__ref), VPOINTER_OTHER);
  _V10vcore_Df64vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Df64vector__set_B", &_VW_V10vcore_Df64vector__set_B), VPOINTER_OTHER);
  _V10vcore_Df64vector__length = VEncodePointer(VLookupConstant("_V10vcore_Df64vector__length", &_VW_V10vcore_Df64vector__length), VPOINTER_OTHER);
  _V10vcore_Df32vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Df32vector_Q", &_VW_V10vcore_Df32vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__f32vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__f32vector", &_VW_V10vcore_Dmake__f32vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gf32vector", &_VW_V10vcore_Dlist___Gf32vector), VPOINTER_OTHER);
  _V10vcore_Df32vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Df32vector__ref", &_VW_V10vcore_Df32vector__ref), VPOINTER_OTHER);
  _V10vcore_Df32vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Df32vector__set_B", &_VW_V10vcore_Df32vector__set_B), VPOINTER_OTHER);
  _V10vcore_Df32vector__length = VEncodePointer(VLookupConstant("_V10vcore_Df32vector__length", &_VW_V10vcore_Df32vector__length), VPOINTER_OTHER);
  _V10vcore_Ds32vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Ds32vector_Q", &_VW_V10vcore_Ds32vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__s32vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__s32vector", &_VW_V10vcore_Dmake__s32vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gs32vector", &_VW_V10vcore_Dlist___Gs32vector), VPOINTER_OTHER);
  _V10vcore_Ds32vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Ds32vector__ref", &_VW_V10vcore_Ds32vector__ref), VPOINTER_OTHER);
  _V10vcore_Ds32vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Ds32vector__set_B", &_VW_V10vcore_Ds32vector__set_B), VPOINTER_OTHER);
  _V10vcore_Ds32vector__length = VEncodePointer(VLookupConstant("_V10vcore_Ds32vector__length", &_VW_V10vcore_Ds32vector__length), VPOINTER_OTHER);
  _V10vcore_Du16vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Du16vector_Q", &_VW_V10vcore_Du16vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__u16vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__u16vector", &_VW_V10vcore_Dmake__u16vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gu16vector", &_VW_V10vcore_Dlist___Gu16vector), VPOINTER_OTHER);
  _V10vcore_Du16vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Du16vector__ref", &_VW_V10vcore_Du16vector__ref), VPOINTER_OTHER);
  _V10vcore_Du16vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Du16vector__set_B", &_VW_V10vcore_Du16vector__set_B), VPOINTER_OTHER);
  _V10vcore_Du16vector__length = VEncodePointer(VLookupConstant("_V10vcore_Du16vector__length", &_VW_V10vcore_Du16vector__length), VPOINTER_OTHER);
  _V10vcore_Ds16vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Ds16vector_Q", &_VW_V10vcore_Ds16vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__s16vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__s16vector", &_VW_V10vcore_Dmake__s16vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gs16vector", &_VW_V10vcore_Dlist___Gs16vector), VPOINTER_OTHER);
  _V10vcore_Ds16vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Ds16vector__ref", &_VW_V10vcore_Ds16vector__ref), VPOINTER_OTHER);
  _V10vcore_Ds16vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Ds16vector__set_B", &_VW_V10vcore_Ds16vector__set_B), VPOINTER_OTHER);
  _V10vcore_Ds16vector__length = VEncodePointer(VLookupConstant("_V10vcore_Ds16vector__length", &_VW_V10vcore_Ds16vector__length), VPOINTER_OTHER);
  _V10vcore_Du8vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Du8vector_Q", &_VW_V10vcore_Du8vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__u8vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__u8vector", &_VW_V10vcore_Dmake__u8vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gu8vector", &_VW_V10vcore_Dlist___Gu8vector), VPOINTER_OTHER);
  _V10vcore_Du8vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Du8vector__ref", &_VW_V10vcore_Du8vector__ref), VPOINTER_OTHER);
  _V10vcore_Du8vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Du8vector__set_B", &_VW_V10vcore_Du8vector__set_B), VPOINTER_OTHER);
  _V10vcore_Du8vector__length = VEncodePointer(VLookupConstant("_V10vcore_Du8vector__length", &_VW_V10vcore_Du8vector__length), VPOINTER_OTHER);
  _V10vcore_Ds8vector_Q = VEncodePointer(VLookupConstant("_V10vcore_Ds8vector_Q", &_VW_V10vcore_Ds8vector_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__s8vector = VEncodePointer(VLookupConstant("_V10vcore_Dmake__s8vector", &_VW_V10vcore_Dmake__s8vector), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gs8vector", &_VW_V10vcore_Dlist___Gs8vector), VPOINTER_OTHER);
  _V10vcore_Ds8vector__ref = VEncodePointer(VLookupConstant("_V10vcore_Ds8vector__ref", &_VW_V10vcore_Ds8vector__ref), VPOINTER_OTHER);
  _V10vcore_Ds8vector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Ds8vector__set_B", &_VW_V10vcore_Ds8vector__set_B), VPOINTER_OTHER);
  _V10vcore_Ds8vector__length = VEncodePointer(VLookupConstant("_V10vcore_Ds8vector__length", &_VW_V10vcore_Ds8vector__length), VPOINTER_OTHER);
  _V10vcore_Dread__u8vector = VEncodePointer(VLookupConstant("_V10vcore_Dread__u8vector", &_VW_V10vcore_Dread__u8vector), VPOINTER_OTHER);
  _V10vcore_Drecord = VEncodePointer(VLookupConstant("_V10vcore_Drecord", &_VW_V10vcore_Drecord), VPOINTER_OTHER);
  _V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V10vcore_Drecord__ref", &_VW_V10vcore_Drecord__ref), VPOINTER_OTHER);
  _V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V10vcore_Drecord__set_B", &_VW_V10vcore_Drecord__set_B), VPOINTER_OTHER);
  _V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V10vcore_Drecord__length", &_VW_V10vcore_Drecord__length), VPOINTER_OTHER);
  _V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V10vcore_Dmake__hash__table", &_VW_V10vcore_Dmake__hash__table), VPOINTER_OTHER);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__equivalence__function", &_VW_V10vcore_Dhash__table__equivalence__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__hash__function", &_VW_V10vcore_Dhash__table__hash__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__vector = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__vector", &_VW_V10vcore_Dhash__table__vector), VPOINTER_OTHER);
  _V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__ref", &_VW_V10vcore_Dhash__table__ref), VPOINTER_OTHER);
  _V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__set_B", &_VW_V10vcore_Dhash__table__set_B), VPOINTER_OTHER);
  _V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__delete_B", &_VW_V10vcore_Dhash__table__delete_B), VPOINTER_OTHER);
  _V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V10vcore_Dmake__string", &_VW_V10vcore_Dmake__string), VPOINTER_OTHER);
  _V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V10vcore_Dsubstring", &_VW_V10vcore_Dsubstring), VPOINTER_OTHER);
  _V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V10vcore_Dstring__copy_B", &_VW_V10vcore_Dstring__copy_B), VPOINTER_OTHER);
  _V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V10vcore_Dstring__ref", &_VW_V10vcore_Dstring__ref), VPOINTER_OTHER);
  _V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dstring__set_B", &_VW_V10vcore_Dstring__set_B), VPOINTER_OTHER);
  _V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V10vcore_Dstring__length", &_VW_V10vcore_Dstring__length), VPOINTER_OTHER);
  _V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V10vcore_Dstring___Gsymbol", &_VW_V10vcore_Dstring___Gsymbol), VPOINTER_OTHER);
  _V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V10vcore_Dstring___Gnumber", &_VW_V10vcore_Dstring___Gnumber), VPOINTER_OTHER);
  _V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V10vcore_Dsymbol___Gstring", &_VW_V10vcore_Dsymbol___Gstring), VPOINTER_OTHER);
  _V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V10vcore_Dgensym", &_VW_V10vcore_Dgensym), VPOINTER_OTHER);
  _V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V10vcore_Dchar__integer", &_VW_V10vcore_Dchar__integer), VPOINTER_OTHER);
  _V10vcore_Dstdin___Gport = VEncodePointer(VLookupConstant("_V10vcore_Dstdin___Gport", &_VW_V10vcore_Dstdin___Gport), VPOINTER_OTHER);
  _V10vcore_Dstdout___Gport = VEncodePointer(VLookupConstant("_V10vcore_Dstdout___Gport", &_VW_V10vcore_Dstdout___Gport), VPOINTER_OTHER);
  _V10vcore_Dstderr___Gport = VEncodePointer(VLookupConstant("_V10vcore_Dstderr___Gport", &_VW_V10vcore_Dstderr___Gport), VPOINTER_OTHER);
  _V10vcore_Ddup__stdin = VEncodePointer(VLookupConstant("_V10vcore_Ddup__stdin", &_VW_V10vcore_Ddup__stdin), VPOINTER_OTHER);
  _V10vcore_Ddup__stdout = VEncodePointer(VLookupConstant("_V10vcore_Ddup__stdout", &_VW_V10vcore_Ddup__stdout), VPOINTER_OTHER);
  _V10vcore_Ddup__stderr = VEncodePointer(VLookupConstant("_V10vcore_Ddup__stderr", &_VW_V10vcore_Ddup__stderr), VPOINTER_OTHER);
  _V10vcore_Dopen__input__stream = VEncodePointer(VLookupConstant("_V10vcore_Dopen__input__stream", &_VW_V10vcore_Dopen__input__stream), VPOINTER_OTHER);
  _V10vcore_Dopen__output__stream = VEncodePointer(VLookupConstant("_V10vcore_Dopen__output__stream", &_VW_V10vcore_Dopen__output__stream), VPOINTER_OTHER);
  _V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V10vcore_Dclose__stream", &_VW_V10vcore_Dclose__stream), VPOINTER_OTHER);
  _V10vcore_Dtty__port_Q = VEncodePointer(VLookupConstant("_V10vcore_Dtty__port_Q", &_VW_V10vcore_Dtty__port_Q), VPOINTER_OTHER);
  _V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V10vcore_Dopen__output__string", &_VW_V10vcore_Dopen__output__string), VPOINTER_OTHER);
  _V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V10vcore_Dget__output__string", &_VW_V10vcore_Dget__output__string), VPOINTER_OTHER);
  _V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V10vcore_Deof__object_Q", &_VW_V10vcore_Deof__object_Q), VPOINTER_OTHER);
  _V10vcore_Dread__char = VEncodePointer(VLookupConstant("_V10vcore_Dread__char", &_VW_V10vcore_Dread__char), VPOINTER_OTHER);
  _V10vcore_Dread__line = VEncodePointer(VLookupConstant("_V10vcore_Dread__line", &_VW_V10vcore_Dread__line), VPOINTER_OTHER);
  _V10vcore_Dread__line2 = VEncodePointer(VLookupConstant("_V10vcore_Dread__line2", &_VW_V10vcore_Dread__line2), VPOINTER_OTHER);
  _V10vcore_Dread = VEncodePointer(VLookupConstant("_V10vcore_Dread", &_VW_V10vcore_Dread), VPOINTER_OTHER);
  _V10vcore_Ddisplay__word = VEncodePointer(VLookupConstant("_V10vcore_Ddisplay__word", &_VW_V10vcore_Ddisplay__word), VPOINTER_OTHER);
  _V10vcore_Dwrite = VEncodePointer(VLookupConstant("_V10vcore_Dwrite", &_VW_V10vcore_Dwrite), VPOINTER_OTHER);
  _V10vcore_Dnewline = VEncodePointer(VLookupConstant("_V10vcore_Dnewline", &_VW_V10vcore_Dnewline), VPOINTER_OTHER);
  _V10vcore_Ddisplay__stdout = VEncodePointer(VLookupConstant("_V10vcore_Ddisplay__stdout", &_VW_V10vcore_Ddisplay__stdout), VPOINTER_OTHER);
  _V10vcore_Dwrite__stdout = VEncodePointer(VLookupConstant("_V10vcore_Dwrite__stdout", &_VW_V10vcore_Dwrite__stdout), VPOINTER_OTHER);
  _V10vcore_Dnewline__stdout = VEncodePointer(VLookupConstant("_V10vcore_Dnewline__stdout", &_VW_V10vcore_Dnewline__stdout), VPOINTER_OTHER);
  _V10vcore_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__finalizer_B", &_VW_V10vcore_Dset__finalizer_B), VPOINTER_OTHER);
  _V10vcore_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V10vcore_Dhas__finalizer_Q", &_VW_V10vcore_Dhas__finalizer_Q), VPOINTER_OTHER);
  _V10vcore_Dfinalize_B = VEncodePointer(VLookupConstant("_V10vcore_Dfinalize_B", &_VW_V10vcore_Dfinalize_B), VPOINTER_OTHER);
  _V10vcore_Dgarbage__collect = VEncodePointer(VLookupConstant("_V10vcore_Dgarbage__collect", &_VW_V10vcore_Dgarbage__collect), VPOINTER_OTHER);
  _V10vcore_Dyield__to__host = VEncodePointer(VLookupConstant("_V10vcore_Dyield__to__host", &_VW_V10vcore_Dyield__to__host), VPOINTER_OTHER);
  _V10vcore_Dyield__to__host__major = VEncodePointer(VLookupConstant("_V10vcore_Dyield__to__host__major", &_VW_V10vcore_Dyield__to__host__major), VPOINTER_OTHER);
  _V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V10vcore_Dsystem", &_VW_V10vcore_Dsystem), VPOINTER_OTHER);
  _V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V10vcore_Dopen__input__process", &_VW_V10vcore_Dopen__input__process), VPOINTER_OTHER);
  _V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V10vcore_Dopen__output__process", &_VW_V10vcore_Dopen__output__process), VPOINTER_OTHER);
  _V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V10vcore_Dcommand__line", &_VW_V10vcore_Dcommand__line), VPOINTER_OTHER);
  _V10vcore_Dregister__sigint = VEncodePointer(VLookupConstant("_V10vcore_Dregister__sigint", &_VW_V10vcore_Dregister__sigint), VPOINTER_OTHER);
  _V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V10vcore_Dmake__random", &_VW_V10vcore_Dmake__random), VPOINTER_OTHER);
  _V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V10vcore_Drandom__copy", &_VW_V10vcore_Drandom__copy), VPOINTER_OTHER);
  _V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample_B", &_VW_V10vcore_Drandom__sample_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__bounded_B", &_VW_V10vcore_Drandom__sample__bounded_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__float_B", &_VW_V10vcore_Drandom__sample__float_B), VPOINTER_OTHER);
  _V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__advance_B", &_VW_V10vcore_Drandom__advance_B), VPOINTER_OTHER);
  _V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V10vcore_Dfiber__fork__list", &_VW_V10vcore_Dfiber__fork__list), VPOINTER_OTHER);
  _V10vcore_Dasync = VEncodePointer(VLookupConstant("_V10vcore_Dasync", &_VW_V10vcore_Dasync), VPOINTER_OTHER);
  _V10vcore_Dawait = VEncodePointer(VLookupConstant("_V10vcore_Dawait", &_VW_V10vcore_Dawait), VPOINTER_OTHER);
  _V10vcore_Drealpath = VEncodePointer(VLookupConstant("_V10vcore_Drealpath", &_VW_V10vcore_Drealpath), VPOINTER_OTHER);
  _V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V10vcore_Dmake__temporary__file", &_VW_V10vcore_Dmake__temporary__file), VPOINTER_OTHER);
  _V10vcore_Daccess = VEncodePointer(VLookupConstant("_V10vcore_Daccess", &_VW_V10vcore_Daccess), VPOINTER_OTHER);
  _V10vcore_Dcurrent__jiffy = VEncodePointer(VLookupConstant("_V10vcore_Dcurrent__jiffy", &_VW_V10vcore_Dcurrent__jiffy), VPOINTER_OTHER);
  _V10vcore_Djiffies__per__second = VEncodePointer(VLookupConstant("_V10vcore_Djiffies__per__second", &_VW_V10vcore_Djiffies__per__second), VPOINTER_OTHER);
  _V10vcore_Dbitwise__not = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__not", &_VW_V10vcore_Dbitwise__not), VPOINTER_OTHER);
  _V10vcore_Dbitwise__ior = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__ior", &_VW_V10vcore_Dbitwise__ior), VPOINTER_OTHER);
  _V10vcore_Dbitwise__xor = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__xor", &_VW_V10vcore_Dbitwise__xor), VPOINTER_OTHER);
  _V10vcore_Dbitwise__and = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__and", &_VW_V10vcore_Dbitwise__and), VPOINTER_OTHER);
  _V10vcore_Dbitwise__xnor = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__xnor", &_VW_V10vcore_Dbitwise__xnor), VPOINTER_OTHER);
  _V10vcore_Dbitwise__nand = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__nand", &_VW_V10vcore_Dbitwise__nand), VPOINTER_OTHER);
  _V10vcore_Dbitwise__nor = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__nor", &_VW_V10vcore_Dbitwise__nor), VPOINTER_OTHER);
  _V10vcore_Dbitwise__andc1 = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__andc1", &_VW_V10vcore_Dbitwise__andc1), VPOINTER_OTHER);
  _V10vcore_Dbitwise__andc2 = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__andc2", &_VW_V10vcore_Dbitwise__andc2), VPOINTER_OTHER);
  _V10vcore_Dbitwise__orc1 = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__orc1", &_VW_V10vcore_Dbitwise__orc1), VPOINTER_OTHER);
  _V10vcore_Dbitwise__orc2 = VEncodePointer(VLookupConstant("_V10vcore_Dbitwise__orc2", &_VW_V10vcore_Dbitwise__orc2), VPOINTER_OTHER);
  _V10vcore_Darithmetic__shift = VEncodePointer(VLookupConstant("_V10vcore_Darithmetic__shift", &_VW_V10vcore_Darithmetic__shift), VPOINTER_OTHER);
  _V10vcore_Dbit__count = VEncodePointer(VLookupConstant("_V10vcore_Dbit__count", &_VW_V10vcore_Dbit__count), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V10vcore_Dnull_Q", &_VW_V10vcore_Dnull_Q), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V10vcore_Dpair_Q", &_VW_V10vcore_Dpair_Q), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VLookupConstant("_V10vcore_Dnot", &_VW_V10vcore_Dnot), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V10vcore_Deq_Q", &_VW_V10vcore_Deq_Q), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VLookupConstant("_V10vcore_Dcons", &_VW_V10vcore_Dcons), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VLookupConstant("_V10vcore_Dcar", &_VW_V10vcore_Dcar), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V10vcore_Dcdr", &_VW_V10vcore_Dcdr), VPOINTER_OTHER);
  _V10vcore_Dqcons = VEncodePointer(VLookupConstant("_V10vcore_Dqcons", &_VW_V10vcore_Dqcons), VPOINTER_OTHER);
}
static void _V10_Dlookup__inline__name_D5_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.24 1 0) ((bruijn ##.k.25 0 0) (bruijn ##.p.24 1 0)) ((bruijn ##.eqv?.4 8 0) (bruijn ##.k.25 0 0) (bruijn ##.sym.8 6 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dqcons);
}
}
static void _V10_Dlookup__inline__name_D5_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.23 0 0) ((bruijn ##.k.16 8 0) (##string ##.string.422)) ((bruijn ##.k.16 8 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D422.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlookup__inline__name_D5_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.22 0 0) ((bruijn ##.k.16 7 0) (##string ##.string.421)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__inline__name_D5_k12) (bruijn ##.sym.8 7 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D421.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k12, self)})),
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dcdr);
}
}
static void _V10_Dlookup__inline__name_D5_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.21 0 0) ((bruijn ##.k.16 6 0) (##string ##.string.420)) ((bruijn ##.eqv?.4 8 0) (close _V10_Dlookup__inline__name_D5_k11) (bruijn ##.sym.8 6 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D420.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k11, self)})),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcar);
}
}
static void _V10_Dlookup__inline__name_D5_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlookup__inline__name_D5_k9) (close _V10_Dlookup__inline__name_D5_k10))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlookup__inline__name_D5_k9, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k10, self)})));
}
static void _V10_Dlookup__inline__name_D5_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.20 0 0) ((bruijn ##.k.16 4 0) (##string ##.string.419)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__inline__name_D5_k8) (bruijn ##.sym.8 4 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D419.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k8, self)})),
      statics->up->up->up->vars[1],
      _V10vcore_Dcons);
}
}
static void _V10_Dlookup__inline__name_D5_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.19 0 0) ((bruijn ##.k.16 3 0) (##string ##.string.418)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__inline__name_D5_k7) (bruijn ##.sym.8 3 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D418.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k7, self)})),
      statics->up->up->vars[1],
      _V10vcore_Deq_Q);
}
}
static void _V10_Dlookup__inline__name_D5_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.18 0 0) ((bruijn ##.k.16 2 0) (##string ##.string.417)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__inline__name_D5_k6) (bruijn ##.sym.8 2 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D417.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k6, self)})),
      statics->up->vars[1],
      _V10vcore_Dnot);
}
}
static void _V10_Dlookup__inline__name_D5_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.17 0 0) ((bruijn ##.k.16 1 0) (##string ##.string.416)) ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__inline__name_D5_k5) (bruijn ##.sym.8 1 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D416.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k5, self)})),
      statics->vars[1],
      _V10vcore_Dpair_Q);
}
}
static void _V10_Dlookup__inline__name_D5_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__inline__name_D5_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.eqv?.4 2 0) (close _V10_Dlookup__inline__name_D5_k4) (bruijn ##.sym.8 0 1) '##vcore.null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k4, self)})),
      _var1,
      _V10vcore_Dnull_Q);
}
static void _V10_Dlookup__intrinsic__name_D6_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.215 1 0) ((bruijn ##.k.216 0 0) (bruijn ##.p.215 1 0)) ((bruijn ##.eqv?.4 57 0) (bruijn ##.k.216 0 0) (bruijn ##.sym.10 55 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 3,
      _var0,
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dqcons);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.214 0 0) ((bruijn ##.k.26 189 0) (##string ##.string.609)) ((bruijn ##.k.26 189 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D609.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlookup__intrinsic__name_D6_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) ((bruijn ##.k.26 188 0) (##string ##.string.608)) ((bruijn ##.eqv?.4 190 0) (close _V10_Dlookup__intrinsic__name_D6_k202) (bruijn ##.sym.10 188 1) '##vcore.bit-count))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D608.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k202, self)})),
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dbit__count);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) ((bruijn ##.k.26 187 0) (##string ##.string.607)) ((bruijn ##.eqv?.4 189 0) (close _V10_Dlookup__intrinsic__name_D6_k201) (bruijn ##.sym.10 187 1) '##vcore.arithmetic-shift))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D607.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k201, self)})),
      VGetArg(statics, 187-1, 1),
      _V10vcore_Darithmetic__shift);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.k.26 186 0) (##string ##.string.606)) ((bruijn ##.eqv?.4 188 0) (close _V10_Dlookup__intrinsic__name_D6_k200) (bruijn ##.sym.10 186 1) '##vcore.bitwise-orc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D606.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k200, self)})),
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dbitwise__orc2);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.210 0 0) ((bruijn ##.k.26 185 0) (##string ##.string.605)) ((bruijn ##.eqv?.4 187 0) (close _V10_Dlookup__intrinsic__name_D6_k199) (bruijn ##.sym.10 185 1) '##vcore.bitwise-orc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D605.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k199, self)})),
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dbitwise__orc1);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.209 0 0) ((bruijn ##.k.26 184 0) (##string ##.string.604)) ((bruijn ##.eqv?.4 186 0) (close _V10_Dlookup__intrinsic__name_D6_k198) (bruijn ##.sym.10 184 1) '##vcore.bitwise-andc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D604.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k198, self)})),
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dbitwise__andc2);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.208 0 0) ((bruijn ##.k.26 183 0) (##string ##.string.603)) ((bruijn ##.eqv?.4 185 0) (close _V10_Dlookup__intrinsic__name_D6_k197) (bruijn ##.sym.10 183 1) '##vcore.bitwise-andc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D603.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k197, self)})),
      VGetArg(statics, 183-1, 1),
      _V10vcore_Dbitwise__andc1);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.207 0 0) ((bruijn ##.k.26 182 0) (##string ##.string.602)) ((bruijn ##.eqv?.4 184 0) (close _V10_Dlookup__intrinsic__name_D6_k196) (bruijn ##.sym.10 182 1) '##vcore.bitwise-nor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D602.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k196, self)})),
      VGetArg(statics, 182-1, 1),
      _V10vcore_Dbitwise__nor);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.206 0 0) ((bruijn ##.k.26 181 0) (##string ##.string.601)) ((bruijn ##.eqv?.4 183 0) (close _V10_Dlookup__intrinsic__name_D6_k195) (bruijn ##.sym.10 181 1) '##vcore.bitwise-nand))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D601.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k195, self)})),
      VGetArg(statics, 181-1, 1),
      _V10vcore_Dbitwise__nand);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.205 0 0) ((bruijn ##.k.26 180 0) (##string ##.string.600)) ((bruijn ##.eqv?.4 182 0) (close _V10_Dlookup__intrinsic__name_D6_k194) (bruijn ##.sym.10 180 1) '##vcore.bitwise-xnor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D600.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k194, self)})),
      VGetArg(statics, 180-1, 1),
      _V10vcore_Dbitwise__xnor);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.204 0 0) ((bruijn ##.k.26 179 0) (##string ##.string.599)) ((bruijn ##.eqv?.4 181 0) (close _V10_Dlookup__intrinsic__name_D6_k193) (bruijn ##.sym.10 179 1) '##vcore.bitwise-and))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D599.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k193, self)})),
      VGetArg(statics, 179-1, 1),
      _V10vcore_Dbitwise__and);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.k.26 178 0) (##string ##.string.598)) ((bruijn ##.eqv?.4 180 0) (close _V10_Dlookup__intrinsic__name_D6_k192) (bruijn ##.sym.10 178 1) '##vcore.bitwise-xor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D598.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k192, self)})),
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dbitwise__xor);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) ((bruijn ##.k.26 177 0) (##string ##.string.597)) ((bruijn ##.eqv?.4 179 0) (close _V10_Dlookup__intrinsic__name_D6_k191) (bruijn ##.sym.10 177 1) '##vcore.bitwise-ior))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D597.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k191, self)})),
      VGetArg(statics, 177-1, 1),
      _V10vcore_Dbitwise__ior);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.k.26 176 0) (##string ##.string.596)) ((bruijn ##.eqv?.4 178 0) (close _V10_Dlookup__intrinsic__name_D6_k190) (bruijn ##.sym.10 176 1) '##vcore.bitwise-not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D596.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k190, self)})),
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dbitwise__not);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.200 0 0) ((bruijn ##.k.26 175 0) (##string ##.string.595)) ((bruijn ##.eqv?.4 177 0) (close _V10_Dlookup__intrinsic__name_D6_k189) (bruijn ##.sym.10 175 1) '##vcore.jiffies-per-second))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D595.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k189, self)})),
      VGetArg(statics, 175-1, 1),
      _V10vcore_Djiffies__per__second);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.199 0 0) ((bruijn ##.k.26 174 0) (##string ##.string.594)) ((bruijn ##.eqv?.4 176 0) (close _V10_Dlookup__intrinsic__name_D6_k188) (bruijn ##.sym.10 174 1) '##vcore.current-jiffy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D594.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k188, self)})),
      VGetArg(statics, 174-1, 1),
      _V10vcore_Dcurrent__jiffy);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.198 0 0) ((bruijn ##.k.26 173 0) (##string ##.string.593)) ((bruijn ##.eqv?.4 175 0) (close _V10_Dlookup__intrinsic__name_D6_k187) (bruijn ##.sym.10 173 1) '##vcore.access))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D593.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k187, self)})),
      VGetArg(statics, 173-1, 1),
      _V10vcore_Daccess);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.197 0 0) ((bruijn ##.k.26 172 0) (##string ##.string.592)) ((bruijn ##.eqv?.4 174 0) (close _V10_Dlookup__intrinsic__name_D6_k186) (bruijn ##.sym.10 172 1) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D592.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k186, self)})),
      VGetArg(statics, 172-1, 1),
      _V10vcore_Dmake__temporary__file);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.196 0 0) ((bruijn ##.k.26 171 0) (##string ##.string.591)) ((bruijn ##.eqv?.4 173 0) (close _V10_Dlookup__intrinsic__name_D6_k185) (bruijn ##.sym.10 171 1) '##vcore.realpath))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D591.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k185, self)})),
      VGetArg(statics, 171-1, 1),
      _V10vcore_Drealpath);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.k.26 170 0) (##string ##.string.590)) ((bruijn ##.eqv?.4 172 0) (close _V10_Dlookup__intrinsic__name_D6_k184) (bruijn ##.sym.10 170 1) '##vcore.await))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D590.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k184, self)})),
      VGetArg(statics, 170-1, 1),
      _V10vcore_Dawait);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.194 0 0) ((bruijn ##.k.26 169 0) (##string ##.string.589)) ((bruijn ##.eqv?.4 171 0) (close _V10_Dlookup__intrinsic__name_D6_k183) (bruijn ##.sym.10 169 1) '##vcore.async))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D589.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k183, self)})),
      VGetArg(statics, 169-1, 1),
      _V10vcore_Dasync);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.193 0 0) ((bruijn ##.k.26 168 0) (##string ##.string.588)) ((bruijn ##.eqv?.4 170 0) (close _V10_Dlookup__intrinsic__name_D6_k182) (bruijn ##.sym.10 168 1) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D588.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k182, self)})),
      VGetArg(statics, 168-1, 1),
      _V10vcore_Dfiber__fork__list);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) ((bruijn ##.k.26 167 0) (##string ##.string.587)) ((bruijn ##.eqv?.4 169 0) (close _V10_Dlookup__intrinsic__name_D6_k181) (bruijn ##.sym.10 167 1) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D587.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k181, self)})),
      VGetArg(statics, 167-1, 1),
      _V10vcore_Drandom__advance_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.k.26 166 0) (##string ##.string.586)) ((bruijn ##.eqv?.4 168 0) (close _V10_Dlookup__intrinsic__name_D6_k180) (bruijn ##.sym.10 166 1) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D586.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k180, self)})),
      VGetArg(statics, 166-1, 1),
      _V10vcore_Drandom__sample__float_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.k.26 165 0) (##string ##.string.585)) ((bruijn ##.eqv?.4 167 0) (close _V10_Dlookup__intrinsic__name_D6_k179) (bruijn ##.sym.10 165 1) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D585.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k179, self)})),
      VGetArg(statics, 165-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.189 0 0) ((bruijn ##.k.26 164 0) (##string ##.string.584)) ((bruijn ##.eqv?.4 166 0) (close _V10_Dlookup__intrinsic__name_D6_k178) (bruijn ##.sym.10 164 1) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D584.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k178, self)})),
      VGetArg(statics, 164-1, 1),
      _V10vcore_Drandom__sample_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.188 0 0) ((bruijn ##.k.26 163 0) (##string ##.string.583)) ((bruijn ##.eqv?.4 165 0) (close _V10_Dlookup__intrinsic__name_D6_k177) (bruijn ##.sym.10 163 1) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D583.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k177, self)})),
      VGetArg(statics, 163-1, 1),
      _V10vcore_Drandom__copy);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.k.26 162 0) (##string ##.string.582)) ((bruijn ##.eqv?.4 164 0) (close _V10_Dlookup__intrinsic__name_D6_k176) (bruijn ##.sym.10 162 1) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D582.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k176, self)})),
      VGetArg(statics, 162-1, 1),
      _V10vcore_Dmake__random);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.186 0 0) ((bruijn ##.k.26 161 0) (##string ##.string.581)) ((bruijn ##.eqv?.4 163 0) (close _V10_Dlookup__intrinsic__name_D6_k175) (bruijn ##.sym.10 161 1) '##vcore.register-sigint))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D581.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k175, self)})),
      VGetArg(statics, 161-1, 1),
      _V10vcore_Dregister__sigint);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.185 0 0) ((bruijn ##.k.26 160 0) (##string ##.string.580)) ((bruijn ##.eqv?.4 162 0) (close _V10_Dlookup__intrinsic__name_D6_k174) (bruijn ##.sym.10 160 1) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D580.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k174, self)})),
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dcommand__line);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.184 0 0) ((bruijn ##.k.26 159 0) (##string ##.string.579)) ((bruijn ##.eqv?.4 161 0) (close _V10_Dlookup__intrinsic__name_D6_k173) (bruijn ##.sym.10 159 1) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D579.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k173, self)})),
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dopen__output__process);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) ((bruijn ##.k.26 158 0) (##string ##.string.578)) ((bruijn ##.eqv?.4 160 0) (close _V10_Dlookup__intrinsic__name_D6_k172) (bruijn ##.sym.10 158 1) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D578.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k172, self)})),
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dopen__input__process);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) ((bruijn ##.k.26 157 0) (##string ##.string.577)) ((bruijn ##.eqv?.4 159 0) (close _V10_Dlookup__intrinsic__name_D6_k171) (bruijn ##.sym.10 157 1) '##vcore.system))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D577.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k171, self)})),
      VGetArg(statics, 157-1, 1),
      _V10vcore_Dsystem);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) ((bruijn ##.k.26 156 0) (##string ##.string.576)) ((bruijn ##.eqv?.4 158 0) (close _V10_Dlookup__intrinsic__name_D6_k170) (bruijn ##.sym.10 156 1) '##vcore.yield-to-host-major))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D576.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k170, self)})),
      VGetArg(statics, 156-1, 1),
      _V10vcore_Dyield__to__host__major);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.180 0 0) ((bruijn ##.k.26 155 0) (##string ##.string.575)) ((bruijn ##.eqv?.4 157 0) (close _V10_Dlookup__intrinsic__name_D6_k169) (bruijn ##.sym.10 155 1) '##vcore.yield-to-host))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D575.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k169, self)})),
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dyield__to__host);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.179 0 0) ((bruijn ##.k.26 154 0) (##string ##.string.574)) ((bruijn ##.eqv?.4 156 0) (close _V10_Dlookup__intrinsic__name_D6_k168) (bruijn ##.sym.10 154 1) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D574.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k168, self)})),
      VGetArg(statics, 154-1, 1),
      _V10vcore_Dgarbage__collect);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.178 0 0) ((bruijn ##.k.26 153 0) (##string ##.string.573)) ((bruijn ##.eqv?.4 155 0) (close _V10_Dlookup__intrinsic__name_D6_k167) (bruijn ##.sym.10 153 1) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D573.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k167, self)})),
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dfinalize_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) ((bruijn ##.k.26 152 0) (##string ##.string.572)) ((bruijn ##.eqv?.4 154 0) (close _V10_Dlookup__intrinsic__name_D6_k166) (bruijn ##.sym.10 152 1) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D572.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k166, self)})),
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dhas__finalizer_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.176 0 0) ((bruijn ##.k.26 151 0) (##string ##.string.571)) ((bruijn ##.eqv?.4 153 0) (close _V10_Dlookup__intrinsic__name_D6_k165) (bruijn ##.sym.10 151 1) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D571.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k165, self)})),
      VGetArg(statics, 151-1, 1),
      _V10vcore_Dset__finalizer_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.175 0 0) ((bruijn ##.k.26 150 0) (##string ##.string.570)) ((bruijn ##.eqv?.4 152 0) (close _V10_Dlookup__intrinsic__name_D6_k164) (bruijn ##.sym.10 150 1) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D570.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k164, self)})),
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dnewline__stdout);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.174 0 0) ((bruijn ##.k.26 149 0) (##string ##.string.569)) ((bruijn ##.eqv?.4 151 0) (close _V10_Dlookup__intrinsic__name_D6_k163) (bruijn ##.sym.10 149 1) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D569.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k163, self)})),
      VGetArg(statics, 149-1, 1),
      _V10vcore_Dwrite__stdout);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.173 0 0) ((bruijn ##.k.26 148 0) (##string ##.string.568)) ((bruijn ##.eqv?.4 150 0) (close _V10_Dlookup__intrinsic__name_D6_k162) (bruijn ##.sym.10 148 1) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D568.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k162, self)})),
      VGetArg(statics, 148-1, 1),
      _V10vcore_Ddisplay__stdout);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.k.26 147 0) (##string ##.string.567)) ((bruijn ##.eqv?.4 149 0) (close _V10_Dlookup__intrinsic__name_D6_k161) (bruijn ##.sym.10 147 1) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k161, self)})),
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dnewline);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) ((bruijn ##.k.26 146 0) (##string ##.string.566)) ((bruijn ##.eqv?.4 148 0) (close _V10_Dlookup__intrinsic__name_D6_k160) (bruijn ##.sym.10 146 1) '##vcore.write))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k160, self)})),
      VGetArg(statics, 146-1, 1),
      _V10vcore_Dwrite);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.170 0 0) ((bruijn ##.k.26 145 0) (##string ##.string.565)) ((bruijn ##.eqv?.4 147 0) (close _V10_Dlookup__intrinsic__name_D6_k159) (bruijn ##.sym.10 145 1) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k159, self)})),
      VGetArg(statics, 145-1, 1),
      _V10vcore_Ddisplay__word);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.169 0 0) ((bruijn ##.k.26 144 0) (##string ##.string.564)) ((bruijn ##.eqv?.4 146 0) (close _V10_Dlookup__intrinsic__name_D6_k158) (bruijn ##.sym.10 144 1) '##vcore.read))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D564.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k158, self)})),
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dread);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.168 0 0) ((bruijn ##.k.26 143 0) (##string ##.string.563)) ((bruijn ##.eqv?.4 145 0) (close _V10_Dlookup__intrinsic__name_D6_k157) (bruijn ##.sym.10 143 1) '##vcore.read-line2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D563.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k157, self)})),
      VGetArg(statics, 143-1, 1),
      _V10vcore_Dread__line2);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.167 0 0) ((bruijn ##.k.26 142 0) (##string ##.string.562)) ((bruijn ##.eqv?.4 144 0) (close _V10_Dlookup__intrinsic__name_D6_k156) (bruijn ##.sym.10 142 1) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D562.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k156, self)})),
      VGetArg(statics, 142-1, 1),
      _V10vcore_Dread__line);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.166 0 0) ((bruijn ##.k.26 141 0) (##string ##.string.561)) ((bruijn ##.eqv?.4 143 0) (close _V10_Dlookup__intrinsic__name_D6_k155) (bruijn ##.sym.10 141 1) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D561.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k155, self)})),
      VGetArg(statics, 141-1, 1),
      _V10vcore_Dread__char);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) ((bruijn ##.k.26 140 0) (##string ##.string.560)) ((bruijn ##.eqv?.4 142 0) (close _V10_Dlookup__intrinsic__name_D6_k154) (bruijn ##.sym.10 140 1) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D560.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k154, self)})),
      VGetArg(statics, 140-1, 1),
      _V10vcore_Deof__object_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.164 0 0) ((bruijn ##.k.26 139 0) (##string ##.string.559)) ((bruijn ##.eqv?.4 141 0) (close _V10_Dlookup__intrinsic__name_D6_k153) (bruijn ##.sym.10 139 1) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k153, self)})),
      VGetArg(statics, 139-1, 1),
      _V10vcore_Dget__output__string);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.163 0 0) ((bruijn ##.k.26 138 0) (##string ##.string.558)) ((bruijn ##.eqv?.4 140 0) (close _V10_Dlookup__intrinsic__name_D6_k152) (bruijn ##.sym.10 138 1) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k152, self)})),
      VGetArg(statics, 138-1, 1),
      _V10vcore_Dopen__output__string);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.162 0 0) ((bruijn ##.k.26 137 0) (##string ##.string.557)) ((bruijn ##.eqv?.4 139 0) (close _V10_Dlookup__intrinsic__name_D6_k151) (bruijn ##.sym.10 137 1) '##vcore.tty-port?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k151, self)})),
      VGetArg(statics, 137-1, 1),
      _V10vcore_Dtty__port_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) ((bruijn ##.k.26 136 0) (##string ##.string.556)) ((bruijn ##.eqv?.4 138 0) (close _V10_Dlookup__intrinsic__name_D6_k150) (bruijn ##.sym.10 136 1) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k150, self)})),
      VGetArg(statics, 136-1, 1),
      _V10vcore_Dclose__stream);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.160 0 0) ((bruijn ##.k.26 135 0) (##string ##.string.555)) ((bruijn ##.eqv?.4 137 0) (close _V10_Dlookup__intrinsic__name_D6_k149) (bruijn ##.sym.10 135 1) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k149, self)})),
      VGetArg(statics, 135-1, 1),
      _V10vcore_Dopen__output__stream);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.159 0 0) ((bruijn ##.k.26 134 0) (##string ##.string.554)) ((bruijn ##.eqv?.4 136 0) (close _V10_Dlookup__intrinsic__name_D6_k148) (bruijn ##.sym.10 134 1) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D554.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k148, self)})),
      VGetArg(statics, 134-1, 1),
      _V10vcore_Dopen__input__stream);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.158 0 0) ((bruijn ##.k.26 133 0) (##string ##.string.553)) ((bruijn ##.eqv?.4 135 0) (close _V10_Dlookup__intrinsic__name_D6_k147) (bruijn ##.sym.10 133 1) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D553.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k147, self)})),
      VGetArg(statics, 133-1, 1),
      _V10vcore_Ddup__stderr);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.157 0 0) ((bruijn ##.k.26 132 0) (##string ##.string.552)) ((bruijn ##.eqv?.4 134 0) (close _V10_Dlookup__intrinsic__name_D6_k146) (bruijn ##.sym.10 132 1) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D552.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k146, self)})),
      VGetArg(statics, 132-1, 1),
      _V10vcore_Ddup__stdout);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.156 0 0) ((bruijn ##.k.26 131 0) (##string ##.string.551)) ((bruijn ##.eqv?.4 133 0) (close _V10_Dlookup__intrinsic__name_D6_k145) (bruijn ##.sym.10 131 1) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D551.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k145, self)})),
      VGetArg(statics, 131-1, 1),
      _V10vcore_Ddup__stdin);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.155 0 0) ((bruijn ##.k.26 130 0) (##string ##.string.550)) ((bruijn ##.eqv?.4 132 0) (close _V10_Dlookup__intrinsic__name_D6_k144) (bruijn ##.sym.10 130 1) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D550.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k144, self)})),
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dstderr___Gport);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.154 0 0) ((bruijn ##.k.26 129 0) (##string ##.string.549)) ((bruijn ##.eqv?.4 131 0) (close _V10_Dlookup__intrinsic__name_D6_k143) (bruijn ##.sym.10 129 1) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D549.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k143, self)})),
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dstdout___Gport);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.26 128 0) (##string ##.string.548)) ((bruijn ##.eqv?.4 130 0) (close _V10_Dlookup__intrinsic__name_D6_k142) (bruijn ##.sym.10 128 1) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D548.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k142, self)})),
      VGetArg(statics, 128-1, 1),
      _V10vcore_Dstdin___Gport);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.152 0 0) ((bruijn ##.k.26 127 0) (##string ##.string.547)) ((bruijn ##.eqv?.4 129 0) (close _V10_Dlookup__intrinsic__name_D6_k141) (bruijn ##.sym.10 127 1) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D547.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k141, self)})),
      VGetArg(statics, 127-1, 1),
      _V10vcore_Dchar__integer);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.151 0 0) ((bruijn ##.k.26 126 0) (##string ##.string.546)) ((bruijn ##.eqv?.4 128 0) (close _V10_Dlookup__intrinsic__name_D6_k140) (bruijn ##.sym.10 126 1) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k140, self)})),
      VGetArg(statics, 126-1, 1),
      _V10vcore_Dgensym);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) ((bruijn ##.k.26 125 0) (##string ##.string.545)) ((bruijn ##.eqv?.4 127 0) (close _V10_Dlookup__intrinsic__name_D6_k139) (bruijn ##.sym.10 125 1) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D545.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k139, self)})),
      VGetArg(statics, 125-1, 1),
      _V10vcore_Dsymbol___Gstring);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.149 0 0) ((bruijn ##.k.26 124 0) (##string ##.string.544)) ((bruijn ##.eqv?.4 126 0) (close _V10_Dlookup__intrinsic__name_D6_k138) (bruijn ##.sym.10 124 1) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D544.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k138, self)})),
      VGetArg(statics, 124-1, 1),
      _V10vcore_Dstring___Gnumber);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.148 0 0) ((bruijn ##.k.26 123 0) (##string ##.string.543)) ((bruijn ##.eqv?.4 125 0) (close _V10_Dlookup__intrinsic__name_D6_k137) (bruijn ##.sym.10 123 1) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D543.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k137, self)})),
      VGetArg(statics, 123-1, 1),
      _V10vcore_Dstring___Gsymbol);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.147 0 0) ((bruijn ##.k.26 122 0) (##string ##.string.542)) ((bruijn ##.eqv?.4 124 0) (close _V10_Dlookup__intrinsic__name_D6_k136) (bruijn ##.sym.10 122 1) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D542.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k136, self)})),
      VGetArg(statics, 122-1, 1),
      _V10vcore_Dstring__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.146 0 0) ((bruijn ##.k.26 121 0) (##string ##.string.541)) ((bruijn ##.eqv?.4 123 0) (close _V10_Dlookup__intrinsic__name_D6_k135) (bruijn ##.sym.10 121 1) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D541.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k135, self)})),
      VGetArg(statics, 121-1, 1),
      _V10vcore_Dstring__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.145 0 0) ((bruijn ##.k.26 120 0) (##string ##.string.540)) ((bruijn ##.eqv?.4 122 0) (close _V10_Dlookup__intrinsic__name_D6_k134) (bruijn ##.sym.10 120 1) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D540.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k134, self)})),
      VGetArg(statics, 120-1, 1),
      _V10vcore_Dstring__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.144 0 0) ((bruijn ##.k.26 119 0) (##string ##.string.539)) ((bruijn ##.eqv?.4 121 0) (close _V10_Dlookup__intrinsic__name_D6_k133) (bruijn ##.sym.10 119 1) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D539.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k133, self)})),
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dstring__copy_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.143 0 0) ((bruijn ##.k.26 118 0) (##string ##.string.538)) ((bruijn ##.eqv?.4 120 0) (close _V10_Dlookup__intrinsic__name_D6_k132) (bruijn ##.sym.10 118 1) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D538.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k132, self)})),
      VGetArg(statics, 118-1, 1),
      _V10vcore_Dsubstring);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.142 0 0) ((bruijn ##.k.26 117 0) (##string ##.string.537)) ((bruijn ##.eqv?.4 119 0) (close _V10_Dlookup__intrinsic__name_D6_k131) (bruijn ##.sym.10 117 1) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D537.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k131, self)})),
      VGetArg(statics, 117-1, 1),
      _V10vcore_Dmake__string);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.141 0 0) ((bruijn ##.k.26 116 0) (##string ##.string.536)) ((bruijn ##.eqv?.4 118 0) (close _V10_Dlookup__intrinsic__name_D6_k130) (bruijn ##.sym.10 116 1) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D536.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k130, self)})),
      VGetArg(statics, 116-1, 1),
      _V10vcore_Dhash__table__delete_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.140 0 0) ((bruijn ##.k.26 115 0) (##string ##.string.535)) ((bruijn ##.eqv?.4 117 0) (close _V10_Dlookup__intrinsic__name_D6_k129) (bruijn ##.sym.10 115 1) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D535.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k129, self)})),
      VGetArg(statics, 115-1, 1),
      _V10vcore_Dhash__table__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.139 0 0) ((bruijn ##.k.26 114 0) (##string ##.string.534)) ((bruijn ##.eqv?.4 116 0) (close _V10_Dlookup__intrinsic__name_D6_k128) (bruijn ##.sym.10 114 1) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D534.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k128, self)})),
      VGetArg(statics, 114-1, 1),
      _V10vcore_Dhash__table__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.138 0 0) ((bruijn ##.k.26 113 0) (##string ##.string.533)) ((bruijn ##.eqv?.4 115 0) (close _V10_Dlookup__intrinsic__name_D6_k127) (bruijn ##.sym.10 113 1) '##vcore.hash-table-vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D533.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k127, self)})),
      VGetArg(statics, 113-1, 1),
      _V10vcore_Dhash__table__vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.137 0 0) ((bruijn ##.k.26 112 0) (##string ##.string.532)) ((bruijn ##.eqv?.4 114 0) (close _V10_Dlookup__intrinsic__name_D6_k126) (bruijn ##.sym.10 112 1) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D532.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k126, self)})),
      VGetArg(statics, 112-1, 1),
      _V10vcore_Dhash__table__hash__function);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.136 0 0) ((bruijn ##.k.26 111 0) (##string ##.string.531)) ((bruijn ##.eqv?.4 113 0) (close _V10_Dlookup__intrinsic__name_D6_k125) (bruijn ##.sym.10 111 1) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D531.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k125, self)})),
      VGetArg(statics, 111-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.135 0 0) ((bruijn ##.k.26 110 0) (##string ##.string.530)) ((bruijn ##.eqv?.4 112 0) (close _V10_Dlookup__intrinsic__name_D6_k124) (bruijn ##.sym.10 110 1) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D530.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k124, self)})),
      VGetArg(statics, 110-1, 1),
      _V10vcore_Dmake__hash__table);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.134 0 0) ((bruijn ##.k.26 109 0) (##string ##.string.529)) ((bruijn ##.eqv?.4 111 0) (close _V10_Dlookup__intrinsic__name_D6_k123) (bruijn ##.sym.10 109 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D529.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k123, self)})),
      VGetArg(statics, 109-1, 1),
      _V10vcore_Drecord__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.133 0 0) ((bruijn ##.k.26 108 0) (##string ##.string.528)) ((bruijn ##.eqv?.4 110 0) (close _V10_Dlookup__intrinsic__name_D6_k122) (bruijn ##.sym.10 108 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D528.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k122, self)})),
      VGetArg(statics, 108-1, 1),
      _V10vcore_Drecord__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.132 0 0) ((bruijn ##.k.26 107 0) (##string ##.string.527)) ((bruijn ##.eqv?.4 109 0) (close _V10_Dlookup__intrinsic__name_D6_k121) (bruijn ##.sym.10 107 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D527.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k121, self)})),
      VGetArg(statics, 107-1, 1),
      _V10vcore_Drecord__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.131 0 0) ((bruijn ##.k.26 106 0) (##string ##.string.526)) ((bruijn ##.eqv?.4 108 0) (close _V10_Dlookup__intrinsic__name_D6_k120) (bruijn ##.sym.10 106 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D526.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k120, self)})),
      VGetArg(statics, 106-1, 1),
      _V10vcore_Drecord);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.130 0 0) ((bruijn ##.k.26 105 0) (##string ##.string.525)) ((bruijn ##.eqv?.4 107 0) (close _V10_Dlookup__intrinsic__name_D6_k119) (bruijn ##.sym.10 105 1) '##vcore.read-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D525.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k119, self)})),
      VGetArg(statics, 105-1, 1),
      _V10vcore_Dread__u8vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.129 0 0) ((bruijn ##.k.26 104 0) (##string ##.string.524)) ((bruijn ##.eqv?.4 106 0) (close _V10_Dlookup__intrinsic__name_D6_k118) (bruijn ##.sym.10 104 1) '##vcore.s8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D524.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k118, self)})),
      VGetArg(statics, 104-1, 1),
      _V10vcore_Ds8vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.128 0 0) ((bruijn ##.k.26 103 0) (##string ##.string.523)) ((bruijn ##.eqv?.4 105 0) (close _V10_Dlookup__intrinsic__name_D6_k117) (bruijn ##.sym.10 103 1) '##vcore.s8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D523.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k117, self)})),
      VGetArg(statics, 103-1, 1),
      _V10vcore_Ds8vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.127 0 0) ((bruijn ##.k.26 102 0) (##string ##.string.522)) ((bruijn ##.eqv?.4 104 0) (close _V10_Dlookup__intrinsic__name_D6_k116) (bruijn ##.sym.10 102 1) '##vcore.s8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D522.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k116, self)})),
      VGetArg(statics, 102-1, 1),
      _V10vcore_Ds8vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.126 0 0) ((bruijn ##.k.26 101 0) (##string ##.string.521)) ((bruijn ##.eqv?.4 103 0) (close _V10_Dlookup__intrinsic__name_D6_k115) (bruijn ##.sym.10 101 1) '##vcore.list->s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D521.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k115, self)})),
      VGetArg(statics, 101-1, 1),
      _V10vcore_Dlist___Gs8vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.125 0 0) ((bruijn ##.k.26 100 0) (##string ##.string.520)) ((bruijn ##.eqv?.4 102 0) (close _V10_Dlookup__intrinsic__name_D6_k114) (bruijn ##.sym.10 100 1) '##vcore.make-s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D520.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k114, self)})),
      VGetArg(statics, 100-1, 1),
      _V10vcore_Dmake__s8vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.124 0 0) ((bruijn ##.k.26 99 0) (##string ##.string.519)) ((bruijn ##.eqv?.4 101 0) (close _V10_Dlookup__intrinsic__name_D6_k113) (bruijn ##.sym.10 99 1) '##vcore.s8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D519.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k113, self)})),
      VGetArg(statics, 99-1, 1),
      _V10vcore_Ds8vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.123 0 0) ((bruijn ##.k.26 98 0) (##string ##.string.518)) ((bruijn ##.eqv?.4 100 0) (close _V10_Dlookup__intrinsic__name_D6_k112) (bruijn ##.sym.10 98 1) '##vcore.u8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D518.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k112, self)})),
      VGetArg(statics, 98-1, 1),
      _V10vcore_Du8vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.122 0 0) ((bruijn ##.k.26 97 0) (##string ##.string.517)) ((bruijn ##.eqv?.4 99 0) (close _V10_Dlookup__intrinsic__name_D6_k111) (bruijn ##.sym.10 97 1) '##vcore.u8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D517.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k111, self)})),
      VGetArg(statics, 97-1, 1),
      _V10vcore_Du8vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.121 0 0) ((bruijn ##.k.26 96 0) (##string ##.string.516)) ((bruijn ##.eqv?.4 98 0) (close _V10_Dlookup__intrinsic__name_D6_k110) (bruijn ##.sym.10 96 1) '##vcore.u8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D516.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k110, self)})),
      VGetArg(statics, 96-1, 1),
      _V10vcore_Du8vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.120 0 0) ((bruijn ##.k.26 95 0) (##string ##.string.515)) ((bruijn ##.eqv?.4 97 0) (close _V10_Dlookup__intrinsic__name_D6_k109) (bruijn ##.sym.10 95 1) '##vcore.list->u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D515.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k109, self)})),
      VGetArg(statics, 95-1, 1),
      _V10vcore_Dlist___Gu8vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.119 0 0) ((bruijn ##.k.26 94 0) (##string ##.string.514)) ((bruijn ##.eqv?.4 96 0) (close _V10_Dlookup__intrinsic__name_D6_k108) (bruijn ##.sym.10 94 1) '##vcore.make-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D514.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k108, self)})),
      VGetArg(statics, 94-1, 1),
      _V10vcore_Dmake__u8vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.118 0 0) ((bruijn ##.k.26 93 0) (##string ##.string.513)) ((bruijn ##.eqv?.4 95 0) (close _V10_Dlookup__intrinsic__name_D6_k107) (bruijn ##.sym.10 93 1) '##vcore.u8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D513.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k107, self)})),
      VGetArg(statics, 93-1, 1),
      _V10vcore_Du8vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.117 0 0) ((bruijn ##.k.26 92 0) (##string ##.string.512)) ((bruijn ##.eqv?.4 94 0) (close _V10_Dlookup__intrinsic__name_D6_k106) (bruijn ##.sym.10 92 1) '##vcore.s16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D512.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k106, self)})),
      VGetArg(statics, 92-1, 1),
      _V10vcore_Ds16vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.116 0 0) ((bruijn ##.k.26 91 0) (##string ##.string.511)) ((bruijn ##.eqv?.4 93 0) (close _V10_Dlookup__intrinsic__name_D6_k105) (bruijn ##.sym.10 91 1) '##vcore.s16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D511.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k105, self)})),
      VGetArg(statics, 91-1, 1),
      _V10vcore_Ds16vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.115 0 0) ((bruijn ##.k.26 90 0) (##string ##.string.510)) ((bruijn ##.eqv?.4 92 0) (close _V10_Dlookup__intrinsic__name_D6_k104) (bruijn ##.sym.10 90 1) '##vcore.s16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D510.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k104, self)})),
      VGetArg(statics, 90-1, 1),
      _V10vcore_Ds16vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.114 0 0) ((bruijn ##.k.26 89 0) (##string ##.string.509)) ((bruijn ##.eqv?.4 91 0) (close _V10_Dlookup__intrinsic__name_D6_k103) (bruijn ##.sym.10 89 1) '##vcore.list->s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D509.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k103, self)})),
      VGetArg(statics, 89-1, 1),
      _V10vcore_Dlist___Gs16vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.113 0 0) ((bruijn ##.k.26 88 0) (##string ##.string.508)) ((bruijn ##.eqv?.4 90 0) (close _V10_Dlookup__intrinsic__name_D6_k102) (bruijn ##.sym.10 88 1) '##vcore.make-s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D508.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k102, self)})),
      VGetArg(statics, 88-1, 1),
      _V10vcore_Dmake__s16vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.k.26 87 0) (##string ##.string.507)) ((bruijn ##.eqv?.4 89 0) (close _V10_Dlookup__intrinsic__name_D6_k101) (bruijn ##.sym.10 87 1) '##vcore.s16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D507.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k101, self)})),
      VGetArg(statics, 87-1, 1),
      _V10vcore_Ds16vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.111 0 0) ((bruijn ##.k.26 86 0) (##string ##.string.506)) ((bruijn ##.eqv?.4 88 0) (close _V10_Dlookup__intrinsic__name_D6_k100) (bruijn ##.sym.10 86 1) '##vcore.u16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D506.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k100, self)})),
      VGetArg(statics, 86-1, 1),
      _V10vcore_Du16vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.110 0 0) ((bruijn ##.k.26 85 0) (##string ##.string.505)) ((bruijn ##.eqv?.4 87 0) (close _V10_Dlookup__intrinsic__name_D6_k99) (bruijn ##.sym.10 85 1) '##vcore.u16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D505.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k99, self)})),
      VGetArg(statics, 85-1, 1),
      _V10vcore_Du16vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.109 0 0) ((bruijn ##.k.26 84 0) (##string ##.string.504)) ((bruijn ##.eqv?.4 86 0) (close _V10_Dlookup__intrinsic__name_D6_k98) (bruijn ##.sym.10 84 1) '##vcore.u16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D504.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k98, self)})),
      VGetArg(statics, 84-1, 1),
      _V10vcore_Du16vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.108 0 0) ((bruijn ##.k.26 83 0) (##string ##.string.503)) ((bruijn ##.eqv?.4 85 0) (close _V10_Dlookup__intrinsic__name_D6_k97) (bruijn ##.sym.10 83 1) '##vcore.list->u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D503.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k97, self)})),
      VGetArg(statics, 83-1, 1),
      _V10vcore_Dlist___Gu16vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.107 0 0) ((bruijn ##.k.26 82 0) (##string ##.string.502)) ((bruijn ##.eqv?.4 84 0) (close _V10_Dlookup__intrinsic__name_D6_k96) (bruijn ##.sym.10 82 1) '##vcore.make-u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D502.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k96, self)})),
      VGetArg(statics, 82-1, 1),
      _V10vcore_Dmake__u16vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.106 0 0) ((bruijn ##.k.26 81 0) (##string ##.string.501)) ((bruijn ##.eqv?.4 83 0) (close _V10_Dlookup__intrinsic__name_D6_k95) (bruijn ##.sym.10 81 1) '##vcore.u16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D501.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k95, self)})),
      VGetArg(statics, 81-1, 1),
      _V10vcore_Du16vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.k.26 80 0) (##string ##.string.500)) ((bruijn ##.eqv?.4 82 0) (close _V10_Dlookup__intrinsic__name_D6_k94) (bruijn ##.sym.10 80 1) '##vcore.s32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D500.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k94, self)})),
      VGetArg(statics, 80-1, 1),
      _V10vcore_Ds32vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) ((bruijn ##.k.26 79 0) (##string ##.string.499)) ((bruijn ##.eqv?.4 81 0) (close _V10_Dlookup__intrinsic__name_D6_k93) (bruijn ##.sym.10 79 1) '##vcore.s32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D499.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k93, self)})),
      VGetArg(statics, 79-1, 1),
      _V10vcore_Ds32vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.k.26 78 0) (##string ##.string.498)) ((bruijn ##.eqv?.4 80 0) (close _V10_Dlookup__intrinsic__name_D6_k92) (bruijn ##.sym.10 78 1) '##vcore.s32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D498.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k92, self)})),
      VGetArg(statics, 78-1, 1),
      _V10vcore_Ds32vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.102 0 0) ((bruijn ##.k.26 77 0) (##string ##.string.497)) ((bruijn ##.eqv?.4 79 0) (close _V10_Dlookup__intrinsic__name_D6_k91) (bruijn ##.sym.10 77 1) '##vcore.list->s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D497.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k91, self)})),
      VGetArg(statics, 77-1, 1),
      _V10vcore_Dlist___Gs32vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.k.26 76 0) (##string ##.string.496)) ((bruijn ##.eqv?.4 78 0) (close _V10_Dlookup__intrinsic__name_D6_k90) (bruijn ##.sym.10 76 1) '##vcore.make-s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D496.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k90, self)})),
      VGetArg(statics, 76-1, 1),
      _V10vcore_Dmake__s32vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.100 0 0) ((bruijn ##.k.26 75 0) (##string ##.string.495)) ((bruijn ##.eqv?.4 77 0) (close _V10_Dlookup__intrinsic__name_D6_k89) (bruijn ##.sym.10 75 1) '##vcore.s32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D495.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k89, self)})),
      VGetArg(statics, 75-1, 1),
      _V10vcore_Ds32vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.99 0 0) ((bruijn ##.k.26 74 0) (##string ##.string.494)) ((bruijn ##.eqv?.4 76 0) (close _V10_Dlookup__intrinsic__name_D6_k88) (bruijn ##.sym.10 74 1) '##vcore.f32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D494.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k88, self)})),
      VGetArg(statics, 74-1, 1),
      _V10vcore_Df32vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.98 0 0) ((bruijn ##.k.26 73 0) (##string ##.string.493)) ((bruijn ##.eqv?.4 75 0) (close _V10_Dlookup__intrinsic__name_D6_k87) (bruijn ##.sym.10 73 1) '##vcore.f32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D493.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k87, self)})),
      VGetArg(statics, 73-1, 1),
      _V10vcore_Df32vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.97 0 0) ((bruijn ##.k.26 72 0) (##string ##.string.492)) ((bruijn ##.eqv?.4 74 0) (close _V10_Dlookup__intrinsic__name_D6_k86) (bruijn ##.sym.10 72 1) '##vcore.f32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D492.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k86, self)})),
      VGetArg(statics, 72-1, 1),
      _V10vcore_Df32vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.96 0 0) ((bruijn ##.k.26 71 0) (##string ##.string.491)) ((bruijn ##.eqv?.4 73 0) (close _V10_Dlookup__intrinsic__name_D6_k85) (bruijn ##.sym.10 71 1) '##vcore.list->f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D491.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k85, self)})),
      VGetArg(statics, 71-1, 1),
      _V10vcore_Dlist___Gf32vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.95 0 0) ((bruijn ##.k.26 70 0) (##string ##.string.490)) ((bruijn ##.eqv?.4 72 0) (close _V10_Dlookup__intrinsic__name_D6_k84) (bruijn ##.sym.10 70 1) '##vcore.make-f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D490.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k84, self)})),
      VGetArg(statics, 70-1, 1),
      _V10vcore_Dmake__f32vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) ((bruijn ##.k.26 69 0) (##string ##.string.489)) ((bruijn ##.eqv?.4 71 0) (close _V10_Dlookup__intrinsic__name_D6_k83) (bruijn ##.sym.10 69 1) '##vcore.f32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D489.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k83, self)})),
      VGetArg(statics, 69-1, 1),
      _V10vcore_Df32vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.93 0 0) ((bruijn ##.k.26 68 0) (##string ##.string.488)) ((bruijn ##.eqv?.4 70 0) (close _V10_Dlookup__intrinsic__name_D6_k82) (bruijn ##.sym.10 68 1) '##vcore.f64vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D488.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k82, self)})),
      VGetArg(statics, 68-1, 1),
      _V10vcore_Df64vector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.92 0 0) ((bruijn ##.k.26 67 0) (##string ##.string.487)) ((bruijn ##.eqv?.4 69 0) (close _V10_Dlookup__intrinsic__name_D6_k81) (bruijn ##.sym.10 67 1) '##vcore.f64vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D487.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k81, self)})),
      VGetArg(statics, 67-1, 1),
      _V10vcore_Df64vector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) ((bruijn ##.k.26 66 0) (##string ##.string.486)) ((bruijn ##.eqv?.4 68 0) (close _V10_Dlookup__intrinsic__name_D6_k80) (bruijn ##.sym.10 66 1) '##vcore.f64vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D486.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k80, self)})),
      VGetArg(statics, 66-1, 1),
      _V10vcore_Df64vector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.k.26 65 0) (##string ##.string.485)) ((bruijn ##.eqv?.4 67 0) (close _V10_Dlookup__intrinsic__name_D6_k79) (bruijn ##.sym.10 65 1) '##vcore.list->f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k79, self)})),
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dlist___Gf64vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.89 0 0) ((bruijn ##.k.26 64 0) (##string ##.string.484)) ((bruijn ##.eqv?.4 66 0) (close _V10_Dlookup__intrinsic__name_D6_k78) (bruijn ##.sym.10 64 1) '##vcore.make-f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D484.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k78, self)})),
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dmake__f64vector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.88 0 0) ((bruijn ##.k.26 63 0) (##string ##.string.483)) ((bruijn ##.eqv?.4 65 0) (close _V10_Dlookup__intrinsic__name_D6_k77) (bruijn ##.sym.10 63 1) '##vcore.f64vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D483.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k77, self)})),
      VGetArg(statics, 63-1, 1),
      _V10vcore_Df64vector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.87 0 0) ((bruijn ##.k.26 62 0) (##string ##.string.482)) ((bruijn ##.eqv?.4 64 0) (close _V10_Dlookup__intrinsic__name_D6_k76) (bruijn ##.sym.10 62 1) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D482.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k76, self)})),
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dvector__length);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.86 0 0) ((bruijn ##.k.26 61 0) (##string ##.string.481)) ((bruijn ##.eqv?.4 63 0) (close _V10_Dlookup__intrinsic__name_D6_k75) (bruijn ##.sym.10 61 1) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D481.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k75, self)})),
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dvector__set_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.85 0 0) ((bruijn ##.k.26 60 0) (##string ##.string.480)) ((bruijn ##.eqv?.4 62 0) (close _V10_Dlookup__intrinsic__name_D6_k74) (bruijn ##.sym.10 60 1) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D480.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k74, self)})),
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dvector__ref);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.84 0 0) ((bruijn ##.k.26 59 0) (##string ##.string.479)) ((bruijn ##.eqv?.4 61 0) (close _V10_Dlookup__intrinsic__name_D6_k73) (bruijn ##.sym.10 59 1) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D479.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k73, self)})),
      VGetArg(statics, 59-1, 1),
      _V10vcore_Dlist___Gvector);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.83 0 0) ((bruijn ##.k.26 58 0) (##string ##.string.478)) ((bruijn ##.eqv?.4 60 0) (close _V10_Dlookup__intrinsic__name_D6_k72) (bruijn ##.sym.10 58 1) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D478.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k72, self)})),
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dset__cdr_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.82 0 0) ((bruijn ##.k.26 57 0) (##string ##.string.477)) ((bruijn ##.eqv?.4 59 0) (close _V10_Dlookup__intrinsic__name_D6_k71) (bruijn ##.sym.10 57 1) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D477.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k71, self)})),
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dset__car_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.81 0 0) ((bruijn ##.k.26 56 0) (##string ##.string.476)) ((bruijn ##.eqv?.4 58 0) (close _V10_Dlookup__intrinsic__name_D6_k70) (bruijn ##.sym.10 56 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k70, self)})),
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dcdr);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.k.26 55 0) (##string ##.string.475)) ((bruijn ##.eqv?.4 57 0) (close _V10_Dlookup__intrinsic__name_D6_k69) (bruijn ##.sym.10 55 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D475.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k69, self)})),
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dcar);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlookup__intrinsic__name_D6_k67) (close _V10_Dlookup__intrinsic__name_D6_k68))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlookup__intrinsic__name_D6_k67, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k68, self)})));
}
static void _V10_Dlookup__intrinsic__name_D6_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.79 0 0) ((bruijn ##.k.26 53 0) (##string ##.string.474)) ((bruijn ##.eqv?.4 55 0) (close _V10_Dlookup__intrinsic__name_D6_k66) (bruijn ##.sym.10 53 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D474.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k66, self)})),
      VGetArg(statics, 53-1, 1),
      _V10vcore_Dcons);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.78 0 0) ((bruijn ##.k.26 52 0) (##string ##.string.473)) ((bruijn ##.eqv?.4 54 0) (close _V10_Dlookup__intrinsic__name_D6_k65) (bruijn ##.sym.10 52 1) '##vcore.unload-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D473.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k65, self)})),
      VGetArg(statics, 52-1, 1),
      _V10vcore_Dunload__library);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.77 0 0) ((bruijn ##.k.26 51 0) (##string ##.string.472)) ((bruijn ##.eqv?.4 53 0) (close _V10_Dlookup__intrinsic__name_D6_k64) (bruijn ##.sym.10 51 1) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D472.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k64, self)})),
      VGetArg(statics, 51-1, 1),
      _V10vcore_Dload__library);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.76 0 0) ((bruijn ##.k.26 50 0) (##string ##.string.471)) ((bruijn ##.eqv?.4 52 0) (close _V10_Dlookup__intrinsic__name_D6_k63) (bruijn ##.sym.10 50 1) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D471.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k63, self)})),
      VGetArg(statics, 50-1, 1),
      _V10vcore_Dmake__import);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.75 0 0) ((bruijn ##.k.26 49 0) (##string ##.string.470)) ((bruijn ##.eqv?.4 51 0) (close _V10_Dlookup__intrinsic__name_D6_k62) (bruijn ##.sym.10 49 1) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D470.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k62, self)})),
      VGetArg(statics, 49-1, 1),
      _V10vcore_Dlookup__library);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.74 0 0) ((bruijn ##.k.26 48 0) (##string ##.string.466)) ((bruijn ##.eqv?.4 50 0) (close _V10_Dlookup__intrinsic__name_D6_k61) (bruijn ##.sym.10 48 1) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D466.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k61, self)})),
      VGetArg(statics, 48-1, 1),
      _V10vcore_Dmultidefine);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.73 0 0) ((bruijn ##.k.26 47 0) (##string ##.string.469)) ((bruijn ##.eqv?.4 49 0) (close _V10_Dlookup__intrinsic__name_D6_k60) (bruijn ##.sym.10 47 1) '##vcore.define))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D469.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k60, self)})),
      VGetArg(statics, 47-1, 1),
      _V10vcore_Ddefine);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.72 0 0) ((bruijn ##.k.26 46 0) (##string ##.string.468)) ((bruijn ##.eqv?.4 48 0) (close _V10_Dlookup__intrinsic__name_D6_k59) (bruijn ##.sym.10 46 1) '##vcore.set-declare!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D468.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k59, self)})),
      VGetArg(statics, 46-1, 1),
      _V10vcore_Dset__declare_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.71 0 0) ((bruijn ##.k.26 45 0) (##string ##.string.467)) ((bruijn ##.eqv?.4 47 0) (close _V10_Dlookup__intrinsic__name_D6_k58) (bruijn ##.sym.10 45 1) '##vcore.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D467.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k58, self)})),
      VGetArg(statics, 45-1, 1),
      _V10vcore_Dfunction);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.70 0 0) ((bruijn ##.k.26 44 0) (##string ##.string.466)) ((bruijn ##.eqv?.4 46 0) (close _V10_Dlookup__intrinsic__name_D6_k57) (bruijn ##.sym.10 44 1) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D466.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k57, self)})),
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dset__global_B);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.69 0 0) ((bruijn ##.k.26 43 0) (##string ##.string.465)) ((bruijn ##.eqv?.4 45 0) (close _V10_Dlookup__intrinsic__name_D6_k56) (bruijn ##.sym.10 43 1) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D465.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k56, self)})),
      VGetArg(statics, 43-1, 1),
      _V10vcore_Ddefine__global);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.68 0 0) ((bruijn ##.k.26 42 0) (##string ##.string.464)) ((bruijn ##.eqv?.4 44 0) (close _V10_Dlookup__intrinsic__name_D6_k55) (bruijn ##.sym.10 42 1) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D464.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k55, self)})),
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dexit);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.67 0 0) ((bruijn ##.k.26 41 0) (##string ##.string.463)) ((bruijn ##.eqv?.4 43 0) (close _V10_Dlookup__intrinsic__name_D6_k54) (bruijn ##.sym.10 41 1) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D463.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k54, self)})),
      VGetArg(statics, 41-1, 1),
      _V10vcore_Dabort);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.66 0 0) ((bruijn ##.k.26 40 0) (##string ##.string.462)) ((bruijn ##.eqv?.4 42 0) (close _V10_Dlookup__intrinsic__name_D6_k53) (bruijn ##.sym.10 40 1) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D462.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k53, self)})),
      VGetArg(statics, 40-1, 1),
      _V10vcore_Dapply__cps);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.65 0 0) ((bruijn ##.k.26 39 0) (##string ##.string.461)) ((bruijn ##.eqv?.4 41 0) (close _V10_Dlookup__intrinsic__name_D6_k52) (bruijn ##.sym.10 39 1) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D461.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k52, self)})),
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dapply);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.64 0 0) ((bruijn ##.k.26 38 0) (##string ##.string.460)) ((bruijn ##.eqv?.4 40 0) (close _V10_Dlookup__intrinsic__name_D6_k51) (bruijn ##.sym.10 38 1) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D460.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k51, self)})),
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dcall__with__values);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.63 0 0) ((bruijn ##.k.26 37 0) (##string ##.string.459)) ((bruijn ##.eqv?.4 39 0) (close _V10_Dlookup__intrinsic__name_D6_k50) (bruijn ##.sym.10 37 1) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D459.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k50, self)})),
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dcall_Wcc);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.62 0 0) ((bruijn ##.k.26 36 0) (##string ##.string.458)) ((bruijn ##.eqv?.4 38 0) (close _V10_Dlookup__intrinsic__name_D6_k49) (bruijn ##.sym.10 36 1) '##vcore.next))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D458.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k49, self)})),
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dnext);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.61 0 0) ((bruijn ##.k.26 35 0) (##string ##.string.457)) ((bruijn ##.eqv?.4 37 0) (close _V10_Dlookup__intrinsic__name_D6_k48) (bruijn ##.sym.10 35 1) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k48, self)})),
      VGetArg(statics, 35-1, 1),
      _V10vcore_Draise);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.60 0 0) ((bruijn ##.k.26 34 0) (##string ##.string.456)) ((bruijn ##.eqv?.4 36 0) (close _V10_Dlookup__intrinsic__name_D6_k47) (bruijn ##.sym.10 34 1) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D456.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k47, self)})),
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dpop__exception__handler);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.59 0 0) ((bruijn ##.k.26 33 0) (##string ##.string.455)) ((bruijn ##.eqv?.4 35 0) (close _V10_Dlookup__intrinsic__name_D6_k46) (bruijn ##.sym.10 33 1) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D455.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k46, self)})),
      VGetArg(statics, 33-1, 1),
      _V10vcore_Dpush__exception__handler);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.58 0 0) ((bruijn ##.k.26 32 0) (##string ##.string.454)) ((bruijn ##.eqv?.4 34 0) (close _V10_Dlookup__intrinsic__name_D6_k45) (bruijn ##.sym.10 32 1) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D454.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k45, self)})),
      VGetArg(statics, 32-1, 1),
      _V10vcore_Dget__exception__handler);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.57 0 0) ((bruijn ##.k.26 31 0) (##string ##.string.453)) ((bruijn ##.eqv?.4 33 0) (close _V10_Dlookup__intrinsic__name_D6_k44) (bruijn ##.sym.10 31 1) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D453.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k44, self)})),
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dpop__dynamic);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.56 0 0) ((bruijn ##.k.26 30 0) (##string ##.string.452)) ((bruijn ##.eqv?.4 32 0) (close _V10_Dlookup__intrinsic__name_D6_k43) (bruijn ##.sym.10 30 1) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D452.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k43, self)})),
      VGetArg(statics, 30-1, 1),
      _V10vcore_Dpush__dynamic);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.55 0 0) ((bruijn ##.k.26 29 0) (##string ##.string.451)) ((bruijn ##.eqv?.4 31 0) (close _V10_Dlookup__intrinsic__name_D6_k42) (bruijn ##.sym.10 29 1) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D451.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k42, self)})),
      VGetArg(statics, 29-1, 1),
      _V10vcore_Dget__dynamics);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.54 0 0) ((bruijn ##.k.26 28 0) (##string ##.string.450)) ((bruijn ##.eqv?.4 30 0) (close _V10_Dlookup__intrinsic__name_D6_k41) (bruijn ##.sym.10 28 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k41, self)})),
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dnot);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.53 0 0) ((bruijn ##.k.26 27 0) (##string ##.string.449)) ((bruijn ##.eqv?.4 29 0) (close _V10_Dlookup__intrinsic__name_D6_k40) (bruijn ##.sym.10 27 1) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D449.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k40, self)})),
      VGetArg(statics, 27-1, 1),
      _V10vcore_Deqv_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.52 0 0) ((bruijn ##.k.26 26 0) (##string ##.string.448)) ((bruijn ##.eqv?.4 28 0) (close _V10_Dlookup__intrinsic__name_D6_k39) (bruijn ##.sym.10 26 1) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D448.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k39, self)})),
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dblob_E_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.51 0 0) ((bruijn ##.k.26 25 0) (##string ##.string.447)) ((bruijn ##.eqv?.4 27 0) (close _V10_Dlookup__intrinsic__name_D6_k38) (bruijn ##.sym.10 25 1) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D447.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k38, self)})),
      VGetArg(statics, 25-1, 1),
      _V10vcore_Dsymbol_E_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.50 0 0) ((bruijn ##.k.26 24 0) (##string ##.string.446)) ((bruijn ##.eqv?.4 26 0) (close _V10_Dlookup__intrinsic__name_D6_k37) (bruijn ##.sym.10 24 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D446.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k37, self)})),
      VGetArg(statics, 24-1, 1),
      _V10vcore_Deq_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.49 0 0) ((bruijn ##.k.26 23 0) (##string ##.string.445)) ((bruijn ##.eqv?.4 25 0) (close _V10_Dlookup__intrinsic__name_D6_k36) (bruijn ##.sym.10 23 1) '##vcore.foreign-pointer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D445.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k36, self)})),
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dforeign__pointer_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.48 0 0) ((bruijn ##.k.26 22 0) (##string ##.string.444)) ((bruijn ##.eqv?.4 24 0) (close _V10_Dlookup__intrinsic__name_D6_k35) (bruijn ##.sym.10 22 1) '##vcore.nullptr?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D444.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k35, self)})),
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dnullptr_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.47 0 0) ((bruijn ##.k.26 21 0) (##string ##.string.443)) ((bruijn ##.eqv?.4 23 0) (close _V10_Dlookup__intrinsic__name_D6_k34) (bruijn ##.sym.10 21 1) '##vcore.void?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D443.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k34, self)})),
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dvoid_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.46 0 0) ((bruijn ##.k.26 20 0) (##string ##.string.442)) ((bruijn ##.eqv?.4 22 0) (close _V10_Dlookup__intrinsic__name_D6_k33) (bruijn ##.sym.10 20 1) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D442.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k33, self)})),
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dchar_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.45 0 0) ((bruijn ##.k.26 19 0) (##string ##.string.441)) ((bruijn ##.eqv?.4 21 0) (close _V10_Dlookup__intrinsic__name_D6_k32) (bruijn ##.sym.10 19 1) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D441.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k32, self)})),
      VGetArg(statics, 19-1, 1),
      _V10vcore_Ddouble_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.44 0 0) ((bruijn ##.k.26 18 0) (##string ##.string.440)) ((bruijn ##.eqv?.4 20 0) (close _V10_Dlookup__intrinsic__name_D6_k31) (bruijn ##.sym.10 18 1) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D440.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k31, self)})),
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dint_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.43 0 0) ((bruijn ##.k.26 17 0) (##string ##.string.439)) ((bruijn ##.eqv?.4 19 0) (close _V10_Dlookup__intrinsic__name_D6_k30) (bruijn ##.sym.10 17 1) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D439.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k30, self)})),
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dstring_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.42 0 0) ((bruijn ##.k.26 16 0) (##string ##.string.438)) ((bruijn ##.eqv?.4 18 0) (close _V10_Dlookup__intrinsic__name_D6_k29) (bruijn ##.sym.10 16 1) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D438.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k29, self)})),
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dsymbol_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.41 0 0) ((bruijn ##.k.26 15 0) (##string ##.string.437)) ((bruijn ##.eqv?.4 17 0) (close _V10_Dlookup__intrinsic__name_D6_k28) (bruijn ##.sym.10 15 1) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D437.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k28, self)})),
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dblob_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.40 0 0) ((bruijn ##.k.26 14 0) (##string ##.string.436)) ((bruijn ##.eqv?.4 16 0) (close _V10_Dlookup__intrinsic__name_D6_k27) (bruijn ##.sym.10 14 1) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D436.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k27, self)})),
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dprocedure_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.39 0 0) ((bruijn ##.k.26 13 0) (##string ##.string.435)) ((bruijn ##.eqv?.4 15 0) (close _V10_Dlookup__intrinsic__name_D6_k26) (bruijn ##.sym.10 13 1) '##vcore.hash-table?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D435.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k26, self)})),
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dhash__table_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.38 0 0) ((bruijn ##.k.26 12 0) (##string ##.string.434)) ((bruijn ##.eqv?.4 14 0) (close _V10_Dlookup__intrinsic__name_D6_k25) (bruijn ##.sym.10 12 1) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D434.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k25, self)})),
      VGetArg(statics, 12-1, 1),
      _V10vcore_Dvector_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.37 0 0) ((bruijn ##.k.26 11 0) (##string ##.string.433)) ((bruijn ##.eqv?.4 13 0) (close _V10_Dlookup__intrinsic__name_D6_k24) (bruijn ##.sym.10 11 1) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D433.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k24, self)})),
      VGetArg(statics, 11-1, 1),
      _V10vcore_Drecord_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.36 0 0) ((bruijn ##.k.26 10 0) (##string ##.string.432)) ((bruijn ##.eqv?.4 12 0) (close _V10_Dlookup__intrinsic__name_D6_k23) (bruijn ##.sym.10 10 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D432.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k23, self)})),
      VGetArg(statics, 10-1, 1),
      _V10vcore_Dpair_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.35 0 0) ((bruijn ##.k.26 9 0) (##string ##.string.431)) ((bruijn ##.eqv?.4 11 0) (close _V10_Dlookup__intrinsic__name_D6_k22) (bruijn ##.sym.10 9 1) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D431.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k22, self)})),
      VGetArg(statics, 9-1, 1),
      _V10vcore_Dnull_Q);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.34 0 0) ((bruijn ##.k.26 8 0) (##string ##.string.430)) ((bruijn ##.eqv?.4 10 0) (close _V10_Dlookup__intrinsic__name_D6_k21) (bruijn ##.sym.10 8 1) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D430.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k21, self)})),
      VGetArg(statics, 8-1, 1),
      _V10vcore_Dremainder);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.33 0 0) ((bruijn ##.k.26 7 0) (##string ##.string.429)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__intrinsic__name_D6_k20) (bruijn ##.sym.10 7 1) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D429.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k20, self)})),
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dquotient);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.32 0 0) ((bruijn ##.k.26 6 0) (##string ##.string.428)) ((bruijn ##.eqv?.4 8 0) (close _V10_Dlookup__intrinsic__name_D6_k19) (bruijn ##.sym.10 6 1) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D428.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k19, self)})),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcmp);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.31 0 0) ((bruijn ##.k.26 5 0) (##string ##.string.427)) ((bruijn ##.eqv?.4 7 0) (close _V10_Dlookup__intrinsic__name_D6_k18) (bruijn ##.sym.10 5 1) '##vcore./))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D427.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k18, self)})),
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_W);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.30 0 0) ((bruijn ##.k.26 4 0) (##string ##.string.426)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__intrinsic__name_D6_k17) (bruijn ##.sym.10 4 1) '##vcore.*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D426.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k17, self)})),
      statics->up->up->up->vars[1],
      _V10vcore_D_S);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.29 0 0) ((bruijn ##.k.26 3 0) (##string ##.string.425)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__intrinsic__name_D6_k16) (bruijn ##.sym.10 3 1) '##vcore.-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D425.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k16, self)})),
      statics->up->up->vars[1],
      _V10vcore_D__);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.28 0 0) ((bruijn ##.k.26 2 0) (##string ##.string.424)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__intrinsic__name_D6_k15) (bruijn ##.sym.10 2 1) '##vcore.+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D424.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k15, self)})),
      statics->up->vars[1],
      _V10vcore_D_P);
}
}
static void _V10_Dlookup__intrinsic__name_D6_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.27 0 0) ((bruijn ##.k.26 1 0) (##string ##.string.423)) ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__intrinsic__name_D6_k14) (bruijn ##.sym.10 1 1) '##vcore.exact))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D423.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k14, self)})),
      statics->vars[1],
      _V10vcore_Dexact);
}
}
static void _V10_Dlookup__intrinsic__name_D6_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic__name_D6_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.eqv?.4 2 0) (close _V10_Dlookup__intrinsic__name_D6_k13) (bruijn ##.sym.10 0 1) '##vcore.inexact)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k13, self)})),
      _var1,
      _V10vcore_Dinexact);
}
static void _V10_Dlookup__intrinsic_D7_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.408 1 0) ((bruijn ##.k.409 0 0) (bruijn ##.p.408 1 0)) ((bruijn ##.eqv?.4 60 0) (bruijn ##.k.409 0 0) (bruijn ##.sym.12 58 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 3,
      _var0,
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dqcons);
}
}
static void _V10_Dlookup__intrinsic_D7_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.407 0 0) ((bruijn ##.k.217 191 0) (##intrinsic ##vcore.bit-count)) ((bruijn ##.k.217 191 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      _V40_V10vcore_Dbit__count);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlookup__intrinsic_D7_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.406 0 0) ((bruijn ##.k.217 190 0) (##intrinsic ##vcore.arithmetic-shift)) ((bruijn ##.eqv?.4 192 0) (close _V10_Dlookup__intrinsic_D7_k394) (bruijn ##.sym.12 190 1) '##vcore.bit-count))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 1,
      _V40_V10vcore_Darithmetic__shift);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 192-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k394, self)})),
      VGetArg(statics, 190-1, 1),
      _V10vcore_Dbit__count);
}
}
static void _V10_Dlookup__intrinsic_D7_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.405 0 0) ((bruijn ##.k.217 189 0) (##intrinsic ##vcore.bitwise-orc2)) ((bruijn ##.eqv?.4 191 0) (close _V10_Dlookup__intrinsic_D7_k393) (bruijn ##.sym.12 189 1) '##vcore.arithmetic-shift))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k393, self)})),
      VGetArg(statics, 189-1, 1),
      _V10vcore_Darithmetic__shift);
}
}
static void _V10_Dlookup__intrinsic_D7_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.404 0 0) ((bruijn ##.k.217 188 0) (##intrinsic ##vcore.bitwise-orc1)) ((bruijn ##.eqv?.4 190 0) (close _V10_Dlookup__intrinsic_D7_k392) (bruijn ##.sym.12 188 1) '##vcore.bitwise-orc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k392, self)})),
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dbitwise__orc2);
}
}
static void _V10_Dlookup__intrinsic_D7_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) ((bruijn ##.k.217 187 0) (##intrinsic ##vcore.bitwise-andc2)) ((bruijn ##.eqv?.4 189 0) (close _V10_Dlookup__intrinsic_D7_k391) (bruijn ##.sym.12 187 1) '##vcore.bitwise-orc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k391, self)})),
      VGetArg(statics, 187-1, 1),
      _V10vcore_Dbitwise__orc1);
}
}
static void _V10_Dlookup__intrinsic_D7_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.402 0 0) ((bruijn ##.k.217 186 0) (##intrinsic ##vcore.bitwise-andc1)) ((bruijn ##.eqv?.4 188 0) (close _V10_Dlookup__intrinsic_D7_k390) (bruijn ##.sym.12 186 1) '##vcore.bitwise-andc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k390, self)})),
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dbitwise__andc2);
}
}
static void _V10_Dlookup__intrinsic_D7_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.401 0 0) ((bruijn ##.k.217 185 0) (##intrinsic ##vcore.bitwise-nor)) ((bruijn ##.eqv?.4 187 0) (close _V10_Dlookup__intrinsic_D7_k389) (bruijn ##.sym.12 185 1) '##vcore.bitwise-andc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nor);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k389, self)})),
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dbitwise__andc1);
}
}
static void _V10_Dlookup__intrinsic_D7_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.400 0 0) ((bruijn ##.k.217 184 0) (##intrinsic ##vcore.bitwise-nand)) ((bruijn ##.eqv?.4 186 0) (close _V10_Dlookup__intrinsic_D7_k388) (bruijn ##.sym.12 184 1) '##vcore.bitwise-nor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nand);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k388, self)})),
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dbitwise__nor);
}
}
static void _V10_Dlookup__intrinsic_D7_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) ((bruijn ##.k.217 183 0) (##intrinsic ##vcore.bitwise-xnor)) ((bruijn ##.eqv?.4 185 0) (close _V10_Dlookup__intrinsic_D7_k387) (bruijn ##.sym.12 183 1) '##vcore.bitwise-nand))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xnor);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k387, self)})),
      VGetArg(statics, 183-1, 1),
      _V10vcore_Dbitwise__nand);
}
}
static void _V10_Dlookup__intrinsic_D7_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) ((bruijn ##.k.217 182 0) (##intrinsic ##vcore.bitwise-and)) ((bruijn ##.eqv?.4 184 0) (close _V10_Dlookup__intrinsic_D7_k386) (bruijn ##.sym.12 182 1) '##vcore.bitwise-xnor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      _V40_V10vcore_Dbitwise__and);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k386, self)})),
      VGetArg(statics, 182-1, 1),
      _V10vcore_Dbitwise__xnor);
}
}
static void _V10_Dlookup__intrinsic_D7_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.397 0 0) ((bruijn ##.k.217 181 0) (##intrinsic ##vcore.bitwise-xor)) ((bruijn ##.eqv?.4 183 0) (close _V10_Dlookup__intrinsic_D7_k385) (bruijn ##.sym.12 181 1) '##vcore.bitwise-and))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xor);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k385, self)})),
      VGetArg(statics, 181-1, 1),
      _V10vcore_Dbitwise__and);
}
}
static void _V10_Dlookup__intrinsic_D7_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.396 0 0) ((bruijn ##.k.217 180 0) (##intrinsic ##vcore.bitwise-ior)) ((bruijn ##.eqv?.4 182 0) (close _V10_Dlookup__intrinsic_D7_k384) (bruijn ##.sym.12 180 1) '##vcore.bitwise-xor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      _V40_V10vcore_Dbitwise__ior);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k384, self)})),
      VGetArg(statics, 180-1, 1),
      _V10vcore_Dbitwise__xor);
}
}
static void _V10_Dlookup__intrinsic_D7_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.395 0 0) ((bruijn ##.k.217 179 0) (##intrinsic ##vcore.bitwise-not)) ((bruijn ##.eqv?.4 181 0) (close _V10_Dlookup__intrinsic_D7_k383) (bruijn ##.sym.12 179 1) '##vcore.bitwise-ior))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      _V40_V10vcore_Dbitwise__not);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k383, self)})),
      VGetArg(statics, 179-1, 1),
      _V10vcore_Dbitwise__ior);
}
}
static void _V10_Dlookup__intrinsic_D7_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) ((bruijn ##.k.217 178 0) (##intrinsic ##vcore.jiffies-per-second)) ((bruijn ##.eqv?.4 180 0) (close _V10_Dlookup__intrinsic_D7_k382) (bruijn ##.sym.12 178 1) '##vcore.bitwise-not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      _V40_V10vcore_Djiffies__per__second);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k382, self)})),
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dbitwise__not);
}
}
static void _V10_Dlookup__intrinsic_D7_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.393 0 0) ((bruijn ##.k.217 177 0) (##intrinsic ##vcore.current-jiffy)) ((bruijn ##.eqv?.4 179 0) (close _V10_Dlookup__intrinsic_D7_k381) (bruijn ##.sym.12 177 1) '##vcore.jiffies-per-second))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      _V40_V10vcore_Dcurrent__jiffy);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k381, self)})),
      VGetArg(statics, 177-1, 1),
      _V10vcore_Djiffies__per__second);
}
}
static void _V10_Dlookup__intrinsic_D7_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.392 0 0) ((bruijn ##.k.217 176 0) (##intrinsic ##vcore.access)) ((bruijn ##.eqv?.4 178 0) (close _V10_Dlookup__intrinsic_D7_k380) (bruijn ##.sym.12 176 1) '##vcore.current-jiffy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      _V40_V10vcore_Daccess);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k380, self)})),
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dcurrent__jiffy);
}
}
static void _V10_Dlookup__intrinsic_D7_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) ((bruijn ##.k.217 175 0) (##intrinsic ##vcore.make-temporary-file)) ((bruijn ##.eqv?.4 177 0) (close _V10_Dlookup__intrinsic_D7_k379) (bruijn ##.sym.12 175 1) '##vcore.access))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      _V40_V10vcore_Dmake__temporary__file);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k379, self)})),
      VGetArg(statics, 175-1, 1),
      _V10vcore_Daccess);
}
}
static void _V10_Dlookup__intrinsic_D7_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.390 0 0) ((bruijn ##.k.217 174 0) (##intrinsic ##vcore.realpath)) ((bruijn ##.eqv?.4 176 0) (close _V10_Dlookup__intrinsic_D7_k378) (bruijn ##.sym.12 174 1) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      _V40_V10vcore_Drealpath);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k378, self)})),
      VGetArg(statics, 174-1, 1),
      _V10vcore_Dmake__temporary__file);
}
}
static void _V10_Dlookup__intrinsic_D7_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.389 0 0) ((bruijn ##.k.217 173 0) (##intrinsic ##vcore.await)) ((bruijn ##.eqv?.4 175 0) (close _V10_Dlookup__intrinsic_D7_k377) (bruijn ##.sym.12 173 1) '##vcore.realpath))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      _V40_V10vcore_Dawait);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k377, self)})),
      VGetArg(statics, 173-1, 1),
      _V10vcore_Drealpath);
}
}
static void _V10_Dlookup__intrinsic_D7_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.388 0 0) ((bruijn ##.k.217 172 0) (##intrinsic ##vcore.async)) ((bruijn ##.eqv?.4 174 0) (close _V10_Dlookup__intrinsic_D7_k376) (bruijn ##.sym.12 172 1) '##vcore.await))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      _V40_V10vcore_Dasync);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k376, self)})),
      VGetArg(statics, 172-1, 1),
      _V10vcore_Dawait);
}
}
static void _V10_Dlookup__intrinsic_D7_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.387 0 0) ((bruijn ##.k.217 171 0) (##intrinsic ##vcore.fiber-fork-list)) ((bruijn ##.eqv?.4 173 0) (close _V10_Dlookup__intrinsic_D7_k375) (bruijn ##.sym.12 171 1) '##vcore.async))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      _V40_V10vcore_Dfiber__fork__list);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k375, self)})),
      VGetArg(statics, 171-1, 1),
      _V10vcore_Dasync);
}
}
static void _V10_Dlookup__intrinsic_D7_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.386 0 0) ((bruijn ##.k.217 170 0) (##intrinsic ##vcore.random-advance!)) ((bruijn ##.eqv?.4 172 0) (close _V10_Dlookup__intrinsic_D7_k374) (bruijn ##.sym.12 170 1) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      _V40_V10vcore_Drandom__advance_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k374, self)})),
      VGetArg(statics, 170-1, 1),
      _V10vcore_Dfiber__fork__list);
}
}
static void _V10_Dlookup__intrinsic_D7_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.385 0 0) ((bruijn ##.k.217 169 0) (##intrinsic ##vcore.random-sample-float!)) ((bruijn ##.eqv?.4 171 0) (close _V10_Dlookup__intrinsic_D7_k373) (bruijn ##.sym.12 169 1) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__float_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k373, self)})),
      VGetArg(statics, 169-1, 1),
      _V10vcore_Drandom__advance_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.384 0 0) ((bruijn ##.k.217 168 0) (##intrinsic ##vcore.random-sample-bounded!)) ((bruijn ##.eqv?.4 170 0) (close _V10_Dlookup__intrinsic_D7_k372) (bruijn ##.sym.12 168 1) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__bounded_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k372, self)})),
      VGetArg(statics, 168-1, 1),
      _V10vcore_Drandom__sample__float_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.383 0 0) ((bruijn ##.k.217 167 0) (##intrinsic ##vcore.random-sample!)) ((bruijn ##.eqv?.4 169 0) (close _V10_Dlookup__intrinsic_D7_k371) (bruijn ##.sym.12 167 1) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      _V40_V10vcore_Drandom__sample_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k371, self)})),
      VGetArg(statics, 167-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.382 0 0) ((bruijn ##.k.217 166 0) (##intrinsic ##vcore.random-copy)) ((bruijn ##.eqv?.4 168 0) (close _V10_Dlookup__intrinsic_D7_k370) (bruijn ##.sym.12 166 1) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      _V40_V10vcore_Drandom__copy);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k370, self)})),
      VGetArg(statics, 166-1, 1),
      _V10vcore_Drandom__sample_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.381 0 0) ((bruijn ##.k.217 165 0) (##intrinsic ##vcore.make-random)) ((bruijn ##.eqv?.4 167 0) (close _V10_Dlookup__intrinsic_D7_k369) (bruijn ##.sym.12 165 1) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      _V40_V10vcore_Dmake__random);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k369, self)})),
      VGetArg(statics, 165-1, 1),
      _V10vcore_Drandom__copy);
}
}
static void _V10_Dlookup__intrinsic_D7_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.380 0 0) ((bruijn ##.k.217 164 0) (##intrinsic ##vcore.command-line)) ((bruijn ##.eqv?.4 166 0) (close _V10_Dlookup__intrinsic_D7_k368) (bruijn ##.sym.12 164 1) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      _V40_V10vcore_Dcommand__line);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k368, self)})),
      VGetArg(statics, 164-1, 1),
      _V10vcore_Dmake__random);
}
}
static void _V10_Dlookup__intrinsic_D7_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.379 0 0) ((bruijn ##.k.217 163 0) (##intrinsic ##vcore.open-output-process)) ((bruijn ##.eqv?.4 165 0) (close _V10_Dlookup__intrinsic_D7_k367) (bruijn ##.sym.12 163 1) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      _V40_V10vcore_Dopen__output__process);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k367, self)})),
      VGetArg(statics, 163-1, 1),
      _V10vcore_Dcommand__line);
}
}
static void _V10_Dlookup__intrinsic_D7_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.378 0 0) ((bruijn ##.k.217 162 0) (##intrinsic ##vcore.open-input-process)) ((bruijn ##.eqv?.4 164 0) (close _V10_Dlookup__intrinsic_D7_k366) (bruijn ##.sym.12 162 1) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      _V40_V10vcore_Dopen__input__process);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k366, self)})),
      VGetArg(statics, 162-1, 1),
      _V10vcore_Dopen__output__process);
}
}
static void _V10_Dlookup__intrinsic_D7_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.377 0 0) ((bruijn ##.k.217 161 0) (##intrinsic ##vcore.system)) ((bruijn ##.eqv?.4 163 0) (close _V10_Dlookup__intrinsic_D7_k365) (bruijn ##.sym.12 161 1) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      _V40_V10vcore_Dsystem);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k365, self)})),
      VGetArg(statics, 161-1, 1),
      _V10vcore_Dopen__input__process);
}
}
static void _V10_Dlookup__intrinsic_D7_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.376 0 0) ((bruijn ##.k.217 160 0) (##intrinsic ##vcore.yield-to-host-major)) ((bruijn ##.eqv?.4 162 0) (close _V10_Dlookup__intrinsic_D7_k364) (bruijn ##.sym.12 160 1) '##vcore.system))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host__major);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k364, self)})),
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dsystem);
}
}
static void _V10_Dlookup__intrinsic_D7_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.375 0 0) ((bruijn ##.k.217 159 0) (##intrinsic ##vcore.yield-to-host)) ((bruijn ##.eqv?.4 161 0) (close _V10_Dlookup__intrinsic_D7_k363) (bruijn ##.sym.12 159 1) '##vcore.yield-to-host-major))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k363, self)})),
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dyield__to__host__major);
}
}
static void _V10_Dlookup__intrinsic_D7_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((bruijn ##.k.217 158 0) (##intrinsic ##vcore.garbage-collect)) ((bruijn ##.eqv?.4 160 0) (close _V10_Dlookup__intrinsic_D7_k362) (bruijn ##.sym.12 158 1) '##vcore.yield-to-host))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      _V40_V10vcore_Dgarbage__collect);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k362, self)})),
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dyield__to__host);
}
}
static void _V10_Dlookup__intrinsic_D7_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.373 0 0) ((bruijn ##.k.217 157 0) (##intrinsic ##vcore.finalize!)) ((bruijn ##.eqv?.4 159 0) (close _V10_Dlookup__intrinsic_D7_k361) (bruijn ##.sym.12 157 1) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      _V40_V10vcore_Dfinalize_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k361, self)})),
      VGetArg(statics, 157-1, 1),
      _V10vcore_Dgarbage__collect);
}
}
static void _V10_Dlookup__intrinsic_D7_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.372 0 0) ((bruijn ##.k.217 156 0) (##intrinsic ##vcore.has-finalizer?)) ((bruijn ##.eqv?.4 158 0) (close _V10_Dlookup__intrinsic_D7_k360) (bruijn ##.sym.12 156 1) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      _V40_V10vcore_Dhas__finalizer_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k360, self)})),
      VGetArg(statics, 156-1, 1),
      _V10vcore_Dfinalize_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.371 0 0) ((bruijn ##.k.217 155 0) (##intrinsic ##vcore.set-finalizer!)) ((bruijn ##.eqv?.4 157 0) (close _V10_Dlookup__intrinsic_D7_k359) (bruijn ##.sym.12 155 1) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      _V40_V10vcore_Dset__finalizer_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k359, self)})),
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dhas__finalizer_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.370 0 0) ((bruijn ##.k.217 154 0) (##intrinsic ##vcore.newline-stdout)) ((bruijn ##.eqv?.4 156 0) (close _V10_Dlookup__intrinsic_D7_k358) (bruijn ##.sym.12 154 1) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      _V40_V10vcore_Dnewline__stdout);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k358, self)})),
      VGetArg(statics, 154-1, 1),
      _V10vcore_Dset__finalizer_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.369 0 0) ((bruijn ##.k.217 153 0) (##intrinsic ##vcore.write-stdout)) ((bruijn ##.eqv?.4 155 0) (close _V10_Dlookup__intrinsic_D7_k357) (bruijn ##.sym.12 153 1) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      _V40_V10vcore_Dwrite__stdout);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k357, self)})),
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dnewline__stdout);
}
}
static void _V10_Dlookup__intrinsic_D7_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.368 0 0) ((bruijn ##.k.217 152 0) (##intrinsic ##vcore.display-stdout)) ((bruijn ##.eqv?.4 154 0) (close _V10_Dlookup__intrinsic_D7_k356) (bruijn ##.sym.12 152 1) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      _V40_V10vcore_Ddisplay__stdout);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k356, self)})),
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dwrite__stdout);
}
}
static void _V10_Dlookup__intrinsic_D7_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.367 0 0) ((bruijn ##.k.217 151 0) (##intrinsic ##vcore.newline)) ((bruijn ##.eqv?.4 153 0) (close _V10_Dlookup__intrinsic_D7_k355) (bruijn ##.sym.12 151 1) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      _V40_V10vcore_Dnewline);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k355, self)})),
      VGetArg(statics, 151-1, 1),
      _V10vcore_Ddisplay__stdout);
}
}
static void _V10_Dlookup__intrinsic_D7_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.366 0 0) ((bruijn ##.k.217 150 0) (##intrinsic ##vcore.write)) ((bruijn ##.eqv?.4 152 0) (close _V10_Dlookup__intrinsic_D7_k354) (bruijn ##.sym.12 150 1) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      _V40_V10vcore_Dwrite);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k354, self)})),
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dnewline);
}
}
static void _V10_Dlookup__intrinsic_D7_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.365 0 0) ((bruijn ##.k.217 149 0) (##intrinsic ##vcore.display-word)) ((bruijn ##.eqv?.4 151 0) (close _V10_Dlookup__intrinsic_D7_k353) (bruijn ##.sym.12 149 1) '##vcore.write))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      _V40_V10vcore_Ddisplay__word);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k353, self)})),
      VGetArg(statics, 149-1, 1),
      _V10vcore_Dwrite);
}
}
static void _V10_Dlookup__intrinsic_D7_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) ((bruijn ##.k.217 148 0) (##intrinsic ##vcore.read)) ((bruijn ##.eqv?.4 150 0) (close _V10_Dlookup__intrinsic_D7_k352) (bruijn ##.sym.12 148 1) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      _V40_V10vcore_Dread);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k352, self)})),
      VGetArg(statics, 148-1, 1),
      _V10vcore_Ddisplay__word);
}
}
static void _V10_Dlookup__intrinsic_D7_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.363 0 0) ((bruijn ##.k.217 147 0) (##intrinsic ##vcore.read-line2)) ((bruijn ##.eqv?.4 149 0) (close _V10_Dlookup__intrinsic_D7_k351) (bruijn ##.sym.12 147 1) '##vcore.read))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      _V40_V10vcore_Dread__line2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k351, self)})),
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dread);
}
}
static void _V10_Dlookup__intrinsic_D7_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.k.217 146 0) (##intrinsic ##vcore.read-line)) ((bruijn ##.eqv?.4 148 0) (close _V10_Dlookup__intrinsic_D7_k350) (bruijn ##.sym.12 146 1) '##vcore.read-line2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      _V40_V10vcore_Dread__line);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k350, self)})),
      VGetArg(statics, 146-1, 1),
      _V10vcore_Dread__line2);
}
}
static void _V10_Dlookup__intrinsic_D7_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) ((bruijn ##.k.217 145 0) (##intrinsic ##vcore.read-char)) ((bruijn ##.eqv?.4 147 0) (close _V10_Dlookup__intrinsic_D7_k349) (bruijn ##.sym.12 145 1) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      _V40_V10vcore_Dread__char);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k349, self)})),
      VGetArg(statics, 145-1, 1),
      _V10vcore_Dread__line);
}
}
static void _V10_Dlookup__intrinsic_D7_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.360 0 0) ((bruijn ##.k.217 144 0) (##intrinsic ##vcore.eof-object?)) ((bruijn ##.eqv?.4 146 0) (close _V10_Dlookup__intrinsic_D7_k348) (bruijn ##.sym.12 144 1) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      _V40_V10vcore_Deof__object_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k348, self)})),
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dread__char);
}
}
static void _V10_Dlookup__intrinsic_D7_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.359 0 0) ((bruijn ##.k.217 143 0) (##intrinsic ##vcore.get-output-string)) ((bruijn ##.eqv?.4 145 0) (close _V10_Dlookup__intrinsic_D7_k347) (bruijn ##.sym.12 143 1) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      _V40_V10vcore_Dget__output__string);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k347, self)})),
      VGetArg(statics, 143-1, 1),
      _V10vcore_Deof__object_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.358 0 0) ((bruijn ##.k.217 142 0) (##intrinsic ##vcore.open-output-string)) ((bruijn ##.eqv?.4 144 0) (close _V10_Dlookup__intrinsic_D7_k346) (bruijn ##.sym.12 142 1) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      _V40_V10vcore_Dopen__output__string);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k346, self)})),
      VGetArg(statics, 142-1, 1),
      _V10vcore_Dget__output__string);
}
}
static void _V10_Dlookup__intrinsic_D7_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.357 0 0) ((bruijn ##.k.217 141 0) (##intrinsic ##vcore.tty-port?)) ((bruijn ##.eqv?.4 143 0) (close _V10_Dlookup__intrinsic_D7_k345) (bruijn ##.sym.12 141 1) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      _V40_V10vcore_Dtty__port_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k345, self)})),
      VGetArg(statics, 141-1, 1),
      _V10vcore_Dopen__output__string);
}
}
static void _V10_Dlookup__intrinsic_D7_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.356 0 0) ((bruijn ##.k.217 140 0) (##intrinsic ##vcore.close-stream)) ((bruijn ##.eqv?.4 142 0) (close _V10_Dlookup__intrinsic_D7_k344) (bruijn ##.sym.12 140 1) '##vcore.tty-port?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      _V40_V10vcore_Dclose__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k344, self)})),
      VGetArg(statics, 140-1, 1),
      _V10vcore_Dtty__port_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.355 0 0) ((bruijn ##.k.217 139 0) (##intrinsic ##vcore.open-output-stream)) ((bruijn ##.eqv?.4 141 0) (close _V10_Dlookup__intrinsic_D7_k343) (bruijn ##.sym.12 139 1) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      _V40_V10vcore_Dopen__output__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k343, self)})),
      VGetArg(statics, 139-1, 1),
      _V10vcore_Dclose__stream);
}
}
static void _V10_Dlookup__intrinsic_D7_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.354 0 0) ((bruijn ##.k.217 138 0) (##intrinsic ##vcore.open-input-stream)) ((bruijn ##.eqv?.4 140 0) (close _V10_Dlookup__intrinsic_D7_k342) (bruijn ##.sym.12 138 1) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      _V40_V10vcore_Dopen__input__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k342, self)})),
      VGetArg(statics, 138-1, 1),
      _V10vcore_Dopen__output__stream);
}
}
static void _V10_Dlookup__intrinsic_D7_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.353 0 0) ((bruijn ##.k.217 137 0) (##intrinsic ##vcore.dup-stderr)) ((bruijn ##.eqv?.4 139 0) (close _V10_Dlookup__intrinsic_D7_k341) (bruijn ##.sym.12 137 1) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      _V40_V10vcore_Ddup__stderr);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k341, self)})),
      VGetArg(statics, 137-1, 1),
      _V10vcore_Dopen__input__stream);
}
}
static void _V10_Dlookup__intrinsic_D7_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.352 0 0) ((bruijn ##.k.217 136 0) (##intrinsic ##vcore.dup-stdout)) ((bruijn ##.eqv?.4 138 0) (close _V10_Dlookup__intrinsic_D7_k340) (bruijn ##.sym.12 136 1) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      _V40_V10vcore_Ddup__stdout);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k340, self)})),
      VGetArg(statics, 136-1, 1),
      _V10vcore_Ddup__stderr);
}
}
static void _V10_Dlookup__intrinsic_D7_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.351 0 0) ((bruijn ##.k.217 135 0) (##intrinsic ##vcore.dup-stdin)) ((bruijn ##.eqv?.4 137 0) (close _V10_Dlookup__intrinsic_D7_k339) (bruijn ##.sym.12 135 1) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      _V40_V10vcore_Ddup__stdin);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k339, self)})),
      VGetArg(statics, 135-1, 1),
      _V10vcore_Ddup__stdout);
}
}
static void _V10_Dlookup__intrinsic_D7_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.350 0 0) ((bruijn ##.k.217 134 0) (##intrinsic ##vcore.stderr->port)) ((bruijn ##.eqv?.4 136 0) (close _V10_Dlookup__intrinsic_D7_k338) (bruijn ##.sym.12 134 1) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      _V40_V10vcore_Dstderr___Gport);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k338, self)})),
      VGetArg(statics, 134-1, 1),
      _V10vcore_Ddup__stdin);
}
}
static void _V10_Dlookup__intrinsic_D7_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.349 0 0) ((bruijn ##.k.217 133 0) (##intrinsic ##vcore.stdout->port)) ((bruijn ##.eqv?.4 135 0) (close _V10_Dlookup__intrinsic_D7_k337) (bruijn ##.sym.12 133 1) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      _V40_V10vcore_Dstdout___Gport);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k337, self)})),
      VGetArg(statics, 133-1, 1),
      _V10vcore_Dstderr___Gport);
}
}
static void _V10_Dlookup__intrinsic_D7_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.348 0 0) ((bruijn ##.k.217 132 0) (##intrinsic ##vcore.stdin->port)) ((bruijn ##.eqv?.4 134 0) (close _V10_Dlookup__intrinsic_D7_k336) (bruijn ##.sym.12 132 1) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      _V40_V10vcore_Dstdin___Gport);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k336, self)})),
      VGetArg(statics, 132-1, 1),
      _V10vcore_Dstdout___Gport);
}
}
static void _V10_Dlookup__intrinsic_D7_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.347 0 0) ((bruijn ##.k.217 131 0) (##intrinsic ##vcore.char-integer)) ((bruijn ##.eqv?.4 133 0) (close _V10_Dlookup__intrinsic_D7_k335) (bruijn ##.sym.12 131 1) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      _V40_V10vcore_Dchar__integer);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k335, self)})),
      VGetArg(statics, 131-1, 1),
      _V10vcore_Dstdin___Gport);
}
}
static void _V10_Dlookup__intrinsic_D7_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.346 0 0) ((bruijn ##.k.217 130 0) (##intrinsic ##vcore.gensym)) ((bruijn ##.eqv?.4 132 0) (close _V10_Dlookup__intrinsic_D7_k334) (bruijn ##.sym.12 130 1) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      _V40_V10vcore_Dgensym);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k334, self)})),
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dchar__integer);
}
}
static void _V10_Dlookup__intrinsic_D7_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.345 0 0) ((bruijn ##.k.217 129 0) (##intrinsic ##vcore.symbol->string)) ((bruijn ##.eqv?.4 131 0) (close _V10_Dlookup__intrinsic_D7_k333) (bruijn ##.sym.12 129 1) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      _V40_V10vcore_Dsymbol___Gstring);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k333, self)})),
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dgensym);
}
}
static void _V10_Dlookup__intrinsic_D7_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.344 0 0) ((bruijn ##.k.217 128 0) (##intrinsic ##vcore.string->number)) ((bruijn ##.eqv?.4 130 0) (close _V10_Dlookup__intrinsic_D7_k332) (bruijn ##.sym.12 128 1) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      _V40_V10vcore_Dstring___Gnumber);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k332, self)})),
      VGetArg(statics, 128-1, 1),
      _V10vcore_Dsymbol___Gstring);
}
}
static void _V10_Dlookup__intrinsic_D7_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.343 0 0) ((bruijn ##.k.217 127 0) (##intrinsic ##vcore.string->symbol)) ((bruijn ##.eqv?.4 129 0) (close _V10_Dlookup__intrinsic_D7_k331) (bruijn ##.sym.12 127 1) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      _V40_V10vcore_Dstring___Gsymbol);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k331, self)})),
      VGetArg(statics, 127-1, 1),
      _V10vcore_Dstring___Gnumber);
}
}
static void _V10_Dlookup__intrinsic_D7_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.342 0 0) ((bruijn ##.k.217 126 0) (##intrinsic ##vcore.string-length)) ((bruijn ##.eqv?.4 128 0) (close _V10_Dlookup__intrinsic_D7_k330) (bruijn ##.sym.12 126 1) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      _V40_V10vcore_Dstring__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k330, self)})),
      VGetArg(statics, 126-1, 1),
      _V10vcore_Dstring___Gsymbol);
}
}
static void _V10_Dlookup__intrinsic_D7_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.341 0 0) ((bruijn ##.k.217 125 0) (##intrinsic ##vcore.string-set!)) ((bruijn ##.eqv?.4 127 0) (close _V10_Dlookup__intrinsic_D7_k329) (bruijn ##.sym.12 125 1) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      _V40_V10vcore_Dstring__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k329, self)})),
      VGetArg(statics, 125-1, 1),
      _V10vcore_Dstring__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.340 0 0) ((bruijn ##.k.217 124 0) (##intrinsic ##vcore.string-ref)) ((bruijn ##.eqv?.4 126 0) (close _V10_Dlookup__intrinsic_D7_k328) (bruijn ##.sym.12 124 1) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      _V40_V10vcore_Dstring__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k328, self)})),
      VGetArg(statics, 124-1, 1),
      _V10vcore_Dstring__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.339 0 0) ((bruijn ##.k.217 123 0) (##intrinsic ##vcore.string-copy!)) ((bruijn ##.eqv?.4 125 0) (close _V10_Dlookup__intrinsic_D7_k327) (bruijn ##.sym.12 123 1) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      _V40_V10vcore_Dstring__copy_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k327, self)})),
      VGetArg(statics, 123-1, 1),
      _V10vcore_Dstring__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.338 0 0) ((bruijn ##.k.217 122 0) (##intrinsic ##vcore.substring)) ((bruijn ##.eqv?.4 124 0) (close _V10_Dlookup__intrinsic_D7_k326) (bruijn ##.sym.12 122 1) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      _V40_V10vcore_Dsubstring);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k326, self)})),
      VGetArg(statics, 122-1, 1),
      _V10vcore_Dstring__copy_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.337 0 0) ((bruijn ##.k.217 121 0) (##intrinsic ##vcore.make-string)) ((bruijn ##.eqv?.4 123 0) (close _V10_Dlookup__intrinsic_D7_k325) (bruijn ##.sym.12 121 1) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      _V40_V10vcore_Dmake__string);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k325, self)})),
      VGetArg(statics, 121-1, 1),
      _V10vcore_Dsubstring);
}
}
static void _V10_Dlookup__intrinsic_D7_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.336 0 0) ((bruijn ##.k.217 120 0) (##intrinsic ##vcore.hash-table-delete!)) ((bruijn ##.eqv?.4 122 0) (close _V10_Dlookup__intrinsic_D7_k324) (bruijn ##.sym.12 120 1) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      _V40_V10vcore_Dhash__table__delete_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k324, self)})),
      VGetArg(statics, 120-1, 1),
      _V10vcore_Dmake__string);
}
}
static void _V10_Dlookup__intrinsic_D7_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((bruijn ##.k.217 119 0) (##intrinsic ##vcore.hash-table-set!)) ((bruijn ##.eqv?.4 121 0) (close _V10_Dlookup__intrinsic_D7_k323) (bruijn ##.sym.12 119 1) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      _V40_V10vcore_Dhash__table__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k323, self)})),
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dhash__table__delete_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.334 0 0) ((bruijn ##.k.217 118 0) (##intrinsic ##vcore.hash-table-ref)) ((bruijn ##.eqv?.4 120 0) (close _V10_Dlookup__intrinsic_D7_k322) (bruijn ##.sym.12 118 1) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      _V40_V10vcore_Dhash__table__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k322, self)})),
      VGetArg(statics, 118-1, 1),
      _V10vcore_Dhash__table__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.333 0 0) ((bruijn ##.k.217 117 0) (##intrinsic ##vcore.hash-table-vector)) ((bruijn ##.eqv?.4 119 0) (close _V10_Dlookup__intrinsic_D7_k321) (bruijn ##.sym.12 117 1) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      _V40_V10vcore_Dhash__table__vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k321, self)})),
      VGetArg(statics, 117-1, 1),
      _V10vcore_Dhash__table__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.332 0 0) ((bruijn ##.k.217 116 0) (##intrinsic ##vcore.hash-table-hash-function)) ((bruijn ##.eqv?.4 118 0) (close _V10_Dlookup__intrinsic_D7_k320) (bruijn ##.sym.12 116 1) '##vcore.hash-table-vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      _V40_V10vcore_Dhash__table__hash__function);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k320, self)})),
      VGetArg(statics, 116-1, 1),
      _V10vcore_Dhash__table__vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.331 0 0) ((bruijn ##.k.217 115 0) (##intrinsic ##vcore.hash-table-equivalence-function)) ((bruijn ##.eqv?.4 117 0) (close _V10_Dlookup__intrinsic_D7_k319) (bruijn ##.sym.12 115 1) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      _V40_V10vcore_Dhash__table__equivalence__function);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k319, self)})),
      VGetArg(statics, 115-1, 1),
      _V10vcore_Dhash__table__hash__function);
}
}
static void _V10_Dlookup__intrinsic_D7_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.330 0 0) ((bruijn ##.k.217 114 0) (##intrinsic ##vcore.make-hash-table)) ((bruijn ##.eqv?.4 116 0) (close _V10_Dlookup__intrinsic_D7_k318) (bruijn ##.sym.12 114 1) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      _V40_V10vcore_Dmake__hash__table);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k318, self)})),
      VGetArg(statics, 114-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
}
}
static void _V10_Dlookup__intrinsic_D7_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.329 0 0) ((bruijn ##.k.217 113 0) (##intrinsic ##vcore.record-length)) ((bruijn ##.eqv?.4 115 0) (close _V10_Dlookup__intrinsic_D7_k317) (bruijn ##.sym.12 113 1) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k317, self)})),
      VGetArg(statics, 113-1, 1),
      _V10vcore_Dmake__hash__table);
}
}
static void _V10_Dlookup__intrinsic_D7_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.328 0 0) ((bruijn ##.k.217 112 0) (##intrinsic ##vcore.record-set!)) ((bruijn ##.eqv?.4 114 0) (close _V10_Dlookup__intrinsic_D7_k316) (bruijn ##.sym.12 112 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k316, self)})),
      VGetArg(statics, 112-1, 1),
      _V10vcore_Drecord__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.327 0 0) ((bruijn ##.k.217 111 0) (##intrinsic ##vcore.record-ref)) ((bruijn ##.eqv?.4 113 0) (close _V10_Dlookup__intrinsic_D7_k315) (bruijn ##.sym.12 111 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k315, self)})),
      VGetArg(statics, 111-1, 1),
      _V10vcore_Drecord__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.326 0 0) ((bruijn ##.k.217 110 0) (##intrinsic ##vcore.record)) ((bruijn ##.eqv?.4 112 0) (close _V10_Dlookup__intrinsic_D7_k314) (bruijn ##.sym.12 110 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k314, self)})),
      VGetArg(statics, 110-1, 1),
      _V10vcore_Drecord__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.325 0 0) ((bruijn ##.k.217 109 0) (##intrinsic ##vcore.read-u8vector)) ((bruijn ##.eqv?.4 111 0) (close _V10_Dlookup__intrinsic_D7_k313) (bruijn ##.sym.12 109 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      _V40_V10vcore_Dread__u8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k313, self)})),
      VGetArg(statics, 109-1, 1),
      _V10vcore_Drecord);
}
}
static void _V10_Dlookup__intrinsic_D7_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.324 0 0) ((bruijn ##.k.217 108 0) (##intrinsic ##vcore.s8vector-length)) ((bruijn ##.eqv?.4 110 0) (close _V10_Dlookup__intrinsic_D7_k312) (bruijn ##.sym.12 108 1) '##vcore.read-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      _V40_V10vcore_Ds8vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k312, self)})),
      VGetArg(statics, 108-1, 1),
      _V10vcore_Dread__u8vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.323 0 0) ((bruijn ##.k.217 107 0) (##intrinsic ##vcore.s8vector-set!)) ((bruijn ##.eqv?.4 109 0) (close _V10_Dlookup__intrinsic_D7_k311) (bruijn ##.sym.12 107 1) '##vcore.s8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      _V40_V10vcore_Ds8vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k311, self)})),
      VGetArg(statics, 107-1, 1),
      _V10vcore_Ds8vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.322 0 0) ((bruijn ##.k.217 106 0) (##intrinsic ##vcore.s8vector-ref)) ((bruijn ##.eqv?.4 108 0) (close _V10_Dlookup__intrinsic_D7_k310) (bruijn ##.sym.12 106 1) '##vcore.s8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      _V40_V10vcore_Ds8vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k310, self)})),
      VGetArg(statics, 106-1, 1),
      _V10vcore_Ds8vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.321 0 0) ((bruijn ##.k.217 105 0) (##intrinsic ##vcore.list->s8vector)) ((bruijn ##.eqv?.4 107 0) (close _V10_Dlookup__intrinsic_D7_k309) (bruijn ##.sym.12 105 1) '##vcore.s8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k309, self)})),
      VGetArg(statics, 105-1, 1),
      _V10vcore_Ds8vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.320 0 0) ((bruijn ##.k.217 104 0) (##intrinsic ##vcore.make-s8vector)) ((bruijn ##.eqv?.4 106 0) (close _V10_Dlookup__intrinsic_D7_k308) (bruijn ##.sym.12 104 1) '##vcore.list->s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      _V40_V10vcore_Dmake__s8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k308, self)})),
      VGetArg(statics, 104-1, 1),
      _V10vcore_Dlist___Gs8vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.319 0 0) ((bruijn ##.k.217 103 0) (##intrinsic ##vcore.s8vector?)) ((bruijn ##.eqv?.4 105 0) (close _V10_Dlookup__intrinsic_D7_k307) (bruijn ##.sym.12 103 1) '##vcore.make-s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      _V40_V10vcore_Ds8vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k307, self)})),
      VGetArg(statics, 103-1, 1),
      _V10vcore_Dmake__s8vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.318 0 0) ((bruijn ##.k.217 102 0) (##intrinsic ##vcore.u8vector-length)) ((bruijn ##.eqv?.4 104 0) (close _V10_Dlookup__intrinsic_D7_k306) (bruijn ##.sym.12 102 1) '##vcore.s8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      _V40_V10vcore_Du8vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k306, self)})),
      VGetArg(statics, 102-1, 1),
      _V10vcore_Ds8vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.317 0 0) ((bruijn ##.k.217 101 0) (##intrinsic ##vcore.u8vector-set!)) ((bruijn ##.eqv?.4 103 0) (close _V10_Dlookup__intrinsic_D7_k305) (bruijn ##.sym.12 101 1) '##vcore.u8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      _V40_V10vcore_Du8vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k305, self)})),
      VGetArg(statics, 101-1, 1),
      _V10vcore_Du8vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.316 0 0) ((bruijn ##.k.217 100 0) (##intrinsic ##vcore.u8vector-ref)) ((bruijn ##.eqv?.4 102 0) (close _V10_Dlookup__intrinsic_D7_k304) (bruijn ##.sym.12 100 1) '##vcore.u8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      _V40_V10vcore_Du8vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k304, self)})),
      VGetArg(statics, 100-1, 1),
      _V10vcore_Du8vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.315 0 0) ((bruijn ##.k.217 99 0) (##intrinsic ##vcore.list->u8vector)) ((bruijn ##.eqv?.4 101 0) (close _V10_Dlookup__intrinsic_D7_k303) (bruijn ##.sym.12 99 1) '##vcore.u8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k303, self)})),
      VGetArg(statics, 99-1, 1),
      _V10vcore_Du8vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.314 0 0) ((bruijn ##.k.217 98 0) (##intrinsic ##vcore.make-u8vector)) ((bruijn ##.eqv?.4 100 0) (close _V10_Dlookup__intrinsic_D7_k302) (bruijn ##.sym.12 98 1) '##vcore.list->u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      _V40_V10vcore_Dmake__u8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k302, self)})),
      VGetArg(statics, 98-1, 1),
      _V10vcore_Dlist___Gu8vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.313 0 0) ((bruijn ##.k.217 97 0) (##intrinsic ##vcore.u8vector?)) ((bruijn ##.eqv?.4 99 0) (close _V10_Dlookup__intrinsic_D7_k301) (bruijn ##.sym.12 97 1) '##vcore.make-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      _V40_V10vcore_Du8vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k301, self)})),
      VGetArg(statics, 97-1, 1),
      _V10vcore_Dmake__u8vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((bruijn ##.k.217 96 0) (##intrinsic ##vcore.s16vector-length)) ((bruijn ##.eqv?.4 98 0) (close _V10_Dlookup__intrinsic_D7_k300) (bruijn ##.sym.12 96 1) '##vcore.u8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      _V40_V10vcore_Ds16vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k300, self)})),
      VGetArg(statics, 96-1, 1),
      _V10vcore_Du8vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 0 0) ((bruijn ##.k.217 95 0) (##intrinsic ##vcore.s16vector-set!)) ((bruijn ##.eqv?.4 97 0) (close _V10_Dlookup__intrinsic_D7_k299) (bruijn ##.sym.12 95 1) '##vcore.s16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      _V40_V10vcore_Ds16vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k299, self)})),
      VGetArg(statics, 95-1, 1),
      _V10vcore_Ds16vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.310 0 0) ((bruijn ##.k.217 94 0) (##intrinsic ##vcore.s16vector-ref)) ((bruijn ##.eqv?.4 96 0) (close _V10_Dlookup__intrinsic_D7_k298) (bruijn ##.sym.12 94 1) '##vcore.s16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      _V40_V10vcore_Ds16vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k298, self)})),
      VGetArg(statics, 94-1, 1),
      _V10vcore_Ds16vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.309 0 0) ((bruijn ##.k.217 93 0) (##intrinsic ##vcore.list->s16vector)) ((bruijn ##.eqv?.4 95 0) (close _V10_Dlookup__intrinsic_D7_k297) (bruijn ##.sym.12 93 1) '##vcore.s16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs16vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k297, self)})),
      VGetArg(statics, 93-1, 1),
      _V10vcore_Ds16vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.308 0 0) ((bruijn ##.k.217 92 0) (##intrinsic ##vcore.make-s16vector)) ((bruijn ##.eqv?.4 94 0) (close _V10_Dlookup__intrinsic_D7_k296) (bruijn ##.sym.12 92 1) '##vcore.list->s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      _V40_V10vcore_Dmake__s16vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k296, self)})),
      VGetArg(statics, 92-1, 1),
      _V10vcore_Dlist___Gs16vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.307 0 0) ((bruijn ##.k.217 91 0) (##intrinsic ##vcore.s16vector?)) ((bruijn ##.eqv?.4 93 0) (close _V10_Dlookup__intrinsic_D7_k295) (bruijn ##.sym.12 91 1) '##vcore.make-s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      _V40_V10vcore_Ds16vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k295, self)})),
      VGetArg(statics, 91-1, 1),
      _V10vcore_Dmake__s16vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.306 0 0) ((bruijn ##.k.217 90 0) (##intrinsic ##vcore.u16vector-length)) ((bruijn ##.eqv?.4 92 0) (close _V10_Dlookup__intrinsic_D7_k294) (bruijn ##.sym.12 90 1) '##vcore.s16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      _V40_V10vcore_Du16vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k294, self)})),
      VGetArg(statics, 90-1, 1),
      _V10vcore_Ds16vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.305 0 0) ((bruijn ##.k.217 89 0) (##intrinsic ##vcore.u16vector-set!)) ((bruijn ##.eqv?.4 91 0) (close _V10_Dlookup__intrinsic_D7_k293) (bruijn ##.sym.12 89 1) '##vcore.u16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      _V40_V10vcore_Du16vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k293, self)})),
      VGetArg(statics, 89-1, 1),
      _V10vcore_Du16vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.304 0 0) ((bruijn ##.k.217 88 0) (##intrinsic ##vcore.u16vector-ref)) ((bruijn ##.eqv?.4 90 0) (close _V10_Dlookup__intrinsic_D7_k292) (bruijn ##.sym.12 88 1) '##vcore.u16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      _V40_V10vcore_Du16vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k292, self)})),
      VGetArg(statics, 88-1, 1),
      _V10vcore_Du16vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.303 0 0) ((bruijn ##.k.217 87 0) (##intrinsic ##vcore.list->u16vector)) ((bruijn ##.eqv?.4 89 0) (close _V10_Dlookup__intrinsic_D7_k291) (bruijn ##.sym.12 87 1) '##vcore.u16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu16vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k291, self)})),
      VGetArg(statics, 87-1, 1),
      _V10vcore_Du16vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.302 0 0) ((bruijn ##.k.217 86 0) (##intrinsic ##vcore.make-u16vector)) ((bruijn ##.eqv?.4 88 0) (close _V10_Dlookup__intrinsic_D7_k290) (bruijn ##.sym.12 86 1) '##vcore.list->u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      _V40_V10vcore_Dmake__u16vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k290, self)})),
      VGetArg(statics, 86-1, 1),
      _V10vcore_Dlist___Gu16vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.301 0 0) ((bruijn ##.k.217 85 0) (##intrinsic ##vcore.u16vector?)) ((bruijn ##.eqv?.4 87 0) (close _V10_Dlookup__intrinsic_D7_k289) (bruijn ##.sym.12 85 1) '##vcore.make-u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      _V40_V10vcore_Du16vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k289, self)})),
      VGetArg(statics, 85-1, 1),
      _V10vcore_Dmake__u16vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.300 0 0) ((bruijn ##.k.217 84 0) (##intrinsic ##vcore.s32vector-length)) ((bruijn ##.eqv?.4 86 0) (close _V10_Dlookup__intrinsic_D7_k288) (bruijn ##.sym.12 84 1) '##vcore.u16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      _V40_V10vcore_Ds32vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k288, self)})),
      VGetArg(statics, 84-1, 1),
      _V10vcore_Du16vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.299 0 0) ((bruijn ##.k.217 83 0) (##intrinsic ##vcore.s32vector-set!)) ((bruijn ##.eqv?.4 85 0) (close _V10_Dlookup__intrinsic_D7_k287) (bruijn ##.sym.12 83 1) '##vcore.s32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      _V40_V10vcore_Ds32vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k287, self)})),
      VGetArg(statics, 83-1, 1),
      _V10vcore_Ds32vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.298 0 0) ((bruijn ##.k.217 82 0) (##intrinsic ##vcore.s32vector-ref)) ((bruijn ##.eqv?.4 84 0) (close _V10_Dlookup__intrinsic_D7_k286) (bruijn ##.sym.12 82 1) '##vcore.s32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      _V40_V10vcore_Ds32vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k286, self)})),
      VGetArg(statics, 82-1, 1),
      _V10vcore_Ds32vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.297 0 0) ((bruijn ##.k.217 81 0) (##intrinsic ##vcore.list->s32vector)) ((bruijn ##.eqv?.4 83 0) (close _V10_Dlookup__intrinsic_D7_k285) (bruijn ##.sym.12 81 1) '##vcore.s32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs32vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k285, self)})),
      VGetArg(statics, 81-1, 1),
      _V10vcore_Ds32vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.296 0 0) ((bruijn ##.k.217 80 0) (##intrinsic ##vcore.make-s32vector)) ((bruijn ##.eqv?.4 82 0) (close _V10_Dlookup__intrinsic_D7_k284) (bruijn ##.sym.12 80 1) '##vcore.list->s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      _V40_V10vcore_Dmake__s32vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k284, self)})),
      VGetArg(statics, 80-1, 1),
      _V10vcore_Dlist___Gs32vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.295 0 0) ((bruijn ##.k.217 79 0) (##intrinsic ##vcore.s32vector?)) ((bruijn ##.eqv?.4 81 0) (close _V10_Dlookup__intrinsic_D7_k283) (bruijn ##.sym.12 79 1) '##vcore.make-s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      _V40_V10vcore_Ds32vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k283, self)})),
      VGetArg(statics, 79-1, 1),
      _V10vcore_Dmake__s32vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.294 0 0) ((bruijn ##.k.217 78 0) (##intrinsic ##vcore.f32vector-length)) ((bruijn ##.eqv?.4 80 0) (close _V10_Dlookup__intrinsic_D7_k282) (bruijn ##.sym.12 78 1) '##vcore.s32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      _V40_V10vcore_Df32vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k282, self)})),
      VGetArg(statics, 78-1, 1),
      _V10vcore_Ds32vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.293 0 0) ((bruijn ##.k.217 77 0) (##intrinsic ##vcore.f32vector-set!)) ((bruijn ##.eqv?.4 79 0) (close _V10_Dlookup__intrinsic_D7_k281) (bruijn ##.sym.12 77 1) '##vcore.f32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      _V40_V10vcore_Df32vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k281, self)})),
      VGetArg(statics, 77-1, 1),
      _V10vcore_Df32vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.292 0 0) ((bruijn ##.k.217 76 0) (##intrinsic ##vcore.f32vector-ref)) ((bruijn ##.eqv?.4 78 0) (close _V10_Dlookup__intrinsic_D7_k280) (bruijn ##.sym.12 76 1) '##vcore.f32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      _V40_V10vcore_Df32vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k280, self)})),
      VGetArg(statics, 76-1, 1),
      _V10vcore_Df32vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.291 0 0) ((bruijn ##.k.217 75 0) (##intrinsic ##vcore.list->f32vector)) ((bruijn ##.eqv?.4 77 0) (close _V10_Dlookup__intrinsic_D7_k279) (bruijn ##.sym.12 75 1) '##vcore.f32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf32vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k279, self)})),
      VGetArg(statics, 75-1, 1),
      _V10vcore_Df32vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((bruijn ##.k.217 74 0) (##intrinsic ##vcore.make-f32vector)) ((bruijn ##.eqv?.4 76 0) (close _V10_Dlookup__intrinsic_D7_k278) (bruijn ##.sym.12 74 1) '##vcore.list->f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      _V40_V10vcore_Dmake__f32vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k278, self)})),
      VGetArg(statics, 74-1, 1),
      _V10vcore_Dlist___Gf32vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.289 0 0) ((bruijn ##.k.217 73 0) (##intrinsic ##vcore.f32vector?)) ((bruijn ##.eqv?.4 75 0) (close _V10_Dlookup__intrinsic_D7_k277) (bruijn ##.sym.12 73 1) '##vcore.make-f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      _V40_V10vcore_Df32vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k277, self)})),
      VGetArg(statics, 73-1, 1),
      _V10vcore_Dmake__f32vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.288 0 0) ((bruijn ##.k.217 72 0) (##intrinsic ##vcore.f64vector-length)) ((bruijn ##.eqv?.4 74 0) (close _V10_Dlookup__intrinsic_D7_k276) (bruijn ##.sym.12 72 1) '##vcore.f32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      _V40_V10vcore_Df64vector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k276, self)})),
      VGetArg(statics, 72-1, 1),
      _V10vcore_Df32vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.287 0 0) ((bruijn ##.k.217 71 0) (##intrinsic ##vcore.f64vector-set!)) ((bruijn ##.eqv?.4 73 0) (close _V10_Dlookup__intrinsic_D7_k275) (bruijn ##.sym.12 71 1) '##vcore.f64vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      _V40_V10vcore_Df64vector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k275, self)})),
      VGetArg(statics, 71-1, 1),
      _V10vcore_Df64vector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.286 0 0) ((bruijn ##.k.217 70 0) (##intrinsic ##vcore.f64vector-ref)) ((bruijn ##.eqv?.4 72 0) (close _V10_Dlookup__intrinsic_D7_k274) (bruijn ##.sym.12 70 1) '##vcore.f64vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      _V40_V10vcore_Df64vector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k274, self)})),
      VGetArg(statics, 70-1, 1),
      _V10vcore_Df64vector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.285 0 0) ((bruijn ##.k.217 69 0) (##intrinsic ##vcore.list->f64vector)) ((bruijn ##.eqv?.4 71 0) (close _V10_Dlookup__intrinsic_D7_k273) (bruijn ##.sym.12 69 1) '##vcore.f64vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf64vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k273, self)})),
      VGetArg(statics, 69-1, 1),
      _V10vcore_Df64vector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.284 0 0) ((bruijn ##.k.217 68 0) (##intrinsic ##vcore.make-f64vector)) ((bruijn ##.eqv?.4 70 0) (close _V10_Dlookup__intrinsic_D7_k272) (bruijn ##.sym.12 68 1) '##vcore.list->f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      _V40_V10vcore_Dmake__f64vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k272, self)})),
      VGetArg(statics, 68-1, 1),
      _V10vcore_Dlist___Gf64vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.283 0 0) ((bruijn ##.k.217 67 0) (##intrinsic ##vcore.f64vector?)) ((bruijn ##.eqv?.4 69 0) (close _V10_Dlookup__intrinsic_D7_k271) (bruijn ##.sym.12 67 1) '##vcore.make-f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      _V40_V10vcore_Df64vector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k271, self)})),
      VGetArg(statics, 67-1, 1),
      _V10vcore_Dmake__f64vector);
}
}
static void _V10_Dlookup__intrinsic_D7_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.282 0 0) ((bruijn ##.k.217 66 0) (##intrinsic ##vcore.vector-length)) ((bruijn ##.eqv?.4 68 0) (close _V10_Dlookup__intrinsic_D7_k270) (bruijn ##.sym.12 66 1) '##vcore.f64vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      _V40_V10vcore_Dvector__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k270, self)})),
      VGetArg(statics, 66-1, 1),
      _V10vcore_Df64vector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.281 0 0) ((bruijn ##.k.217 65 0) (##intrinsic ##vcore.vector-set!)) ((bruijn ##.eqv?.4 67 0) (close _V10_Dlookup__intrinsic_D7_k269) (bruijn ##.sym.12 65 1) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      _V40_V10vcore_Dvector__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k269, self)})),
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dvector__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.280 0 0) ((bruijn ##.k.217 64 0) (##intrinsic ##vcore.vector-ref)) ((bruijn ##.eqv?.4 66 0) (close _V10_Dlookup__intrinsic_D7_k268) (bruijn ##.sym.12 64 1) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      _V40_V10vcore_Dvector__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k268, self)})),
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dvector__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.279 0 0) ((bruijn ##.k.217 63 0) (##intrinsic ##vcore.list->vector)) ((bruijn ##.eqv?.4 65 0) (close _V10_Dlookup__intrinsic_D7_k267) (bruijn ##.sym.12 63 1) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      _V40_V10vcore_Dlist___Gvector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k267, self)})),
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dvector__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.278 0 0) ((bruijn ##.k.217 62 0) (##intrinsic ##vcore.set-cdr!)) ((bruijn ##.eqv?.4 64 0) (close _V10_Dlookup__intrinsic_D7_k266) (bruijn ##.sym.12 62 1) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      _V40_V10vcore_Dset__cdr_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k266, self)})),
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dlist___Gvector);
}
}
static void _V10_Dlookup__intrinsic_D7_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.277 0 0) ((bruijn ##.k.217 61 0) (##intrinsic ##vcore.set-car!)) ((bruijn ##.eqv?.4 63 0) (close _V10_Dlookup__intrinsic_D7_k265) (bruijn ##.sym.12 61 1) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      _V40_V10vcore_Dset__car_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k265, self)})),
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dset__cdr_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.276 0 0) ((bruijn ##.k.217 60 0) (##intrinsic ##vcore.cdr)) ((bruijn ##.eqv?.4 62 0) (close _V10_Dlookup__intrinsic_D7_k264) (bruijn ##.sym.12 60 1) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      _V40_V10vcore_Dcdr);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k264, self)})),
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dset__car_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.275 0 0) ((bruijn ##.k.217 59 0) (##intrinsic ##vcore.car)) ((bruijn ##.eqv?.4 61 0) (close _V10_Dlookup__intrinsic_D7_k263) (bruijn ##.sym.12 59 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      _V40_V10vcore_Dcar);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k263, self)})),
      VGetArg(statics, 59-1, 1),
      _V10vcore_Dcdr);
}
}
static void _V10_Dlookup__intrinsic_D7_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.274 0 0) ((bruijn ##.k.217 58 0) (##intrinsic ##vcore.cons)) ((bruijn ##.eqv?.4 60 0) (close _V10_Dlookup__intrinsic_D7_k262) (bruijn ##.sym.12 58 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      _V40_V10vcore_Dcons);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k262, self)})),
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dcar);
}
}
static void _V10_Dlookup__intrinsic_D7_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlookup__intrinsic_D7_k260) (close _V10_Dlookup__intrinsic_D7_k261))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlookup__intrinsic_D7_k260, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k261, self)})));
}
static void _V10_Dlookup__intrinsic_D7_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.273 0 0) ((bruijn ##.k.217 56 0) (##intrinsic ##vcore.unload-library)) ((bruijn ##.eqv?.4 58 0) (close _V10_Dlookup__intrinsic_D7_k259) (bruijn ##.sym.12 56 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      _V40_V10vcore_Dunload__library);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k259, self)})),
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dcons);
}
}
static void _V10_Dlookup__intrinsic_D7_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) ((bruijn ##.k.217 55 0) (##intrinsic ##vcore.load-library)) ((bruijn ##.eqv?.4 57 0) (close _V10_Dlookup__intrinsic_D7_k258) (bruijn ##.sym.12 55 1) '##vcore.unload-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      _V40_V10vcore_Dload__library);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k258, self)})),
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dunload__library);
}
}
static void _V10_Dlookup__intrinsic_D7_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.271 0 0) ((bruijn ##.k.217 54 0) (##intrinsic ##vcore.make-import)) ((bruijn ##.eqv?.4 56 0) (close _V10_Dlookup__intrinsic_D7_k257) (bruijn ##.sym.12 54 1) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      _V40_V10vcore_Dmake__import);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k257, self)})),
      VGetArg(statics, 54-1, 1),
      _V10vcore_Dload__library);
}
}
static void _V10_Dlookup__intrinsic_D7_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.270 0 0) ((bruijn ##.k.217 53 0) (##intrinsic ##vcore.lookup-library)) ((bruijn ##.eqv?.4 55 0) (close _V10_Dlookup__intrinsic_D7_k256) (bruijn ##.sym.12 53 1) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      _V40_V10vcore_Dlookup__library);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k256, self)})),
      VGetArg(statics, 53-1, 1),
      _V10vcore_Dmake__import);
}
}
static void _V10_Dlookup__intrinsic_D7_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.269 0 0) ((bruijn ##.k.217 52 0) (##intrinsic ##vcore.multidefine)) ((bruijn ##.eqv?.4 54 0) (close _V10_Dlookup__intrinsic_D7_k255) (bruijn ##.sym.12 52 1) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      _V40_V10vcore_Dmultidefine);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k255, self)})),
      VGetArg(statics, 52-1, 1),
      _V10vcore_Dlookup__library);
}
}
static void _V10_Dlookup__intrinsic_D7_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.268 0 0) ((bruijn ##.k.217 51 0) (##intrinsic ##vcore.define)) ((bruijn ##.eqv?.4 53 0) (close _V10_Dlookup__intrinsic_D7_k254) (bruijn ##.sym.12 51 1) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      _V40_V10vcore_Ddefine);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k254, self)})),
      VGetArg(statics, 51-1, 1),
      _V10vcore_Dmultidefine);
}
}
static void _V10_Dlookup__intrinsic_D7_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.267 0 0) ((bruijn ##.k.217 50 0) (##intrinsic ##vcore.function)) ((bruijn ##.eqv?.4 52 0) (close _V10_Dlookup__intrinsic_D7_k253) (bruijn ##.sym.12 50 1) '##vcore.define))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      _V40_V10vcore_Dfunction);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k253, self)})),
      VGetArg(statics, 50-1, 1),
      _V10vcore_Ddefine);
}
}
static void _V10_Dlookup__intrinsic_D7_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.266 0 0) ((bruijn ##.k.217 49 0) (##intrinsic ##vcore.record-length)) ((bruijn ##.eqv?.4 51 0) (close _V10_Dlookup__intrinsic_D7_k252) (bruijn ##.sym.12 49 1) '##vcore.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k252, self)})),
      VGetArg(statics, 49-1, 1),
      _V10vcore_Dfunction);
}
}
static void _V10_Dlookup__intrinsic_D7_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.265 0 0) ((bruijn ##.k.217 48 0) (##intrinsic ##vcore.record-set!)) ((bruijn ##.eqv?.4 50 0) (close _V10_Dlookup__intrinsic_D7_k251) (bruijn ##.sym.12 48 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k251, self)})),
      VGetArg(statics, 48-1, 1),
      _V10vcore_Drecord__length);
}
}
static void _V10_Dlookup__intrinsic_D7_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.264 0 0) ((bruijn ##.k.217 47 0) (##intrinsic ##vcore.record-ref)) ((bruijn ##.eqv?.4 49 0) (close _V10_Dlookup__intrinsic_D7_k250) (bruijn ##.sym.12 47 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k250, self)})),
      VGetArg(statics, 47-1, 1),
      _V10vcore_Drecord__set_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.263 0 0) ((bruijn ##.k.217 46 0) (##intrinsic ##vcore.record)) ((bruijn ##.eqv?.4 48 0) (close _V10_Dlookup__intrinsic_D7_k249) (bruijn ##.sym.12 46 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k249, self)})),
      VGetArg(statics, 46-1, 1),
      _V10vcore_Drecord__ref);
}
}
static void _V10_Dlookup__intrinsic_D7_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.262 0 0) ((bruijn ##.k.217 45 0) (##intrinsic ##vcore.set-global!)) ((bruijn ##.eqv?.4 47 0) (close _V10_Dlookup__intrinsic_D7_k248) (bruijn ##.sym.12 45 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      _V40_V10vcore_Dset__global_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k248, self)})),
      VGetArg(statics, 45-1, 1),
      _V10vcore_Drecord);
}
}
static void _V10_Dlookup__intrinsic_D7_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.261 0 0) ((bruijn ##.k.217 44 0) (##intrinsic ##vcore.define-global)) ((bruijn ##.eqv?.4 46 0) (close _V10_Dlookup__intrinsic_D7_k247) (bruijn ##.sym.12 44 1) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      _V40_V10vcore_Ddefine__global);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k247, self)})),
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dset__global_B);
}
}
static void _V10_Dlookup__intrinsic_D7_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.260 0 0) ((bruijn ##.k.217 43 0) (##intrinsic ##vcore.exit)) ((bruijn ##.eqv?.4 45 0) (close _V10_Dlookup__intrinsic_D7_k246) (bruijn ##.sym.12 43 1) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      _V40_V10vcore_Dexit);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k246, self)})),
      VGetArg(statics, 43-1, 1),
      _V10vcore_Ddefine__global);
}
}
static void _V10_Dlookup__intrinsic_D7_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.259 0 0) ((bruijn ##.k.217 42 0) (##intrinsic ##vcore.abort)) ((bruijn ##.eqv?.4 44 0) (close _V10_Dlookup__intrinsic_D7_k245) (bruijn ##.sym.12 42 1) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      _V40_V10vcore_Dabort);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k245, self)})),
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dexit);
}
}
static void _V10_Dlookup__intrinsic_D7_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.258 0 0) ((bruijn ##.k.217 41 0) (##intrinsic ##vcore.apply-cps)) ((bruijn ##.eqv?.4 43 0) (close _V10_Dlookup__intrinsic_D7_k244) (bruijn ##.sym.12 41 1) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      _V40_V10vcore_Dapply__cps);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k244, self)})),
      VGetArg(statics, 41-1, 1),
      _V10vcore_Dabort);
}
}
static void _V10_Dlookup__intrinsic_D7_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.k.217 40 0) (##intrinsic ##vcore.apply)) ((bruijn ##.eqv?.4 42 0) (close _V10_Dlookup__intrinsic_D7_k243) (bruijn ##.sym.12 40 1) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      _V40_V10vcore_Dapply);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k243, self)})),
      VGetArg(statics, 40-1, 1),
      _V10vcore_Dapply__cps);
}
}
static void _V10_Dlookup__intrinsic_D7_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.256 0 0) ((bruijn ##.k.217 39 0) (##intrinsic ##vcore.call-with-values)) ((bruijn ##.eqv?.4 41 0) (close _V10_Dlookup__intrinsic_D7_k242) (bruijn ##.sym.12 39 1) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      _V40_V10vcore_Dcall__with__values);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k242, self)})),
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dapply);
}
}
static void _V10_Dlookup__intrinsic_D7_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) ((bruijn ##.k.217 38 0) (##intrinsic ##vcore.call/cc)) ((bruijn ##.eqv?.4 40 0) (close _V10_Dlookup__intrinsic_D7_k241) (bruijn ##.sym.12 38 1) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      _V40_V10vcore_Dcall_Wcc);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k241, self)})),
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dcall__with__values);
}
}
static void _V10_Dlookup__intrinsic_D7_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.254 0 0) ((bruijn ##.k.217 37 0) (##intrinsic ##vcore.next)) ((bruijn ##.eqv?.4 39 0) (close _V10_Dlookup__intrinsic_D7_k240) (bruijn ##.sym.12 37 1) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      _V40_V10vcore_Dnext);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k240, self)})),
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dcall_Wcc);
}
}
static void _V10_Dlookup__intrinsic_D7_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.253 0 0) ((bruijn ##.k.217 36 0) (##intrinsic ##vcore.raise)) ((bruijn ##.eqv?.4 38 0) (close _V10_Dlookup__intrinsic_D7_k239) (bruijn ##.sym.12 36 1) '##vcore.next))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      _V40_V10vcore_Draise);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k239, self)})),
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dnext);
}
}
static void _V10_Dlookup__intrinsic_D7_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) ((bruijn ##.k.217 35 0) (##intrinsic ##vcore.pop-exception-handler)) ((bruijn ##.eqv?.4 37 0) (close _V10_Dlookup__intrinsic_D7_k238) (bruijn ##.sym.12 35 1) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      _V40_V10vcore_Dpop__exception__handler);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k238, self)})),
      VGetArg(statics, 35-1, 1),
      _V10vcore_Draise);
}
}
static void _V10_Dlookup__intrinsic_D7_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.251 0 0) ((bruijn ##.k.217 34 0) (##intrinsic ##vcore.push-exception-handler)) ((bruijn ##.eqv?.4 36 0) (close _V10_Dlookup__intrinsic_D7_k237) (bruijn ##.sym.12 34 1) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      _V40_V10vcore_Dpush__exception__handler);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k237, self)})),
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dpop__exception__handler);
}
}
static void _V10_Dlookup__intrinsic_D7_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.250 0 0) ((bruijn ##.k.217 33 0) (##intrinsic ##vcore.get-exception-handler)) ((bruijn ##.eqv?.4 35 0) (close _V10_Dlookup__intrinsic_D7_k236) (bruijn ##.sym.12 33 1) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      _V40_V10vcore_Dget__exception__handler);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k236, self)})),
      VGetArg(statics, 33-1, 1),
      _V10vcore_Dpush__exception__handler);
}
}
static void _V10_Dlookup__intrinsic_D7_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.249 0 0) ((bruijn ##.k.217 32 0) (##intrinsic ##vcore.pop-dynamic)) ((bruijn ##.eqv?.4 34 0) (close _V10_Dlookup__intrinsic_D7_k235) (bruijn ##.sym.12 32 1) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      _V40_V10vcore_Dpop__dynamic);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k235, self)})),
      VGetArg(statics, 32-1, 1),
      _V10vcore_Dget__exception__handler);
}
}
static void _V10_Dlookup__intrinsic_D7_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.248 0 0) ((bruijn ##.k.217 31 0) (##intrinsic ##vcore.push-dynamic)) ((bruijn ##.eqv?.4 33 0) (close _V10_Dlookup__intrinsic_D7_k234) (bruijn ##.sym.12 31 1) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      _V40_V10vcore_Dpush__dynamic);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k234, self)})),
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dpop__dynamic);
}
}
static void _V10_Dlookup__intrinsic_D7_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((bruijn ##.k.217 30 0) (##intrinsic ##vcore.get-dynamics)) ((bruijn ##.eqv?.4 32 0) (close _V10_Dlookup__intrinsic_D7_k233) (bruijn ##.sym.12 30 1) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      _V40_V10vcore_Dget__dynamics);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k233, self)})),
      VGetArg(statics, 30-1, 1),
      _V10vcore_Dpush__dynamic);
}
}
static void _V10_Dlookup__intrinsic_D7_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.246 0 0) ((bruijn ##.k.217 29 0) (##intrinsic ##vcore.not)) ((bruijn ##.eqv?.4 31 0) (close _V10_Dlookup__intrinsic_D7_k232) (bruijn ##.sym.12 29 1) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      _V40_V10vcore_Dnot);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k232, self)})),
      VGetArg(statics, 29-1, 1),
      _V10vcore_Dget__dynamics);
}
}
static void _V10_Dlookup__intrinsic_D7_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.245 0 0) ((bruijn ##.k.217 28 0) (##intrinsic ##vcore.eqv?)) ((bruijn ##.eqv?.4 30 0) (close _V10_Dlookup__intrinsic_D7_k231) (bruijn ##.sym.12 28 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      _V40_V10vcore_Deqv_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k231, self)})),
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dnot);
}
}
static void _V10_Dlookup__intrinsic_D7_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.244 0 0) ((bruijn ##.k.217 27 0) (##intrinsic ##vcore.blob=?)) ((bruijn ##.eqv?.4 29 0) (close _V10_Dlookup__intrinsic_D7_k230) (bruijn ##.sym.12 27 1) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      _V40_V10vcore_Dblob_E_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k230, self)})),
      VGetArg(statics, 27-1, 1),
      _V10vcore_Deqv_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.243 0 0) ((bruijn ##.k.217 26 0) (##intrinsic ##vcore.symbol=?)) ((bruijn ##.eqv?.4 28 0) (close _V10_Dlookup__intrinsic_D7_k229) (bruijn ##.sym.12 26 1) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      _V40_V10vcore_Dsymbol_E_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k229, self)})),
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dblob_E_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.217 25 0) (##intrinsic ##vcore.eq?)) ((bruijn ##.eqv?.4 27 0) (close _V10_Dlookup__intrinsic_D7_k228) (bruijn ##.sym.12 25 1) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      _V40_V10vcore_Deq_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k228, self)})),
      VGetArg(statics, 25-1, 1),
      _V10vcore_Dsymbol_E_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.k.217 24 0) (##intrinsic ##vcore.foreign-pointer?)) ((bruijn ##.eqv?.4 26 0) (close _V10_Dlookup__intrinsic_D7_k227) (bruijn ##.sym.12 24 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      _V40_V10vcore_Dforeign__pointer_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k227, self)})),
      VGetArg(statics, 24-1, 1),
      _V10vcore_Deq_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.k.217 23 0) (##intrinsic ##vcore.nullptr?)) ((bruijn ##.eqv?.4 25 0) (close _V10_Dlookup__intrinsic_D7_k226) (bruijn ##.sym.12 23 1) '##vcore.foreign-pointer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      _V40_V10vcore_Dnullptr_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k226, self)})),
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dforeign__pointer_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) ((bruijn ##.k.217 22 0) (##intrinsic ##vcore.void?)) ((bruijn ##.eqv?.4 24 0) (close _V10_Dlookup__intrinsic_D7_k225) (bruijn ##.sym.12 22 1) '##vcore.nullptr?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      _V40_V10vcore_Dvoid_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k225, self)})),
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dnullptr_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) ((bruijn ##.k.217 21 0) (##intrinsic ##vcore.char?)) ((bruijn ##.eqv?.4 23 0) (close _V10_Dlookup__intrinsic_D7_k224) (bruijn ##.sym.12 21 1) '##vcore.void?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      _V40_V10vcore_Dchar_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k224, self)})),
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dvoid_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.237 0 0) ((bruijn ##.k.217 20 0) (##intrinsic ##vcore.double?)) ((bruijn ##.eqv?.4 22 0) (close _V10_Dlookup__intrinsic_D7_k223) (bruijn ##.sym.12 20 1) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      _V40_V10vcore_Ddouble_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k223, self)})),
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dchar_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.236 0 0) ((bruijn ##.k.217 19 0) (##intrinsic ##vcore.int?)) ((bruijn ##.eqv?.4 21 0) (close _V10_Dlookup__intrinsic_D7_k222) (bruijn ##.sym.12 19 1) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      _V40_V10vcore_Dint_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k222, self)})),
      VGetArg(statics, 19-1, 1),
      _V10vcore_Ddouble_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.235 0 0) ((bruijn ##.k.217 18 0) (##intrinsic ##vcore.string?)) ((bruijn ##.eqv?.4 20 0) (close _V10_Dlookup__intrinsic_D7_k221) (bruijn ##.sym.12 18 1) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      _V40_V10vcore_Dstring_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k221, self)})),
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dint_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.234 0 0) ((bruijn ##.k.217 17 0) (##intrinsic ##vcore.symbol?)) ((bruijn ##.eqv?.4 19 0) (close _V10_Dlookup__intrinsic_D7_k220) (bruijn ##.sym.12 17 1) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      _V40_V10vcore_Dsymbol_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k220, self)})),
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dstring_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.233 0 0) ((bruijn ##.k.217 16 0) (##intrinsic ##vcore.blob?)) ((bruijn ##.eqv?.4 18 0) (close _V10_Dlookup__intrinsic_D7_k219) (bruijn ##.sym.12 16 1) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      _V40_V10vcore_Dblob_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k219, self)})),
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dsymbol_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.217 15 0) (##intrinsic ##vcore.procedure?)) ((bruijn ##.eqv?.4 17 0) (close _V10_Dlookup__intrinsic_D7_k218) (bruijn ##.sym.12 15 1) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      _V40_V10vcore_Dprocedure_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k218, self)})),
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dblob_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.231 0 0) ((bruijn ##.k.217 14 0) (##intrinsic ##vcore.record?)) ((bruijn ##.eqv?.4 16 0) (close _V10_Dlookup__intrinsic_D7_k217) (bruijn ##.sym.12 14 1) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      _V40_V10vcore_Drecord_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k217, self)})),
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dprocedure_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.k.217 13 0) (##intrinsic ##vcore.hash-table?)) ((bruijn ##.eqv?.4 15 0) (close _V10_Dlookup__intrinsic_D7_k216) (bruijn ##.sym.12 13 1) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      _V40_V10vcore_Dhash__table_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k216, self)})),
      VGetArg(statics, 13-1, 1),
      _V10vcore_Drecord_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.k.217 12 0) (##intrinsic ##vcore.vector?)) ((bruijn ##.eqv?.4 14 0) (close _V10_Dlookup__intrinsic_D7_k215) (bruijn ##.sym.12 12 1) '##vcore.hash-table?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      _V40_V10vcore_Dvector_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k215, self)})),
      VGetArg(statics, 12-1, 1),
      _V10vcore_Dhash__table_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.228 0 0) ((bruijn ##.k.217 11 0) (##intrinsic ##vcore.pair?)) ((bruijn ##.eqv?.4 13 0) (close _V10_Dlookup__intrinsic_D7_k214) (bruijn ##.sym.12 11 1) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      _V40_V10vcore_Dpair_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k214, self)})),
      VGetArg(statics, 11-1, 1),
      _V10vcore_Dvector_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.227 0 0) ((bruijn ##.k.217 10 0) (##intrinsic ##vcore.null?)) ((bruijn ##.eqv?.4 12 0) (close _V10_Dlookup__intrinsic_D7_k213) (bruijn ##.sym.12 10 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      _V40_V10vcore_Dnull_Q);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k213, self)})),
      VGetArg(statics, 10-1, 1),
      _V10vcore_Dpair_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.226 0 0) ((bruijn ##.k.217 9 0) (##intrinsic ##vcore.remainder)) ((bruijn ##.eqv?.4 11 0) (close _V10_Dlookup__intrinsic_D7_k212) (bruijn ##.sym.12 9 1) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      _V40_V10vcore_Dremainder);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k212, self)})),
      VGetArg(statics, 9-1, 1),
      _V10vcore_Dnull_Q);
}
}
static void _V10_Dlookup__intrinsic_D7_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.225 0 0) ((bruijn ##.k.217 8 0) (##intrinsic ##vcore.quotient)) ((bruijn ##.eqv?.4 10 0) (close _V10_Dlookup__intrinsic_D7_k211) (bruijn ##.sym.12 8 1) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      _V40_V10vcore_Dquotient);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k211, self)})),
      VGetArg(statics, 8-1, 1),
      _V10vcore_Dremainder);
}
}
static void _V10_Dlookup__intrinsic_D7_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) ((bruijn ##.k.217 7 0) (##intrinsic ##vcore.cmp)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__intrinsic_D7_k210) (bruijn ##.sym.12 7 1) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      _V40_V10vcore_Dcmp);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k210, self)})),
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dquotient);
}
}
static void _V10_Dlookup__intrinsic_D7_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.223 0 0) ((bruijn ##.k.217 6 0) (##intrinsic ##vcore./)) ((bruijn ##.eqv?.4 8 0) (close _V10_Dlookup__intrinsic_D7_k209) (bruijn ##.sym.12 6 1) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _V40_V10vcore_D_W);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k209, self)})),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcmp);
}
}
static void _V10_Dlookup__intrinsic_D7_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.222 0 0) ((bruijn ##.k.217 5 0) (##intrinsic ##vcore.*)) ((bruijn ##.eqv?.4 7 0) (close _V10_Dlookup__intrinsic_D7_k208) (bruijn ##.sym.12 5 1) '##vcore./))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      _V40_V10vcore_D_S);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k208, self)})),
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_W);
}
}
static void _V10_Dlookup__intrinsic_D7_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.221 0 0) ((bruijn ##.k.217 4 0) (##intrinsic ##vcore.-)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__intrinsic_D7_k207) (bruijn ##.sym.12 4 1) '##vcore.*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _V40_V10vcore_D__);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k207, self)})),
      statics->up->up->up->vars[1],
      _V10vcore_D_S);
}
}
static void _V10_Dlookup__intrinsic_D7_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.220 0 0) ((bruijn ##.k.217 3 0) (##intrinsic ##vcore.+)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__intrinsic_D7_k206) (bruijn ##.sym.12 3 1) '##vcore.-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _V40_V10vcore_D_P);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k206, self)})),
      statics->up->up->vars[1],
      _V10vcore_D__);
}
}
static void _V10_Dlookup__intrinsic_D7_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.219 0 0) ((bruijn ##.k.217 2 0) (##intrinsic ##vcore.exact)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__intrinsic_D7_k205) (bruijn ##.sym.12 2 1) '##vcore.+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dexact);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k205, self)})),
      statics->up->vars[1],
      _V10vcore_D_P);
}
}
static void _V10_Dlookup__intrinsic_D7_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.218 0 0) ((bruijn ##.k.217 1 0) (##intrinsic ##vcore.inexact)) ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__intrinsic_D7_k204) (bruijn ##.sym.12 1 1) '##vcore.exact))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V40_V10vcore_Dinexact);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k204, self)})),
      statics->vars[1],
      _V10vcore_Dexact);
}
}
static void _V10_Dlookup__intrinsic_D7_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__intrinsic_D7_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.eqv?.4 2 0) (close _V10_Dlookup__intrinsic_D7_k203) (bruijn ##.sym.12 0 1) '##vcore.inexact)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k203, self)})),
      _var1,
      _V10vcore_Dinexact);
}
static void _V0vanity_V0intrinsics_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((close _V10_Dlookup__inline__name_D5_lambda2) (close _V10_Dlookup__intrinsic__name_D6_lambda3) (close _V10_Dlookup__intrinsic_D7_lambda4)) ((bruijn ##.k.15 4 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-inline-name (bruijn ##.lookup-inline-name.5 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic-name (bruijn ##.lookup-intrinsic-name.6 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic (bruijn ##.lookup-intrinsic.7 0 2)) '())))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__inline__name,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic__name,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic,
        self->vars[2]),
        VNULL))));
    }
}
static void _V0vanity_V0intrinsics_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.3 0 0) (close _V0vanity_V0intrinsics_V20_k3) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k3, self)})),
      _V0eqv_Q);
}
static void _V0vanity_V0intrinsics_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0intrinsics_V20_k2) (##string ##.string.610) (bruijn ##.x.415 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D610.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0intrinsics_V20_k1) (##string ##.string.611))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D611.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0intrinsics_V20 = (VFunc)_V0vanity_V0intrinsics_V20_lambda1;
