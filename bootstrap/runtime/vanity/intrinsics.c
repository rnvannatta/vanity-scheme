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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0is__basic__intrinsic_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0is__basic__intrinsic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "is-basic-intrinsic\?" };
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
VWEAK VWORD _V40_V10vcore_Dinteger___Gchar;VWEAK VClosure _VW_V40_V10vcore_Dinteger___Gchar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntChar, NULL };
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
VWEAK VWORD _V40_V10vcore_D_G;VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V40_V10vcore_D_G_E;VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V40_V10vcore_D_E;VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V40_V10vcore_D_L;VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V40_V10vcore_D_L_E;VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
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
VWEAK VWORD _V10vcore_D_L_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.<=" };
VWEAK VWORD _V10vcore_D_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.<" };
VWEAK VWORD _V10vcore_D_E;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.=" };
VWEAK VWORD _V10vcore_D_G_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.>=" };
VWEAK VWORD _V10vcore_D_G;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.>" };
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
VWEAK VWORD _V10vcore_Dinteger___Gchar;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dinteger___Gchar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.integer->char" };
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
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBitCount" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VArithmeticShift" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC1" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC1" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseNand" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseXnor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseAnd" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseXor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseIor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNot" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VJiffiesPerSecond" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCurrentJiffy" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAccess" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRealpath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VRegisterSigint" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VYieldToHostMajor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VYieldToHost" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VNewlineStdout" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VWriteStdout" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VDisplayStdout" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VTtyPortP" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D646 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D645 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D644 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D643 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D642 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D641 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D640 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D639 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D638 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VIntChar" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D637 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D636 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VGensym" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D635 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D634 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D633 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D632 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D631 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D630 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D629 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D628 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D627 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D626 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D625 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D624 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D623 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableVector" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D622 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D621 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D620 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D619 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRecordLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D618 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D617 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordRef2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D616 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VCreateRecord2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D615 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VReadU8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D614 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VS8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D613 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D612 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D611 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListS8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeS8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS8VectorP" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VU8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D607 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D606 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D605 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListU8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D604 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeU8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D603 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU8VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D602 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D601 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D600 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D599 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D598 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D597 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS16VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D596 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VU16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D595 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D594 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D593 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListU16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D592 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeU16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D591 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VU16VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D590 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D589 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D588 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D587 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D586 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D585 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS32VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D584 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D583 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D582 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D581 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D580 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D579 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF32VectorP" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D578 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF64VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D577 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D576 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D575 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF64Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF64VectorP" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VUnloadLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSetDeclare" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSetGlobalVar2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VApplyCps" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRaise" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VPopExceptionHandler" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VPushExceptionHandler" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VGetExceptionHandler" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VPopDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VPushDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VGetDynamics" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEqv" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VForeignPointerP2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VNullptrP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VVoidP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VHashTableP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRecordP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGe" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpEq" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLe" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExact" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VInexact" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCdr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCar2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlineCons2" };
VWEAK VWORD _V10vcore_Dqcons;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.qcons" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineEq2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineNot2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlinePairP2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlineNullP2" };
static __attribute__((constructor)) void VDllMain1() {
  _V0is__basic__intrinsic_Q = VEncodePointer(VLookupConstant("_V0is__basic__intrinsic_Q", &_VW_V0is__basic__intrinsic_Q), VPOINTER_OTHER);
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
  _V40_V10vcore_Dinteger___Gchar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinteger___Gchar", &_VW_V40_V10vcore_Dinteger___Gchar), VPOINTER_CLOSURE);
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
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
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
  _V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V10vcore_D_L_E", &_VW_V10vcore_D_L_E), VPOINTER_OTHER);
  _V10vcore_D_L = VEncodePointer(VLookupConstant("_V10vcore_D_L", &_VW_V10vcore_D_L), VPOINTER_OTHER);
  _V10vcore_D_E = VEncodePointer(VLookupConstant("_V10vcore_D_E", &_VW_V10vcore_D_E), VPOINTER_OTHER);
  _V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V10vcore_D_G_E", &_VW_V10vcore_D_G_E), VPOINTER_OTHER);
  _V10vcore_D_G = VEncodePointer(VLookupConstant("_V10vcore_D_G", &_VW_V10vcore_D_G), VPOINTER_OTHER);
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
  _V10vcore_Dinteger___Gchar = VEncodePointer(VLookupConstant("_V10vcore_Dinteger___Gchar", &_VW_V10vcore_Dinteger___Gchar), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__inline__name, _var0, _var1);
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.28 1 0) ((bruijn ##.k.29 0 0) (bruijn ##.p.28 1 0)) (##vcore.eqv? (bruijn ##.k.29 0 0) (bruijn ##.sym.10 6 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dqcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.27 0 0) ((bruijn ##.k.20 8 0) (##string ##.string.506)) ((bruijn ##.k.20 8 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D506.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.26 0 0) ((bruijn ##.k.20 7 0) (##string ##.string.505)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11) (bruijn ##.sym.10 7 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D505.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k11, self)))),
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dcdr);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.25 0 0) ((bruijn ##.k.20 6 0) (##string ##.string.504)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10) (bruijn ##.sym.10 6 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D504.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k10, self)))),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcar);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k8) (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k8, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k9, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.24 0 0) ((bruijn ##.k.20 4 0) (##string ##.string.503)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k7) (bruijn ##.sym.10 4 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D503.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k7, self)))),
      statics->up->up->up->vars[1],
      _V10vcore_Dcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.23 0 0) ((bruijn ##.k.20 3 0) (##string ##.string.502)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k6) (bruijn ##.sym.10 3 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D502.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k6, self)))),
      statics->up->up->vars[1],
      _V10vcore_Deq_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.22 0 0) ((bruijn ##.k.20 2 0) (##string ##.string.501)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k5) (bruijn ##.sym.10 2 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D501.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k5, self)))),
      statics->up->vars[1],
      _V10vcore_Dnot);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.21 0 0) ((bruijn ##.k.20 1 0) (##string ##.string.500)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k4) (bruijn ##.sym.10 1 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D500.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k4, self)))),
      statics->vars[1],
      _V10vcore_Dpair_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k3) (bruijn ##.sym.10 0 1) '##vcore.null?)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name_V0k3, self)))),
      _var1,
      _V10vcore_Dnull_Q);
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.225 1 0) ((bruijn ##.k.226 0 0) (bruijn ##.p.225 1 0)) (##vcore.eqv? (bruijn ##.k.226 0 0) (bruijn ##.sym.12 60 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dqcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.224 0 0) ((bruijn ##.k.30 195 0) (##string ##.string.699)) ((bruijn ##.k.30 195 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 195-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 195-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.223 0 0) ((bruijn ##.k.30 194 0) (##string ##.string.698)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k207) (bruijn ##.sym.12 194 1) '##vcore.bit-count))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 194-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k207, self)))),
      VGetArg(statics, 194-1, 1),
      _V10vcore_Dbit__count);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.222 0 0) ((bruijn ##.k.30 193 0) (##string ##.string.697)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k206) (bruijn ##.sym.12 193 1) '##vcore.arithmetic-shift))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 193-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k206, self)))),
      VGetArg(statics, 193-1, 1),
      _V10vcore_Darithmetic__shift);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.221 0 0) ((bruijn ##.k.30 192 0) (##string ##.string.696)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k205) (bruijn ##.sym.12 192 1) '##vcore.bitwise-orc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 192-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k205, self)))),
      VGetArg(statics, 192-1, 1),
      _V10vcore_Dbitwise__orc2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.220 0 0) ((bruijn ##.k.30 191 0) (##string ##.string.695)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k204) (bruijn ##.sym.12 191 1) '##vcore.bitwise-orc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k204, self)))),
      VGetArg(statics, 191-1, 1),
      _V10vcore_Dbitwise__orc1);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.219 0 0) ((bruijn ##.k.30 190 0) (##string ##.string.694)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k203) (bruijn ##.sym.12 190 1) '##vcore.bitwise-andc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k203, self)))),
      VGetArg(statics, 190-1, 1),
      _V10vcore_Dbitwise__andc2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.218 0 0) ((bruijn ##.k.30 189 0) (##string ##.string.693)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k202) (bruijn ##.sym.12 189 1) '##vcore.bitwise-andc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k202, self)))),
      VGetArg(statics, 189-1, 1),
      _V10vcore_Dbitwise__andc1);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.217 0 0) ((bruijn ##.k.30 188 0) (##string ##.string.692)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k201) (bruijn ##.sym.12 188 1) '##vcore.bitwise-nor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k201, self)))),
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dbitwise__nor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.216 0 0) ((bruijn ##.k.30 187 0) (##string ##.string.691)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k200) (bruijn ##.sym.12 187 1) '##vcore.bitwise-nand))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k200, self)))),
      VGetArg(statics, 187-1, 1),
      _V10vcore_Dbitwise__nand);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.215 0 0) ((bruijn ##.k.30 186 0) (##string ##.string.690)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k199) (bruijn ##.sym.12 186 1) '##vcore.bitwise-xnor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k199, self)))),
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dbitwise__xnor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.214 0 0) ((bruijn ##.k.30 185 0) (##string ##.string.689)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k198) (bruijn ##.sym.12 185 1) '##vcore.bitwise-and))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k198, self)))),
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dbitwise__and);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) ((bruijn ##.k.30 184 0) (##string ##.string.688)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k197) (bruijn ##.sym.12 184 1) '##vcore.bitwise-xor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k197, self)))),
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dbitwise__xor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) ((bruijn ##.k.30 183 0) (##string ##.string.687)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k196) (bruijn ##.sym.12 183 1) '##vcore.bitwise-ior))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k196, self)))),
      VGetArg(statics, 183-1, 1),
      _V10vcore_Dbitwise__ior);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.k.30 182 0) (##string ##.string.686)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k195) (bruijn ##.sym.12 182 1) '##vcore.bitwise-not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k195, self)))),
      VGetArg(statics, 182-1, 1),
      _V10vcore_Dbitwise__not);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.210 0 0) ((bruijn ##.k.30 181 0) (##string ##.string.685)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k194) (bruijn ##.sym.12 181 1) '##vcore.jiffies-per-second))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k194, self)))),
      VGetArg(statics, 181-1, 1),
      _V10vcore_Djiffies__per__second);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.209 0 0) ((bruijn ##.k.30 180 0) (##string ##.string.684)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k193) (bruijn ##.sym.12 180 1) '##vcore.current-jiffy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k193, self)))),
      VGetArg(statics, 180-1, 1),
      _V10vcore_Dcurrent__jiffy);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.208 0 0) ((bruijn ##.k.30 179 0) (##string ##.string.683)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k192) (bruijn ##.sym.12 179 1) '##vcore.access))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k192, self)))),
      VGetArg(statics, 179-1, 1),
      _V10vcore_Daccess);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.207 0 0) ((bruijn ##.k.30 178 0) (##string ##.string.682)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k191) (bruijn ##.sym.12 178 1) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D682.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k191, self)))),
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dmake__temporary__file);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.206 0 0) ((bruijn ##.k.30 177 0) (##string ##.string.681)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k190) (bruijn ##.sym.12 177 1) '##vcore.realpath))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D681.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k190, self)))),
      VGetArg(statics, 177-1, 1),
      _V10vcore_Drealpath);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.205 0 0) ((bruijn ##.k.30 176 0) (##string ##.string.680)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k189) (bruijn ##.sym.12 176 1) '##vcore.await))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D680.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k189, self)))),
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dawait);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.204 0 0) ((bruijn ##.k.30 175 0) (##string ##.string.679)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k188) (bruijn ##.sym.12 175 1) '##vcore.async))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D679.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k188, self)))),
      VGetArg(statics, 175-1, 1),
      _V10vcore_Dasync);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.k.30 174 0) (##string ##.string.678)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k187) (bruijn ##.sym.12 174 1) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k187, self)))),
      VGetArg(statics, 174-1, 1),
      _V10vcore_Dfiber__fork__list);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) ((bruijn ##.k.30 173 0) (##string ##.string.677)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k186) (bruijn ##.sym.12 173 1) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k186, self)))),
      VGetArg(statics, 173-1, 1),
      _V10vcore_Drandom__advance_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.k.30 172 0) (##string ##.string.676)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k185) (bruijn ##.sym.12 172 1) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k185, self)))),
      VGetArg(statics, 172-1, 1),
      _V10vcore_Drandom__sample__float_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.200 0 0) ((bruijn ##.k.30 171 0) (##string ##.string.675)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k184) (bruijn ##.sym.12 171 1) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k184, self)))),
      VGetArg(statics, 171-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.199 0 0) ((bruijn ##.k.30 170 0) (##string ##.string.674)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k183) (bruijn ##.sym.12 170 1) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k183, self)))),
      VGetArg(statics, 170-1, 1),
      _V10vcore_Drandom__sample_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.198 0 0) ((bruijn ##.k.30 169 0) (##string ##.string.673)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k182) (bruijn ##.sym.12 169 1) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k182, self)))),
      VGetArg(statics, 169-1, 1),
      _V10vcore_Drandom__copy);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.197 0 0) ((bruijn ##.k.30 168 0) (##string ##.string.672)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k181) (bruijn ##.sym.12 168 1) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k181, self)))),
      VGetArg(statics, 168-1, 1),
      _V10vcore_Dmake__random);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.196 0 0) ((bruijn ##.k.30 167 0) (##string ##.string.671)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k180) (bruijn ##.sym.12 167 1) '##vcore.register-sigint))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k180, self)))),
      VGetArg(statics, 167-1, 1),
      _V10vcore_Dregister__sigint);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.k.30 166 0) (##string ##.string.670)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k179) (bruijn ##.sym.12 166 1) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k179, self)))),
      VGetArg(statics, 166-1, 1),
      _V10vcore_Dcommand__line);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.194 0 0) ((bruijn ##.k.30 165 0) (##string ##.string.669)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k178) (bruijn ##.sym.12 165 1) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k178, self)))),
      VGetArg(statics, 165-1, 1),
      _V10vcore_Dopen__output__process);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.193 0 0) ((bruijn ##.k.30 164 0) (##string ##.string.668)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k177) (bruijn ##.sym.12 164 1) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k177, self)))),
      VGetArg(statics, 164-1, 1),
      _V10vcore_Dopen__input__process);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) ((bruijn ##.k.30 163 0) (##string ##.string.667)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k176) (bruijn ##.sym.12 163 1) '##vcore.system))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k176, self)))),
      VGetArg(statics, 163-1, 1),
      _V10vcore_Dsystem);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.k.30 162 0) (##string ##.string.666)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k175) (bruijn ##.sym.12 162 1) '##vcore.yield-to-host-major))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k175, self)))),
      VGetArg(statics, 162-1, 1),
      _V10vcore_Dyield__to__host__major);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.k.30 161 0) (##string ##.string.665)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k174) (bruijn ##.sym.12 161 1) '##vcore.yield-to-host))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k174, self)))),
      VGetArg(statics, 161-1, 1),
      _V10vcore_Dyield__to__host);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.189 0 0) ((bruijn ##.k.30 160 0) (##string ##.string.664)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k173) (bruijn ##.sym.12 160 1) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k173, self)))),
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dgarbage__collect);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.188 0 0) ((bruijn ##.k.30 159 0) (##string ##.string.663)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k172) (bruijn ##.sym.12 159 1) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k172, self)))),
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dfinalize_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.k.30 158 0) (##string ##.string.662)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k171) (bruijn ##.sym.12 158 1) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k171, self)))),
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dhas__finalizer_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.186 0 0) ((bruijn ##.k.30 157 0) (##string ##.string.661)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k170) (bruijn ##.sym.12 157 1) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k170, self)))),
      VGetArg(statics, 157-1, 1),
      _V10vcore_Dset__finalizer_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.185 0 0) ((bruijn ##.k.30 156 0) (##string ##.string.660)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k169) (bruijn ##.sym.12 156 1) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k169, self)))),
      VGetArg(statics, 156-1, 1),
      _V10vcore_Dnewline__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.184 0 0) ((bruijn ##.k.30 155 0) (##string ##.string.659)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k168) (bruijn ##.sym.12 155 1) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k168, self)))),
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dwrite__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) ((bruijn ##.k.30 154 0) (##string ##.string.658)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k167) (bruijn ##.sym.12 154 1) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k167, self)))),
      VGetArg(statics, 154-1, 1),
      _V10vcore_Ddisplay__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) ((bruijn ##.k.30 153 0) (##string ##.string.657)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k166) (bruijn ##.sym.12 153 1) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k166, self)))),
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dnewline);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) ((bruijn ##.k.30 152 0) (##string ##.string.656)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k165) (bruijn ##.sym.12 152 1) '##vcore.write))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k165, self)))),
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dwrite);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.180 0 0) ((bruijn ##.k.30 151 0) (##string ##.string.655)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k164) (bruijn ##.sym.12 151 1) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k164, self)))),
      VGetArg(statics, 151-1, 1),
      _V10vcore_Ddisplay__word);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.179 0 0) ((bruijn ##.k.30 150 0) (##string ##.string.654)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k163) (bruijn ##.sym.12 150 1) '##vcore.read))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k163, self)))),
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dread);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.178 0 0) ((bruijn ##.k.30 149 0) (##string ##.string.653)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k162) (bruijn ##.sym.12 149 1) '##vcore.read-line2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k162, self)))),
      VGetArg(statics, 149-1, 1),
      _V10vcore_Dread__line2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) ((bruijn ##.k.30 148 0) (##string ##.string.652)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k161) (bruijn ##.sym.12 148 1) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k161, self)))),
      VGetArg(statics, 148-1, 1),
      _V10vcore_Dread__line);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.176 0 0) ((bruijn ##.k.30 147 0) (##string ##.string.651)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k160) (bruijn ##.sym.12 147 1) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k160, self)))),
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dread__char);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.175 0 0) ((bruijn ##.k.30 146 0) (##string ##.string.650)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k159) (bruijn ##.sym.12 146 1) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k159, self)))),
      VGetArg(statics, 146-1, 1),
      _V10vcore_Deof__object_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.174 0 0) ((bruijn ##.k.30 145 0) (##string ##.string.649)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k158) (bruijn ##.sym.12 145 1) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k158, self)))),
      VGetArg(statics, 145-1, 1),
      _V10vcore_Dget__output__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.173 0 0) ((bruijn ##.k.30 144 0) (##string ##.string.648)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k157) (bruijn ##.sym.12 144 1) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k157, self)))),
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dopen__output__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.k.30 143 0) (##string ##.string.647)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k156) (bruijn ##.sym.12 143 1) '##vcore.tty-port?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D647.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k156, self)))),
      VGetArg(statics, 143-1, 1),
      _V10vcore_Dtty__port_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) ((bruijn ##.k.30 142 0) (##string ##.string.646)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k155) (bruijn ##.sym.12 142 1) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D646.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k155, self)))),
      VGetArg(statics, 142-1, 1),
      _V10vcore_Dclose__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.170 0 0) ((bruijn ##.k.30 141 0) (##string ##.string.645)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k154) (bruijn ##.sym.12 141 1) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D645.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k154, self)))),
      VGetArg(statics, 141-1, 1),
      _V10vcore_Dopen__output__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.169 0 0) ((bruijn ##.k.30 140 0) (##string ##.string.644)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k153) (bruijn ##.sym.12 140 1) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D644.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k153, self)))),
      VGetArg(statics, 140-1, 1),
      _V10vcore_Dopen__input__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.168 0 0) ((bruijn ##.k.30 139 0) (##string ##.string.643)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k152) (bruijn ##.sym.12 139 1) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D643.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k152, self)))),
      VGetArg(statics, 139-1, 1),
      _V10vcore_Ddup__stderr);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.167 0 0) ((bruijn ##.k.30 138 0) (##string ##.string.642)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k151) (bruijn ##.sym.12 138 1) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D642.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k151, self)))),
      VGetArg(statics, 138-1, 1),
      _V10vcore_Ddup__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.166 0 0) ((bruijn ##.k.30 137 0) (##string ##.string.641)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k150) (bruijn ##.sym.12 137 1) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D641.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k150, self)))),
      VGetArg(statics, 137-1, 1),
      _V10vcore_Ddup__stdin);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) ((bruijn ##.k.30 136 0) (##string ##.string.640)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k149) (bruijn ##.sym.12 136 1) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k149, self)))),
      VGetArg(statics, 136-1, 1),
      _V10vcore_Dstderr___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.164 0 0) ((bruijn ##.k.30 135 0) (##string ##.string.639)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k148) (bruijn ##.sym.12 135 1) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D639.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k148, self)))),
      VGetArg(statics, 135-1, 1),
      _V10vcore_Dstdout___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.163 0 0) ((bruijn ##.k.30 134 0) (##string ##.string.638)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k147) (bruijn ##.sym.12 134 1) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D638.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k147, self)))),
      VGetArg(statics, 134-1, 1),
      _V10vcore_Dstdin___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.162 0 0) ((bruijn ##.k.30 133 0) (##string ##.string.637)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k146) (bruijn ##.sym.12 133 1) '##vcore.integer->char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D637.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k146, self)))),
      VGetArg(statics, 133-1, 1),
      _V10vcore_Dinteger___Gchar);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) ((bruijn ##.k.30 132 0) (##string ##.string.636)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k145) (bruijn ##.sym.12 132 1) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D636.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k145, self)))),
      VGetArg(statics, 132-1, 1),
      _V10vcore_Dchar__integer);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.160 0 0) ((bruijn ##.k.30 131 0) (##string ##.string.635)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k144) (bruijn ##.sym.12 131 1) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D635.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k144, self)))),
      VGetArg(statics, 131-1, 1),
      _V10vcore_Dgensym);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.159 0 0) ((bruijn ##.k.30 130 0) (##string ##.string.634)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k143) (bruijn ##.sym.12 130 1) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D634.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k143, self)))),
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dsymbol___Gstring);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.158 0 0) ((bruijn ##.k.30 129 0) (##string ##.string.633)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k142) (bruijn ##.sym.12 129 1) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D633.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k142, self)))),
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dstring___Gnumber);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.157 0 0) ((bruijn ##.k.30 128 0) (##string ##.string.632)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k141) (bruijn ##.sym.12 128 1) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D632.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k141, self)))),
      VGetArg(statics, 128-1, 1),
      _V10vcore_Dstring___Gsymbol);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.156 0 0) ((bruijn ##.k.30 127 0) (##string ##.string.631)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k140) (bruijn ##.sym.12 127 1) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D631.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k140, self)))),
      VGetArg(statics, 127-1, 1),
      _V10vcore_Dstring__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.155 0 0) ((bruijn ##.k.30 126 0) (##string ##.string.630)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k139) (bruijn ##.sym.12 126 1) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D630.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k139, self)))),
      VGetArg(statics, 126-1, 1),
      _V10vcore_Dstring__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.154 0 0) ((bruijn ##.k.30 125 0) (##string ##.string.629)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k138) (bruijn ##.sym.12 125 1) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D629.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k138, self)))),
      VGetArg(statics, 125-1, 1),
      _V10vcore_Dstring__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.30 124 0) (##string ##.string.628)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k137) (bruijn ##.sym.12 124 1) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D628.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k137, self)))),
      VGetArg(statics, 124-1, 1),
      _V10vcore_Dstring__copy_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.152 0 0) ((bruijn ##.k.30 123 0) (##string ##.string.627)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k136) (bruijn ##.sym.12 123 1) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D627.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k136, self)))),
      VGetArg(statics, 123-1, 1),
      _V10vcore_Dsubstring);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.151 0 0) ((bruijn ##.k.30 122 0) (##string ##.string.626)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k135) (bruijn ##.sym.12 122 1) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D626.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k135, self)))),
      VGetArg(statics, 122-1, 1),
      _V10vcore_Dmake__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) ((bruijn ##.k.30 121 0) (##string ##.string.625)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k134) (bruijn ##.sym.12 121 1) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D625.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k134, self)))),
      VGetArg(statics, 121-1, 1),
      _V10vcore_Dhash__table__delete_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.149 0 0) ((bruijn ##.k.30 120 0) (##string ##.string.624)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k133) (bruijn ##.sym.12 120 1) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D624.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k133, self)))),
      VGetArg(statics, 120-1, 1),
      _V10vcore_Dhash__table__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.148 0 0) ((bruijn ##.k.30 119 0) (##string ##.string.623)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k132) (bruijn ##.sym.12 119 1) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D623.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k132, self)))),
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dhash__table__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.147 0 0) ((bruijn ##.k.30 118 0) (##string ##.string.622)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k131) (bruijn ##.sym.12 118 1) '##vcore.hash-table-vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D622.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k131, self)))),
      VGetArg(statics, 118-1, 1),
      _V10vcore_Dhash__table__vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.146 0 0) ((bruijn ##.k.30 117 0) (##string ##.string.621)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k130) (bruijn ##.sym.12 117 1) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D621.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k130, self)))),
      VGetArg(statics, 117-1, 1),
      _V10vcore_Dhash__table__hash__function);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.145 0 0) ((bruijn ##.k.30 116 0) (##string ##.string.620)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k129) (bruijn ##.sym.12 116 1) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D620.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k129, self)))),
      VGetArg(statics, 116-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.144 0 0) ((bruijn ##.k.30 115 0) (##string ##.string.619)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k128) (bruijn ##.sym.12 115 1) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D619.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k128, self)))),
      VGetArg(statics, 115-1, 1),
      _V10vcore_Dmake__hash__table);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.143 0 0) ((bruijn ##.k.30 114 0) (##string ##.string.618)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k127) (bruijn ##.sym.12 114 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D618.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k127, self)))),
      VGetArg(statics, 114-1, 1),
      _V10vcore_Drecord__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.142 0 0) ((bruijn ##.k.30 113 0) (##string ##.string.617)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k126) (bruijn ##.sym.12 113 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D617.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k126, self)))),
      VGetArg(statics, 113-1, 1),
      _V10vcore_Drecord__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.141 0 0) ((bruijn ##.k.30 112 0) (##string ##.string.616)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k125) (bruijn ##.sym.12 112 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D616.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k125, self)))),
      VGetArg(statics, 112-1, 1),
      _V10vcore_Drecord__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.140 0 0) ((bruijn ##.k.30 111 0) (##string ##.string.615)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k124) (bruijn ##.sym.12 111 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D615.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k124, self)))),
      VGetArg(statics, 111-1, 1),
      _V10vcore_Drecord);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.139 0 0) ((bruijn ##.k.30 110 0) (##string ##.string.614)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k123) (bruijn ##.sym.12 110 1) '##vcore.read-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D614.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k123, self)))),
      VGetArg(statics, 110-1, 1),
      _V10vcore_Dread__u8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.138 0 0) ((bruijn ##.k.30 109 0) (##string ##.string.613)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k122) (bruijn ##.sym.12 109 1) '##vcore.s8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D613.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k122, self)))),
      VGetArg(statics, 109-1, 1),
      _V10vcore_Ds8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.137 0 0) ((bruijn ##.k.30 108 0) (##string ##.string.612)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k121) (bruijn ##.sym.12 108 1) '##vcore.s8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D612.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k121, self)))),
      VGetArg(statics, 108-1, 1),
      _V10vcore_Ds8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.136 0 0) ((bruijn ##.k.30 107 0) (##string ##.string.611)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k120) (bruijn ##.sym.12 107 1) '##vcore.s8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D611.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k120, self)))),
      VGetArg(statics, 107-1, 1),
      _V10vcore_Ds8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.135 0 0) ((bruijn ##.k.30 106 0) (##string ##.string.610)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k119) (bruijn ##.sym.12 106 1) '##vcore.list->s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D610.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k119, self)))),
      VGetArg(statics, 106-1, 1),
      _V10vcore_Dlist___Gs8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.134 0 0) ((bruijn ##.k.30 105 0) (##string ##.string.609)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k118) (bruijn ##.sym.12 105 1) '##vcore.make-s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D609.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k118, self)))),
      VGetArg(statics, 105-1, 1),
      _V10vcore_Dmake__s8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.133 0 0) ((bruijn ##.k.30 104 0) (##string ##.string.608)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k117) (bruijn ##.sym.12 104 1) '##vcore.s8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D608.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k117, self)))),
      VGetArg(statics, 104-1, 1),
      _V10vcore_Ds8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.132 0 0) ((bruijn ##.k.30 103 0) (##string ##.string.607)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k116) (bruijn ##.sym.12 103 1) '##vcore.u8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D607.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k116, self)))),
      VGetArg(statics, 103-1, 1),
      _V10vcore_Du8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.131 0 0) ((bruijn ##.k.30 102 0) (##string ##.string.606)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k115) (bruijn ##.sym.12 102 1) '##vcore.u8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D606.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k115, self)))),
      VGetArg(statics, 102-1, 1),
      _V10vcore_Du8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.130 0 0) ((bruijn ##.k.30 101 0) (##string ##.string.605)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k114) (bruijn ##.sym.12 101 1) '##vcore.u8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D605.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k114, self)))),
      VGetArg(statics, 101-1, 1),
      _V10vcore_Du8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.129 0 0) ((bruijn ##.k.30 100 0) (##string ##.string.604)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k113) (bruijn ##.sym.12 100 1) '##vcore.list->u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D604.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k113, self)))),
      VGetArg(statics, 100-1, 1),
      _V10vcore_Dlist___Gu8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.128 0 0) ((bruijn ##.k.30 99 0) (##string ##.string.603)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k112) (bruijn ##.sym.12 99 1) '##vcore.make-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D603.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k112, self)))),
      VGetArg(statics, 99-1, 1),
      _V10vcore_Dmake__u8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.127 0 0) ((bruijn ##.k.30 98 0) (##string ##.string.602)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k111) (bruijn ##.sym.12 98 1) '##vcore.u8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D602.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k111, self)))),
      VGetArg(statics, 98-1, 1),
      _V10vcore_Du8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.126 0 0) ((bruijn ##.k.30 97 0) (##string ##.string.601)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k110) (bruijn ##.sym.12 97 1) '##vcore.s16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D601.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k110, self)))),
      VGetArg(statics, 97-1, 1),
      _V10vcore_Ds16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.125 0 0) ((bruijn ##.k.30 96 0) (##string ##.string.600)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k109) (bruijn ##.sym.12 96 1) '##vcore.s16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D600.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k109, self)))),
      VGetArg(statics, 96-1, 1),
      _V10vcore_Ds16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.124 0 0) ((bruijn ##.k.30 95 0) (##string ##.string.599)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k108) (bruijn ##.sym.12 95 1) '##vcore.s16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D599.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k108, self)))),
      VGetArg(statics, 95-1, 1),
      _V10vcore_Ds16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.123 0 0) ((bruijn ##.k.30 94 0) (##string ##.string.598)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k107) (bruijn ##.sym.12 94 1) '##vcore.list->s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D598.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k107, self)))),
      VGetArg(statics, 94-1, 1),
      _V10vcore_Dlist___Gs16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.122 0 0) ((bruijn ##.k.30 93 0) (##string ##.string.597)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k106) (bruijn ##.sym.12 93 1) '##vcore.make-s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D597.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k106, self)))),
      VGetArg(statics, 93-1, 1),
      _V10vcore_Dmake__s16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.121 0 0) ((bruijn ##.k.30 92 0) (##string ##.string.596)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k105) (bruijn ##.sym.12 92 1) '##vcore.s16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D596.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k105, self)))),
      VGetArg(statics, 92-1, 1),
      _V10vcore_Ds16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.120 0 0) ((bruijn ##.k.30 91 0) (##string ##.string.595)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k104) (bruijn ##.sym.12 91 1) '##vcore.u16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D595.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k104, self)))),
      VGetArg(statics, 91-1, 1),
      _V10vcore_Du16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.119 0 0) ((bruijn ##.k.30 90 0) (##string ##.string.594)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k103) (bruijn ##.sym.12 90 1) '##vcore.u16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D594.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k103, self)))),
      VGetArg(statics, 90-1, 1),
      _V10vcore_Du16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.118 0 0) ((bruijn ##.k.30 89 0) (##string ##.string.593)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k102) (bruijn ##.sym.12 89 1) '##vcore.u16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D593.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k102, self)))),
      VGetArg(statics, 89-1, 1),
      _V10vcore_Du16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.117 0 0) ((bruijn ##.k.30 88 0) (##string ##.string.592)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k101) (bruijn ##.sym.12 88 1) '##vcore.list->u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D592.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k101, self)))),
      VGetArg(statics, 88-1, 1),
      _V10vcore_Dlist___Gu16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.116 0 0) ((bruijn ##.k.30 87 0) (##string ##.string.591)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k100) (bruijn ##.sym.12 87 1) '##vcore.make-u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D591.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k100, self)))),
      VGetArg(statics, 87-1, 1),
      _V10vcore_Dmake__u16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.115 0 0) ((bruijn ##.k.30 86 0) (##string ##.string.590)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k99) (bruijn ##.sym.12 86 1) '##vcore.u16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D590.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k99, self)))),
      VGetArg(statics, 86-1, 1),
      _V10vcore_Du16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.114 0 0) ((bruijn ##.k.30 85 0) (##string ##.string.589)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k98) (bruijn ##.sym.12 85 1) '##vcore.s32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D589.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k98, self)))),
      VGetArg(statics, 85-1, 1),
      _V10vcore_Ds32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.113 0 0) ((bruijn ##.k.30 84 0) (##string ##.string.588)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k97) (bruijn ##.sym.12 84 1) '##vcore.s32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D588.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k97, self)))),
      VGetArg(statics, 84-1, 1),
      _V10vcore_Ds32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.k.30 83 0) (##string ##.string.587)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k96) (bruijn ##.sym.12 83 1) '##vcore.s32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D587.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k96, self)))),
      VGetArg(statics, 83-1, 1),
      _V10vcore_Ds32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.111 0 0) ((bruijn ##.k.30 82 0) (##string ##.string.586)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k95) (bruijn ##.sym.12 82 1) '##vcore.list->s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D586.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k95, self)))),
      VGetArg(statics, 82-1, 1),
      _V10vcore_Dlist___Gs32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.110 0 0) ((bruijn ##.k.30 81 0) (##string ##.string.585)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k94) (bruijn ##.sym.12 81 1) '##vcore.make-s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D585.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k94, self)))),
      VGetArg(statics, 81-1, 1),
      _V10vcore_Dmake__s32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.109 0 0) ((bruijn ##.k.30 80 0) (##string ##.string.584)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k93) (bruijn ##.sym.12 80 1) '##vcore.s32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D584.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k93, self)))),
      VGetArg(statics, 80-1, 1),
      _V10vcore_Ds32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.108 0 0) ((bruijn ##.k.30 79 0) (##string ##.string.583)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k92) (bruijn ##.sym.12 79 1) '##vcore.f32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D583.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k92, self)))),
      VGetArg(statics, 79-1, 1),
      _V10vcore_Df32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.107 0 0) ((bruijn ##.k.30 78 0) (##string ##.string.582)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k91) (bruijn ##.sym.12 78 1) '##vcore.f32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D582.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k91, self)))),
      VGetArg(statics, 78-1, 1),
      _V10vcore_Df32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.106 0 0) ((bruijn ##.k.30 77 0) (##string ##.string.581)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k90) (bruijn ##.sym.12 77 1) '##vcore.f32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D581.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k90, self)))),
      VGetArg(statics, 77-1, 1),
      _V10vcore_Df32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.k.30 76 0) (##string ##.string.580)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k89) (bruijn ##.sym.12 76 1) '##vcore.list->f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D580.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k89, self)))),
      VGetArg(statics, 76-1, 1),
      _V10vcore_Dlist___Gf32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) ((bruijn ##.k.30 75 0) (##string ##.string.579)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k88) (bruijn ##.sym.12 75 1) '##vcore.make-f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D579.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k88, self)))),
      VGetArg(statics, 75-1, 1),
      _V10vcore_Dmake__f32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.k.30 74 0) (##string ##.string.578)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k87) (bruijn ##.sym.12 74 1) '##vcore.f32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D578.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k87, self)))),
      VGetArg(statics, 74-1, 1),
      _V10vcore_Df32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.102 0 0) ((bruijn ##.k.30 73 0) (##string ##.string.577)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k86) (bruijn ##.sym.12 73 1) '##vcore.f64vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D577.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k86, self)))),
      VGetArg(statics, 73-1, 1),
      _V10vcore_Df64vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.k.30 72 0) (##string ##.string.576)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k85) (bruijn ##.sym.12 72 1) '##vcore.f64vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D576.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k85, self)))),
      VGetArg(statics, 72-1, 1),
      _V10vcore_Df64vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.100 0 0) ((bruijn ##.k.30 71 0) (##string ##.string.575)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k84) (bruijn ##.sym.12 71 1) '##vcore.f64vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D575.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k84, self)))),
      VGetArg(statics, 71-1, 1),
      _V10vcore_Df64vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.99 0 0) ((bruijn ##.k.30 70 0) (##string ##.string.574)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k83) (bruijn ##.sym.12 70 1) '##vcore.list->f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D574.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k83, self)))),
      VGetArg(statics, 70-1, 1),
      _V10vcore_Dlist___Gf64vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.98 0 0) ((bruijn ##.k.30 69 0) (##string ##.string.573)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k82) (bruijn ##.sym.12 69 1) '##vcore.make-f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D573.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k82, self)))),
      VGetArg(statics, 69-1, 1),
      _V10vcore_Dmake__f64vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.97 0 0) ((bruijn ##.k.30 68 0) (##string ##.string.572)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k81) (bruijn ##.sym.12 68 1) '##vcore.f64vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D572.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k81, self)))),
      VGetArg(statics, 68-1, 1),
      _V10vcore_Df64vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.96 0 0) ((bruijn ##.k.30 67 0) (##string ##.string.571)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k80) (bruijn ##.sym.12 67 1) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D571.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k80, self)))),
      VGetArg(statics, 67-1, 1),
      _V10vcore_Dvector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.95 0 0) ((bruijn ##.k.30 66 0) (##string ##.string.570)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k79) (bruijn ##.sym.12 66 1) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D570.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k79, self)))),
      VGetArg(statics, 66-1, 1),
      _V10vcore_Dvector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) ((bruijn ##.k.30 65 0) (##string ##.string.569)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k78) (bruijn ##.sym.12 65 1) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D569.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k78, self)))),
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dvector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.93 0 0) ((bruijn ##.k.30 64 0) (##string ##.string.568)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k77) (bruijn ##.sym.12 64 1) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D568.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k77, self)))),
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dlist___Gvector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.92 0 0) ((bruijn ##.k.30 63 0) (##string ##.string.567)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k76) (bruijn ##.sym.12 63 1) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k76, self)))),
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dset__cdr_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) ((bruijn ##.k.30 62 0) (##string ##.string.566)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k75) (bruijn ##.sym.12 62 1) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k75, self)))),
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dset__car_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.k.30 61 0) (##string ##.string.565)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k74) (bruijn ##.sym.12 61 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k74, self)))),
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dcdr);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.89 0 0) ((bruijn ##.k.30 60 0) (##string ##.string.564)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k73) (bruijn ##.sym.12 60 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D564.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k73, self)))),
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dcar);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k71) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k72))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k72, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.88 0 0) ((bruijn ##.k.30 58 0) (##string ##.string.563)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k70) (bruijn ##.sym.12 58 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D563.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k70, self)))),
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.87 0 0) ((bruijn ##.k.30 57 0) (##string ##.string.562)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k69) (bruijn ##.sym.12 57 1) '##vcore.unload-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D562.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k69, self)))),
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dunload__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.86 0 0) ((bruijn ##.k.30 56 0) (##string ##.string.561)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k68) (bruijn ##.sym.12 56 1) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D561.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k68, self)))),
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dload__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.85 0 0) ((bruijn ##.k.30 55 0) (##string ##.string.560)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k67) (bruijn ##.sym.12 55 1) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D560.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k67, self)))),
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dmake__import);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.84 0 0) ((bruijn ##.k.30 54 0) (##string ##.string.559)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k66) (bruijn ##.sym.12 54 1) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k66, self)))),
      VGetArg(statics, 54-1, 1),
      _V10vcore_Dlookup__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.83 0 0) ((bruijn ##.k.30 53 0) (##string ##.string.555)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k65) (bruijn ##.sym.12 53 1) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k65, self)))),
      VGetArg(statics, 53-1, 1),
      _V10vcore_Dmultidefine);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.82 0 0) ((bruijn ##.k.30 52 0) (##string ##.string.558)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k64) (bruijn ##.sym.12 52 1) '##vcore.define))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k64, self)))),
      VGetArg(statics, 52-1, 1),
      _V10vcore_Ddefine);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.81 0 0) ((bruijn ##.k.30 51 0) (##string ##.string.557)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k63) (bruijn ##.sym.12 51 1) '##vcore.set-declare!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k63, self)))),
      VGetArg(statics, 51-1, 1),
      _V10vcore_Dset__declare_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.k.30 50 0) (##string ##.string.556)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k62) (bruijn ##.sym.12 50 1) '##vcore.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k62, self)))),
      VGetArg(statics, 50-1, 1),
      _V10vcore_Dfunction);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.79 0 0) ((bruijn ##.k.30 49 0) (##string ##.string.555)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k61) (bruijn ##.sym.12 49 1) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k61, self)))),
      VGetArg(statics, 49-1, 1),
      _V10vcore_Dset__global_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.78 0 0) ((bruijn ##.k.30 48 0) (##string ##.string.554)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k60) (bruijn ##.sym.12 48 1) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D554.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k60, self)))),
      VGetArg(statics, 48-1, 1),
      _V10vcore_Ddefine__global);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.77 0 0) ((bruijn ##.k.30 47 0) (##string ##.string.553)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k59) (bruijn ##.sym.12 47 1) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D553.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k59, self)))),
      VGetArg(statics, 47-1, 1),
      _V10vcore_Dexit);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.76 0 0) ((bruijn ##.k.30 46 0) (##string ##.string.552)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k58) (bruijn ##.sym.12 46 1) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D552.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k58, self)))),
      VGetArg(statics, 46-1, 1),
      _V10vcore_Dabort);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.75 0 0) ((bruijn ##.k.30 45 0) (##string ##.string.551)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k57) (bruijn ##.sym.12 45 1) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D551.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k57, self)))),
      VGetArg(statics, 45-1, 1),
      _V10vcore_Dapply__cps);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.74 0 0) ((bruijn ##.k.30 44 0) (##string ##.string.550)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k56) (bruijn ##.sym.12 44 1) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D550.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k56, self)))),
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dapply);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.73 0 0) ((bruijn ##.k.30 43 0) (##string ##.string.549)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k55) (bruijn ##.sym.12 43 1) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D549.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k55, self)))),
      VGetArg(statics, 43-1, 1),
      _V10vcore_Dcall__with__values);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.72 0 0) ((bruijn ##.k.30 42 0) (##string ##.string.548)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k54) (bruijn ##.sym.12 42 1) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D548.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k54, self)))),
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dcall_Wcc);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.71 0 0) ((bruijn ##.k.30 41 0) (##string ##.string.547)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k53) (bruijn ##.sym.12 41 1) '##vcore.next))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D547.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k53, self)))),
      VGetArg(statics, 41-1, 1),
      _V10vcore_Dnext);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.70 0 0) ((bruijn ##.k.30 40 0) (##string ##.string.546)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k52) (bruijn ##.sym.12 40 1) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k52, self)))),
      VGetArg(statics, 40-1, 1),
      _V10vcore_Draise);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.69 0 0) ((bruijn ##.k.30 39 0) (##string ##.string.545)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k51) (bruijn ##.sym.12 39 1) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D545.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k51, self)))),
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dpop__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.68 0 0) ((bruijn ##.k.30 38 0) (##string ##.string.544)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k50) (bruijn ##.sym.12 38 1) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D544.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k50, self)))),
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dpush__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.67 0 0) ((bruijn ##.k.30 37 0) (##string ##.string.543)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k49) (bruijn ##.sym.12 37 1) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D543.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k49, self)))),
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dget__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.66 0 0) ((bruijn ##.k.30 36 0) (##string ##.string.542)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k48) (bruijn ##.sym.12 36 1) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D542.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k48, self)))),
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dpop__dynamic);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.65 0 0) ((bruijn ##.k.30 35 0) (##string ##.string.541)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k47) (bruijn ##.sym.12 35 1) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D541.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k47, self)))),
      VGetArg(statics, 35-1, 1),
      _V10vcore_Dpush__dynamic);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.64 0 0) ((bruijn ##.k.30 34 0) (##string ##.string.540)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k46) (bruijn ##.sym.12 34 1) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D540.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k46, self)))),
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dget__dynamics);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.63 0 0) ((bruijn ##.k.30 33 0) (##string ##.string.539)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k45) (bruijn ##.sym.12 33 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D539.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k45, self)))),
      VGetArg(statics, 33-1, 1),
      _V10vcore_Dnot);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.62 0 0) ((bruijn ##.k.30 32 0) (##string ##.string.538)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k44) (bruijn ##.sym.12 32 1) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D538.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k44, self)))),
      VGetArg(statics, 32-1, 1),
      _V10vcore_Deqv_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.61 0 0) ((bruijn ##.k.30 31 0) (##string ##.string.537)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k43) (bruijn ##.sym.12 31 1) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D537.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k43, self)))),
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dblob_E_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.60 0 0) ((bruijn ##.k.30 30 0) (##string ##.string.536)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k42) (bruijn ##.sym.12 30 1) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D536.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k42, self)))),
      VGetArg(statics, 30-1, 1),
      _V10vcore_Dsymbol_E_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.59 0 0) ((bruijn ##.k.30 29 0) (##string ##.string.535)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k41) (bruijn ##.sym.12 29 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D535.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k41, self)))),
      VGetArg(statics, 29-1, 1),
      _V10vcore_Deq_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.58 0 0) ((bruijn ##.k.30 28 0) (##string ##.string.534)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k40) (bruijn ##.sym.12 28 1) '##vcore.foreign-pointer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D534.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k40, self)))),
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dforeign__pointer_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.57 0 0) ((bruijn ##.k.30 27 0) (##string ##.string.533)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k39) (bruijn ##.sym.12 27 1) '##vcore.nullptr?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D533.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k39, self)))),
      VGetArg(statics, 27-1, 1),
      _V10vcore_Dnullptr_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.56 0 0) ((bruijn ##.k.30 26 0) (##string ##.string.532)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k38) (bruijn ##.sym.12 26 1) '##vcore.void?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D532.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k38, self)))),
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dvoid_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.55 0 0) ((bruijn ##.k.30 25 0) (##string ##.string.531)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k37) (bruijn ##.sym.12 25 1) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D531.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k37, self)))),
      VGetArg(statics, 25-1, 1),
      _V10vcore_Dchar_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.54 0 0) ((bruijn ##.k.30 24 0) (##string ##.string.530)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k36) (bruijn ##.sym.12 24 1) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D530.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k36, self)))),
      VGetArg(statics, 24-1, 1),
      _V10vcore_Ddouble_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.53 0 0) ((bruijn ##.k.30 23 0) (##string ##.string.529)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k35) (bruijn ##.sym.12 23 1) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D529.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k35, self)))),
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dint_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.52 0 0) ((bruijn ##.k.30 22 0) (##string ##.string.528)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k34) (bruijn ##.sym.12 22 1) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D528.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k34, self)))),
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dstring_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.51 0 0) ((bruijn ##.k.30 21 0) (##string ##.string.527)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k33) (bruijn ##.sym.12 21 1) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D527.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k33, self)))),
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dsymbol_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.50 0 0) ((bruijn ##.k.30 20 0) (##string ##.string.526)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k32) (bruijn ##.sym.12 20 1) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D526.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k32, self)))),
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dblob_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.49 0 0) ((bruijn ##.k.30 19 0) (##string ##.string.525)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k31) (bruijn ##.sym.12 19 1) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D525.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k31, self)))),
      VGetArg(statics, 19-1, 1),
      _V10vcore_Dprocedure_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.48 0 0) ((bruijn ##.k.30 18 0) (##string ##.string.524)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k30) (bruijn ##.sym.12 18 1) '##vcore.hash-table?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D524.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k30, self)))),
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dhash__table_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.47 0 0) ((bruijn ##.k.30 17 0) (##string ##.string.523)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k29) (bruijn ##.sym.12 17 1) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D523.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k29, self)))),
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dvector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.46 0 0) ((bruijn ##.k.30 16 0) (##string ##.string.522)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k28) (bruijn ##.sym.12 16 1) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D522.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k28, self)))),
      VGetArg(statics, 16-1, 1),
      _V10vcore_Drecord_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.45 0 0) ((bruijn ##.k.30 15 0) (##string ##.string.521)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k27) (bruijn ##.sym.12 15 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D521.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k27, self)))),
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dpair_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.44 0 0) ((bruijn ##.k.30 14 0) (##string ##.string.520)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k26) (bruijn ##.sym.12 14 1) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D520.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k26, self)))),
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dnull_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.43 0 0) ((bruijn ##.k.30 13 0) (##string ##.string.519)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k25) (bruijn ##.sym.12 13 1) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D519.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k25, self)))),
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dremainder);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.42 0 0) ((bruijn ##.k.30 12 0) (##string ##.string.518)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k24) (bruijn ##.sym.12 12 1) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D518.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k24, self)))),
      VGetArg(statics, 12-1, 1),
      _V10vcore_Dquotient);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.41 0 0) ((bruijn ##.k.30 11 0) (##string ##.string.517)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k23) (bruijn ##.sym.12 11 1) '##vcore.>))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D517.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k23, self)))),
      VGetArg(statics, 11-1, 1),
      _V10vcore_D_G);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.40 0 0) ((bruijn ##.k.30 10 0) (##string ##.string.516)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k22) (bruijn ##.sym.12 10 1) '##vcore.>=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D516.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k22, self)))),
      VGetArg(statics, 10-1, 1),
      _V10vcore_D_G_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.39 0 0) ((bruijn ##.k.30 9 0) (##string ##.string.515)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k21) (bruijn ##.sym.12 9 1) '##vcore.=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D515.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k21, self)))),
      VGetArg(statics, 9-1, 1),
      _V10vcore_D_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.38 0 0) ((bruijn ##.k.30 8 0) (##string ##.string.514)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k20) (bruijn ##.sym.12 8 1) '##vcore.<))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D514.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k20, self)))),
      VGetArg(statics, 8-1, 1),
      _V10vcore_D_L);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.37 0 0) ((bruijn ##.k.30 7 0) (##string ##.string.513)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k19) (bruijn ##.sym.12 7 1) '##vcore.<=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D513.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k19, self)))),
      VGetArg(statics, 7-1, 1),
      _V10vcore_D_L_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.36 0 0) ((bruijn ##.k.30 6 0) (##string ##.string.512)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k18) (bruijn ##.sym.12 6 1) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D512.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k18, self)))),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcmp);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.35 0 0) ((bruijn ##.k.30 5 0) (##string ##.string.511)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k17) (bruijn ##.sym.12 5 1) '##vcore./))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D511.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k17, self)))),
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_W);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.34 0 0) ((bruijn ##.k.30 4 0) (##string ##.string.510)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k16) (bruijn ##.sym.12 4 1) '##vcore.*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D510.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k16, self)))),
      statics->up->up->up->vars[1],
      _V10vcore_D_S);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.33 0 0) ((bruijn ##.k.30 3 0) (##string ##.string.509)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k15) (bruijn ##.sym.12 3 1) '##vcore.-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D509.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k15, self)))),
      statics->up->up->vars[1],
      _V10vcore_D__);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.32 0 0) ((bruijn ##.k.30 2 0) (##string ##.string.508)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k14) (bruijn ##.sym.12 2 1) '##vcore.+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D508.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k14, self)))),
      statics->up->vars[1],
      _V10vcore_D_P);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.31 0 0) ((bruijn ##.k.30 1 0) (##string ##.string.507)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k13) (bruijn ##.sym.12 1 1) '##vcore.exact))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D507.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k13, self)))),
      statics->vars[1],
      _V10vcore_Dexact);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k12) (bruijn ##.sym.12 0 1) '##vcore.inexact)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k12, self)))),
      _var1,
      _V10vcore_Dinexact);
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.292 0 0) ((bruijn ##.k.227 65 0) #t) ((bruijn ##.k.227 65 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.291 0 0) ((bruijn ##.k.227 64 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k272) (bruijn ##.sym.14 64 1) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k272, self)))),
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dnewline__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((bruijn ##.k.227 63 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k271) (bruijn ##.sym.14 63 1) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k271, self)))),
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dwrite__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.289 0 0) ((bruijn ##.k.227 62 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k270) (bruijn ##.sym.14 62 1) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k270, self)))),
      VGetArg(statics, 62-1, 1),
      _V10vcore_Ddisplay__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.288 0 0) ((bruijn ##.k.227 61 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k269) (bruijn ##.sym.14 61 1) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k269, self)))),
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dnewline);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.287 0 0) ((bruijn ##.k.227 60 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k268) (bruijn ##.sym.14 60 1) '##vcore.write))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k268, self)))),
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dwrite);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.286 0 0) ((bruijn ##.k.227 59 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k267) (bruijn ##.sym.14 59 1) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k267, self)))),
      VGetArg(statics, 59-1, 1),
      _V10vcore_Ddisplay__word);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.285 0 0) ((bruijn ##.k.227 58 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k266) (bruijn ##.sym.14 58 1) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k266, self)))),
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dread__char);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.284 0 0) ((bruijn ##.k.227 57 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k265) (bruijn ##.sym.14 57 1) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k265, self)))),
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dchar__integer);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.283 0 0) ((bruijn ##.k.227 56 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k264) (bruijn ##.sym.14 56 1) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k264, self)))),
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dstring___Gnumber);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.282 0 0) ((bruijn ##.k.227 55 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k263) (bruijn ##.sym.14 55 1) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k263, self)))),
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dstring__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.281 0 0) ((bruijn ##.k.227 54 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k262) (bruijn ##.sym.14 54 1) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k262, self)))),
      VGetArg(statics, 54-1, 1),
      _V10vcore_Dstring__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.280 0 0) ((bruijn ##.k.227 53 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k261) (bruijn ##.sym.14 53 1) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k261, self)))),
      VGetArg(statics, 53-1, 1),
      _V10vcore_Dstring__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.279 0 0) ((bruijn ##.k.227 52 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k260) (bruijn ##.sym.14 52 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k260, self)))),
      VGetArg(statics, 52-1, 1),
      _V10vcore_Drecord__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.278 0 0) ((bruijn ##.k.227 51 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k259) (bruijn ##.sym.14 51 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k259, self)))),
      VGetArg(statics, 51-1, 1),
      _V10vcore_Drecord__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.277 0 0) ((bruijn ##.k.227 50 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k258) (bruijn ##.sym.14 50 1) '##vcore.u8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k258, self)))),
      VGetArg(statics, 50-1, 1),
      _V10vcore_Du8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.276 0 0) ((bruijn ##.k.227 49 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k257) (bruijn ##.sym.14 49 1) '##vcore.u8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k257, self)))),
      VGetArg(statics, 49-1, 1),
      _V10vcore_Du8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.275 0 0) ((bruijn ##.k.227 48 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k256) (bruijn ##.sym.14 48 1) '##vcore.u8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k256, self)))),
      VGetArg(statics, 48-1, 1),
      _V10vcore_Du8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.274 0 0) ((bruijn ##.k.227 47 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k255) (bruijn ##.sym.14 47 1) '##vcore.u8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k255, self)))),
      VGetArg(statics, 47-1, 1),
      _V10vcore_Du8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.273 0 0) ((bruijn ##.k.227 46 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k254) (bruijn ##.sym.14 46 1) '##vcore.s8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k254, self)))),
      VGetArg(statics, 46-1, 1),
      _V10vcore_Ds8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) ((bruijn ##.k.227 45 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k253) (bruijn ##.sym.14 45 1) '##vcore.s8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k253, self)))),
      VGetArg(statics, 45-1, 1),
      _V10vcore_Ds8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.271 0 0) ((bruijn ##.k.227 44 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k252) (bruijn ##.sym.14 44 1) '##vcore.s8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k252, self)))),
      VGetArg(statics, 44-1, 1),
      _V10vcore_Ds8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.270 0 0) ((bruijn ##.k.227 43 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k251) (bruijn ##.sym.14 43 1) '##vcore.s8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k251, self)))),
      VGetArg(statics, 43-1, 1),
      _V10vcore_Ds8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.269 0 0) ((bruijn ##.k.227 42 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k250) (bruijn ##.sym.14 42 1) '##vcore.u16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k250, self)))),
      VGetArg(statics, 42-1, 1),
      _V10vcore_Du16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.268 0 0) ((bruijn ##.k.227 41 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k249) (bruijn ##.sym.14 41 1) '##vcore.u16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k249, self)))),
      VGetArg(statics, 41-1, 1),
      _V10vcore_Du16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.267 0 0) ((bruijn ##.k.227 40 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k248) (bruijn ##.sym.14 40 1) '##vcore.u16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k248, self)))),
      VGetArg(statics, 40-1, 1),
      _V10vcore_Du16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.266 0 0) ((bruijn ##.k.227 39 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k247) (bruijn ##.sym.14 39 1) '##vcore.u16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k247, self)))),
      VGetArg(statics, 39-1, 1),
      _V10vcore_Du16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.265 0 0) ((bruijn ##.k.227 38 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k246) (bruijn ##.sym.14 38 1) '##vcore.s16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k246, self)))),
      VGetArg(statics, 38-1, 1),
      _V10vcore_Ds16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.264 0 0) ((bruijn ##.k.227 37 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k245) (bruijn ##.sym.14 37 1) '##vcore.s16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k245, self)))),
      VGetArg(statics, 37-1, 1),
      _V10vcore_Ds16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.263 0 0) ((bruijn ##.k.227 36 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k244) (bruijn ##.sym.14 36 1) '##vcore.s16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k244, self)))),
      VGetArg(statics, 36-1, 1),
      _V10vcore_Ds16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.262 0 0) ((bruijn ##.k.227 35 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k243) (bruijn ##.sym.14 35 1) '##vcore.s16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k243, self)))),
      VGetArg(statics, 35-1, 1),
      _V10vcore_Ds16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.261 0 0) ((bruijn ##.k.227 34 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k242) (bruijn ##.sym.14 34 1) '##vcore.s32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k242, self)))),
      VGetArg(statics, 34-1, 1),
      _V10vcore_Ds32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.260 0 0) ((bruijn ##.k.227 33 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k241) (bruijn ##.sym.14 33 1) '##vcore.s32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k241, self)))),
      VGetArg(statics, 33-1, 1),
      _V10vcore_Ds32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.259 0 0) ((bruijn ##.k.227 32 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k240) (bruijn ##.sym.14 32 1) '##vcore.s32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k240, self)))),
      VGetArg(statics, 32-1, 1),
      _V10vcore_Ds32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.258 0 0) ((bruijn ##.k.227 31 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k239) (bruijn ##.sym.14 31 1) '##vcore.s32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k239, self)))),
      VGetArg(statics, 31-1, 1),
      _V10vcore_Ds32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.k.227 30 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k238) (bruijn ##.sym.14 30 1) '##vcore.f32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k238, self)))),
      VGetArg(statics, 30-1, 1),
      _V10vcore_Df32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.256 0 0) ((bruijn ##.k.227 29 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k237) (bruijn ##.sym.14 29 1) '##vcore.f32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k237, self)))),
      VGetArg(statics, 29-1, 1),
      _V10vcore_Df32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) ((bruijn ##.k.227 28 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k236) (bruijn ##.sym.14 28 1) '##vcore.f32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k236, self)))),
      VGetArg(statics, 28-1, 1),
      _V10vcore_Df32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.254 0 0) ((bruijn ##.k.227 27 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k235) (bruijn ##.sym.14 27 1) '##vcore.f32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k235, self)))),
      VGetArg(statics, 27-1, 1),
      _V10vcore_Df32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.253 0 0) ((bruijn ##.k.227 26 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k234) (bruijn ##.sym.14 26 1) '##vcore.f64vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k234, self)))),
      VGetArg(statics, 26-1, 1),
      _V10vcore_Df64vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) ((bruijn ##.k.227 25 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k233) (bruijn ##.sym.14 25 1) '##vcore.f64vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k233, self)))),
      VGetArg(statics, 25-1, 1),
      _V10vcore_Df64vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.251 0 0) ((bruijn ##.k.227 24 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k232) (bruijn ##.sym.14 24 1) '##vcore.f64vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k232, self)))),
      VGetArg(statics, 24-1, 1),
      _V10vcore_Df64vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.250 0 0) ((bruijn ##.k.227 23 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k231) (bruijn ##.sym.14 23 1) '##vcore.f64vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k231, self)))),
      VGetArg(statics, 23-1, 1),
      _V10vcore_Df64vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.249 0 0) ((bruijn ##.k.227 22 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k230) (bruijn ##.sym.14 22 1) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k230, self)))),
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dvector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.248 0 0) ((bruijn ##.k.227 21 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k229) (bruijn ##.sym.14 21 1) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k229, self)))),
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dvector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((bruijn ##.k.227 20 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k228) (bruijn ##.sym.14 20 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k228, self)))),
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dnot);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.246 0 0) ((bruijn ##.k.227 19 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k227) (bruijn ##.sym.14 19 1) '##vcore.foreign-pointer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k227, self)))),
      VGetArg(statics, 19-1, 1),
      _V10vcore_Dforeign__pointer_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.245 0 0) ((bruijn ##.k.227 18 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k226) (bruijn ##.sym.14 18 1) '##vcore.nullptr?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k226, self)))),
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dnullptr_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.244 0 0) ((bruijn ##.k.227 17 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k225) (bruijn ##.sym.14 17 1) '##vcore.void?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k225, self)))),
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dvoid_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.243 0 0) ((bruijn ##.k.227 16 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k224) (bruijn ##.sym.14 16 1) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k224, self)))),
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dchar_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.227 15 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k223) (bruijn ##.sym.14 15 1) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k223, self)))),
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dint_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.k.227 14 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k222) (bruijn ##.sym.14 14 1) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k222, self)))),
      VGetArg(statics, 14-1, 1),
      _V10vcore_Ddouble_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.k.227 13 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k221) (bruijn ##.sym.14 13 1) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k221, self)))),
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dstring_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) ((bruijn ##.k.227 12 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k220) (bruijn ##.sym.14 12 1) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k220, self)))),
      VGetArg(statics, 12-1, 1),
      _V10vcore_Dsymbol_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) ((bruijn ##.k.227 11 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k219) (bruijn ##.sym.14 11 1) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k219, self)))),
      VGetArg(statics, 11-1, 1),
      _V10vcore_Dblob_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.237 0 0) ((bruijn ##.k.227 10 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k218) (bruijn ##.sym.14 10 1) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k218, self)))),
      VGetArg(statics, 10-1, 1),
      _V10vcore_Dprocedure_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.236 0 0) ((bruijn ##.k.227 9 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k217) (bruijn ##.sym.14 9 1) '##vcore.hash-table?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k217, self)))),
      VGetArg(statics, 9-1, 1),
      _V10vcore_Dhash__table_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.235 0 0) ((bruijn ##.k.227 8 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k216) (bruijn ##.sym.14 8 1) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k216, self)))),
      VGetArg(statics, 8-1, 1),
      _V10vcore_Drecord_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.234 0 0) ((bruijn ##.k.227 7 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k215) (bruijn ##.sym.14 7 1) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k215, self)))),
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dvector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.233 0 0) ((bruijn ##.k.227 6 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k214) (bruijn ##.sym.14 6 1) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k214, self)))),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Deof__object_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.227 5 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k213) (bruijn ##.sym.14 5 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k213, self)))),
      VGetArg(statics, 5-1, 1),
      _V10vcore_Dpair_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.231 0 0) ((bruijn ##.k.227 4 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k212) (bruijn ##.sym.14 4 1) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k212, self)))),
      statics->up->up->up->vars[1],
      _V10vcore_Dnull_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.k.227 3 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k211) (bruijn ##.sym.14 3 1) '##vcore./))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k211, self)))),
      statics->up->up->vars[1],
      _V10vcore_D_W);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.k.227 2 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k210) (bruijn ##.sym.14 2 1) '##vcore.*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k210, self)))),
      statics->up->vars[1],
      _V10vcore_D_S);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.228 0 0) ((bruijn ##.k.227 1 0) #t) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k209) (bruijn ##.sym.14 1 1) '##vcore.-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k209, self)))),
      statics->vars[1],
      _V10vcore_D__);
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k208) (bruijn ##.sym.14 0 1) '##vcore.+)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k208, self)))),
      _var1,
      _V10vcore_D_P);
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.490 1 0) ((bruijn ##.k.491 0 0) (bruijn ##.p.490 1 0)) (##vcore.eqv? (bruijn ##.k.491 0 0) (bruijn ##.sym.16 63 1) '##vcore.qcons))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dqcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.489 0 0) ((bruijn ##.k.293 197 0) (##intrinsic ##vcore.bit-count)) ((bruijn ##.k.293 197 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 197-1, 0)), 1,
      _V40_V10vcore_Dbit__count);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 197-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.488 0 0) ((bruijn ##.k.293 196 0) (##intrinsic ##vcore.arithmetic-shift)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k470) (bruijn ##.sym.16 196 1) '##vcore.bit-count))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 196-1, 0)), 1,
      _V40_V10vcore_Darithmetic__shift);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k470, self)))),
      VGetArg(statics, 196-1, 1),
      _V10vcore_Dbit__count);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.487 0 0) ((bruijn ##.k.293 195 0) (##intrinsic ##vcore.bitwise-orc2)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k469) (bruijn ##.sym.16 195 1) '##vcore.arithmetic-shift))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 195-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc2);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k469, self)))),
      VGetArg(statics, 195-1, 1),
      _V10vcore_Darithmetic__shift);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.486 0 0) ((bruijn ##.k.293 194 0) (##intrinsic ##vcore.bitwise-orc1)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k468) (bruijn ##.sym.16 194 1) '##vcore.bitwise-orc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 194-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k468, self)))),
      VGetArg(statics, 194-1, 1),
      _V10vcore_Dbitwise__orc2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.485 0 0) ((bruijn ##.k.293 193 0) (##intrinsic ##vcore.bitwise-andc2)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k467) (bruijn ##.sym.16 193 1) '##vcore.bitwise-orc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 193-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc2);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k467, self)))),
      VGetArg(statics, 193-1, 1),
      _V10vcore_Dbitwise__orc1);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.484 0 0) ((bruijn ##.k.293 192 0) (##intrinsic ##vcore.bitwise-andc1)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k466) (bruijn ##.sym.16 192 1) '##vcore.bitwise-andc2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 192-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k466, self)))),
      VGetArg(statics, 192-1, 1),
      _V10vcore_Dbitwise__andc2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.483 0 0) ((bruijn ##.k.293 191 0) (##intrinsic ##vcore.bitwise-nor)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k465) (bruijn ##.sym.16 191 1) '##vcore.bitwise-andc1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nor);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k465, self)))),
      VGetArg(statics, 191-1, 1),
      _V10vcore_Dbitwise__andc1);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.482 0 0) ((bruijn ##.k.293 190 0) (##intrinsic ##vcore.bitwise-nand)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k464) (bruijn ##.sym.16 190 1) '##vcore.bitwise-nor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nand);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k464, self)))),
      VGetArg(statics, 190-1, 1),
      _V10vcore_Dbitwise__nor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.481 0 0) ((bruijn ##.k.293 189 0) (##intrinsic ##vcore.bitwise-xnor)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k463) (bruijn ##.sym.16 189 1) '##vcore.bitwise-nand))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xnor);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k463, self)))),
      VGetArg(statics, 189-1, 1),
      _V10vcore_Dbitwise__nand);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.480 0 0) ((bruijn ##.k.293 188 0) (##intrinsic ##vcore.bitwise-and)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k462) (bruijn ##.sym.16 188 1) '##vcore.bitwise-xnor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      _V40_V10vcore_Dbitwise__and);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k462, self)))),
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dbitwise__xnor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.479 0 0) ((bruijn ##.k.293 187 0) (##intrinsic ##vcore.bitwise-xor)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k461) (bruijn ##.sym.16 187 1) '##vcore.bitwise-and))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xor);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k461, self)))),
      VGetArg(statics, 187-1, 1),
      _V10vcore_Dbitwise__and);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.478 0 0) ((bruijn ##.k.293 186 0) (##intrinsic ##vcore.bitwise-ior)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k460) (bruijn ##.sym.16 186 1) '##vcore.bitwise-xor))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      _V40_V10vcore_Dbitwise__ior);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k460, self)))),
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dbitwise__xor);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.477 0 0) ((bruijn ##.k.293 185 0) (##intrinsic ##vcore.bitwise-not)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k459) (bruijn ##.sym.16 185 1) '##vcore.bitwise-ior))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      _V40_V10vcore_Dbitwise__not);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k459, self)))),
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dbitwise__ior);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.476 0 0) ((bruijn ##.k.293 184 0) (##intrinsic ##vcore.jiffies-per-second)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k458) (bruijn ##.sym.16 184 1) '##vcore.bitwise-not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      _V40_V10vcore_Djiffies__per__second);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k458, self)))),
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dbitwise__not);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.475 0 0) ((bruijn ##.k.293 183 0) (##intrinsic ##vcore.current-jiffy)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k457) (bruijn ##.sym.16 183 1) '##vcore.jiffies-per-second))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      _V40_V10vcore_Dcurrent__jiffy);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k457, self)))),
      VGetArg(statics, 183-1, 1),
      _V10vcore_Djiffies__per__second);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.474 0 0) ((bruijn ##.k.293 182 0) (##intrinsic ##vcore.access)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k456) (bruijn ##.sym.16 182 1) '##vcore.current-jiffy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      _V40_V10vcore_Daccess);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k456, self)))),
      VGetArg(statics, 182-1, 1),
      _V10vcore_Dcurrent__jiffy);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.473 0 0) ((bruijn ##.k.293 181 0) (##intrinsic ##vcore.make-temporary-file)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k455) (bruijn ##.sym.16 181 1) '##vcore.access))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      _V40_V10vcore_Dmake__temporary__file);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k455, self)))),
      VGetArg(statics, 181-1, 1),
      _V10vcore_Daccess);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.472 0 0) ((bruijn ##.k.293 180 0) (##intrinsic ##vcore.realpath)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k454) (bruijn ##.sym.16 180 1) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      _V40_V10vcore_Drealpath);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k454, self)))),
      VGetArg(statics, 180-1, 1),
      _V10vcore_Dmake__temporary__file);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.471 0 0) ((bruijn ##.k.293 179 0) (##intrinsic ##vcore.await)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k453) (bruijn ##.sym.16 179 1) '##vcore.realpath))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      _V40_V10vcore_Dawait);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k453, self)))),
      VGetArg(statics, 179-1, 1),
      _V10vcore_Drealpath);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.470 0 0) ((bruijn ##.k.293 178 0) (##intrinsic ##vcore.async)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k452) (bruijn ##.sym.16 178 1) '##vcore.await))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      _V40_V10vcore_Dasync);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k452, self)))),
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dawait);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.469 0 0) ((bruijn ##.k.293 177 0) (##intrinsic ##vcore.fiber-fork-list)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k451) (bruijn ##.sym.16 177 1) '##vcore.async))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      _V40_V10vcore_Dfiber__fork__list);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k451, self)))),
      VGetArg(statics, 177-1, 1),
      _V10vcore_Dasync);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.468 0 0) ((bruijn ##.k.293 176 0) (##intrinsic ##vcore.random-advance!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k450) (bruijn ##.sym.16 176 1) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      _V40_V10vcore_Drandom__advance_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k450, self)))),
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dfiber__fork__list);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.467 0 0) ((bruijn ##.k.293 175 0) (##intrinsic ##vcore.random-sample-float!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k449) (bruijn ##.sym.16 175 1) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__float_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k449, self)))),
      VGetArg(statics, 175-1, 1),
      _V10vcore_Drandom__advance_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.466 0 0) ((bruijn ##.k.293 174 0) (##intrinsic ##vcore.random-sample-bounded!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k448) (bruijn ##.sym.16 174 1) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__bounded_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k448, self)))),
      VGetArg(statics, 174-1, 1),
      _V10vcore_Drandom__sample__float_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.465 0 0) ((bruijn ##.k.293 173 0) (##intrinsic ##vcore.random-sample!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k447) (bruijn ##.sym.16 173 1) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      _V40_V10vcore_Drandom__sample_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k447, self)))),
      VGetArg(statics, 173-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.464 0 0) ((bruijn ##.k.293 172 0) (##intrinsic ##vcore.random-copy)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k446) (bruijn ##.sym.16 172 1) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      _V40_V10vcore_Drandom__copy);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k446, self)))),
      VGetArg(statics, 172-1, 1),
      _V10vcore_Drandom__sample_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.463 0 0) ((bruijn ##.k.293 171 0) (##intrinsic ##vcore.make-random)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k445) (bruijn ##.sym.16 171 1) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      _V40_V10vcore_Dmake__random);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k445, self)))),
      VGetArg(statics, 171-1, 1),
      _V10vcore_Drandom__copy);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.462 0 0) ((bruijn ##.k.293 170 0) (##intrinsic ##vcore.command-line)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k444) (bruijn ##.sym.16 170 1) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      _V40_V10vcore_Dcommand__line);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k444, self)))),
      VGetArg(statics, 170-1, 1),
      _V10vcore_Dmake__random);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.461 0 0) ((bruijn ##.k.293 169 0) (##intrinsic ##vcore.open-output-process)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k443) (bruijn ##.sym.16 169 1) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      _V40_V10vcore_Dopen__output__process);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k443, self)))),
      VGetArg(statics, 169-1, 1),
      _V10vcore_Dcommand__line);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.460 0 0) ((bruijn ##.k.293 168 0) (##intrinsic ##vcore.open-input-process)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k442) (bruijn ##.sym.16 168 1) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      _V40_V10vcore_Dopen__input__process);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k442, self)))),
      VGetArg(statics, 168-1, 1),
      _V10vcore_Dopen__output__process);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.459 0 0) ((bruijn ##.k.293 167 0) (##intrinsic ##vcore.system)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k441) (bruijn ##.sym.16 167 1) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      _V40_V10vcore_Dsystem);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k441, self)))),
      VGetArg(statics, 167-1, 1),
      _V10vcore_Dopen__input__process);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.458 0 0) ((bruijn ##.k.293 166 0) (##intrinsic ##vcore.yield-to-host-major)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k440) (bruijn ##.sym.16 166 1) '##vcore.system))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host__major);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k440, self)))),
      VGetArg(statics, 166-1, 1),
      _V10vcore_Dsystem);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.457 0 0) ((bruijn ##.k.293 165 0) (##intrinsic ##vcore.yield-to-host)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k439) (bruijn ##.sym.16 165 1) '##vcore.yield-to-host-major))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k439, self)))),
      VGetArg(statics, 165-1, 1),
      _V10vcore_Dyield__to__host__major);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.456 0 0) ((bruijn ##.k.293 164 0) (##intrinsic ##vcore.garbage-collect)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k438) (bruijn ##.sym.16 164 1) '##vcore.yield-to-host))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      _V40_V10vcore_Dgarbage__collect);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k438, self)))),
      VGetArg(statics, 164-1, 1),
      _V10vcore_Dyield__to__host);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.455 0 0) ((bruijn ##.k.293 163 0) (##intrinsic ##vcore.finalize!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k437) (bruijn ##.sym.16 163 1) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      _V40_V10vcore_Dfinalize_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k437, self)))),
      VGetArg(statics, 163-1, 1),
      _V10vcore_Dgarbage__collect);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.454 0 0) ((bruijn ##.k.293 162 0) (##intrinsic ##vcore.has-finalizer?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k436) (bruijn ##.sym.16 162 1) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      _V40_V10vcore_Dhas__finalizer_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k436, self)))),
      VGetArg(statics, 162-1, 1),
      _V10vcore_Dfinalize_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.453 0 0) ((bruijn ##.k.293 161 0) (##intrinsic ##vcore.set-finalizer!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k435) (bruijn ##.sym.16 161 1) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      _V40_V10vcore_Dset__finalizer_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k435, self)))),
      VGetArg(statics, 161-1, 1),
      _V10vcore_Dhas__finalizer_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.452 0 0) ((bruijn ##.k.293 160 0) (##intrinsic ##vcore.newline-stdout)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k434) (bruijn ##.sym.16 160 1) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      _V40_V10vcore_Dnewline__stdout);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k434, self)))),
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dset__finalizer_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.451 0 0) ((bruijn ##.k.293 159 0) (##intrinsic ##vcore.write-stdout)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k433) (bruijn ##.sym.16 159 1) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      _V40_V10vcore_Dwrite__stdout);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k433, self)))),
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dnewline__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.450 0 0) ((bruijn ##.k.293 158 0) (##intrinsic ##vcore.display-stdout)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k432) (bruijn ##.sym.16 158 1) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      _V40_V10vcore_Ddisplay__stdout);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k432, self)))),
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dwrite__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.449 0 0) ((bruijn ##.k.293 157 0) (##intrinsic ##vcore.newline)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k431) (bruijn ##.sym.16 157 1) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      _V40_V10vcore_Dnewline);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k431, self)))),
      VGetArg(statics, 157-1, 1),
      _V10vcore_Ddisplay__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.448 0 0) ((bruijn ##.k.293 156 0) (##intrinsic ##vcore.write)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k430) (bruijn ##.sym.16 156 1) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      _V40_V10vcore_Dwrite);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k430, self)))),
      VGetArg(statics, 156-1, 1),
      _V10vcore_Dnewline);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.447 0 0) ((bruijn ##.k.293 155 0) (##intrinsic ##vcore.display-word)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k429) (bruijn ##.sym.16 155 1) '##vcore.write))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      _V40_V10vcore_Ddisplay__word);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k429, self)))),
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dwrite);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.446 0 0) ((bruijn ##.k.293 154 0) (##intrinsic ##vcore.read)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k428) (bruijn ##.sym.16 154 1) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      _V40_V10vcore_Dread);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k428, self)))),
      VGetArg(statics, 154-1, 1),
      _V10vcore_Ddisplay__word);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.445 0 0) ((bruijn ##.k.293 153 0) (##intrinsic ##vcore.read-line2)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k427) (bruijn ##.sym.16 153 1) '##vcore.read))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      _V40_V10vcore_Dread__line2);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k427, self)))),
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dread);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.444 0 0) ((bruijn ##.k.293 152 0) (##intrinsic ##vcore.read-line)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k426) (bruijn ##.sym.16 152 1) '##vcore.read-line2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      _V40_V10vcore_Dread__line);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k426, self)))),
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dread__line2);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.443 0 0) ((bruijn ##.k.293 151 0) (##intrinsic ##vcore.read-char)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k425) (bruijn ##.sym.16 151 1) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      _V40_V10vcore_Dread__char);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k425, self)))),
      VGetArg(statics, 151-1, 1),
      _V10vcore_Dread__line);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.442 0 0) ((bruijn ##.k.293 150 0) (##intrinsic ##vcore.eof-object?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k424) (bruijn ##.sym.16 150 1) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      _V40_V10vcore_Deof__object_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k424, self)))),
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dread__char);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.441 0 0) ((bruijn ##.k.293 149 0) (##intrinsic ##vcore.get-output-string)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k423) (bruijn ##.sym.16 149 1) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      _V40_V10vcore_Dget__output__string);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k423, self)))),
      VGetArg(statics, 149-1, 1),
      _V10vcore_Deof__object_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.440 0 0) ((bruijn ##.k.293 148 0) (##intrinsic ##vcore.open-output-string)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k422) (bruijn ##.sym.16 148 1) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      _V40_V10vcore_Dopen__output__string);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k422, self)))),
      VGetArg(statics, 148-1, 1),
      _V10vcore_Dget__output__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.439 0 0) ((bruijn ##.k.293 147 0) (##intrinsic ##vcore.tty-port?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k421) (bruijn ##.sym.16 147 1) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      _V40_V10vcore_Dtty__port_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k421, self)))),
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dopen__output__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.438 0 0) ((bruijn ##.k.293 146 0) (##intrinsic ##vcore.close-stream)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k420) (bruijn ##.sym.16 146 1) '##vcore.tty-port?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      _V40_V10vcore_Dclose__stream);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k420, self)))),
      VGetArg(statics, 146-1, 1),
      _V10vcore_Dtty__port_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.437 0 0) ((bruijn ##.k.293 145 0) (##intrinsic ##vcore.open-output-stream)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k419) (bruijn ##.sym.16 145 1) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      _V40_V10vcore_Dopen__output__stream);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k419, self)))),
      VGetArg(statics, 145-1, 1),
      _V10vcore_Dclose__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.436 0 0) ((bruijn ##.k.293 144 0) (##intrinsic ##vcore.open-input-stream)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k418) (bruijn ##.sym.16 144 1) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      _V40_V10vcore_Dopen__input__stream);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k418, self)))),
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dopen__output__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.435 0 0) ((bruijn ##.k.293 143 0) (##intrinsic ##vcore.dup-stderr)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k417) (bruijn ##.sym.16 143 1) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      _V40_V10vcore_Ddup__stderr);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k417, self)))),
      VGetArg(statics, 143-1, 1),
      _V10vcore_Dopen__input__stream);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.434 0 0) ((bruijn ##.k.293 142 0) (##intrinsic ##vcore.dup-stdout)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k416) (bruijn ##.sym.16 142 1) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      _V40_V10vcore_Ddup__stdout);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k416, self)))),
      VGetArg(statics, 142-1, 1),
      _V10vcore_Ddup__stderr);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.433 0 0) ((bruijn ##.k.293 141 0) (##intrinsic ##vcore.dup-stdin)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k415) (bruijn ##.sym.16 141 1) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      _V40_V10vcore_Ddup__stdin);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k415, self)))),
      VGetArg(statics, 141-1, 1),
      _V10vcore_Ddup__stdout);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.432 0 0) ((bruijn ##.k.293 140 0) (##intrinsic ##vcore.stderr->port)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k414) (bruijn ##.sym.16 140 1) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      _V40_V10vcore_Dstderr___Gport);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k414, self)))),
      VGetArg(statics, 140-1, 1),
      _V10vcore_Ddup__stdin);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.431 0 0) ((bruijn ##.k.293 139 0) (##intrinsic ##vcore.stdout->port)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k413) (bruijn ##.sym.16 139 1) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      _V40_V10vcore_Dstdout___Gport);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k413, self)))),
      VGetArg(statics, 139-1, 1),
      _V10vcore_Dstderr___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.430 0 0) ((bruijn ##.k.293 138 0) (##intrinsic ##vcore.stdin->port)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k412) (bruijn ##.sym.16 138 1) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      _V40_V10vcore_Dstdin___Gport);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k412, self)))),
      VGetArg(statics, 138-1, 1),
      _V10vcore_Dstdout___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.429 0 0) ((bruijn ##.k.293 137 0) (##intrinsic ##vcore.integer->char)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k411) (bruijn ##.sym.16 137 1) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      _V40_V10vcore_Dinteger___Gchar);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k411, self)))),
      VGetArg(statics, 137-1, 1),
      _V10vcore_Dstdin___Gport);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.428 0 0) ((bruijn ##.k.293 136 0) (##intrinsic ##vcore.char-integer)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k410) (bruijn ##.sym.16 136 1) '##vcore.integer->char))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      _V40_V10vcore_Dchar__integer);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k410, self)))),
      VGetArg(statics, 136-1, 1),
      _V10vcore_Dinteger___Gchar);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.427 0 0) ((bruijn ##.k.293 135 0) (##intrinsic ##vcore.gensym)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k409) (bruijn ##.sym.16 135 1) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      _V40_V10vcore_Dgensym);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k409, self)))),
      VGetArg(statics, 135-1, 1),
      _V10vcore_Dchar__integer);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.426 0 0) ((bruijn ##.k.293 134 0) (##intrinsic ##vcore.symbol->string)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k408) (bruijn ##.sym.16 134 1) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      _V40_V10vcore_Dsymbol___Gstring);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k408, self)))),
      VGetArg(statics, 134-1, 1),
      _V10vcore_Dgensym);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) ((bruijn ##.k.293 133 0) (##intrinsic ##vcore.string->number)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k407) (bruijn ##.sym.16 133 1) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      _V40_V10vcore_Dstring___Gnumber);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k407, self)))),
      VGetArg(statics, 133-1, 1),
      _V10vcore_Dsymbol___Gstring);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.424 0 0) ((bruijn ##.k.293 132 0) (##intrinsic ##vcore.string->symbol)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k406) (bruijn ##.sym.16 132 1) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      _V40_V10vcore_Dstring___Gsymbol);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k406, self)))),
      VGetArg(statics, 132-1, 1),
      _V10vcore_Dstring___Gnumber);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.423 0 0) ((bruijn ##.k.293 131 0) (##intrinsic ##vcore.string-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k405) (bruijn ##.sym.16 131 1) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      _V40_V10vcore_Dstring__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k405, self)))),
      VGetArg(statics, 131-1, 1),
      _V10vcore_Dstring___Gsymbol);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.422 0 0) ((bruijn ##.k.293 130 0) (##intrinsic ##vcore.string-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k404) (bruijn ##.sym.16 130 1) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      _V40_V10vcore_Dstring__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k404, self)))),
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dstring__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.421 0 0) ((bruijn ##.k.293 129 0) (##intrinsic ##vcore.string-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k403) (bruijn ##.sym.16 129 1) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      _V40_V10vcore_Dstring__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k403, self)))),
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dstring__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.420 0 0) ((bruijn ##.k.293 128 0) (##intrinsic ##vcore.string-copy!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k402) (bruijn ##.sym.16 128 1) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      _V40_V10vcore_Dstring__copy_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k402, self)))),
      VGetArg(statics, 128-1, 1),
      _V10vcore_Dstring__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.419 0 0) ((bruijn ##.k.293 127 0) (##intrinsic ##vcore.substring)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k401) (bruijn ##.sym.16 127 1) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      _V40_V10vcore_Dsubstring);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k401, self)))),
      VGetArg(statics, 127-1, 1),
      _V10vcore_Dstring__copy_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.418 0 0) ((bruijn ##.k.293 126 0) (##intrinsic ##vcore.make-string)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k400) (bruijn ##.sym.16 126 1) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      _V40_V10vcore_Dmake__string);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k400, self)))),
      VGetArg(statics, 126-1, 1),
      _V10vcore_Dsubstring);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.417 0 0) ((bruijn ##.k.293 125 0) (##intrinsic ##vcore.hash-table-delete!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k399) (bruijn ##.sym.16 125 1) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      _V40_V10vcore_Dhash__table__delete_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k399, self)))),
      VGetArg(statics, 125-1, 1),
      _V10vcore_Dmake__string);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.416 0 0) ((bruijn ##.k.293 124 0) (##intrinsic ##vcore.hash-table-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k398) (bruijn ##.sym.16 124 1) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      _V40_V10vcore_Dhash__table__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k398, self)))),
      VGetArg(statics, 124-1, 1),
      _V10vcore_Dhash__table__delete_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.415 0 0) ((bruijn ##.k.293 123 0) (##intrinsic ##vcore.hash-table-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k397) (bruijn ##.sym.16 123 1) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      _V40_V10vcore_Dhash__table__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k397, self)))),
      VGetArg(statics, 123-1, 1),
      _V10vcore_Dhash__table__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.414 0 0) ((bruijn ##.k.293 122 0) (##intrinsic ##vcore.hash-table-vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k396) (bruijn ##.sym.16 122 1) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      _V40_V10vcore_Dhash__table__vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k396, self)))),
      VGetArg(statics, 122-1, 1),
      _V10vcore_Dhash__table__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.413 0 0) ((bruijn ##.k.293 121 0) (##intrinsic ##vcore.hash-table-hash-function)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k395) (bruijn ##.sym.16 121 1) '##vcore.hash-table-vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      _V40_V10vcore_Dhash__table__hash__function);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k395, self)))),
      VGetArg(statics, 121-1, 1),
      _V10vcore_Dhash__table__vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.412 0 0) ((bruijn ##.k.293 120 0) (##intrinsic ##vcore.hash-table-equivalence-function)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k394) (bruijn ##.sym.16 120 1) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      _V40_V10vcore_Dhash__table__equivalence__function);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k394, self)))),
      VGetArg(statics, 120-1, 1),
      _V10vcore_Dhash__table__hash__function);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.411 0 0) ((bruijn ##.k.293 119 0) (##intrinsic ##vcore.make-hash-table)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k393) (bruijn ##.sym.16 119 1) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      _V40_V10vcore_Dmake__hash__table);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k393, self)))),
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.410 0 0) ((bruijn ##.k.293 118 0) (##intrinsic ##vcore.record-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k392) (bruijn ##.sym.16 118 1) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k392, self)))),
      VGetArg(statics, 118-1, 1),
      _V10vcore_Dmake__hash__table);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.409 0 0) ((bruijn ##.k.293 117 0) (##intrinsic ##vcore.record-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k391) (bruijn ##.sym.16 117 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k391, self)))),
      VGetArg(statics, 117-1, 1),
      _V10vcore_Drecord__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.408 0 0) ((bruijn ##.k.293 116 0) (##intrinsic ##vcore.record-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k390) (bruijn ##.sym.16 116 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k390, self)))),
      VGetArg(statics, 116-1, 1),
      _V10vcore_Drecord__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.407 0 0) ((bruijn ##.k.293 115 0) (##intrinsic ##vcore.record)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k389) (bruijn ##.sym.16 115 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k389, self)))),
      VGetArg(statics, 115-1, 1),
      _V10vcore_Drecord__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.406 0 0) ((bruijn ##.k.293 114 0) (##intrinsic ##vcore.read-u8vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k388) (bruijn ##.sym.16 114 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      _V40_V10vcore_Dread__u8vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k388, self)))),
      VGetArg(statics, 114-1, 1),
      _V10vcore_Drecord);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.405 0 0) ((bruijn ##.k.293 113 0) (##intrinsic ##vcore.s8vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k387) (bruijn ##.sym.16 113 1) '##vcore.read-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      _V40_V10vcore_Ds8vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k387, self)))),
      VGetArg(statics, 113-1, 1),
      _V10vcore_Dread__u8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.404 0 0) ((bruijn ##.k.293 112 0) (##intrinsic ##vcore.s8vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k386) (bruijn ##.sym.16 112 1) '##vcore.s8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      _V40_V10vcore_Ds8vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k386, self)))),
      VGetArg(statics, 112-1, 1),
      _V10vcore_Ds8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) ((bruijn ##.k.293 111 0) (##intrinsic ##vcore.s8vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k385) (bruijn ##.sym.16 111 1) '##vcore.s8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      _V40_V10vcore_Ds8vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k385, self)))),
      VGetArg(statics, 111-1, 1),
      _V10vcore_Ds8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.402 0 0) ((bruijn ##.k.293 110 0) (##intrinsic ##vcore.list->s8vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k384) (bruijn ##.sym.16 110 1) '##vcore.s8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs8vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k384, self)))),
      VGetArg(statics, 110-1, 1),
      _V10vcore_Ds8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.401 0 0) ((bruijn ##.k.293 109 0) (##intrinsic ##vcore.make-s8vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k383) (bruijn ##.sym.16 109 1) '##vcore.list->s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      _V40_V10vcore_Dmake__s8vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k383, self)))),
      VGetArg(statics, 109-1, 1),
      _V10vcore_Dlist___Gs8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.400 0 0) ((bruijn ##.k.293 108 0) (##intrinsic ##vcore.s8vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k382) (bruijn ##.sym.16 108 1) '##vcore.make-s8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      _V40_V10vcore_Ds8vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k382, self)))),
      VGetArg(statics, 108-1, 1),
      _V10vcore_Dmake__s8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) ((bruijn ##.k.293 107 0) (##intrinsic ##vcore.u8vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k381) (bruijn ##.sym.16 107 1) '##vcore.s8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      _V40_V10vcore_Du8vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k381, self)))),
      VGetArg(statics, 107-1, 1),
      _V10vcore_Ds8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) ((bruijn ##.k.293 106 0) (##intrinsic ##vcore.u8vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k380) (bruijn ##.sym.16 106 1) '##vcore.u8vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      _V40_V10vcore_Du8vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k380, self)))),
      VGetArg(statics, 106-1, 1),
      _V10vcore_Du8vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.397 0 0) ((bruijn ##.k.293 105 0) (##intrinsic ##vcore.u8vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k379) (bruijn ##.sym.16 105 1) '##vcore.u8vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      _V40_V10vcore_Du8vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k379, self)))),
      VGetArg(statics, 105-1, 1),
      _V10vcore_Du8vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.396 0 0) ((bruijn ##.k.293 104 0) (##intrinsic ##vcore.list->u8vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k378) (bruijn ##.sym.16 104 1) '##vcore.u8vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu8vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k378, self)))),
      VGetArg(statics, 104-1, 1),
      _V10vcore_Du8vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.395 0 0) ((bruijn ##.k.293 103 0) (##intrinsic ##vcore.make-u8vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k377) (bruijn ##.sym.16 103 1) '##vcore.list->u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      _V40_V10vcore_Dmake__u8vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k377, self)))),
      VGetArg(statics, 103-1, 1),
      _V10vcore_Dlist___Gu8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) ((bruijn ##.k.293 102 0) (##intrinsic ##vcore.u8vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k376) (bruijn ##.sym.16 102 1) '##vcore.make-u8vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      _V40_V10vcore_Du8vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k376, self)))),
      VGetArg(statics, 102-1, 1),
      _V10vcore_Dmake__u8vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.393 0 0) ((bruijn ##.k.293 101 0) (##intrinsic ##vcore.s16vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k375) (bruijn ##.sym.16 101 1) '##vcore.u8vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      _V40_V10vcore_Ds16vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k375, self)))),
      VGetArg(statics, 101-1, 1),
      _V10vcore_Du8vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.392 0 0) ((bruijn ##.k.293 100 0) (##intrinsic ##vcore.s16vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k374) (bruijn ##.sym.16 100 1) '##vcore.s16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      _V40_V10vcore_Ds16vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k374, self)))),
      VGetArg(statics, 100-1, 1),
      _V10vcore_Ds16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) ((bruijn ##.k.293 99 0) (##intrinsic ##vcore.s16vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k373) (bruijn ##.sym.16 99 1) '##vcore.s16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      _V40_V10vcore_Ds16vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k373, self)))),
      VGetArg(statics, 99-1, 1),
      _V10vcore_Ds16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.390 0 0) ((bruijn ##.k.293 98 0) (##intrinsic ##vcore.list->s16vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k372) (bruijn ##.sym.16 98 1) '##vcore.s16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs16vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k372, self)))),
      VGetArg(statics, 98-1, 1),
      _V10vcore_Ds16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.389 0 0) ((bruijn ##.k.293 97 0) (##intrinsic ##vcore.make-s16vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k371) (bruijn ##.sym.16 97 1) '##vcore.list->s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      _V40_V10vcore_Dmake__s16vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k371, self)))),
      VGetArg(statics, 97-1, 1),
      _V10vcore_Dlist___Gs16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.388 0 0) ((bruijn ##.k.293 96 0) (##intrinsic ##vcore.s16vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k370) (bruijn ##.sym.16 96 1) '##vcore.make-s16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      _V40_V10vcore_Ds16vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k370, self)))),
      VGetArg(statics, 96-1, 1),
      _V10vcore_Dmake__s16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.387 0 0) ((bruijn ##.k.293 95 0) (##intrinsic ##vcore.u16vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k369) (bruijn ##.sym.16 95 1) '##vcore.s16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      _V40_V10vcore_Du16vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k369, self)))),
      VGetArg(statics, 95-1, 1),
      _V10vcore_Ds16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.386 0 0) ((bruijn ##.k.293 94 0) (##intrinsic ##vcore.u16vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k368) (bruijn ##.sym.16 94 1) '##vcore.u16vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      _V40_V10vcore_Du16vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k368, self)))),
      VGetArg(statics, 94-1, 1),
      _V10vcore_Du16vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.385 0 0) ((bruijn ##.k.293 93 0) (##intrinsic ##vcore.u16vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k367) (bruijn ##.sym.16 93 1) '##vcore.u16vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      _V40_V10vcore_Du16vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k367, self)))),
      VGetArg(statics, 93-1, 1),
      _V10vcore_Du16vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.384 0 0) ((bruijn ##.k.293 92 0) (##intrinsic ##vcore.list->u16vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k366) (bruijn ##.sym.16 92 1) '##vcore.u16vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu16vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k366, self)))),
      VGetArg(statics, 92-1, 1),
      _V10vcore_Du16vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.383 0 0) ((bruijn ##.k.293 91 0) (##intrinsic ##vcore.make-u16vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k365) (bruijn ##.sym.16 91 1) '##vcore.list->u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      _V40_V10vcore_Dmake__u16vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k365, self)))),
      VGetArg(statics, 91-1, 1),
      _V10vcore_Dlist___Gu16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.382 0 0) ((bruijn ##.k.293 90 0) (##intrinsic ##vcore.u16vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k364) (bruijn ##.sym.16 90 1) '##vcore.make-u16vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      _V40_V10vcore_Du16vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k364, self)))),
      VGetArg(statics, 90-1, 1),
      _V10vcore_Dmake__u16vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.381 0 0) ((bruijn ##.k.293 89 0) (##intrinsic ##vcore.s32vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k363) (bruijn ##.sym.16 89 1) '##vcore.u16vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      _V40_V10vcore_Ds32vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k363, self)))),
      VGetArg(statics, 89-1, 1),
      _V10vcore_Du16vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.380 0 0) ((bruijn ##.k.293 88 0) (##intrinsic ##vcore.s32vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k362) (bruijn ##.sym.16 88 1) '##vcore.s32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      _V40_V10vcore_Ds32vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k362, self)))),
      VGetArg(statics, 88-1, 1),
      _V10vcore_Ds32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.379 0 0) ((bruijn ##.k.293 87 0) (##intrinsic ##vcore.s32vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k361) (bruijn ##.sym.16 87 1) '##vcore.s32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      _V40_V10vcore_Ds32vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k361, self)))),
      VGetArg(statics, 87-1, 1),
      _V10vcore_Ds32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.378 0 0) ((bruijn ##.k.293 86 0) (##intrinsic ##vcore.list->s32vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k360) (bruijn ##.sym.16 86 1) '##vcore.s32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs32vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k360, self)))),
      VGetArg(statics, 86-1, 1),
      _V10vcore_Ds32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.377 0 0) ((bruijn ##.k.293 85 0) (##intrinsic ##vcore.make-s32vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k359) (bruijn ##.sym.16 85 1) '##vcore.list->s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      _V40_V10vcore_Dmake__s32vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k359, self)))),
      VGetArg(statics, 85-1, 1),
      _V10vcore_Dlist___Gs32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.376 0 0) ((bruijn ##.k.293 84 0) (##intrinsic ##vcore.s32vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k358) (bruijn ##.sym.16 84 1) '##vcore.make-s32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      _V40_V10vcore_Ds32vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k358, self)))),
      VGetArg(statics, 84-1, 1),
      _V10vcore_Dmake__s32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.375 0 0) ((bruijn ##.k.293 83 0) (##intrinsic ##vcore.f32vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k357) (bruijn ##.sym.16 83 1) '##vcore.s32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      _V40_V10vcore_Df32vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k357, self)))),
      VGetArg(statics, 83-1, 1),
      _V10vcore_Ds32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((bruijn ##.k.293 82 0) (##intrinsic ##vcore.f32vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k356) (bruijn ##.sym.16 82 1) '##vcore.f32vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      _V40_V10vcore_Df32vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k356, self)))),
      VGetArg(statics, 82-1, 1),
      _V10vcore_Df32vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.373 0 0) ((bruijn ##.k.293 81 0) (##intrinsic ##vcore.f32vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k355) (bruijn ##.sym.16 81 1) '##vcore.f32vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      _V40_V10vcore_Df32vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k355, self)))),
      VGetArg(statics, 81-1, 1),
      _V10vcore_Df32vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.372 0 0) ((bruijn ##.k.293 80 0) (##intrinsic ##vcore.list->f32vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k354) (bruijn ##.sym.16 80 1) '##vcore.f32vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf32vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k354, self)))),
      VGetArg(statics, 80-1, 1),
      _V10vcore_Df32vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.371 0 0) ((bruijn ##.k.293 79 0) (##intrinsic ##vcore.make-f32vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k353) (bruijn ##.sym.16 79 1) '##vcore.list->f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      _V40_V10vcore_Dmake__f32vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k353, self)))),
      VGetArg(statics, 79-1, 1),
      _V10vcore_Dlist___Gf32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.370 0 0) ((bruijn ##.k.293 78 0) (##intrinsic ##vcore.f32vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k352) (bruijn ##.sym.16 78 1) '##vcore.make-f32vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      _V40_V10vcore_Df32vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k352, self)))),
      VGetArg(statics, 78-1, 1),
      _V10vcore_Dmake__f32vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.369 0 0) ((bruijn ##.k.293 77 0) (##intrinsic ##vcore.f64vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k351) (bruijn ##.sym.16 77 1) '##vcore.f32vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      _V40_V10vcore_Df64vector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k351, self)))),
      VGetArg(statics, 77-1, 1),
      _V10vcore_Df32vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.368 0 0) ((bruijn ##.k.293 76 0) (##intrinsic ##vcore.f64vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k350) (bruijn ##.sym.16 76 1) '##vcore.f64vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      _V40_V10vcore_Df64vector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k350, self)))),
      VGetArg(statics, 76-1, 1),
      _V10vcore_Df64vector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.367 0 0) ((bruijn ##.k.293 75 0) (##intrinsic ##vcore.f64vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k349) (bruijn ##.sym.16 75 1) '##vcore.f64vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      _V40_V10vcore_Df64vector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k349, self)))),
      VGetArg(statics, 75-1, 1),
      _V10vcore_Df64vector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.366 0 0) ((bruijn ##.k.293 74 0) (##intrinsic ##vcore.list->f64vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k348) (bruijn ##.sym.16 74 1) '##vcore.f64vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf64vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k348, self)))),
      VGetArg(statics, 74-1, 1),
      _V10vcore_Df64vector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.365 0 0) ((bruijn ##.k.293 73 0) (##intrinsic ##vcore.make-f64vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k347) (bruijn ##.sym.16 73 1) '##vcore.list->f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      _V40_V10vcore_Dmake__f64vector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k347, self)))),
      VGetArg(statics, 73-1, 1),
      _V10vcore_Dlist___Gf64vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) ((bruijn ##.k.293 72 0) (##intrinsic ##vcore.f64vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k346) (bruijn ##.sym.16 72 1) '##vcore.make-f64vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      _V40_V10vcore_Df64vector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k346, self)))),
      VGetArg(statics, 72-1, 1),
      _V10vcore_Dmake__f64vector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.363 0 0) ((bruijn ##.k.293 71 0) (##intrinsic ##vcore.vector-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k345) (bruijn ##.sym.16 71 1) '##vcore.f64vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      _V40_V10vcore_Dvector__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k345, self)))),
      VGetArg(statics, 71-1, 1),
      _V10vcore_Df64vector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.k.293 70 0) (##intrinsic ##vcore.vector-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k344) (bruijn ##.sym.16 70 1) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      _V40_V10vcore_Dvector__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k344, self)))),
      VGetArg(statics, 70-1, 1),
      _V10vcore_Dvector__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) ((bruijn ##.k.293 69 0) (##intrinsic ##vcore.vector-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k343) (bruijn ##.sym.16 69 1) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      _V40_V10vcore_Dvector__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k343, self)))),
      VGetArg(statics, 69-1, 1),
      _V10vcore_Dvector__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.360 0 0) ((bruijn ##.k.293 68 0) (##intrinsic ##vcore.list->vector)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k342) (bruijn ##.sym.16 68 1) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      _V40_V10vcore_Dlist___Gvector);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k342, self)))),
      VGetArg(statics, 68-1, 1),
      _V10vcore_Dvector__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.359 0 0) ((bruijn ##.k.293 67 0) (##intrinsic ##vcore.set-cdr!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k341) (bruijn ##.sym.16 67 1) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      _V40_V10vcore_Dset__cdr_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k341, self)))),
      VGetArg(statics, 67-1, 1),
      _V10vcore_Dlist___Gvector);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.358 0 0) ((bruijn ##.k.293 66 0) (##intrinsic ##vcore.set-car!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k340) (bruijn ##.sym.16 66 1) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      _V40_V10vcore_Dset__car_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k340, self)))),
      VGetArg(statics, 66-1, 1),
      _V10vcore_Dset__cdr_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.357 0 0) ((bruijn ##.k.293 65 0) (##intrinsic ##vcore.cdr)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k339) (bruijn ##.sym.16 65 1) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      _V40_V10vcore_Dcdr);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k339, self)))),
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dset__car_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.356 0 0) ((bruijn ##.k.293 64 0) (##intrinsic ##vcore.car)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k338) (bruijn ##.sym.16 64 1) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      _V40_V10vcore_Dcar);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k338, self)))),
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dcdr);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.355 0 0) ((bruijn ##.k.293 63 0) (##intrinsic ##vcore.cons)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k337) (bruijn ##.sym.16 63 1) '##vcore.car))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      _V40_V10vcore_Dcons);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k337, self)))),
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dcar);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k335) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k336))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k335, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k336, self)))));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.354 0 0) ((bruijn ##.k.293 61 0) (##intrinsic ##vcore.unload-library)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k334) (bruijn ##.sym.16 61 1) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      _V40_V10vcore_Dunload__library);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k334, self)))),
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dcons);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.353 0 0) ((bruijn ##.k.293 60 0) (##intrinsic ##vcore.load-library)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k333) (bruijn ##.sym.16 60 1) '##vcore.unload-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      _V40_V10vcore_Dload__library);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k333, self)))),
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dunload__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.352 0 0) ((bruijn ##.k.293 59 0) (##intrinsic ##vcore.make-import)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k332) (bruijn ##.sym.16 59 1) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      _V40_V10vcore_Dmake__import);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k332, self)))),
      VGetArg(statics, 59-1, 1),
      _V10vcore_Dload__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.351 0 0) ((bruijn ##.k.293 58 0) (##intrinsic ##vcore.lookup-library)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k331) (bruijn ##.sym.16 58 1) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      _V40_V10vcore_Dlookup__library);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k331, self)))),
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dmake__import);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.350 0 0) ((bruijn ##.k.293 57 0) (##intrinsic ##vcore.multidefine)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k330) (bruijn ##.sym.16 57 1) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      _V40_V10vcore_Dmultidefine);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k330, self)))),
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dlookup__library);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.349 0 0) ((bruijn ##.k.293 56 0) (##intrinsic ##vcore.define)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k329) (bruijn ##.sym.16 56 1) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      _V40_V10vcore_Ddefine);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k329, self)))),
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dmultidefine);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.348 0 0) ((bruijn ##.k.293 55 0) (##intrinsic ##vcore.function)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k328) (bruijn ##.sym.16 55 1) '##vcore.define))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      _V40_V10vcore_Dfunction);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k328, self)))),
      VGetArg(statics, 55-1, 1),
      _V10vcore_Ddefine);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.347 0 0) ((bruijn ##.k.293 54 0) (##intrinsic ##vcore.record-length)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k327) (bruijn ##.sym.16 54 1) '##vcore.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k327, self)))),
      VGetArg(statics, 54-1, 1),
      _V10vcore_Dfunction);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.346 0 0) ((bruijn ##.k.293 53 0) (##intrinsic ##vcore.record-set!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k326) (bruijn ##.sym.16 53 1) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k326, self)))),
      VGetArg(statics, 53-1, 1),
      _V10vcore_Drecord__length);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.345 0 0) ((bruijn ##.k.293 52 0) (##intrinsic ##vcore.record-ref)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k325) (bruijn ##.sym.16 52 1) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k325, self)))),
      VGetArg(statics, 52-1, 1),
      _V10vcore_Drecord__set_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.344 0 0) ((bruijn ##.k.293 51 0) (##intrinsic ##vcore.record)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k324) (bruijn ##.sym.16 51 1) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k324, self)))),
      VGetArg(statics, 51-1, 1),
      _V10vcore_Drecord__ref);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.343 0 0) ((bruijn ##.k.293 50 0) (##intrinsic ##vcore.set-global!)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k323) (bruijn ##.sym.16 50 1) '##vcore.record))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      _V40_V10vcore_Dset__global_B);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k323, self)))),
      VGetArg(statics, 50-1, 1),
      _V10vcore_Drecord);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.342 0 0) ((bruijn ##.k.293 49 0) (##intrinsic ##vcore.define-global)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k322) (bruijn ##.sym.16 49 1) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      _V40_V10vcore_Ddefine__global);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k322, self)))),
      VGetArg(statics, 49-1, 1),
      _V10vcore_Dset__global_B);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.341 0 0) ((bruijn ##.k.293 48 0) (##intrinsic ##vcore.exit)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k321) (bruijn ##.sym.16 48 1) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      _V40_V10vcore_Dexit);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k321, self)))),
      VGetArg(statics, 48-1, 1),
      _V10vcore_Ddefine__global);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.340 0 0) ((bruijn ##.k.293 47 0) (##intrinsic ##vcore.abort)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k320) (bruijn ##.sym.16 47 1) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      _V40_V10vcore_Dabort);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k320, self)))),
      VGetArg(statics, 47-1, 1),
      _V10vcore_Dexit);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.339 0 0) ((bruijn ##.k.293 46 0) (##intrinsic ##vcore.apply-cps)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k319) (bruijn ##.sym.16 46 1) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      _V40_V10vcore_Dapply__cps);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k319, self)))),
      VGetArg(statics, 46-1, 1),
      _V10vcore_Dabort);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.338 0 0) ((bruijn ##.k.293 45 0) (##intrinsic ##vcore.apply)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k318) (bruijn ##.sym.16 45 1) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      _V40_V10vcore_Dapply);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k318, self)))),
      VGetArg(statics, 45-1, 1),
      _V10vcore_Dapply__cps);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.337 0 0) ((bruijn ##.k.293 44 0) (##intrinsic ##vcore.call-with-values)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k317) (bruijn ##.sym.16 44 1) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      _V40_V10vcore_Dcall__with__values);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k317, self)))),
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dapply);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.336 0 0) ((bruijn ##.k.293 43 0) (##intrinsic ##vcore.call/cc)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k316) (bruijn ##.sym.16 43 1) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      _V40_V10vcore_Dcall_Wcc);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k316, self)))),
      VGetArg(statics, 43-1, 1),
      _V10vcore_Dcall__with__values);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((bruijn ##.k.293 42 0) (##intrinsic ##vcore.next)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k315) (bruijn ##.sym.16 42 1) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      _V40_V10vcore_Dnext);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k315, self)))),
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dcall_Wcc);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.334 0 0) ((bruijn ##.k.293 41 0) (##intrinsic ##vcore.raise)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k314) (bruijn ##.sym.16 41 1) '##vcore.next))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      _V40_V10vcore_Draise);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k314, self)))),
      VGetArg(statics, 41-1, 1),
      _V10vcore_Dnext);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.333 0 0) ((bruijn ##.k.293 40 0) (##intrinsic ##vcore.pop-exception-handler)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k313) (bruijn ##.sym.16 40 1) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      _V40_V10vcore_Dpop__exception__handler);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k313, self)))),
      VGetArg(statics, 40-1, 1),
      _V10vcore_Draise);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.332 0 0) ((bruijn ##.k.293 39 0) (##intrinsic ##vcore.push-exception-handler)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k312) (bruijn ##.sym.16 39 1) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      _V40_V10vcore_Dpush__exception__handler);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k312, self)))),
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dpop__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.331 0 0) ((bruijn ##.k.293 38 0) (##intrinsic ##vcore.get-exception-handler)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k311) (bruijn ##.sym.16 38 1) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      _V40_V10vcore_Dget__exception__handler);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k311, self)))),
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dpush__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.330 0 0) ((bruijn ##.k.293 37 0) (##intrinsic ##vcore.pop-dynamic)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k310) (bruijn ##.sym.16 37 1) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      _V40_V10vcore_Dpop__dynamic);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k310, self)))),
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dget__exception__handler);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.329 0 0) ((bruijn ##.k.293 36 0) (##intrinsic ##vcore.push-dynamic)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k309) (bruijn ##.sym.16 36 1) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      _V40_V10vcore_Dpush__dynamic);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k309, self)))),
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dpop__dynamic);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.328 0 0) ((bruijn ##.k.293 35 0) (##intrinsic ##vcore.get-dynamics)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k308) (bruijn ##.sym.16 35 1) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      _V40_V10vcore_Dget__dynamics);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k308, self)))),
      VGetArg(statics, 35-1, 1),
      _V10vcore_Dpush__dynamic);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.327 0 0) ((bruijn ##.k.293 34 0) (##intrinsic ##vcore.not)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k307) (bruijn ##.sym.16 34 1) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      _V40_V10vcore_Dnot);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k307, self)))),
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dget__dynamics);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.326 0 0) ((bruijn ##.k.293 33 0) (##intrinsic ##vcore.eqv?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k306) (bruijn ##.sym.16 33 1) '##vcore.not))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      _V40_V10vcore_Deqv_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k306, self)))),
      VGetArg(statics, 33-1, 1),
      _V10vcore_Dnot);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.325 0 0) ((bruijn ##.k.293 32 0) (##intrinsic ##vcore.blob=?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k305) (bruijn ##.sym.16 32 1) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      _V40_V10vcore_Dblob_E_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k305, self)))),
      VGetArg(statics, 32-1, 1),
      _V10vcore_Deqv_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.324 0 0) ((bruijn ##.k.293 31 0) (##intrinsic ##vcore.symbol=?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k304) (bruijn ##.sym.16 31 1) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      _V40_V10vcore_Dsymbol_E_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k304, self)))),
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dblob_E_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.323 0 0) ((bruijn ##.k.293 30 0) (##intrinsic ##vcore.eq?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k303) (bruijn ##.sym.16 30 1) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      _V40_V10vcore_Deq_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k303, self)))),
      VGetArg(statics, 30-1, 1),
      _V10vcore_Dsymbol_E_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.322 0 0) ((bruijn ##.k.293 29 0) (##intrinsic ##vcore.foreign-pointer?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k302) (bruijn ##.sym.16 29 1) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      _V40_V10vcore_Dforeign__pointer_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k302, self)))),
      VGetArg(statics, 29-1, 1),
      _V10vcore_Deq_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.321 0 0) ((bruijn ##.k.293 28 0) (##intrinsic ##vcore.nullptr?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k301) (bruijn ##.sym.16 28 1) '##vcore.foreign-pointer?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      _V40_V10vcore_Dnullptr_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k301, self)))),
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dforeign__pointer_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.320 0 0) ((bruijn ##.k.293 27 0) (##intrinsic ##vcore.void?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k300) (bruijn ##.sym.16 27 1) '##vcore.nullptr?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      _V40_V10vcore_Dvoid_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k300, self)))),
      VGetArg(statics, 27-1, 1),
      _V10vcore_Dnullptr_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.319 0 0) ((bruijn ##.k.293 26 0) (##intrinsic ##vcore.char?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k299) (bruijn ##.sym.16 26 1) '##vcore.void?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      _V40_V10vcore_Dchar_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k299, self)))),
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dvoid_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.318 0 0) ((bruijn ##.k.293 25 0) (##intrinsic ##vcore.double?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k298) (bruijn ##.sym.16 25 1) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      _V40_V10vcore_Ddouble_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k298, self)))),
      VGetArg(statics, 25-1, 1),
      _V10vcore_Dchar_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.317 0 0) ((bruijn ##.k.293 24 0) (##intrinsic ##vcore.int?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k297) (bruijn ##.sym.16 24 1) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      _V40_V10vcore_Dint_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k297, self)))),
      VGetArg(statics, 24-1, 1),
      _V10vcore_Ddouble_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.316 0 0) ((bruijn ##.k.293 23 0) (##intrinsic ##vcore.string?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k296) (bruijn ##.sym.16 23 1) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      _V40_V10vcore_Dstring_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k296, self)))),
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dint_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.315 0 0) ((bruijn ##.k.293 22 0) (##intrinsic ##vcore.symbol?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k295) (bruijn ##.sym.16 22 1) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      _V40_V10vcore_Dsymbol_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k295, self)))),
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dstring_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.314 0 0) ((bruijn ##.k.293 21 0) (##intrinsic ##vcore.blob?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k294) (bruijn ##.sym.16 21 1) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      _V40_V10vcore_Dblob_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k294, self)))),
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dsymbol_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.313 0 0) ((bruijn ##.k.293 20 0) (##intrinsic ##vcore.procedure?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k293) (bruijn ##.sym.16 20 1) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      _V40_V10vcore_Dprocedure_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k293, self)))),
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dblob_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((bruijn ##.k.293 19 0) (##intrinsic ##vcore.record?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k292) (bruijn ##.sym.16 19 1) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      _V40_V10vcore_Drecord_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k292, self)))),
      VGetArg(statics, 19-1, 1),
      _V10vcore_Dprocedure_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 0 0) ((bruijn ##.k.293 18 0) (##intrinsic ##vcore.hash-table?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k291) (bruijn ##.sym.16 18 1) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      _V40_V10vcore_Dhash__table_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k291, self)))),
      VGetArg(statics, 18-1, 1),
      _V10vcore_Drecord_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.310 0 0) ((bruijn ##.k.293 17 0) (##intrinsic ##vcore.vector?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k290) (bruijn ##.sym.16 17 1) '##vcore.hash-table?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      _V40_V10vcore_Dvector_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k290, self)))),
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dhash__table_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.309 0 0) ((bruijn ##.k.293 16 0) (##intrinsic ##vcore.pair?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k289) (bruijn ##.sym.16 16 1) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      _V40_V10vcore_Dpair_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k289, self)))),
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dvector_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.308 0 0) ((bruijn ##.k.293 15 0) (##intrinsic ##vcore.null?)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k288) (bruijn ##.sym.16 15 1) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      _V40_V10vcore_Dnull_Q);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k288, self)))),
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dpair_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.307 0 0) ((bruijn ##.k.293 14 0) (##intrinsic ##vcore.remainder)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k287) (bruijn ##.sym.16 14 1) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      _V40_V10vcore_Dremainder);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k287, self)))),
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dnull_Q);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.306 0 0) ((bruijn ##.k.293 13 0) (##intrinsic ##vcore.quotient)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k286) (bruijn ##.sym.16 13 1) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      _V40_V10vcore_Dquotient);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k286, self)))),
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dremainder);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.305 0 0) ((bruijn ##.k.293 12 0) (##intrinsic ##vcore.>)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k285) (bruijn ##.sym.16 12 1) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      _V40_V10vcore_D_G);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k285, self)))),
      VGetArg(statics, 12-1, 1),
      _V10vcore_Dquotient);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.304 0 0) ((bruijn ##.k.293 11 0) (##intrinsic ##vcore.>=)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k284) (bruijn ##.sym.16 11 1) '##vcore.>))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      _V40_V10vcore_D_G_E);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k284, self)))),
      VGetArg(statics, 11-1, 1),
      _V10vcore_D_G);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.303 0 0) ((bruijn ##.k.293 10 0) (##intrinsic ##vcore.=)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k283) (bruijn ##.sym.16 10 1) '##vcore.>=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      _V40_V10vcore_D_E);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k283, self)))),
      VGetArg(statics, 10-1, 1),
      _V10vcore_D_G_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.302 0 0) ((bruijn ##.k.293 9 0) (##intrinsic ##vcore.<)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k282) (bruijn ##.sym.16 9 1) '##vcore.=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      _V40_V10vcore_D_L);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k282, self)))),
      VGetArg(statics, 9-1, 1),
      _V10vcore_D_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.301 0 0) ((bruijn ##.k.293 8 0) (##intrinsic ##vcore.<=)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k281) (bruijn ##.sym.16 8 1) '##vcore.<))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      _V40_V10vcore_D_L_E);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k281, self)))),
      VGetArg(statics, 8-1, 1),
      _V10vcore_D_L);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.300 0 0) ((bruijn ##.k.293 7 0) (##intrinsic ##vcore.cmp)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k280) (bruijn ##.sym.16 7 1) '##vcore.<=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      _V40_V10vcore_Dcmp);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k280, self)))),
      VGetArg(statics, 7-1, 1),
      _V10vcore_D_L_E);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.299 0 0) ((bruijn ##.k.293 6 0) (##intrinsic ##vcore./)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k279) (bruijn ##.sym.16 6 1) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _V40_V10vcore_D_W);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k279, self)))),
      VGetArg(statics, 6-1, 1),
      _V10vcore_Dcmp);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.298 0 0) ((bruijn ##.k.293 5 0) (##intrinsic ##vcore.*)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k278) (bruijn ##.sym.16 5 1) '##vcore./))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      _V40_V10vcore_D_S);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k278, self)))),
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_W);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.297 0 0) ((bruijn ##.k.293 4 0) (##intrinsic ##vcore.-)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k277) (bruijn ##.sym.16 4 1) '##vcore.*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _V40_V10vcore_D__);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k277, self)))),
      statics->up->up->up->vars[1],
      _V10vcore_D_S);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.296 0 0) ((bruijn ##.k.293 3 0) (##intrinsic ##vcore.+)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k276) (bruijn ##.sym.16 3 1) '##vcore.-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _V40_V10vcore_D_P);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k276, self)))),
      statics->up->up->vars[1],
      _V10vcore_D__);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.295 0 0) ((bruijn ##.k.293 2 0) (##intrinsic ##vcore.exact)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k275) (bruijn ##.sym.16 2 1) '##vcore.+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dexact);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k275, self)))),
      statics->up->vars[1],
      _V10vcore_D_P);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.294 0 0) ((bruijn ##.k.293 1 0) (##intrinsic ##vcore.inexact)) (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k274) (bruijn ##.sym.16 1 1) '##vcore.exact))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V40_V10vcore_Dinexact);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k274, self)))),
      statics->vars[1],
      _V10vcore_Dexact);
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.eqv? (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k273) (bruijn ##.sym.16 0 1) '##vcore.inexact)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k273, self)))),
      _var1,
      _V10vcore_Dinexact);
}
static void _V0vanity_V0intrinsics_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 4 ((close "_V50_V0vanity_V0intrinsics_V0lookup__inline__name") (close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name") (close "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q") (close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic")) ((bruijn ##.k.19 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-inline-name (bruijn ##.lookup-inline-name.6 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic-name (bruijn ##.lookup-intrinsic-name.7 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic (bruijn ##.lookup-intrinsic.9 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'is-basic-intrinsic? (bruijn ##.is-basic-intrinsic?.8 0 2)) '()))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
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
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0is__basic__intrinsic_Q,
        self->vars[2]),
        VNULL)))));
    }
}
static void _V0vanity_V0intrinsics_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0intrinsics_V20_V0k2) (##string ##.string.700) (bruijn ##.x.499 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0intrinsics_V20_V0k1) (##string ##.string.701))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0intrinsics_V20 = (VFunc)_V0vanity_V0intrinsics_V20_V0lambda1;
