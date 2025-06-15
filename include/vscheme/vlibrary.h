/*
 * Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 2.1 of the License, or (at your option) any later version.
 * 
 * The Vanity Scheme Runtime is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the Vanity Scheme Runtime.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */

#pragma once
// math
V_DECLARE_FUNC(VExact, k, x);
V_DECLARE_FUNC(VInexact, k, x);

V_DECLARE_FUNC_MIN(VAdd2, k);
V_DECLARE_FUNC_MIN(VSub2, k, x);

V_DECLARE_FUNC_MIN(VMul2, k);

V_DECLARE_FUNC(VCmp2, k, a, b);
V_DECLARE_FUNC_MIN(VCmpLt, k, a, b);
V_DECLARE_FUNC_MIN(VCmpLe, k, a, b);
V_DECLARE_FUNC_MIN(VCmpEq, k, a, b);
V_DECLARE_FUNC_MIN(VCmpGe, k, a, b);
V_DECLARE_FUNC_MIN(VCmpGt, k, a, b);

V_DECLARE_FUNC(VQuot2, k, x, y);
V_DECLARE_FUNC(VRem2, k, x, y);
V_DECLARE_FUNC_MIN(VDiv2, k, x);

// predicates
V_DECLARE_FUNC_BASIC(VNullP2, x);
V_DECLARE_FUNC_BASIC(VEofP2, x);
V_DECLARE_FUNC_BASIC(VPairP2, x);
V_DECLARE_FUNC_BASIC(VVectorP2, x);
V_DECLARE_FUNC_BASIC(VHashTableP, x);
V_DECLARE_FUNC_BASIC(VRecordP2, x);
V_DECLARE_FUNC_BASIC(VProcedureP2, x);
V_DECLARE_FUNC_BASIC(VBlobP2, x);
V_DECLARE_FUNC_BASIC(VSymbolP2, x);
V_DECLARE_FUNC_BASIC(VStringP2, x);
V_DECLARE_FUNC_BASIC(VDoubleP2, x);
V_DECLARE_FUNC_BASIC(VIntP2, x);
V_DECLARE_FUNC_BASIC(VCharP2, x);
V_DECLARE_FUNC_BASIC(VVoidP2, x);
V_DECLARE_FUNC_BASIC(VNullptrP2, x);
V_DECLARE_FUNC_BASIC(VForeignPointerP2, x);

// equality
V_DECLARE_FUNC(VEq2, k, x, y);
V_DECLARE_FUNC(VSymbolEqv2, k, x, y);
V_DECLARE_FUNC(VBlobEqv2, k, x, y);
V_DECLARE_FUNC(VEqv, k, x, y);

// logic
V_DECLARE_FUNC_BASIC(VNot2, x);

// lists
V_DECLARE_FUNC(VCons2, k, x, y);
V_DECLARE_FUNC(VCar2, k, x);
V_DECLARE_FUNC(VCdr2, k, x);

// vectors

V_DECLARE_FUNC(VListVector2, k, vec);
V_DECLARE_FUNC_BASIC(VVectorRef2, vec, i);
V_DECLARE_FUNC_BASIC(VVectorLength2, vec);

// typevectors

