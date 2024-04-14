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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D393 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D392 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
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
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
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
VWEAK VWORD _V40_V10vcore_Dread__line;VWEAK VClosure _VW_V40_V10vcore_Dread__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine2, NULL };
VWEAK VWORD _V40_V10vcore_Dread__char;VWEAK VClosure _VW_V40_V10vcore_Dread__char = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadChar2, NULL };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
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
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__hash__table;VWEAK VClosure _VW_V40_V10vcore_Dmake__hash__table = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTable, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__car_B;VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
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
VWEAK VWORD _V40_V10vcore_Dchar_Q;VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V40_V10vcore_Dint_Q;VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring_Q;VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V40_V10vcore_Dblob_Q;VWEAK VClosure _VW_V40_V10vcore_Dblob_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobP2, NULL };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord_Q;VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
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
VWEAK VWORD _V10vcore_D_P;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.+" };
VWEAK VWORD _V10vcore_D__;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.-" };
VWEAK VWORD _V10vcore_D_S;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.*" };
VWEAK VWORD _V10vcore_D_W;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore./" };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V10vcore_Dquotient;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dquotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.quotient" };
VWEAK VWORD _V10vcore_Dremainder;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dremainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.remainder" };
VWEAK VWORD _V10vcore_Drecord_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Drecord_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.record\?" };
VWEAK VWORD _V10vcore_Dvector_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dvector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.vector\?" };
VWEAK VWORD _V10vcore_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dprocedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.procedure\?" };
VWEAK VWORD _V10vcore_Dblob_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dblob_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.blob\?" };
VWEAK VWORD _V10vcore_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dsymbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.symbol\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V10vcore_Dint_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dint_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.int\?" };
VWEAK VWORD _V10vcore_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddouble_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.double\?" };
VWEAK VWORD _V10vcore_Dchar_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dchar_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.char\?" };
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
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dset__car_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-car!" };
VWEAK VWORD _V10vcore_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-cdr!" };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V10vcore_Dvector__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dvector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.vector-ref" };
VWEAK VWORD _V10vcore_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dvector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.vector-set!" };
VWEAK VWORD _V10vcore_Dvector__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dvector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.vector-length" };
VWEAK VWORD _V10vcore_Drecord;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Drecord = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.record" };
VWEAK VWORD _V10vcore_Drecord__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Drecord__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.record-ref" };
VWEAK VWORD _V10vcore_Drecord__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drecord__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.record-set!" };
VWEAK VWORD _V10vcore_Drecord__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Drecord__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.record-length" };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "##vcore.hash-table-hash-function" };
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
VWEAK VWORD _V10vcore_Dsystem;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsystem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.system" };
VWEAK VWORD _V10vcore_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-input-process" };
VWEAK VWORD _V10vcore_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dopen__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.open-output-process" };
VWEAK VWORD _V10vcore_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dmake__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.make-temporary-file" };
VWEAK VWORD _V10vcore_Dcommand__line;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dcommand__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.command-line" };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-random" };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.random-advance!" };
VWEAK VWORD _V10vcore_Dfiber__fork__list;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dfiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.fiber-fork-list" };
VWEAK VWORD _V10vcore_Dasync;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dasync = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.async" };
VWEAK VWORD _V10vcore_Dawait;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dawait = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.await" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D391 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D390 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D389 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D388 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D387 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D386 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D385 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D384 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D383 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D382 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D381 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D380 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D379 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D378 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D377 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D376 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D375 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D374 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D373 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VNewlineStdout" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D372 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VWriteStdout" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D371 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VDisplayStdout" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D370 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D369 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D368 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D367 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D366 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D365 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D364 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D363 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VTtyPortP" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D360 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D359 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D358 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D357 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D356 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D355 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D354 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D353 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D352 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D351 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D350 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VGensym" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D349 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D348 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D347 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D346 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D345 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D344 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D343 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D342 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D341 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D340 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D339 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D338 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D337 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D336 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D335 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D334 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRecordLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D333 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D332 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordRef2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D331 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VCreateRecord2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D330 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D329 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D328 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D327 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D326 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D325 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D324 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D323 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D322 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D320 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D319 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D318 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D317 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D316 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSetGlobalVar2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D315 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D314 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D313 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D312 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VApplyCps" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D311 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D310 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D309 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D308 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D307 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRaise" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D306 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VPopExceptionHandler" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D305 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VPushExceptionHandler" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D304 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VGetExceptionHandler" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D303 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VPopDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D302 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VPushDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D301 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VGetDynamics" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D299 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEqv" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D298 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D297 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D296 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D295 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D294 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D293 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D292 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D291 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D290 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D289 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D288 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRecordP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D286 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D285 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D284 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D283 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D282 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D281 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D280 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D279 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D278 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D277 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCdr2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D276 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCar2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D275 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlineCons2" };
VWEAK VWORD _V10vcore_Dqcons;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.qcons" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D274 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineEq2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D273 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineNot2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D272 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlinePairP2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D271 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VInlineNullP2" };
static __attribute__((constructor)) void VDllMain1() {
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
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
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Dread__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line", &_VW_V40_V10vcore_Dread__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__char = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__char", &_VW_V40_V10vcore_Dread__char), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__string", &_VW_V40_V10vcore_Dopen__output__string), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__hash__table", &_VW_V40_V10vcore_Dmake__hash__table), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_Q", &_VW_V40_V10vcore_Dblob_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
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
  _V10vcore_D_P = VEncodePointer(VLookupConstant("_V10vcore_D_P", &_VW_V10vcore_D_P), VPOINTER_OTHER);
  _V10vcore_D__ = VEncodePointer(VLookupConstant("_V10vcore_D__", &_VW_V10vcore_D__), VPOINTER_OTHER);
  _V10vcore_D_S = VEncodePointer(VLookupConstant("_V10vcore_D_S", &_VW_V10vcore_D_S), VPOINTER_OTHER);
  _V10vcore_D_W = VEncodePointer(VLookupConstant("_V10vcore_D_W", &_VW_V10vcore_D_W), VPOINTER_OTHER);
  _V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V10vcore_Dcmp", &_VW_V10vcore_Dcmp), VPOINTER_OTHER);
  _V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V10vcore_Dquotient", &_VW_V10vcore_Dquotient), VPOINTER_OTHER);
  _V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V10vcore_Dremainder", &_VW_V10vcore_Dremainder), VPOINTER_OTHER);
  _V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V10vcore_Drecord_Q", &_VW_V10vcore_Drecord_Q), VPOINTER_OTHER);
  _V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V10vcore_Dvector_Q", &_VW_V10vcore_Dvector_Q), VPOINTER_OTHER);
  _V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V10vcore_Dprocedure_Q", &_VW_V10vcore_Dprocedure_Q), VPOINTER_OTHER);
  _V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V10vcore_Dblob_Q", &_VW_V10vcore_Dblob_Q), VPOINTER_OTHER);
  _V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V10vcore_Dsymbol_Q", &_VW_V10vcore_Dsymbol_Q), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V10vcore_Dstring_Q", &_VW_V10vcore_Dstring_Q), VPOINTER_OTHER);
  _V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V10vcore_Dint_Q", &_VW_V10vcore_Dint_Q), VPOINTER_OTHER);
  _V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V10vcore_Ddouble_Q", &_VW_V10vcore_Ddouble_Q), VPOINTER_OTHER);
  _V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V10vcore_Dchar_Q", &_VW_V10vcore_Dchar_Q), VPOINTER_OTHER);
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
  _V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V10vcore_Ddefine", &_VW_V10vcore_Ddefine), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V10vcore_Dlookup__library", &_VW_V10vcore_Dlookup__library), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V10vcore_Dmake__import", &_VW_V10vcore_Dmake__import), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__car_B", &_VW_V10vcore_Dset__car_B), VPOINTER_OTHER);
  _V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V10vcore_Dset__cdr_B", &_VW_V10vcore_Dset__cdr_B), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V10vcore_Dlist___Gvector", &_VW_V10vcore_Dlist___Gvector), VPOINTER_OTHER);
  _V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V10vcore_Dvector__ref", &_VW_V10vcore_Dvector__ref), VPOINTER_OTHER);
  _V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dvector__set_B", &_VW_V10vcore_Dvector__set_B), VPOINTER_OTHER);
  _V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V10vcore_Dvector__length", &_VW_V10vcore_Dvector__length), VPOINTER_OTHER);
  _V10vcore_Drecord = VEncodePointer(VLookupConstant("_V10vcore_Drecord", &_VW_V10vcore_Drecord), VPOINTER_OTHER);
  _V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V10vcore_Drecord__ref", &_VW_V10vcore_Drecord__ref), VPOINTER_OTHER);
  _V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V10vcore_Drecord__set_B", &_VW_V10vcore_Drecord__set_B), VPOINTER_OTHER);
  _V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V10vcore_Drecord__length", &_VW_V10vcore_Drecord__length), VPOINTER_OTHER);
  _V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V10vcore_Dmake__hash__table", &_VW_V10vcore_Dmake__hash__table), VPOINTER_OTHER);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__equivalence__function", &_VW_V10vcore_Dhash__table__equivalence__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__hash__function", &_VW_V10vcore_Dhash__table__hash__function), VPOINTER_OTHER);
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
  _V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V10vcore_Dsystem", &_VW_V10vcore_Dsystem), VPOINTER_OTHER);
  _V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V10vcore_Dopen__input__process", &_VW_V10vcore_Dopen__input__process), VPOINTER_OTHER);
  _V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V10vcore_Dopen__output__process", &_VW_V10vcore_Dopen__output__process), VPOINTER_OTHER);
  _V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V10vcore_Dmake__temporary__file", &_VW_V10vcore_Dmake__temporary__file), VPOINTER_OTHER);
  _V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V10vcore_Dcommand__line", &_VW_V10vcore_Dcommand__line), VPOINTER_OTHER);
  _V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V10vcore_Dmake__random", &_VW_V10vcore_Dmake__random), VPOINTER_OTHER);
  _V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V10vcore_Drandom__copy", &_VW_V10vcore_Drandom__copy), VPOINTER_OTHER);
  _V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample_B", &_VW_V10vcore_Drandom__sample_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__bounded_B", &_VW_V10vcore_Drandom__sample__bounded_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__float_B", &_VW_V10vcore_Drandom__sample__float_B), VPOINTER_OTHER);
  _V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__advance_B", &_VW_V10vcore_Drandom__advance_B), VPOINTER_OTHER);
  _V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V10vcore_Dfiber__fork__list", &_VW_V10vcore_Dfiber__fork__list), VPOINTER_OTHER);
  _V10vcore_Dasync = VEncodePointer(VLookupConstant("_V10vcore_Dasync", &_VW_V10vcore_Dasync), VPOINTER_OTHER);
  _V10vcore_Dawait = VEncodePointer(VLookupConstant("_V10vcore_Dawait", &_VW_V10vcore_Dawait), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V10vcore_Dnull_Q", &_VW_V10vcore_Dnull_Q), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V10vcore_Dpair_Q", &_VW_V10vcore_Dpair_Q), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VLookupConstant("_V10vcore_Dnot", &_VW_V10vcore_Dnot), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V10vcore_Deq_Q", &_VW_V10vcore_Deq_Q), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VLookupConstant("_V10vcore_Dcons", &_VW_V10vcore_Dcons), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VLookupConstant("_V10vcore_Dcar", &_VW_V10vcore_Dcar), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V10vcore_Dcdr", &_VW_V10vcore_Dcdr), VPOINTER_OTHER);
  _V10vcore_Dqcons = VEncodePointer(VLookupConstant("_V10vcore_Dqcons", &_VW_V10vcore_Dqcons), VPOINTER_OTHER);
}
static void _V10_Dlookup__inline__name_D5_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k9, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.24 1 0) ((bruijn ##.k.25 0 0) (bruijn ##.p.24 1 0)) ((bruijn ##.eqv?.4 9 0) (bruijn ##.k.25 0 0) (bruijn ##.x.0.9 6 0) '##vcore.qcons))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      _var0,
      VGetArg(upenv, 6-1, 0),
      _V10vcore_Dqcons);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k12, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.23 0 0) ((bruijn ##.k.16 9 0) (##string ##.string.277)) ((bruijn ##.k.16 9 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D277.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dlookup__inline__name_D5_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.22 0 0) ((bruijn ##.k.16 8 0) (##string ##.string.276)) ((bruijn ##.eqv?.4 10 0) (close _V10_Dlookup__inline__name_D5_k12) (bruijn ##.x.0.9 7 0) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D276.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k12, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10vcore_Dcdr);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.21 0 0) ((bruijn ##.k.16 7 0) (##string ##.string.275)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__inline__name_D5_k11) (bruijn ##.x.0.9 6 0) '##vcore.car))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D275.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k11, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10vcore_Dcar);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dlookup__inline__name_D5_k9) (close _V10_Dlookup__inline__name_D5_k10))
    V_CALL_FUNC(_V10_Dlookup__inline__name_D5_k9, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k10, env)}));
 }
}
static void _V10_Dlookup__inline__name_D5_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.20 0 0) ((bruijn ##.k.16 5 0) (##string ##.string.274)) ((bruijn ##.eqv?.4 7 0) (close _V10_Dlookup__inline__name_D5_k8) (bruijn ##.x.0.9 4 0) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D274.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k8, env)}),
      upenv->up->up->up->vars[0],
      _V10vcore_Dcons);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.19 0 0) ((bruijn ##.k.16 4 0) (##string ##.string.273)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__inline__name_D5_k7) (bruijn ##.x.0.9 3 0) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D273.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k7, env)}),
      upenv->up->up->vars[0],
      _V10vcore_Deq_Q);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.18 0 0) ((bruijn ##.k.16 3 0) (##string ##.string.272)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__inline__name_D5_k6) (bruijn ##.x.0.9 2 0) '##vcore.not))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D272.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k6, env)}),
      upenv->up->vars[0],
      _V10vcore_Dnot);
}
 }
}
static void _V10_Dlookup__inline__name_D5_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.17 0 0) ((bruijn ##.k.16 2 0) (##string ##.string.271)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__inline__name_D5_k5) (bruijn ##.x.0.9 1 0) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D271.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k5, env)}),
      upenv->vars[0],
      _V10vcore_Dpair_Q);
}
 }
}
static void _V10_Dlookup__inline__name_D5_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_lambda3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__inline__name_D5_k4) (bruijn ##.x.0.9 0 0) '##vcore.null?)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_k4, env)}),
      _var0,
      _V10vcore_Dnull_Q);
 }
}
static void _V10_Dlookup__inline__name_D5_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlookup__inline__name_D5_lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dlookup__inline__name_D5_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__inline__name_D5_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dlookup__inline__name_D5_lambda3) (bruijn ##.sym.8 0 1))
    V_CALL_FUNC(_V10_Dlookup__inline__name_D5_lambda3, env, runtime,
      _var1);
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k59, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.142 1 0) ((bruijn ##.k.143 0 0) (bruijn ##.p.142 1 0)) ((bruijn ##.eqv?.4 50 0) (bruijn ##.k.143 0 0) (bruijn ##.x.1.11 47 0) '##vcore.qcons))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      _var0,
      VGetArg(upenv, 47-1, 0),
      _V10vcore_Dqcons);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k129, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.141 0 0) ((bruijn ##.k.26 117 0) (##string ##.string.391)) ((bruijn ##.k.26 117 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D391.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.140 0 0) ((bruijn ##.k.26 116 0) (##string ##.string.390)) ((bruijn ##.eqv?.4 118 0) (close _V10_Dlookup__intrinsic__name_D6_k129) (bruijn ##.x.1.11 115 0) '##vcore.await))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D390.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k129, env)}),
      VGetArg(upenv, 115-1, 0),
      _V10vcore_Dawait);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.139 0 0) ((bruijn ##.k.26 115 0) (##string ##.string.389)) ((bruijn ##.eqv?.4 117 0) (close _V10_Dlookup__intrinsic__name_D6_k128) (bruijn ##.x.1.11 114 0) '##vcore.async))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D389.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k128, env)}),
      VGetArg(upenv, 114-1, 0),
      _V10vcore_Dasync);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.138 0 0) ((bruijn ##.k.26 114 0) (##string ##.string.388)) ((bruijn ##.eqv?.4 116 0) (close _V10_Dlookup__intrinsic__name_D6_k127) (bruijn ##.x.1.11 113 0) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D388.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k127, env)}),
      VGetArg(upenv, 113-1, 0),
      _V10vcore_Dfiber__fork__list);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.137 0 0) ((bruijn ##.k.26 113 0) (##string ##.string.387)) ((bruijn ##.eqv?.4 115 0) (close _V10_Dlookup__intrinsic__name_D6_k126) (bruijn ##.x.1.11 112 0) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D387.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k126, env)}),
      VGetArg(upenv, 112-1, 0),
      _V10vcore_Drandom__advance_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.136 0 0) ((bruijn ##.k.26 112 0) (##string ##.string.386)) ((bruijn ##.eqv?.4 114 0) (close _V10_Dlookup__intrinsic__name_D6_k125) (bruijn ##.x.1.11 111 0) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D386.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k125, env)}),
      VGetArg(upenv, 111-1, 0),
      _V10vcore_Drandom__sample__float_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.135 0 0) ((bruijn ##.k.26 111 0) (##string ##.string.385)) ((bruijn ##.eqv?.4 113 0) (close _V10_Dlookup__intrinsic__name_D6_k124) (bruijn ##.x.1.11 110 0) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D385.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k124, env)}),
      VGetArg(upenv, 110-1, 0),
      _V10vcore_Drandom__sample__bounded_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.134 0 0) ((bruijn ##.k.26 110 0) (##string ##.string.384)) ((bruijn ##.eqv?.4 112 0) (close _V10_Dlookup__intrinsic__name_D6_k123) (bruijn ##.x.1.11 109 0) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D384.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k123, env)}),
      VGetArg(upenv, 109-1, 0),
      _V10vcore_Drandom__sample_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.133 0 0) ((bruijn ##.k.26 109 0) (##string ##.string.383)) ((bruijn ##.eqv?.4 111 0) (close _V10_Dlookup__intrinsic__name_D6_k122) (bruijn ##.x.1.11 108 0) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D383.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k122, env)}),
      VGetArg(upenv, 108-1, 0),
      _V10vcore_Drandom__copy);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.132 0 0) ((bruijn ##.k.26 108 0) (##string ##.string.382)) ((bruijn ##.eqv?.4 110 0) (close _V10_Dlookup__intrinsic__name_D6_k121) (bruijn ##.x.1.11 107 0) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D382.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k121, env)}),
      VGetArg(upenv, 107-1, 0),
      _V10vcore_Dmake__random);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.131 0 0) ((bruijn ##.k.26 107 0) (##string ##.string.381)) ((bruijn ##.eqv?.4 109 0) (close _V10_Dlookup__intrinsic__name_D6_k120) (bruijn ##.x.1.11 106 0) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D381.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k120, env)}),
      VGetArg(upenv, 106-1, 0),
      _V10vcore_Dcommand__line);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.130 0 0) ((bruijn ##.k.26 106 0) (##string ##.string.380)) ((bruijn ##.eqv?.4 108 0) (close _V10_Dlookup__intrinsic__name_D6_k119) (bruijn ##.x.1.11 105 0) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D380.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k119, env)}),
      VGetArg(upenv, 105-1, 0),
      _V10vcore_Dmake__temporary__file);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.129 0 0) ((bruijn ##.k.26 105 0) (##string ##.string.379)) ((bruijn ##.eqv?.4 107 0) (close _V10_Dlookup__intrinsic__name_D6_k118) (bruijn ##.x.1.11 104 0) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D379.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k118, env)}),
      VGetArg(upenv, 104-1, 0),
      _V10vcore_Dopen__output__process);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.128 0 0) ((bruijn ##.k.26 104 0) (##string ##.string.378)) ((bruijn ##.eqv?.4 106 0) (close _V10_Dlookup__intrinsic__name_D6_k117) (bruijn ##.x.1.11 103 0) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D378.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k117, env)}),
      VGetArg(upenv, 103-1, 0),
      _V10vcore_Dopen__input__process);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.127 0 0) ((bruijn ##.k.26 103 0) (##string ##.string.377)) ((bruijn ##.eqv?.4 105 0) (close _V10_Dlookup__intrinsic__name_D6_k116) (bruijn ##.x.1.11 102 0) '##vcore.system))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D377.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k116, env)}),
      VGetArg(upenv, 102-1, 0),
      _V10vcore_Dsystem);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.126 0 0) ((bruijn ##.k.26 102 0) (##string ##.string.376)) ((bruijn ##.eqv?.4 104 0) (close _V10_Dlookup__intrinsic__name_D6_k115) (bruijn ##.x.1.11 101 0) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D376.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k115, env)}),
      VGetArg(upenv, 101-1, 0),
      _V10vcore_Dgarbage__collect);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.125 0 0) ((bruijn ##.k.26 101 0) (##string ##.string.375)) ((bruijn ##.eqv?.4 103 0) (close _V10_Dlookup__intrinsic__name_D6_k114) (bruijn ##.x.1.11 100 0) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D375.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k114, env)}),
      VGetArg(upenv, 100-1, 0),
      _V10vcore_Dfinalize_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.124 0 0) ((bruijn ##.k.26 100 0) (##string ##.string.374)) ((bruijn ##.eqv?.4 102 0) (close _V10_Dlookup__intrinsic__name_D6_k113) (bruijn ##.x.1.11 99 0) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D374.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k113, env)}),
      VGetArg(upenv, 99-1, 0),
      _V10vcore_Dhas__finalizer_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.123 0 0) ((bruijn ##.k.26 99 0) (##string ##.string.373)) ((bruijn ##.eqv?.4 101 0) (close _V10_Dlookup__intrinsic__name_D6_k112) (bruijn ##.x.1.11 98 0) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D373.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k112, env)}),
      VGetArg(upenv, 98-1, 0),
      _V10vcore_Dset__finalizer_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.122 0 0) ((bruijn ##.k.26 98 0) (##string ##.string.372)) ((bruijn ##.eqv?.4 100 0) (close _V10_Dlookup__intrinsic__name_D6_k111) (bruijn ##.x.1.11 97 0) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k111, env)}),
      VGetArg(upenv, 97-1, 0),
      _V10vcore_Dnewline__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.121 0 0) ((bruijn ##.k.26 97 0) (##string ##.string.371)) ((bruijn ##.eqv?.4 99 0) (close _V10_Dlookup__intrinsic__name_D6_k110) (bruijn ##.x.1.11 96 0) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D371.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k110, env)}),
      VGetArg(upenv, 96-1, 0),
      _V10vcore_Dwrite__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.120 0 0) ((bruijn ##.k.26 96 0) (##string ##.string.370)) ((bruijn ##.eqv?.4 98 0) (close _V10_Dlookup__intrinsic__name_D6_k109) (bruijn ##.x.1.11 95 0) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D370.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k109, env)}),
      VGetArg(upenv, 95-1, 0),
      _V10vcore_Ddisplay__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.119 0 0) ((bruijn ##.k.26 95 0) (##string ##.string.369)) ((bruijn ##.eqv?.4 97 0) (close _V10_Dlookup__intrinsic__name_D6_k108) (bruijn ##.x.1.11 94 0) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D369.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k108, env)}),
      VGetArg(upenv, 94-1, 0),
      _V10vcore_Dnewline);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.118 0 0) ((bruijn ##.k.26 94 0) (##string ##.string.368)) ((bruijn ##.eqv?.4 96 0) (close _V10_Dlookup__intrinsic__name_D6_k107) (bruijn ##.x.1.11 93 0) '##vcore.write))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D368.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k107, env)}),
      VGetArg(upenv, 93-1, 0),
      _V10vcore_Dwrite);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.117 0 0) ((bruijn ##.k.26 93 0) (##string ##.string.367)) ((bruijn ##.eqv?.4 95 0) (close _V10_Dlookup__intrinsic__name_D6_k106) (bruijn ##.x.1.11 92 0) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D367.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k106, env)}),
      VGetArg(upenv, 92-1, 0),
      _V10vcore_Ddisplay__word);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.116 0 0) ((bruijn ##.k.26 92 0) (##string ##.string.366)) ((bruijn ##.eqv?.4 94 0) (close _V10_Dlookup__intrinsic__name_D6_k105) (bruijn ##.x.1.11 91 0) '##vcore.read))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D366.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k105, env)}),
      VGetArg(upenv, 91-1, 0),
      _V10vcore_Dread);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.115 0 0) ((bruijn ##.k.26 91 0) (##string ##.string.365)) ((bruijn ##.eqv?.4 93 0) (close _V10_Dlookup__intrinsic__name_D6_k104) (bruijn ##.x.1.11 90 0) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D365.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k104, env)}),
      VGetArg(upenv, 90-1, 0),
      _V10vcore_Dread__line);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.114 0 0) ((bruijn ##.k.26 90 0) (##string ##.string.364)) ((bruijn ##.eqv?.4 92 0) (close _V10_Dlookup__intrinsic__name_D6_k103) (bruijn ##.x.1.11 89 0) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D364.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k103, env)}),
      VGetArg(upenv, 89-1, 0),
      _V10vcore_Dread__char);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.113 0 0) ((bruijn ##.k.26 89 0) (##string ##.string.363)) ((bruijn ##.eqv?.4 91 0) (close _V10_Dlookup__intrinsic__name_D6_k102) (bruijn ##.x.1.11 88 0) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D363.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k102, env)}),
      VGetArg(upenv, 88-1, 0),
      _V10vcore_Deof__object_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.k.26 88 0) (##string ##.string.362)) ((bruijn ##.eqv?.4 90 0) (close _V10_Dlookup__intrinsic__name_D6_k101) (bruijn ##.x.1.11 87 0) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D362.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k101, env)}),
      VGetArg(upenv, 87-1, 0),
      _V10vcore_Dget__output__string);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.111 0 0) ((bruijn ##.k.26 87 0) (##string ##.string.361)) ((bruijn ##.eqv?.4 89 0) (close _V10_Dlookup__intrinsic__name_D6_k100) (bruijn ##.x.1.11 86 0) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D361.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k100, env)}),
      VGetArg(upenv, 86-1, 0),
      _V10vcore_Dopen__output__string);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.110 0 0) ((bruijn ##.k.26 86 0) (##string ##.string.360)) ((bruijn ##.eqv?.4 88 0) (close _V10_Dlookup__intrinsic__name_D6_k99) (bruijn ##.x.1.11 85 0) '##vcore.tty-port?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D360.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k99, env)}),
      VGetArg(upenv, 85-1, 0),
      _V10vcore_Dtty__port_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.109 0 0) ((bruijn ##.k.26 85 0) (##string ##.string.359)) ((bruijn ##.eqv?.4 87 0) (close _V10_Dlookup__intrinsic__name_D6_k98) (bruijn ##.x.1.11 84 0) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D359.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k98, env)}),
      VGetArg(upenv, 84-1, 0),
      _V10vcore_Dclose__stream);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.108 0 0) ((bruijn ##.k.26 84 0) (##string ##.string.358)) ((bruijn ##.eqv?.4 86 0) (close _V10_Dlookup__intrinsic__name_D6_k97) (bruijn ##.x.1.11 83 0) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D358.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k97, env)}),
      VGetArg(upenv, 83-1, 0),
      _V10vcore_Dopen__output__stream);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.107 0 0) ((bruijn ##.k.26 83 0) (##string ##.string.357)) ((bruijn ##.eqv?.4 85 0) (close _V10_Dlookup__intrinsic__name_D6_k96) (bruijn ##.x.1.11 82 0) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D357.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k96, env)}),
      VGetArg(upenv, 82-1, 0),
      _V10vcore_Dopen__input__stream);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.106 0 0) ((bruijn ##.k.26 82 0) (##string ##.string.356)) ((bruijn ##.eqv?.4 84 0) (close _V10_Dlookup__intrinsic__name_D6_k95) (bruijn ##.x.1.11 81 0) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D356.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k95, env)}),
      VGetArg(upenv, 81-1, 0),
      _V10vcore_Ddup__stderr);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.k.26 81 0) (##string ##.string.355)) ((bruijn ##.eqv?.4 83 0) (close _V10_Dlookup__intrinsic__name_D6_k94) (bruijn ##.x.1.11 80 0) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D355.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k94, env)}),
      VGetArg(upenv, 80-1, 0),
      _V10vcore_Ddup__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) ((bruijn ##.k.26 80 0) (##string ##.string.354)) ((bruijn ##.eqv?.4 82 0) (close _V10_Dlookup__intrinsic__name_D6_k93) (bruijn ##.x.1.11 79 0) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D354.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k93, env)}),
      VGetArg(upenv, 79-1, 0),
      _V10vcore_Ddup__stdin);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.k.26 79 0) (##string ##.string.353)) ((bruijn ##.eqv?.4 81 0) (close _V10_Dlookup__intrinsic__name_D6_k92) (bruijn ##.x.1.11 78 0) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D353.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k92, env)}),
      VGetArg(upenv, 78-1, 0),
      _V10vcore_Dstderr___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.102 0 0) ((bruijn ##.k.26 78 0) (##string ##.string.352)) ((bruijn ##.eqv?.4 80 0) (close _V10_Dlookup__intrinsic__name_D6_k91) (bruijn ##.x.1.11 77 0) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D352.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k91, env)}),
      VGetArg(upenv, 77-1, 0),
      _V10vcore_Dstdout___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.k.26 77 0) (##string ##.string.351)) ((bruijn ##.eqv?.4 79 0) (close _V10_Dlookup__intrinsic__name_D6_k90) (bruijn ##.x.1.11 76 0) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D351.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k90, env)}),
      VGetArg(upenv, 76-1, 0),
      _V10vcore_Dstdin___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.100 0 0) ((bruijn ##.k.26 76 0) (##string ##.string.350)) ((bruijn ##.eqv?.4 78 0) (close _V10_Dlookup__intrinsic__name_D6_k89) (bruijn ##.x.1.11 75 0) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D350.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k89, env)}),
      VGetArg(upenv, 75-1, 0),
      _V10vcore_Dchar__integer);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.99 0 0) ((bruijn ##.k.26 75 0) (##string ##.string.349)) ((bruijn ##.eqv?.4 77 0) (close _V10_Dlookup__intrinsic__name_D6_k88) (bruijn ##.x.1.11 74 0) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D349.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k88, env)}),
      VGetArg(upenv, 74-1, 0),
      _V10vcore_Dgensym);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.98 0 0) ((bruijn ##.k.26 74 0) (##string ##.string.348)) ((bruijn ##.eqv?.4 76 0) (close _V10_Dlookup__intrinsic__name_D6_k87) (bruijn ##.x.1.11 73 0) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D348.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k87, env)}),
      VGetArg(upenv, 73-1, 0),
      _V10vcore_Dsymbol___Gstring);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.97 0 0) ((bruijn ##.k.26 73 0) (##string ##.string.347)) ((bruijn ##.eqv?.4 75 0) (close _V10_Dlookup__intrinsic__name_D6_k86) (bruijn ##.x.1.11 72 0) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D347.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k86, env)}),
      VGetArg(upenv, 72-1, 0),
      _V10vcore_Dstring___Gnumber);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.96 0 0) ((bruijn ##.k.26 72 0) (##string ##.string.346)) ((bruijn ##.eqv?.4 74 0) (close _V10_Dlookup__intrinsic__name_D6_k85) (bruijn ##.x.1.11 71 0) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D346.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k85, env)}),
      VGetArg(upenv, 71-1, 0),
      _V10vcore_Dstring___Gsymbol);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.95 0 0) ((bruijn ##.k.26 71 0) (##string ##.string.345)) ((bruijn ##.eqv?.4 73 0) (close _V10_Dlookup__intrinsic__name_D6_k84) (bruijn ##.x.1.11 70 0) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D345.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k84, env)}),
      VGetArg(upenv, 70-1, 0),
      _V10vcore_Dstring__length);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) ((bruijn ##.k.26 70 0) (##string ##.string.344)) ((bruijn ##.eqv?.4 72 0) (close _V10_Dlookup__intrinsic__name_D6_k83) (bruijn ##.x.1.11 69 0) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D344.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k83, env)}),
      VGetArg(upenv, 69-1, 0),
      _V10vcore_Dstring__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.93 0 0) ((bruijn ##.k.26 69 0) (##string ##.string.343)) ((bruijn ##.eqv?.4 71 0) (close _V10_Dlookup__intrinsic__name_D6_k82) (bruijn ##.x.1.11 68 0) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D343.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k82, env)}),
      VGetArg(upenv, 68-1, 0),
      _V10vcore_Dstring__ref);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.92 0 0) ((bruijn ##.k.26 68 0) (##string ##.string.342)) ((bruijn ##.eqv?.4 70 0) (close _V10_Dlookup__intrinsic__name_D6_k81) (bruijn ##.x.1.11 67 0) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D342.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k81, env)}),
      VGetArg(upenv, 67-1, 0),
      _V10vcore_Dstring__copy_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) ((bruijn ##.k.26 67 0) (##string ##.string.341)) ((bruijn ##.eqv?.4 69 0) (close _V10_Dlookup__intrinsic__name_D6_k80) (bruijn ##.x.1.11 66 0) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D341.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k80, env)}),
      VGetArg(upenv, 66-1, 0),
      _V10vcore_Dsubstring);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.k.26 66 0) (##string ##.string.340)) ((bruijn ##.eqv?.4 68 0) (close _V10_Dlookup__intrinsic__name_D6_k79) (bruijn ##.x.1.11 65 0) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D340.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k79, env)}),
      VGetArg(upenv, 65-1, 0),
      _V10vcore_Dmake__string);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.89 0 0) ((bruijn ##.k.26 65 0) (##string ##.string.339)) ((bruijn ##.eqv?.4 67 0) (close _V10_Dlookup__intrinsic__name_D6_k78) (bruijn ##.x.1.11 64 0) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D339.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k78, env)}),
      VGetArg(upenv, 64-1, 0),
      _V10vcore_Dhash__table__delete_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.88 0 0) ((bruijn ##.k.26 64 0) (##string ##.string.338)) ((bruijn ##.eqv?.4 66 0) (close _V10_Dlookup__intrinsic__name_D6_k77) (bruijn ##.x.1.11 63 0) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D338.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k77, env)}),
      VGetArg(upenv, 63-1, 0),
      _V10vcore_Dhash__table__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.87 0 0) ((bruijn ##.k.26 63 0) (##string ##.string.337)) ((bruijn ##.eqv?.4 65 0) (close _V10_Dlookup__intrinsic__name_D6_k76) (bruijn ##.x.1.11 62 0) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D337.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k76, env)}),
      VGetArg(upenv, 62-1, 0),
      _V10vcore_Dhash__table__ref);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.86 0 0) ((bruijn ##.k.26 62 0) (##string ##.string.336)) ((bruijn ##.eqv?.4 64 0) (close _V10_Dlookup__intrinsic__name_D6_k75) (bruijn ##.x.1.11 61 0) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D336.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k75, env)}),
      VGetArg(upenv, 61-1, 0),
      _V10vcore_Dhash__table__hash__function);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.85 0 0) ((bruijn ##.k.26 61 0) (##string ##.string.335)) ((bruijn ##.eqv?.4 63 0) (close _V10_Dlookup__intrinsic__name_D6_k74) (bruijn ##.x.1.11 60 0) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D335.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k74, env)}),
      VGetArg(upenv, 60-1, 0),
      _V10vcore_Dhash__table__equivalence__function);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.84 0 0) ((bruijn ##.k.26 60 0) (##string ##.string.334)) ((bruijn ##.eqv?.4 62 0) (close _V10_Dlookup__intrinsic__name_D6_k73) (bruijn ##.x.1.11 59 0) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D334.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k73, env)}),
      VGetArg(upenv, 59-1, 0),
      _V10vcore_Dmake__hash__table);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.83 0 0) ((bruijn ##.k.26 59 0) (##string ##.string.333)) ((bruijn ##.eqv?.4 61 0) (close _V10_Dlookup__intrinsic__name_D6_k72) (bruijn ##.x.1.11 58 0) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D333.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k72, env)}),
      VGetArg(upenv, 58-1, 0),
      _V10vcore_Drecord__length);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.82 0 0) ((bruijn ##.k.26 58 0) (##string ##.string.332)) ((bruijn ##.eqv?.4 60 0) (close _V10_Dlookup__intrinsic__name_D6_k71) (bruijn ##.x.1.11 57 0) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D332.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k71, env)}),
      VGetArg(upenv, 57-1, 0),
      _V10vcore_Drecord__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.81 0 0) ((bruijn ##.k.26 57 0) (##string ##.string.331)) ((bruijn ##.eqv?.4 59 0) (close _V10_Dlookup__intrinsic__name_D6_k70) (bruijn ##.x.1.11 56 0) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D331.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k70, env)}),
      VGetArg(upenv, 56-1, 0),
      _V10vcore_Drecord__ref);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.k.26 56 0) (##string ##.string.330)) ((bruijn ##.eqv?.4 58 0) (close _V10_Dlookup__intrinsic__name_D6_k69) (bruijn ##.x.1.11 55 0) '##vcore.record))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D330.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k69, env)}),
      VGetArg(upenv, 55-1, 0),
      _V10vcore_Drecord);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.79 0 0) ((bruijn ##.k.26 55 0) (##string ##.string.329)) ((bruijn ##.eqv?.4 57 0) (close _V10_Dlookup__intrinsic__name_D6_k68) (bruijn ##.x.1.11 54 0) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D329.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k68, env)}),
      VGetArg(upenv, 54-1, 0),
      _V10vcore_Dvector__length);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.78 0 0) ((bruijn ##.k.26 54 0) (##string ##.string.328)) ((bruijn ##.eqv?.4 56 0) (close _V10_Dlookup__intrinsic__name_D6_k67) (bruijn ##.x.1.11 53 0) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D328.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k67, env)}),
      VGetArg(upenv, 53-1, 0),
      _V10vcore_Dvector__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.77 0 0) ((bruijn ##.k.26 53 0) (##string ##.string.327)) ((bruijn ##.eqv?.4 55 0) (close _V10_Dlookup__intrinsic__name_D6_k66) (bruijn ##.x.1.11 52 0) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D327.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k66, env)}),
      VGetArg(upenv, 52-1, 0),
      _V10vcore_Dvector__ref);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.76 0 0) ((bruijn ##.k.26 52 0) (##string ##.string.326)) ((bruijn ##.eqv?.4 54 0) (close _V10_Dlookup__intrinsic__name_D6_k65) (bruijn ##.x.1.11 51 0) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D326.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k65, env)}),
      VGetArg(upenv, 51-1, 0),
      _V10vcore_Dlist___Gvector);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.75 0 0) ((bruijn ##.k.26 51 0) (##string ##.string.325)) ((bruijn ##.eqv?.4 53 0) (close _V10_Dlookup__intrinsic__name_D6_k64) (bruijn ##.x.1.11 50 0) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D325.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k64, env)}),
      VGetArg(upenv, 50-1, 0),
      _V10vcore_Dset__cdr_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.74 0 0) ((bruijn ##.k.26 50 0) (##string ##.string.324)) ((bruijn ##.eqv?.4 52 0) (close _V10_Dlookup__intrinsic__name_D6_k63) (bruijn ##.x.1.11 49 0) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D324.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k63, env)}),
      VGetArg(upenv, 49-1, 0),
      _V10vcore_Dset__car_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.73 0 0) ((bruijn ##.k.26 49 0) (##string ##.string.323)) ((bruijn ##.eqv?.4 51 0) (close _V10_Dlookup__intrinsic__name_D6_k62) (bruijn ##.x.1.11 48 0) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D323.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k62, env)}),
      VGetArg(upenv, 48-1, 0),
      _V10vcore_Dcdr);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.72 0 0) ((bruijn ##.k.26 48 0) (##string ##.string.322)) ((bruijn ##.eqv?.4 50 0) (close _V10_Dlookup__intrinsic__name_D6_k61) (bruijn ##.x.1.11 47 0) '##vcore.car))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D322.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k61, env)}),
      VGetArg(upenv, 47-1, 0),
      _V10vcore_Dcar);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dlookup__intrinsic__name_D6_k59) (close _V10_Dlookup__intrinsic__name_D6_k60))
    V_CALL_FUNC(_V10_Dlookup__intrinsic__name_D6_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k60, env)}));
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.71 0 0) ((bruijn ##.k.26 46 0) (##string ##.string.321)) ((bruijn ##.eqv?.4 48 0) (close _V10_Dlookup__intrinsic__name_D6_k58) (bruijn ##.x.1.11 45 0) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D321.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k58, env)}),
      VGetArg(upenv, 45-1, 0),
      _V10vcore_Dcons);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.70 0 0) ((bruijn ##.k.26 45 0) (##string ##.string.320)) ((bruijn ##.eqv?.4 47 0) (close _V10_Dlookup__intrinsic__name_D6_k57) (bruijn ##.x.1.11 44 0) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D320.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k57, env)}),
      VGetArg(upenv, 44-1, 0),
      _V10vcore_Dload__library);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.69 0 0) ((bruijn ##.k.26 44 0) (##string ##.string.319)) ((bruijn ##.eqv?.4 46 0) (close _V10_Dlookup__intrinsic__name_D6_k56) (bruijn ##.x.1.11 43 0) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D319.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k56, env)}),
      VGetArg(upenv, 43-1, 0),
      _V10vcore_Dmake__import);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.68 0 0) ((bruijn ##.k.26 43 0) (##string ##.string.318)) ((bruijn ##.eqv?.4 45 0) (close _V10_Dlookup__intrinsic__name_D6_k55) (bruijn ##.x.1.11 42 0) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D318.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k55, env)}),
      VGetArg(upenv, 42-1, 0),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.67 0 0) ((bruijn ##.k.26 42 0) (##string ##.string.315)) ((bruijn ##.eqv?.4 44 0) (close _V10_Dlookup__intrinsic__name_D6_k54) (bruijn ##.x.1.11 41 0) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D315.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k54, env)}),
      VGetArg(upenv, 41-1, 0),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.66 0 0) ((bruijn ##.k.26 41 0) (##string ##.string.317)) ((bruijn ##.eqv?.4 43 0) (close _V10_Dlookup__intrinsic__name_D6_k53) (bruijn ##.x.1.11 40 0) '##vcore.define))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D317.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k53, env)}),
      VGetArg(upenv, 40-1, 0),
      _V10vcore_Ddefine);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.65 0 0) ((bruijn ##.k.26 40 0) (##string ##.string.316)) ((bruijn ##.eqv?.4 42 0) (close _V10_Dlookup__intrinsic__name_D6_k52) (bruijn ##.x.1.11 39 0) '##vcore.function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D316.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k52, env)}),
      VGetArg(upenv, 39-1, 0),
      _V10vcore_Dfunction);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.64 0 0) ((bruijn ##.k.26 39 0) (##string ##.string.315)) ((bruijn ##.eqv?.4 41 0) (close _V10_Dlookup__intrinsic__name_D6_k51) (bruijn ##.x.1.11 38 0) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D315.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k51, env)}),
      VGetArg(upenv, 38-1, 0),
      _V10vcore_Dset__global_B);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.63 0 0) ((bruijn ##.k.26 38 0) (##string ##.string.314)) ((bruijn ##.eqv?.4 40 0) (close _V10_Dlookup__intrinsic__name_D6_k50) (bruijn ##.x.1.11 37 0) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D314.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k50, env)}),
      VGetArg(upenv, 37-1, 0),
      _V10vcore_Ddefine__global);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.62 0 0) ((bruijn ##.k.26 37 0) (##string ##.string.313)) ((bruijn ##.eqv?.4 39 0) (close _V10_Dlookup__intrinsic__name_D6_k49) (bruijn ##.x.1.11 36 0) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D313.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k49, env)}),
      VGetArg(upenv, 36-1, 0),
      _V10vcore_Dexit);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.61 0 0) ((bruijn ##.k.26 36 0) (##string ##.string.312)) ((bruijn ##.eqv?.4 38 0) (close _V10_Dlookup__intrinsic__name_D6_k48) (bruijn ##.x.1.11 35 0) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D312.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k48, env)}),
      VGetArg(upenv, 35-1, 0),
      _V10vcore_Dabort);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.60 0 0) ((bruijn ##.k.26 35 0) (##string ##.string.311)) ((bruijn ##.eqv?.4 37 0) (close _V10_Dlookup__intrinsic__name_D6_k47) (bruijn ##.x.1.11 34 0) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D311.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k47, env)}),
      VGetArg(upenv, 34-1, 0),
      _V10vcore_Dapply__cps);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.59 0 0) ((bruijn ##.k.26 34 0) (##string ##.string.310)) ((bruijn ##.eqv?.4 36 0) (close _V10_Dlookup__intrinsic__name_D6_k46) (bruijn ##.x.1.11 33 0) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D310.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k46, env)}),
      VGetArg(upenv, 33-1, 0),
      _V10vcore_Dapply);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.58 0 0) ((bruijn ##.k.26 33 0) (##string ##.string.309)) ((bruijn ##.eqv?.4 35 0) (close _V10_Dlookup__intrinsic__name_D6_k45) (bruijn ##.x.1.11 32 0) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D309.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k45, env)}),
      VGetArg(upenv, 32-1, 0),
      _V10vcore_Dcall__with__values);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.57 0 0) ((bruijn ##.k.26 32 0) (##string ##.string.308)) ((bruijn ##.eqv?.4 34 0) (close _V10_Dlookup__intrinsic__name_D6_k44) (bruijn ##.x.1.11 31 0) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D308.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k44, env)}),
      VGetArg(upenv, 31-1, 0),
      _V10vcore_Dcall_Wcc);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.56 0 0) ((bruijn ##.k.26 31 0) (##string ##.string.307)) ((bruijn ##.eqv?.4 33 0) (close _V10_Dlookup__intrinsic__name_D6_k43) (bruijn ##.x.1.11 30 0) '##vcore.next))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D307.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k43, env)}),
      VGetArg(upenv, 30-1, 0),
      _V10vcore_Dnext);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.55 0 0) ((bruijn ##.k.26 30 0) (##string ##.string.306)) ((bruijn ##.eqv?.4 32 0) (close _V10_Dlookup__intrinsic__name_D6_k42) (bruijn ##.x.1.11 29 0) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D306.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k42, env)}),
      VGetArg(upenv, 29-1, 0),
      _V10vcore_Draise);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.54 0 0) ((bruijn ##.k.26 29 0) (##string ##.string.305)) ((bruijn ##.eqv?.4 31 0) (close _V10_Dlookup__intrinsic__name_D6_k41) (bruijn ##.x.1.11 28 0) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D305.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k41, env)}),
      VGetArg(upenv, 28-1, 0),
      _V10vcore_Dpop__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.53 0 0) ((bruijn ##.k.26 28 0) (##string ##.string.304)) ((bruijn ##.eqv?.4 30 0) (close _V10_Dlookup__intrinsic__name_D6_k40) (bruijn ##.x.1.11 27 0) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D304.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k40, env)}),
      VGetArg(upenv, 27-1, 0),
      _V10vcore_Dpush__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.52 0 0) ((bruijn ##.k.26 27 0) (##string ##.string.303)) ((bruijn ##.eqv?.4 29 0) (close _V10_Dlookup__intrinsic__name_D6_k39) (bruijn ##.x.1.11 26 0) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D303.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k39, env)}),
      VGetArg(upenv, 26-1, 0),
      _V10vcore_Dget__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.51 0 0) ((bruijn ##.k.26 26 0) (##string ##.string.302)) ((bruijn ##.eqv?.4 28 0) (close _V10_Dlookup__intrinsic__name_D6_k38) (bruijn ##.x.1.11 25 0) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D302.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k38, env)}),
      VGetArg(upenv, 25-1, 0),
      _V10vcore_Dpop__dynamic);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.50 0 0) ((bruijn ##.k.26 25 0) (##string ##.string.301)) ((bruijn ##.eqv?.4 27 0) (close _V10_Dlookup__intrinsic__name_D6_k37) (bruijn ##.x.1.11 24 0) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D301.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k37, env)}),
      VGetArg(upenv, 24-1, 0),
      _V10vcore_Dpush__dynamic);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.49 0 0) ((bruijn ##.k.26 24 0) (##string ##.string.300)) ((bruijn ##.eqv?.4 26 0) (close _V10_Dlookup__intrinsic__name_D6_k36) (bruijn ##.x.1.11 23 0) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D300.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k36, env)}),
      VGetArg(upenv, 23-1, 0),
      _V10vcore_Dget__dynamics);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.48 0 0) ((bruijn ##.k.26 23 0) (##string ##.string.299)) ((bruijn ##.eqv?.4 25 0) (close _V10_Dlookup__intrinsic__name_D6_k35) (bruijn ##.x.1.11 22 0) '##vcore.not))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D299.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k35, env)}),
      VGetArg(upenv, 22-1, 0),
      _V10vcore_Dnot);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.47 0 0) ((bruijn ##.k.26 22 0) (##string ##.string.298)) ((bruijn ##.eqv?.4 24 0) (close _V10_Dlookup__intrinsic__name_D6_k34) (bruijn ##.x.1.11 21 0) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D298.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k34, env)}),
      VGetArg(upenv, 21-1, 0),
      _V10vcore_Deqv_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.46 0 0) ((bruijn ##.k.26 21 0) (##string ##.string.297)) ((bruijn ##.eqv?.4 23 0) (close _V10_Dlookup__intrinsic__name_D6_k33) (bruijn ##.x.1.11 20 0) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D297.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k33, env)}),
      VGetArg(upenv, 20-1, 0),
      _V10vcore_Dblob_E_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.45 0 0) ((bruijn ##.k.26 20 0) (##string ##.string.296)) ((bruijn ##.eqv?.4 22 0) (close _V10_Dlookup__intrinsic__name_D6_k32) (bruijn ##.x.1.11 19 0) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D296.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k32, env)}),
      VGetArg(upenv, 19-1, 0),
      _V10vcore_Dsymbol_E_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.44 0 0) ((bruijn ##.k.26 19 0) (##string ##.string.295)) ((bruijn ##.eqv?.4 21 0) (close _V10_Dlookup__intrinsic__name_D6_k31) (bruijn ##.x.1.11 18 0) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D295.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k31, env)}),
      VGetArg(upenv, 18-1, 0),
      _V10vcore_Deq_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.43 0 0) ((bruijn ##.k.26 18 0) (##string ##.string.294)) ((bruijn ##.eqv?.4 20 0) (close _V10_Dlookup__intrinsic__name_D6_k30) (bruijn ##.x.1.11 17 0) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D294.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k30, env)}),
      VGetArg(upenv, 17-1, 0),
      _V10vcore_Dchar_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.42 0 0) ((bruijn ##.k.26 17 0) (##string ##.string.293)) ((bruijn ##.eqv?.4 19 0) (close _V10_Dlookup__intrinsic__name_D6_k29) (bruijn ##.x.1.11 16 0) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D293.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k29, env)}),
      VGetArg(upenv, 16-1, 0),
      _V10vcore_Ddouble_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.41 0 0) ((bruijn ##.k.26 16 0) (##string ##.string.292)) ((bruijn ##.eqv?.4 18 0) (close _V10_Dlookup__intrinsic__name_D6_k28) (bruijn ##.x.1.11 15 0) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D292.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k28, env)}),
      VGetArg(upenv, 15-1, 0),
      _V10vcore_Dint_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.40 0 0) ((bruijn ##.k.26 15 0) (##string ##.string.291)) ((bruijn ##.eqv?.4 17 0) (close _V10_Dlookup__intrinsic__name_D6_k27) (bruijn ##.x.1.11 14 0) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D291.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k27, env)}),
      VGetArg(upenv, 14-1, 0),
      _V10vcore_Dstring_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.39 0 0) ((bruijn ##.k.26 14 0) (##string ##.string.290)) ((bruijn ##.eqv?.4 16 0) (close _V10_Dlookup__intrinsic__name_D6_k26) (bruijn ##.x.1.11 13 0) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D290.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k26, env)}),
      VGetArg(upenv, 13-1, 0),
      _V10vcore_Dsymbol_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.38 0 0) ((bruijn ##.k.26 13 0) (##string ##.string.289)) ((bruijn ##.eqv?.4 15 0) (close _V10_Dlookup__intrinsic__name_D6_k25) (bruijn ##.x.1.11 12 0) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D289.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k25, env)}),
      VGetArg(upenv, 12-1, 0),
      _V10vcore_Dblob_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.37 0 0) ((bruijn ##.k.26 12 0) (##string ##.string.288)) ((bruijn ##.eqv?.4 14 0) (close _V10_Dlookup__intrinsic__name_D6_k24) (bruijn ##.x.1.11 11 0) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D288.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k24, env)}),
      VGetArg(upenv, 11-1, 0),
      _V10vcore_Dprocedure_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.36 0 0) ((bruijn ##.k.26 11 0) (##string ##.string.287)) ((bruijn ##.eqv?.4 13 0) (close _V10_Dlookup__intrinsic__name_D6_k23) (bruijn ##.x.1.11 10 0) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D287.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k23, env)}),
      VGetArg(upenv, 10-1, 0),
      _V10vcore_Dvector_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.35 0 0) ((bruijn ##.k.26 10 0) (##string ##.string.286)) ((bruijn ##.eqv?.4 12 0) (close _V10_Dlookup__intrinsic__name_D6_k22) (bruijn ##.x.1.11 9 0) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D286.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k22, env)}),
      VGetArg(upenv, 9-1, 0),
      _V10vcore_Drecord_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.34 0 0) ((bruijn ##.k.26 9 0) (##string ##.string.285)) ((bruijn ##.eqv?.4 11 0) (close _V10_Dlookup__intrinsic__name_D6_k21) (bruijn ##.x.1.11 8 0) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D285.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k21, env)}),
      VGetArg(upenv, 8-1, 0),
      _V10vcore_Dpair_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.33 0 0) ((bruijn ##.k.26 8 0) (##string ##.string.284)) ((bruijn ##.eqv?.4 10 0) (close _V10_Dlookup__intrinsic__name_D6_k20) (bruijn ##.x.1.11 7 0) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D284.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k20, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10vcore_Dnull_Q);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.32 0 0) ((bruijn ##.k.26 7 0) (##string ##.string.283)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__intrinsic__name_D6_k19) (bruijn ##.x.1.11 6 0) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D283.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k19, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10vcore_Dremainder);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.31 0 0) ((bruijn ##.k.26 6 0) (##string ##.string.282)) ((bruijn ##.eqv?.4 8 0) (close _V10_Dlookup__intrinsic__name_D6_k18) (bruijn ##.x.1.11 5 0) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D282.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k18, env)}),
      VGetArg(upenv, 5-1, 0),
      _V10vcore_Dquotient);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.30 0 0) ((bruijn ##.k.26 5 0) (##string ##.string.281)) ((bruijn ##.eqv?.4 7 0) (close _V10_Dlookup__intrinsic__name_D6_k17) (bruijn ##.x.1.11 4 0) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10_Dstring_D281.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k17, env)}),
      upenv->up->up->up->vars[0],
      _V10vcore_Dcmp);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.29 0 0) ((bruijn ##.k.26 4 0) (##string ##.string.280)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__intrinsic__name_D6_k16) (bruijn ##.x.1.11 3 0) '##vcore./))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D280.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k16, env)}),
      upenv->up->up->vars[0],
      _V10vcore_D_W);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.28 0 0) ((bruijn ##.k.26 3 0) (##string ##.string.279)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__intrinsic__name_D6_k15) (bruijn ##.x.1.11 2 0) '##vcore.*))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D279.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k15, env)}),
      upenv->up->vars[0],
      _V10vcore_D_S);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.27 0 0) ((bruijn ##.k.26 2 0) (##string ##.string.278)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__intrinsic__name_D6_k14) (bruijn ##.x.1.11 1 0) '##vcore.-))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D278.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k14, env)}),
      upenv->vars[0],
      _V10vcore_D__);
}
 }
}
static void _V10_Dlookup__intrinsic__name_D6_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_lambda5" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_lambda5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__intrinsic__name_D6_k13) (bruijn ##.x.1.11 0 0) '##vcore.+)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_k13, env)}),
      _var0,
      _V10vcore_D_P);
 }
}
static void _V10_Dlookup__intrinsic__name_D6_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic__name_D6_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic__name_D6_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic__name_D6_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dlookup__intrinsic__name_D6_lambda5) (bruijn ##.sym.10 0 1))
    V_CALL_FUNC(_V10_Dlookup__intrinsic__name_D6_lambda5, env, runtime,
      _var1);
 }
}
static void _V10_Dlookup__intrinsic_D7_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k180, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.263 1 0) ((bruijn ##.k.264 0 0) (bruijn ##.p.263 1 0)) ((bruijn ##.eqv?.4 54 0) (bruijn ##.k.264 0 0) (bruijn ##.x.2.13 51 0) '##vcore.qcons))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      _var0,
      VGetArg(upenv, 51-1, 0),
      _V10vcore_Dqcons);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k249, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.262 0 0) ((bruijn ##.k.144 120 0) (##intrinsic ##vcore.await)) ((bruijn ##.k.144 120 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      _V40_V10vcore_Dawait);
} else {
    V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.261 0 0) ((bruijn ##.k.144 119 0) (##intrinsic ##vcore.async)) ((bruijn ##.eqv?.4 121 0) (close _V10_Dlookup__intrinsic_D7_k249) (bruijn ##.x.2.13 118 0) '##vcore.await))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 119-1, 0), runtime,
      _V40_V10vcore_Dasync);
} else {
    V_CALL(VGetArg(upenv, 121-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k249, env)}),
      VGetArg(upenv, 118-1, 0),
      _V10vcore_Dawait);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.260 0 0) ((bruijn ##.k.144 118 0) (##intrinsic ##vcore.fiber-fork-list)) ((bruijn ##.eqv?.4 120 0) (close _V10_Dlookup__intrinsic_D7_k248) (bruijn ##.x.2.13 117 0) '##vcore.async))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      _V40_V10vcore_Dfiber__fork__list);
} else {
    V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k248, env)}),
      VGetArg(upenv, 117-1, 0),
      _V10vcore_Dasync);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.259 0 0) ((bruijn ##.k.144 117 0) (##intrinsic ##vcore.random-advance!)) ((bruijn ##.eqv?.4 119 0) (close _V10_Dlookup__intrinsic_D7_k247) (bruijn ##.x.2.13 116 0) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      _V40_V10vcore_Drandom__advance_B);
} else {
    V_CALL(VGetArg(upenv, 119-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k247, env)}),
      VGetArg(upenv, 116-1, 0),
      _V10vcore_Dfiber__fork__list);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.258 0 0) ((bruijn ##.k.144 116 0) (##intrinsic ##vcore.random-sample-float!)) ((bruijn ##.eqv?.4 118 0) (close _V10_Dlookup__intrinsic_D7_k246) (bruijn ##.x.2.13 115 0) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      _V40_V10vcore_Drandom__sample__float_B);
} else {
    V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k246, env)}),
      VGetArg(upenv, 115-1, 0),
      _V10vcore_Drandom__advance_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.k.144 115 0) (##intrinsic ##vcore.random-sample-bounded!)) ((bruijn ##.eqv?.4 117 0) (close _V10_Dlookup__intrinsic_D7_k245) (bruijn ##.x.2.13 114 0) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      _V40_V10vcore_Drandom__sample__bounded_B);
} else {
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k245, env)}),
      VGetArg(upenv, 114-1, 0),
      _V10vcore_Drandom__sample__float_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.256 0 0) ((bruijn ##.k.144 114 0) (##intrinsic ##vcore.random-sample!)) ((bruijn ##.eqv?.4 116 0) (close _V10_Dlookup__intrinsic_D7_k244) (bruijn ##.x.2.13 113 0) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      _V40_V10vcore_Drandom__sample_B);
} else {
    V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k244, env)}),
      VGetArg(upenv, 113-1, 0),
      _V10vcore_Drandom__sample__bounded_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) ((bruijn ##.k.144 113 0) (##intrinsic ##vcore.random-copy)) ((bruijn ##.eqv?.4 115 0) (close _V10_Dlookup__intrinsic_D7_k243) (bruijn ##.x.2.13 112 0) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      _V40_V10vcore_Drandom__copy);
} else {
    V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k243, env)}),
      VGetArg(upenv, 112-1, 0),
      _V10vcore_Drandom__sample_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.254 0 0) ((bruijn ##.k.144 112 0) (##intrinsic ##vcore.make-random)) ((bruijn ##.eqv?.4 114 0) (close _V10_Dlookup__intrinsic_D7_k242) (bruijn ##.x.2.13 111 0) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      _V40_V10vcore_Dmake__random);
} else {
    V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k242, env)}),
      VGetArg(upenv, 111-1, 0),
      _V10vcore_Drandom__copy);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.253 0 0) ((bruijn ##.k.144 111 0) (##intrinsic ##vcore.command-line)) ((bruijn ##.eqv?.4 113 0) (close _V10_Dlookup__intrinsic_D7_k241) (bruijn ##.x.2.13 110 0) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      _V40_V10vcore_Dcommand__line);
} else {
    V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k241, env)}),
      VGetArg(upenv, 110-1, 0),
      _V10vcore_Dmake__random);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) ((bruijn ##.k.144 110 0) (##intrinsic ##vcore.make-temporary-file)) ((bruijn ##.eqv?.4 112 0) (close _V10_Dlookup__intrinsic_D7_k240) (bruijn ##.x.2.13 109 0) '##vcore.command-line))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      _V40_V10vcore_Dmake__temporary__file);
} else {
    V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k240, env)}),
      VGetArg(upenv, 109-1, 0),
      _V10vcore_Dcommand__line);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.251 0 0) ((bruijn ##.k.144 109 0) (##intrinsic ##vcore.open-output-process)) ((bruijn ##.eqv?.4 111 0) (close _V10_Dlookup__intrinsic_D7_k239) (bruijn ##.x.2.13 108 0) '##vcore.make-temporary-file))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      _V40_V10vcore_Dopen__output__process);
} else {
    V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k239, env)}),
      VGetArg(upenv, 108-1, 0),
      _V10vcore_Dmake__temporary__file);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.250 0 0) ((bruijn ##.k.144 108 0) (##intrinsic ##vcore.open-input-process)) ((bruijn ##.eqv?.4 110 0) (close _V10_Dlookup__intrinsic_D7_k238) (bruijn ##.x.2.13 107 0) '##vcore.open-output-process))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      _V40_V10vcore_Dopen__input__process);
} else {
    V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k238, env)}),
      VGetArg(upenv, 107-1, 0),
      _V10vcore_Dopen__output__process);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.249 0 0) ((bruijn ##.k.144 107 0) (##intrinsic ##vcore.system)) ((bruijn ##.eqv?.4 109 0) (close _V10_Dlookup__intrinsic_D7_k237) (bruijn ##.x.2.13 106 0) '##vcore.open-input-process))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      _V40_V10vcore_Dsystem);
} else {
    V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k237, env)}),
      VGetArg(upenv, 106-1, 0),
      _V10vcore_Dopen__input__process);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.248 0 0) ((bruijn ##.k.144 106 0) (##intrinsic ##vcore.garbage-collect)) ((bruijn ##.eqv?.4 108 0) (close _V10_Dlookup__intrinsic_D7_k236) (bruijn ##.x.2.13 105 0) '##vcore.system))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      _V40_V10vcore_Dgarbage__collect);
} else {
    V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k236, env)}),
      VGetArg(upenv, 105-1, 0),
      _V10vcore_Dsystem);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((bruijn ##.k.144 105 0) (##intrinsic ##vcore.finalize!)) ((bruijn ##.eqv?.4 107 0) (close _V10_Dlookup__intrinsic_D7_k235) (bruijn ##.x.2.13 104 0) '##vcore.garbage-collect))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      _V40_V10vcore_Dfinalize_B);
} else {
    V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k235, env)}),
      VGetArg(upenv, 104-1, 0),
      _V10vcore_Dgarbage__collect);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.246 0 0) ((bruijn ##.k.144 104 0) (##intrinsic ##vcore.has-finalizer?)) ((bruijn ##.eqv?.4 106 0) (close _V10_Dlookup__intrinsic_D7_k234) (bruijn ##.x.2.13 103 0) '##vcore.finalize!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      _V40_V10vcore_Dhas__finalizer_Q);
} else {
    V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k234, env)}),
      VGetArg(upenv, 103-1, 0),
      _V10vcore_Dfinalize_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.245 0 0) ((bruijn ##.k.144 103 0) (##intrinsic ##vcore.set-finalizer!)) ((bruijn ##.eqv?.4 105 0) (close _V10_Dlookup__intrinsic_D7_k233) (bruijn ##.x.2.13 102 0) '##vcore.has-finalizer?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      _V40_V10vcore_Dset__finalizer_B);
} else {
    V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k233, env)}),
      VGetArg(upenv, 102-1, 0),
      _V10vcore_Dhas__finalizer_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.244 0 0) ((bruijn ##.k.144 102 0) (##intrinsic ##vcore.newline-stdout)) ((bruijn ##.eqv?.4 104 0) (close _V10_Dlookup__intrinsic_D7_k232) (bruijn ##.x.2.13 101 0) '##vcore.set-finalizer!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      _V40_V10vcore_Dnewline__stdout);
} else {
    V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k232, env)}),
      VGetArg(upenv, 101-1, 0),
      _V10vcore_Dset__finalizer_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.243 0 0) ((bruijn ##.k.144 101 0) (##intrinsic ##vcore.write-stdout)) ((bruijn ##.eqv?.4 103 0) (close _V10_Dlookup__intrinsic_D7_k231) (bruijn ##.x.2.13 100 0) '##vcore.newline-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      _V40_V10vcore_Dwrite__stdout);
} else {
    V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k231, env)}),
      VGetArg(upenv, 100-1, 0),
      _V10vcore_Dnewline__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.144 100 0) (##intrinsic ##vcore.display-stdout)) ((bruijn ##.eqv?.4 102 0) (close _V10_Dlookup__intrinsic_D7_k230) (bruijn ##.x.2.13 99 0) '##vcore.write-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      _V40_V10vcore_Ddisplay__stdout);
} else {
    V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k230, env)}),
      VGetArg(upenv, 99-1, 0),
      _V10vcore_Dwrite__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.k.144 99 0) (##intrinsic ##vcore.newline)) ((bruijn ##.eqv?.4 101 0) (close _V10_Dlookup__intrinsic_D7_k229) (bruijn ##.x.2.13 98 0) '##vcore.display-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      _V40_V10vcore_Dnewline);
} else {
    V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k229, env)}),
      VGetArg(upenv, 98-1, 0),
      _V10vcore_Ddisplay__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.k.144 98 0) (##intrinsic ##vcore.write)) ((bruijn ##.eqv?.4 100 0) (close _V10_Dlookup__intrinsic_D7_k228) (bruijn ##.x.2.13 97 0) '##vcore.newline))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      _V40_V10vcore_Dwrite);
} else {
    V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k228, env)}),
      VGetArg(upenv, 97-1, 0),
      _V10vcore_Dnewline);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) ((bruijn ##.k.144 97 0) (##intrinsic ##vcore.display-word)) ((bruijn ##.eqv?.4 99 0) (close _V10_Dlookup__intrinsic_D7_k227) (bruijn ##.x.2.13 96 0) '##vcore.write))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      _V40_V10vcore_Ddisplay__word);
} else {
    V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k227, env)}),
      VGetArg(upenv, 96-1, 0),
      _V10vcore_Dwrite);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) ((bruijn ##.k.144 96 0) (##intrinsic ##vcore.read)) ((bruijn ##.eqv?.4 98 0) (close _V10_Dlookup__intrinsic_D7_k226) (bruijn ##.x.2.13 95 0) '##vcore.display-word))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      _V40_V10vcore_Dread);
} else {
    V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k226, env)}),
      VGetArg(upenv, 95-1, 0),
      _V10vcore_Ddisplay__word);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.237 0 0) ((bruijn ##.k.144 95 0) (##intrinsic ##vcore.read-line)) ((bruijn ##.eqv?.4 97 0) (close _V10_Dlookup__intrinsic_D7_k225) (bruijn ##.x.2.13 94 0) '##vcore.read))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      _V40_V10vcore_Dread__line);
} else {
    V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k225, env)}),
      VGetArg(upenv, 94-1, 0),
      _V10vcore_Dread);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.236 0 0) ((bruijn ##.k.144 94 0) (##intrinsic ##vcore.read-char)) ((bruijn ##.eqv?.4 96 0) (close _V10_Dlookup__intrinsic_D7_k224) (bruijn ##.x.2.13 93 0) '##vcore.read-line))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      _V40_V10vcore_Dread__char);
} else {
    V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k224, env)}),
      VGetArg(upenv, 93-1, 0),
      _V10vcore_Dread__line);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.235 0 0) ((bruijn ##.k.144 93 0) (##intrinsic ##vcore.eof-object?)) ((bruijn ##.eqv?.4 95 0) (close _V10_Dlookup__intrinsic_D7_k223) (bruijn ##.x.2.13 92 0) '##vcore.read-char))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      _V40_V10vcore_Deof__object_Q);
} else {
    V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k223, env)}),
      VGetArg(upenv, 92-1, 0),
      _V10vcore_Dread__char);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.234 0 0) ((bruijn ##.k.144 92 0) (##intrinsic ##vcore.get-output-string)) ((bruijn ##.eqv?.4 94 0) (close _V10_Dlookup__intrinsic_D7_k222) (bruijn ##.x.2.13 91 0) '##vcore.eof-object?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      _V40_V10vcore_Dget__output__string);
} else {
    V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k222, env)}),
      VGetArg(upenv, 91-1, 0),
      _V10vcore_Deof__object_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.233 0 0) ((bruijn ##.k.144 91 0) (##intrinsic ##vcore.open-output-string)) ((bruijn ##.eqv?.4 93 0) (close _V10_Dlookup__intrinsic_D7_k221) (bruijn ##.x.2.13 90 0) '##vcore.get-output-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      _V40_V10vcore_Dopen__output__string);
} else {
    V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k221, env)}),
      VGetArg(upenv, 90-1, 0),
      _V10vcore_Dget__output__string);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.144 90 0) (##intrinsic ##vcore.close-stream)) ((bruijn ##.eqv?.4 92 0) (close _V10_Dlookup__intrinsic_D7_k220) (bruijn ##.x.2.13 89 0) '##vcore.open-output-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      _V40_V10vcore_Dclose__stream);
} else {
    V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k220, env)}),
      VGetArg(upenv, 89-1, 0),
      _V10vcore_Dopen__output__string);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.231 0 0) ((bruijn ##.k.144 89 0) (##intrinsic ##vcore.open-output-stream)) ((bruijn ##.eqv?.4 91 0) (close _V10_Dlookup__intrinsic_D7_k219) (bruijn ##.x.2.13 88 0) '##vcore.close-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      _V40_V10vcore_Dopen__output__stream);
} else {
    V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k219, env)}),
      VGetArg(upenv, 88-1, 0),
      _V10vcore_Dclose__stream);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.k.144 88 0) (##intrinsic ##vcore.open-input-stream)) ((bruijn ##.eqv?.4 90 0) (close _V10_Dlookup__intrinsic_D7_k218) (bruijn ##.x.2.13 87 0) '##vcore.open-output-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      _V40_V10vcore_Dopen__input__stream);
} else {
    V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k218, env)}),
      VGetArg(upenv, 87-1, 0),
      _V10vcore_Dopen__output__stream);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.k.144 87 0) (##intrinsic ##vcore.dup-stderr)) ((bruijn ##.eqv?.4 89 0) (close _V10_Dlookup__intrinsic_D7_k217) (bruijn ##.x.2.13 86 0) '##vcore.open-input-stream))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      _V40_V10vcore_Ddup__stderr);
} else {
    V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k217, env)}),
      VGetArg(upenv, 86-1, 0),
      _V10vcore_Dopen__input__stream);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.228 0 0) ((bruijn ##.k.144 86 0) (##intrinsic ##vcore.dup-stdout)) ((bruijn ##.eqv?.4 88 0) (close _V10_Dlookup__intrinsic_D7_k216) (bruijn ##.x.2.13 85 0) '##vcore.dup-stderr))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      _V40_V10vcore_Ddup__stdout);
} else {
    V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k216, env)}),
      VGetArg(upenv, 85-1, 0),
      _V10vcore_Ddup__stderr);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.227 0 0) ((bruijn ##.k.144 85 0) (##intrinsic ##vcore.dup-stdin)) ((bruijn ##.eqv?.4 87 0) (close _V10_Dlookup__intrinsic_D7_k215) (bruijn ##.x.2.13 84 0) '##vcore.dup-stdout))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      _V40_V10vcore_Ddup__stdin);
} else {
    V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k215, env)}),
      VGetArg(upenv, 84-1, 0),
      _V10vcore_Ddup__stdout);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.226 0 0) ((bruijn ##.k.144 84 0) (##intrinsic ##vcore.stderr->port)) ((bruijn ##.eqv?.4 86 0) (close _V10_Dlookup__intrinsic_D7_k214) (bruijn ##.x.2.13 83 0) '##vcore.dup-stdin))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      _V40_V10vcore_Dstderr___Gport);
} else {
    V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k214, env)}),
      VGetArg(upenv, 83-1, 0),
      _V10vcore_Ddup__stdin);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.225 0 0) ((bruijn ##.k.144 83 0) (##intrinsic ##vcore.stdout->port)) ((bruijn ##.eqv?.4 85 0) (close _V10_Dlookup__intrinsic_D7_k213) (bruijn ##.x.2.13 82 0) '##vcore.stderr->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      _V40_V10vcore_Dstdout___Gport);
} else {
    V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k213, env)}),
      VGetArg(upenv, 82-1, 0),
      _V10vcore_Dstderr___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) ((bruijn ##.k.144 82 0) (##intrinsic ##vcore.stdin->port)) ((bruijn ##.eqv?.4 84 0) (close _V10_Dlookup__intrinsic_D7_k212) (bruijn ##.x.2.13 81 0) '##vcore.stdout->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      _V40_V10vcore_Dstdin___Gport);
} else {
    V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k212, env)}),
      VGetArg(upenv, 81-1, 0),
      _V10vcore_Dstdout___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.223 0 0) ((bruijn ##.k.144 81 0) (##intrinsic ##vcore.char-integer)) ((bruijn ##.eqv?.4 83 0) (close _V10_Dlookup__intrinsic_D7_k211) (bruijn ##.x.2.13 80 0) '##vcore.stdin->port))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      _V40_V10vcore_Dchar__integer);
} else {
    V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k211, env)}),
      VGetArg(upenv, 80-1, 0),
      _V10vcore_Dstdin___Gport);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.222 0 0) ((bruijn ##.k.144 80 0) (##intrinsic ##vcore.gensym)) ((bruijn ##.eqv?.4 82 0) (close _V10_Dlookup__intrinsic_D7_k210) (bruijn ##.x.2.13 79 0) '##vcore.char-integer))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      _V40_V10vcore_Dgensym);
} else {
    V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k210, env)}),
      VGetArg(upenv, 79-1, 0),
      _V10vcore_Dchar__integer);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.221 0 0) ((bruijn ##.k.144 79 0) (##intrinsic ##vcore.symbol->string)) ((bruijn ##.eqv?.4 81 0) (close _V10_Dlookup__intrinsic_D7_k209) (bruijn ##.x.2.13 78 0) '##vcore.gensym))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      _V40_V10vcore_Dsymbol___Gstring);
} else {
    V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k209, env)}),
      VGetArg(upenv, 78-1, 0),
      _V10vcore_Dgensym);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.220 0 0) ((bruijn ##.k.144 78 0) (##intrinsic ##vcore.string->number)) ((bruijn ##.eqv?.4 80 0) (close _V10_Dlookup__intrinsic_D7_k208) (bruijn ##.x.2.13 77 0) '##vcore.symbol->string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      _V40_V10vcore_Dstring___Gnumber);
} else {
    V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k208, env)}),
      VGetArg(upenv, 77-1, 0),
      _V10vcore_Dsymbol___Gstring);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.219 0 0) ((bruijn ##.k.144 77 0) (##intrinsic ##vcore.string->symbol)) ((bruijn ##.eqv?.4 79 0) (close _V10_Dlookup__intrinsic_D7_k207) (bruijn ##.x.2.13 76 0) '##vcore.string->number))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      _V40_V10vcore_Dstring___Gsymbol);
} else {
    V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k207, env)}),
      VGetArg(upenv, 76-1, 0),
      _V10vcore_Dstring___Gnumber);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.218 0 0) ((bruijn ##.k.144 76 0) (##intrinsic ##vcore.string-length)) ((bruijn ##.eqv?.4 78 0) (close _V10_Dlookup__intrinsic_D7_k206) (bruijn ##.x.2.13 75 0) '##vcore.string->symbol))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      _V40_V10vcore_Dstring__length);
} else {
    V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k206, env)}),
      VGetArg(upenv, 75-1, 0),
      _V10vcore_Dstring___Gsymbol);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.217 0 0) ((bruijn ##.k.144 75 0) (##intrinsic ##vcore.string-set!)) ((bruijn ##.eqv?.4 77 0) (close _V10_Dlookup__intrinsic_D7_k205) (bruijn ##.x.2.13 74 0) '##vcore.string-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      _V40_V10vcore_Dstring__set_B);
} else {
    V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k205, env)}),
      VGetArg(upenv, 74-1, 0),
      _V10vcore_Dstring__length);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.216 0 0) ((bruijn ##.k.144 74 0) (##intrinsic ##vcore.string-ref)) ((bruijn ##.eqv?.4 76 0) (close _V10_Dlookup__intrinsic_D7_k204) (bruijn ##.x.2.13 73 0) '##vcore.string-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      _V40_V10vcore_Dstring__ref);
} else {
    V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k204, env)}),
      VGetArg(upenv, 73-1, 0),
      _V10vcore_Dstring__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.215 0 0) ((bruijn ##.k.144 73 0) (##intrinsic ##vcore.string-copy!)) ((bruijn ##.eqv?.4 75 0) (close _V10_Dlookup__intrinsic_D7_k203) (bruijn ##.x.2.13 72 0) '##vcore.string-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      _V40_V10vcore_Dstring__copy_B);
} else {
    V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k203, env)}),
      VGetArg(upenv, 72-1, 0),
      _V10vcore_Dstring__ref);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.214 0 0) ((bruijn ##.k.144 72 0) (##intrinsic ##vcore.substring)) ((bruijn ##.eqv?.4 74 0) (close _V10_Dlookup__intrinsic_D7_k202) (bruijn ##.x.2.13 71 0) '##vcore.string-copy!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      _V40_V10vcore_Dsubstring);
} else {
    V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k202, env)}),
      VGetArg(upenv, 71-1, 0),
      _V10vcore_Dstring__copy_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) ((bruijn ##.k.144 71 0) (##intrinsic ##vcore.make-string)) ((bruijn ##.eqv?.4 73 0) (close _V10_Dlookup__intrinsic_D7_k201) (bruijn ##.x.2.13 70 0) '##vcore.substring))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      _V40_V10vcore_Dmake__string);
} else {
    V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k201, env)}),
      VGetArg(upenv, 70-1, 0),
      _V10vcore_Dsubstring);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) ((bruijn ##.k.144 70 0) (##intrinsic ##vcore.hash-table-delete!)) ((bruijn ##.eqv?.4 72 0) (close _V10_Dlookup__intrinsic_D7_k200) (bruijn ##.x.2.13 69 0) '##vcore.make-string))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      _V40_V10vcore_Dhash__table__delete_B);
} else {
    V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k200, env)}),
      VGetArg(upenv, 69-1, 0),
      _V10vcore_Dmake__string);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.k.144 69 0) (##intrinsic ##vcore.hash-table-set!)) ((bruijn ##.eqv?.4 71 0) (close _V10_Dlookup__intrinsic_D7_k199) (bruijn ##.x.2.13 68 0) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      _V40_V10vcore_Dhash__table__set_B);
} else {
    V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k199, env)}),
      VGetArg(upenv, 68-1, 0),
      _V10vcore_Dhash__table__delete_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.210 0 0) ((bruijn ##.k.144 68 0) (##intrinsic ##vcore.hash-table-ref)) ((bruijn ##.eqv?.4 70 0) (close _V10_Dlookup__intrinsic_D7_k198) (bruijn ##.x.2.13 67 0) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      _V40_V10vcore_Dhash__table__ref);
} else {
    V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k198, env)}),
      VGetArg(upenv, 67-1, 0),
      _V10vcore_Dhash__table__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.209 0 0) ((bruijn ##.k.144 67 0) (##intrinsic ##vcore.hash-table-hash-function)) ((bruijn ##.eqv?.4 69 0) (close _V10_Dlookup__intrinsic_D7_k197) (bruijn ##.x.2.13 66 0) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      _V40_V10vcore_Dhash__table__hash__function);
} else {
    V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k197, env)}),
      VGetArg(upenv, 66-1, 0),
      _V10vcore_Dhash__table__ref);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.208 0 0) ((bruijn ##.k.144 66 0) (##intrinsic ##vcore.hash-table-equivalence-function)) ((bruijn ##.eqv?.4 68 0) (close _V10_Dlookup__intrinsic_D7_k196) (bruijn ##.x.2.13 65 0) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      _V40_V10vcore_Dhash__table__equivalence__function);
} else {
    V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k196, env)}),
      VGetArg(upenv, 65-1, 0),
      _V10vcore_Dhash__table__hash__function);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.207 0 0) ((bruijn ##.k.144 65 0) (##intrinsic ##vcore.make-hash-table)) ((bruijn ##.eqv?.4 67 0) (close _V10_Dlookup__intrinsic_D7_k195) (bruijn ##.x.2.13 64 0) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      _V40_V10vcore_Dmake__hash__table);
} else {
    V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k195, env)}),
      VGetArg(upenv, 64-1, 0),
      _V10vcore_Dhash__table__equivalence__function);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.206 0 0) ((bruijn ##.k.144 64 0) (##intrinsic ##vcore.record-length)) ((bruijn ##.eqv?.4 66 0) (close _V10_Dlookup__intrinsic_D7_k194) (bruijn ##.x.2.13 63 0) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      _V40_V10vcore_Drecord__length);
} else {
    V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k194, env)}),
      VGetArg(upenv, 63-1, 0),
      _V10vcore_Dmake__hash__table);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.205 0 0) ((bruijn ##.k.144 63 0) (##intrinsic ##vcore.record-set!)) ((bruijn ##.eqv?.4 65 0) (close _V10_Dlookup__intrinsic_D7_k193) (bruijn ##.x.2.13 62 0) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      _V40_V10vcore_Drecord__set_B);
} else {
    V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k193, env)}),
      VGetArg(upenv, 62-1, 0),
      _V10vcore_Drecord__length);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.204 0 0) ((bruijn ##.k.144 62 0) (##intrinsic ##vcore.record-ref)) ((bruijn ##.eqv?.4 64 0) (close _V10_Dlookup__intrinsic_D7_k192) (bruijn ##.x.2.13 61 0) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      _V40_V10vcore_Drecord__ref);
} else {
    V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k192, env)}),
      VGetArg(upenv, 61-1, 0),
      _V10vcore_Drecord__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.k.144 61 0) (##intrinsic ##vcore.record)) ((bruijn ##.eqv?.4 63 0) (close _V10_Dlookup__intrinsic_D7_k191) (bruijn ##.x.2.13 60 0) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      _V40_V10vcore_Drecord);
} else {
    V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k191, env)}),
      VGetArg(upenv, 60-1, 0),
      _V10vcore_Drecord__ref);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) ((bruijn ##.k.144 60 0) (##intrinsic ##vcore.vector-length)) ((bruijn ##.eqv?.4 62 0) (close _V10_Dlookup__intrinsic_D7_k190) (bruijn ##.x.2.13 59 0) '##vcore.record))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      _V40_V10vcore_Dvector__length);
} else {
    V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k190, env)}),
      VGetArg(upenv, 59-1, 0),
      _V10vcore_Drecord);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.k.144 59 0) (##intrinsic ##vcore.vector-set!)) ((bruijn ##.eqv?.4 61 0) (close _V10_Dlookup__intrinsic_D7_k189) (bruijn ##.x.2.13 58 0) '##vcore.vector-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      _V40_V10vcore_Dvector__set_B);
} else {
    V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k189, env)}),
      VGetArg(upenv, 58-1, 0),
      _V10vcore_Dvector__length);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.200 0 0) ((bruijn ##.k.144 58 0) (##intrinsic ##vcore.vector-ref)) ((bruijn ##.eqv?.4 60 0) (close _V10_Dlookup__intrinsic_D7_k188) (bruijn ##.x.2.13 57 0) '##vcore.vector-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      _V40_V10vcore_Dvector__ref);
} else {
    V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k188, env)}),
      VGetArg(upenv, 57-1, 0),
      _V10vcore_Dvector__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.199 0 0) ((bruijn ##.k.144 57 0) (##intrinsic ##vcore.list->vector)) ((bruijn ##.eqv?.4 59 0) (close _V10_Dlookup__intrinsic_D7_k187) (bruijn ##.x.2.13 56 0) '##vcore.vector-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      _V40_V10vcore_Dlist___Gvector);
} else {
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k187, env)}),
      VGetArg(upenv, 56-1, 0),
      _V10vcore_Dvector__ref);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.198 0 0) ((bruijn ##.k.144 56 0) (##intrinsic ##vcore.set-cdr!)) ((bruijn ##.eqv?.4 58 0) (close _V10_Dlookup__intrinsic_D7_k186) (bruijn ##.x.2.13 55 0) '##vcore.list->vector))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      _V40_V10vcore_Dset__cdr_B);
} else {
    V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k186, env)}),
      VGetArg(upenv, 55-1, 0),
      _V10vcore_Dlist___Gvector);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.197 0 0) ((bruijn ##.k.144 55 0) (##intrinsic ##vcore.set-car!)) ((bruijn ##.eqv?.4 57 0) (close _V10_Dlookup__intrinsic_D7_k185) (bruijn ##.x.2.13 54 0) '##vcore.set-cdr!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      _V40_V10vcore_Dset__car_B);
} else {
    V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k185, env)}),
      VGetArg(upenv, 54-1, 0),
      _V10vcore_Dset__cdr_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.196 0 0) ((bruijn ##.k.144 54 0) (##intrinsic ##vcore.cdr)) ((bruijn ##.eqv?.4 56 0) (close _V10_Dlookup__intrinsic_D7_k184) (bruijn ##.x.2.13 53 0) '##vcore.set-car!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      _V40_V10vcore_Dcdr);
} else {
    V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k184, env)}),
      VGetArg(upenv, 53-1, 0),
      _V10vcore_Dset__car_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.k.144 53 0) (##intrinsic ##vcore.car)) ((bruijn ##.eqv?.4 55 0) (close _V10_Dlookup__intrinsic_D7_k183) (bruijn ##.x.2.13 52 0) '##vcore.cdr))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      _V40_V10vcore_Dcar);
} else {
    V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k183, env)}),
      VGetArg(upenv, 52-1, 0),
      _V10vcore_Dcdr);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.194 0 0) ((bruijn ##.k.144 52 0) (##intrinsic ##vcore.cons)) ((bruijn ##.eqv?.4 54 0) (close _V10_Dlookup__intrinsic_D7_k182) (bruijn ##.x.2.13 51 0) '##vcore.car))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      _V40_V10vcore_Dcons);
} else {
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k182, env)}),
      VGetArg(upenv, 51-1, 0),
      _V10vcore_Dcar);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dlookup__intrinsic_D7_k180) (close _V10_Dlookup__intrinsic_D7_k181))
    V_CALL_FUNC(_V10_Dlookup__intrinsic_D7_k180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k181, env)}));
 }
}
static void _V10_Dlookup__intrinsic_D7_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.193 0 0) ((bruijn ##.k.144 50 0) (##intrinsic ##vcore.load-library)) ((bruijn ##.eqv?.4 52 0) (close _V10_Dlookup__intrinsic_D7_k179) (bruijn ##.x.2.13 49 0) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      _V40_V10vcore_Dload__library);
} else {
    V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k179, env)}),
      VGetArg(upenv, 49-1, 0),
      _V10vcore_Dcons);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) ((bruijn ##.k.144 49 0) (##intrinsic ##vcore.make-import)) ((bruijn ##.eqv?.4 51 0) (close _V10_Dlookup__intrinsic_D7_k178) (bruijn ##.x.2.13 48 0) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      _V40_V10vcore_Dmake__import);
} else {
    V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k178, env)}),
      VGetArg(upenv, 48-1, 0),
      _V10vcore_Dload__library);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.k.144 48 0) (##intrinsic ##vcore.lookup-library)) ((bruijn ##.eqv?.4 50 0) (close _V10_Dlookup__intrinsic_D7_k177) (bruijn ##.x.2.13 47 0) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      _V40_V10vcore_Dlookup__library);
} else {
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k177, env)}),
      VGetArg(upenv, 47-1, 0),
      _V10vcore_Dmake__import);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.k.144 47 0) (##intrinsic ##vcore.multidefine)) ((bruijn ##.eqv?.4 49 0) (close _V10_Dlookup__intrinsic_D7_k176) (bruijn ##.x.2.13 46 0) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      _V40_V10vcore_Dmultidefine);
} else {
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k176, env)}),
      VGetArg(upenv, 46-1, 0),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.189 0 0) ((bruijn ##.k.144 46 0) (##intrinsic ##vcore.define)) ((bruijn ##.eqv?.4 48 0) (close _V10_Dlookup__intrinsic_D7_k175) (bruijn ##.x.2.13 45 0) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      _V40_V10vcore_Ddefine);
} else {
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k175, env)}),
      VGetArg(upenv, 45-1, 0),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.188 0 0) ((bruijn ##.k.144 45 0) (##intrinsic ##vcore.function)) ((bruijn ##.eqv?.4 47 0) (close _V10_Dlookup__intrinsic_D7_k174) (bruijn ##.x.2.13 44 0) '##vcore.define))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      _V40_V10vcore_Dfunction);
} else {
    V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k174, env)}),
      VGetArg(upenv, 44-1, 0),
      _V10vcore_Ddefine);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.k.144 44 0) (##intrinsic ##vcore.record-length)) ((bruijn ##.eqv?.4 46 0) (close _V10_Dlookup__intrinsic_D7_k173) (bruijn ##.x.2.13 43 0) '##vcore.function))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      _V40_V10vcore_Drecord__length);
} else {
    V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k173, env)}),
      VGetArg(upenv, 43-1, 0),
      _V10vcore_Dfunction);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.186 0 0) ((bruijn ##.k.144 43 0) (##intrinsic ##vcore.record-set!)) ((bruijn ##.eqv?.4 45 0) (close _V10_Dlookup__intrinsic_D7_k172) (bruijn ##.x.2.13 42 0) '##vcore.record-length))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      _V40_V10vcore_Drecord__set_B);
} else {
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k172, env)}),
      VGetArg(upenv, 42-1, 0),
      _V10vcore_Drecord__length);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.185 0 0) ((bruijn ##.k.144 42 0) (##intrinsic ##vcore.record-ref)) ((bruijn ##.eqv?.4 44 0) (close _V10_Dlookup__intrinsic_D7_k171) (bruijn ##.x.2.13 41 0) '##vcore.record-set!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      _V40_V10vcore_Drecord__ref);
} else {
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k171, env)}),
      VGetArg(upenv, 41-1, 0),
      _V10vcore_Drecord__set_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.184 0 0) ((bruijn ##.k.144 41 0) (##intrinsic ##vcore.record)) ((bruijn ##.eqv?.4 43 0) (close _V10_Dlookup__intrinsic_D7_k170) (bruijn ##.x.2.13 40 0) '##vcore.record-ref))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      _V40_V10vcore_Drecord);
} else {
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k170, env)}),
      VGetArg(upenv, 40-1, 0),
      _V10vcore_Drecord__ref);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) ((bruijn ##.k.144 40 0) (##intrinsic ##vcore.set-global!)) ((bruijn ##.eqv?.4 42 0) (close _V10_Dlookup__intrinsic_D7_k169) (bruijn ##.x.2.13 39 0) '##vcore.record))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      _V40_V10vcore_Dset__global_B);
} else {
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k169, env)}),
      VGetArg(upenv, 39-1, 0),
      _V10vcore_Drecord);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) ((bruijn ##.k.144 39 0) (##intrinsic ##vcore.define-global)) ((bruijn ##.eqv?.4 41 0) (close _V10_Dlookup__intrinsic_D7_k168) (bruijn ##.x.2.13 38 0) '##vcore.set-global!))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      _V40_V10vcore_Ddefine__global);
} else {
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k168, env)}),
      VGetArg(upenv, 38-1, 0),
      _V10vcore_Dset__global_B);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) ((bruijn ##.k.144 38 0) (##intrinsic ##vcore.exit)) ((bruijn ##.eqv?.4 40 0) (close _V10_Dlookup__intrinsic_D7_k167) (bruijn ##.x.2.13 37 0) '##vcore.define-global))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      _V40_V10vcore_Dexit);
} else {
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k167, env)}),
      VGetArg(upenv, 37-1, 0),
      _V10vcore_Ddefine__global);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.180 0 0) ((bruijn ##.k.144 37 0) (##intrinsic ##vcore.abort)) ((bruijn ##.eqv?.4 39 0) (close _V10_Dlookup__intrinsic_D7_k166) (bruijn ##.x.2.13 36 0) '##vcore.exit))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      _V40_V10vcore_Dabort);
} else {
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k166, env)}),
      VGetArg(upenv, 36-1, 0),
      _V10vcore_Dexit);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.179 0 0) ((bruijn ##.k.144 36 0) (##intrinsic ##vcore.apply-cps)) ((bruijn ##.eqv?.4 38 0) (close _V10_Dlookup__intrinsic_D7_k165) (bruijn ##.x.2.13 35 0) '##vcore.abort))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      _V40_V10vcore_Dapply__cps);
} else {
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k165, env)}),
      VGetArg(upenv, 35-1, 0),
      _V10vcore_Dabort);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.178 0 0) ((bruijn ##.k.144 35 0) (##intrinsic ##vcore.apply)) ((bruijn ##.eqv?.4 37 0) (close _V10_Dlookup__intrinsic_D7_k164) (bruijn ##.x.2.13 34 0) '##vcore.apply-cps))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      _V40_V10vcore_Dapply);
} else {
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k164, env)}),
      VGetArg(upenv, 34-1, 0),
      _V10vcore_Dapply__cps);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) ((bruijn ##.k.144 34 0) (##intrinsic ##vcore.call-with-values)) ((bruijn ##.eqv?.4 36 0) (close _V10_Dlookup__intrinsic_D7_k163) (bruijn ##.x.2.13 33 0) '##vcore.apply))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      _V40_V10vcore_Dcall__with__values);
} else {
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k163, env)}),
      VGetArg(upenv, 33-1, 0),
      _V10vcore_Dapply);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.176 0 0) ((bruijn ##.k.144 33 0) (##intrinsic ##vcore.call/cc)) ((bruijn ##.eqv?.4 35 0) (close _V10_Dlookup__intrinsic_D7_k162) (bruijn ##.x.2.13 32 0) '##vcore.call-with-values))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      _V40_V10vcore_Dcall_Wcc);
} else {
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k162, env)}),
      VGetArg(upenv, 32-1, 0),
      _V10vcore_Dcall__with__values);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.175 0 0) ((bruijn ##.k.144 32 0) (##intrinsic ##vcore.next)) ((bruijn ##.eqv?.4 34 0) (close _V10_Dlookup__intrinsic_D7_k161) (bruijn ##.x.2.13 31 0) '##vcore.call/cc))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      _V40_V10vcore_Dnext);
} else {
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k161, env)}),
      VGetArg(upenv, 31-1, 0),
      _V10vcore_Dcall_Wcc);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.174 0 0) ((bruijn ##.k.144 31 0) (##intrinsic ##vcore.raise)) ((bruijn ##.eqv?.4 33 0) (close _V10_Dlookup__intrinsic_D7_k160) (bruijn ##.x.2.13 30 0) '##vcore.next))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      _V40_V10vcore_Draise);
} else {
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k160, env)}),
      VGetArg(upenv, 30-1, 0),
      _V10vcore_Dnext);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.173 0 0) ((bruijn ##.k.144 30 0) (##intrinsic ##vcore.pop-exception-handler)) ((bruijn ##.eqv?.4 32 0) (close _V10_Dlookup__intrinsic_D7_k159) (bruijn ##.x.2.13 29 0) '##vcore.raise))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      _V40_V10vcore_Dpop__exception__handler);
} else {
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k159, env)}),
      VGetArg(upenv, 29-1, 0),
      _V10vcore_Draise);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.k.144 29 0) (##intrinsic ##vcore.push-exception-handler)) ((bruijn ##.eqv?.4 31 0) (close _V10_Dlookup__intrinsic_D7_k158) (bruijn ##.x.2.13 28 0) '##vcore.pop-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      _V40_V10vcore_Dpush__exception__handler);
} else {
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k158, env)}),
      VGetArg(upenv, 28-1, 0),
      _V10vcore_Dpop__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) ((bruijn ##.k.144 28 0) (##intrinsic ##vcore.get-exception-handler)) ((bruijn ##.eqv?.4 30 0) (close _V10_Dlookup__intrinsic_D7_k157) (bruijn ##.x.2.13 27 0) '##vcore.push-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      _V40_V10vcore_Dget__exception__handler);
} else {
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k157, env)}),
      VGetArg(upenv, 27-1, 0),
      _V10vcore_Dpush__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.170 0 0) ((bruijn ##.k.144 27 0) (##intrinsic ##vcore.pop-dynamic)) ((bruijn ##.eqv?.4 29 0) (close _V10_Dlookup__intrinsic_D7_k156) (bruijn ##.x.2.13 26 0) '##vcore.get-exception-handler))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      _V40_V10vcore_Dpop__dynamic);
} else {
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k156, env)}),
      VGetArg(upenv, 26-1, 0),
      _V10vcore_Dget__exception__handler);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.169 0 0) ((bruijn ##.k.144 26 0) (##intrinsic ##vcore.push-dynamic)) ((bruijn ##.eqv?.4 28 0) (close _V10_Dlookup__intrinsic_D7_k155) (bruijn ##.x.2.13 25 0) '##vcore.pop-dynamic))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      _V40_V10vcore_Dpush__dynamic);
} else {
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k155, env)}),
      VGetArg(upenv, 25-1, 0),
      _V10vcore_Dpop__dynamic);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.168 0 0) ((bruijn ##.k.144 25 0) (##intrinsic ##vcore.get-dynamics)) ((bruijn ##.eqv?.4 27 0) (close _V10_Dlookup__intrinsic_D7_k154) (bruijn ##.x.2.13 24 0) '##vcore.push-dynamic))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      _V40_V10vcore_Dget__dynamics);
} else {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k154, env)}),
      VGetArg(upenv, 24-1, 0),
      _V10vcore_Dpush__dynamic);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.167 0 0) ((bruijn ##.k.144 24 0) (##intrinsic ##vcore.not)) ((bruijn ##.eqv?.4 26 0) (close _V10_Dlookup__intrinsic_D7_k153) (bruijn ##.x.2.13 23 0) '##vcore.get-dynamics))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      _V40_V10vcore_Dnot);
} else {
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k153, env)}),
      VGetArg(upenv, 23-1, 0),
      _V10vcore_Dget__dynamics);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.166 0 0) ((bruijn ##.k.144 23 0) (##intrinsic ##vcore.eqv?)) ((bruijn ##.eqv?.4 25 0) (close _V10_Dlookup__intrinsic_D7_k152) (bruijn ##.x.2.13 22 0) '##vcore.not))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      _V40_V10vcore_Deqv_Q);
} else {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k152, env)}),
      VGetArg(upenv, 22-1, 0),
      _V10vcore_Dnot);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) ((bruijn ##.k.144 22 0) (##intrinsic ##vcore.blob=?)) ((bruijn ##.eqv?.4 24 0) (close _V10_Dlookup__intrinsic_D7_k151) (bruijn ##.x.2.13 21 0) '##vcore.eqv?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      _V40_V10vcore_Dblob_E_Q);
} else {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k151, env)}),
      VGetArg(upenv, 21-1, 0),
      _V10vcore_Deqv_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.164 0 0) ((bruijn ##.k.144 21 0) (##intrinsic ##vcore.symbol=?)) ((bruijn ##.eqv?.4 23 0) (close _V10_Dlookup__intrinsic_D7_k150) (bruijn ##.x.2.13 20 0) '##vcore.blob=?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      _V40_V10vcore_Dsymbol_E_Q);
} else {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k150, env)}),
      VGetArg(upenv, 20-1, 0),
      _V10vcore_Dblob_E_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.163 0 0) ((bruijn ##.k.144 20 0) (##intrinsic ##vcore.eq?)) ((bruijn ##.eqv?.4 22 0) (close _V10_Dlookup__intrinsic_D7_k149) (bruijn ##.x.2.13 19 0) '##vcore.symbol=?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      _V40_V10vcore_Deq_Q);
} else {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k149, env)}),
      VGetArg(upenv, 19-1, 0),
      _V10vcore_Dsymbol_E_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.162 0 0) ((bruijn ##.k.144 19 0) (##intrinsic ##vcore.char?)) ((bruijn ##.eqv?.4 21 0) (close _V10_Dlookup__intrinsic_D7_k148) (bruijn ##.x.2.13 18 0) '##vcore.eq?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      _V40_V10vcore_Dchar_Q);
} else {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k148, env)}),
      VGetArg(upenv, 18-1, 0),
      _V10vcore_Deq_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) ((bruijn ##.k.144 18 0) (##intrinsic ##vcore.double?)) ((bruijn ##.eqv?.4 20 0) (close _V10_Dlookup__intrinsic_D7_k147) (bruijn ##.x.2.13 17 0) '##vcore.char?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      _V40_V10vcore_Ddouble_Q);
} else {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k147, env)}),
      VGetArg(upenv, 17-1, 0),
      _V10vcore_Dchar_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.160 0 0) ((bruijn ##.k.144 17 0) (##intrinsic ##vcore.int?)) ((bruijn ##.eqv?.4 19 0) (close _V10_Dlookup__intrinsic_D7_k146) (bruijn ##.x.2.13 16 0) '##vcore.double?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      _V40_V10vcore_Dint_Q);
} else {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k146, env)}),
      VGetArg(upenv, 16-1, 0),
      _V10vcore_Ddouble_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.159 0 0) ((bruijn ##.k.144 16 0) (##intrinsic ##vcore.string?)) ((bruijn ##.eqv?.4 18 0) (close _V10_Dlookup__intrinsic_D7_k145) (bruijn ##.x.2.13 15 0) '##vcore.int?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      _V40_V10vcore_Dstring_Q);
} else {
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k145, env)}),
      VGetArg(upenv, 15-1, 0),
      _V10vcore_Dint_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.158 0 0) ((bruijn ##.k.144 15 0) (##intrinsic ##vcore.symbol?)) ((bruijn ##.eqv?.4 17 0) (close _V10_Dlookup__intrinsic_D7_k144) (bruijn ##.x.2.13 14 0) '##vcore.string?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      _V40_V10vcore_Dsymbol_Q);
} else {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k144, env)}),
      VGetArg(upenv, 14-1, 0),
      _V10vcore_Dstring_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.157 0 0) ((bruijn ##.k.144 14 0) (##intrinsic ##vcore.blob?)) ((bruijn ##.eqv?.4 16 0) (close _V10_Dlookup__intrinsic_D7_k143) (bruijn ##.x.2.13 13 0) '##vcore.symbol?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      _V40_V10vcore_Dblob_Q);
} else {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k143, env)}),
      VGetArg(upenv, 13-1, 0),
      _V10vcore_Dsymbol_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.156 0 0) ((bruijn ##.k.144 13 0) (##intrinsic ##vcore.procedure?)) ((bruijn ##.eqv?.4 15 0) (close _V10_Dlookup__intrinsic_D7_k142) (bruijn ##.x.2.13 12 0) '##vcore.blob?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      _V40_V10vcore_Dprocedure_Q);
} else {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k142, env)}),
      VGetArg(upenv, 12-1, 0),
      _V10vcore_Dblob_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.155 0 0) ((bruijn ##.k.144 12 0) (##intrinsic ##vcore.record?)) ((bruijn ##.eqv?.4 14 0) (close _V10_Dlookup__intrinsic_D7_k141) (bruijn ##.x.2.13 11 0) '##vcore.procedure?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      _V40_V10vcore_Drecord_Q);
} else {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k141, env)}),
      VGetArg(upenv, 11-1, 0),
      _V10vcore_Dprocedure_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.154 0 0) ((bruijn ##.k.144 11 0) (##intrinsic ##vcore.vector?)) ((bruijn ##.eqv?.4 13 0) (close _V10_Dlookup__intrinsic_D7_k140) (bruijn ##.x.2.13 10 0) '##vcore.record?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      _V40_V10vcore_Dvector_Q);
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k140, env)}),
      VGetArg(upenv, 10-1, 0),
      _V10vcore_Drecord_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.144 10 0) (##intrinsic ##vcore.pair?)) ((bruijn ##.eqv?.4 12 0) (close _V10_Dlookup__intrinsic_D7_k139) (bruijn ##.x.2.13 9 0) '##vcore.vector?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      _V40_V10vcore_Dpair_Q);
} else {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k139, env)}),
      VGetArg(upenv, 9-1, 0),
      _V10vcore_Dvector_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.152 0 0) ((bruijn ##.k.144 9 0) (##intrinsic ##vcore.null?)) ((bruijn ##.eqv?.4 11 0) (close _V10_Dlookup__intrinsic_D7_k138) (bruijn ##.x.2.13 8 0) '##vcore.pair?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      _V40_V10vcore_Dnull_Q);
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k138, env)}),
      VGetArg(upenv, 8-1, 0),
      _V10vcore_Dpair_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.151 0 0) ((bruijn ##.k.144 8 0) (##intrinsic ##vcore.remainder)) ((bruijn ##.eqv?.4 10 0) (close _V10_Dlookup__intrinsic_D7_k137) (bruijn ##.x.2.13 7 0) '##vcore.null?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      _V40_V10vcore_Dremainder);
} else {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k137, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10vcore_Dnull_Q);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) ((bruijn ##.k.144 7 0) (##intrinsic ##vcore.quotient)) ((bruijn ##.eqv?.4 9 0) (close _V10_Dlookup__intrinsic_D7_k136) (bruijn ##.x.2.13 6 0) '##vcore.remainder))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      _V40_V10vcore_Dquotient);
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k136, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10vcore_Dremainder);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.149 0 0) ((bruijn ##.k.144 6 0) (##intrinsic ##vcore.cmp)) ((bruijn ##.eqv?.4 8 0) (close _V10_Dlookup__intrinsic_D7_k135) (bruijn ##.x.2.13 5 0) '##vcore.quotient))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      _V40_V10vcore_Dcmp);
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k135, env)}),
      VGetArg(upenv, 5-1, 0),
      _V10vcore_Dquotient);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.148 0 0) ((bruijn ##.k.144 5 0) (##intrinsic ##vcore./)) ((bruijn ##.eqv?.4 7 0) (close _V10_Dlookup__intrinsic_D7_k134) (bruijn ##.x.2.13 4 0) '##vcore.cmp))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      _V40_V10vcore_D_W);
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k134, env)}),
      upenv->up->up->up->vars[0],
      _V10vcore_Dcmp);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.147 0 0) ((bruijn ##.k.144 4 0) (##intrinsic ##vcore.*)) ((bruijn ##.eqv?.4 6 0) (close _V10_Dlookup__intrinsic_D7_k133) (bruijn ##.x.2.13 3 0) '##vcore./))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _V40_V10vcore_D_S);
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k133, env)}),
      upenv->up->up->vars[0],
      _V10vcore_D_W);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.146 0 0) ((bruijn ##.k.144 3 0) (##intrinsic ##vcore.-)) ((bruijn ##.eqv?.4 5 0) (close _V10_Dlookup__intrinsic_D7_k132) (bruijn ##.x.2.13 2 0) '##vcore.*))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _V40_V10vcore_D__);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k132, env)}),
      upenv->up->vars[0],
      _V10vcore_D_S);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.145 0 0) ((bruijn ##.k.144 2 0) (##intrinsic ##vcore.+)) ((bruijn ##.eqv?.4 4 0) (close _V10_Dlookup__intrinsic_D7_k131) (bruijn ##.x.2.13 1 0) '##vcore.-))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _V40_V10vcore_D_P);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k131, env)}),
      upenv->vars[0],
      _V10vcore_D__);
}
 }
}
static void _V10_Dlookup__intrinsic_D7_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_lambda7" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.4 3 0) (close _V10_Dlookup__intrinsic_D7_k130) (bruijn ##.x.2.13 0 0) '##vcore.+)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_k130, env)}),
      _var0,
      _V10vcore_D_P);
 }
}
static void _V10_Dlookup__intrinsic_D7_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlookup__intrinsic_D7_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dlookup__intrinsic_D7_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup__intrinsic_D7_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dlookup__intrinsic_D7_lambda7) (bruijn ##.sym.12 0 1))
    V_CALL_FUNC(_V10_Dlookup__intrinsic_D7_lambda7, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0intrinsics_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0intrinsics_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0intrinsics_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((close _V10_Dlookup__inline__name_D5_lambda2) (close _V10_Dlookup__intrinsic__name_D6_lambda4) (close _V10_Dlookup__intrinsic_D7_lambda6)) ((bruijn ##.k.15 4 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-inline-name (bruijn ##.lookup-inline-name.5 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic-name (bruijn ##.lookup-intrinsic-name.6 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'lookup-intrinsic (bruijn ##.lookup-intrinsic.7 0 2)) '())))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__inline__name_D5_lambda2, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic__name_D6_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__intrinsic_D7_lambda6, env)});
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__inline__name,
        env->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic__name,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lookup__intrinsic,
        env->vars[2]),
        VNULL))));
    }
 }
}
static void _V0vanity_V0intrinsics_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0intrinsics_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0intrinsics_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.3 0 0) (close _V0vanity_V0intrinsics_V20_k3) 'eqv?)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k3, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0intrinsics_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0intrinsics_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0intrinsics_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0intrinsics_V20_k2) (##string ##.string.392) (bruijn ##.x.270 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D392.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0intrinsics_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0intrinsics_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0intrinsics_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0intrinsics_V20_k1) (##string ##.string.393))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D393.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0intrinsics_V20 = (VFunc)_V0vanity_V0intrinsics_V20_lambda1;