#define IMPLEMENT_BUFFER_PROTOTYPES(Prefix) \
V_DECLARE_FUNC(VMake ## Prefix ## Vector, k, len, fill); \
V_DECLARE_FUNC_BASIC(V ## Prefix ## VectorP, vec); \
V_DECLARE_FUNC_BASIC(V ## Prefix ## VectorRef, vec, i); \
V_DECLARE_FUNC_BASIC(V ## Prefix ## VectorSet, vec, i, x); \
V_DECLARE_FUNC_BASIC(V ## Prefix ## VectorLength, vec); \
V_DECLARE_FUNC(VList ## Prefix ## Vector, k, vec);

IMPLEMENT_BUFFER_PROTOTYPES(S8)
IMPLEMENT_BUFFER_PROTOTYPES(U8)
IMPLEMENT_BUFFER_PROTOTYPES(S16)
IMPLEMENT_BUFFER_PROTOTYPES(U16)
IMPLEMENT_BUFFER_PROTOTYPES(S32)

IMPLEMENT_BUFFER_PROTOTYPES(F32)
IMPLEMENT_BUFFER_PROTOTYPES(F64)

V_DECLARE_FUNC(VReadU8Vector, k, n, port);

// records

V_DECLARE_FUNC_MIN(VCreateRecord2, k, type);
V_DECLARE_FUNC_BASIC(VRecordRef2, rec, i);
V_DECLARE_FUNC_BASIC(VRecordLength2, rec);

// hash table

V_DECLARE_FUNC(VMakeHashTable, k, eq, hash, _len);
V_DECLARE_FUNC(VHashTableEqvFunc, k, table);
V_DECLARE_FUNC(VHashTableHashFunc, k, table);
V_DECLARE_FUNC(VHashTableVector, k, _table);
V_DECLARE_FUNC(VHashTableRef, k, table, key, thunk);
V_DECLARE_FUNC(VHashTableSet, k, table, key, val);
V_DECLARE_FUNC(VHashTableDelete, k, table, key);

// strings

V_DECLARE_FUNC(VMakeString2, k, i, fill);
V_DECLARE_FUNC(VSubstring2, k, str, _start, _end);
V_DECLARE_FUNC(VStringCopy2, k, dst, src, at, _start, _end);
V_DECLARE_FUNC_BASIC(VStringLength2, str);
V_DECLARE_FUNC_BASIC(VStringRef2, str, i);
V_DECLARE_FUNC_BASIC(VStringSet2, str, i, c);

V_DECLARE_FUNC_BASIC(VStringNumber2, str);
//void VNumberString2(V_CORE_ARGS, VWORD k, VWORD num);
V_DECLARE_FUNC(VStringSymbol2, k, str);
V_DECLARE_FUNC(VSymbolString2, k, sym);

// chars

V_DECLARE_FUNC_BASIC(VCharInt2, c);
//void VIntChar2(V_CORE_ARGS, VWORD k, VWORD int);

// ports
V_DECLARE_FUNC(VStdinPort, k);
V_DECLARE_FUNC(VStdoutPort, k);
V_DECLARE_FUNC(VStderrPort, k);

V_DECLARE_FUNC(VDupStdin2, k);
V_DECLARE_FUNC(VDupStdout2, k);
V_DECLARE_FUNC(VDupStderr2, k);

V_DECLARE_FUNC(VOpenInputStream2, k, path);
V_DECLARE_FUNC(VOpenOutputStream2, k, path);
V_DECLARE_FUNC(VCloseStream2, k, port);

V_DECLARE_FUNC(VTtyPortP, k, _port);

V_DECLARE_FUNC(VOpenOutputString2, k);
V_DECLARE_FUNC(VGetOutputString2, k, port);

// input
V_DECLARE_FUNC_BASIC(VReadChar2, port);
V_DECLARE_FUNC(VReadLine2, k, port);
V_DECLARE_FUNC(VReadLine3, k, port);
V_DECLARE_FUNC(VRead2, k, port);

// output
V_DECLARE_FUNC_BASIC(VDisplay2, val, port);
V_DECLARE_FUNC_BASIC(VWrite2, val, port);
V_DECLARE_FUNC_BASIC(VNewline2, port);

V_DECLARE_FUNC_BASIC(VDisplayStdout, val);
V_DECLARE_FUNC_BASIC(VWriteStdout, val);
V_DECLARE_FUNC_BASIC(VNewlineStdout);

// control flow
V_DECLARE_FUNC(VCallCC2, k, proc);
V_DECLARE_FUNC(VCallValues2, k, producer, consumer);
V_DECLARE_FUNC_MIN(VApply2, k, proc);
V_DECLARE_FUNC(VApplyCps, k, proc, lst);

// system
V_DECLARE_FUNC(VSystem2, k, cmd);
V_DECLARE_FUNC(VOpenInputProcess2, k, cmd);
V_DECLARE_FUNC(VOpenOutputProcess2, k, cmd);

// rng
V_DECLARE_FUNC(VMakeRandom, k, seed, stream);
V_DECLARE_FUNC(VRandomCopy, k, rng);
V_DECLARE_FUNC(VRandomSample, k, rng);
V_DECLARE_FUNC(VRandomSampleBounded, k, rng, end);
V_DECLARE_FUNC(VRandomSampleFloat, k, rng);
V_DECLARE_FUNC(VRandomAdvance, k, rng, step);

// filesystem
V_DECLARE_FUNC(VRealpath, k, relpath);
V_DECLARE_FUNC(VMakeTemporaryFile2, k, prefix, suffix);
V_DECLARE_FUNC(VAccess, k, path, mode);

// time
V_DECLARE_FUNC(VCurrentJiffy, k);
V_DECLARE_FUNC(VJiffiesPerSecond, k);

// bit banging
V_DECLARE_FUNC(VBitwiseNot, k, x);
V_DECLARE_FUNC(VBitwiseIor, k, a, b);
V_DECLARE_FUNC(VBitwiseXor, k, a, b);
V_DECLARE_FUNC(VBitwiseAnd, k, a, b);
V_DECLARE_FUNC(VBitwiseXnor, k, a, b);
V_DECLARE_FUNC(VBitwiseNand, k, a, b);
V_DECLARE_FUNC(VBitwiseNor, k, a, b);
V_DECLARE_FUNC(VBitwiseAndC1, k, a, b);
V_DECLARE_FUNC(VBitwiseAndC2, k, a, b);
V_DECLARE_FUNC(VBitwiseOrC1, k, a, b);
V_DECLARE_FUNC(VBitwiseOrC2, k, a, b);
V_DECLARE_FUNC(VArithmeticShift, k, a, b);
V_DECLARE_FUNC(VBitCount, k, a);
