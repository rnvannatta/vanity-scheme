/*
 * Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 3 of the License, or (at your option) any later version.
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Runtime.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#pragma once
// math
SYSV_CALL void VAdd2(V_CORE_ARGS, VWORD k, ...);
SYSV_CALL void VSub2(V_CORE_ARGS, VWORD k, VWORD x, ...);
SYSV_CALL void VMul2(V_CORE_ARGS, VWORD k, ...);
SYSV_CALL void VCmp2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b);

SYSV_CALL void VQuot2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VRem2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VDiv2(V_CORE_ARGS, VWORD k, VWORD x, ...);

// predicates
SYSV_CALL void VNullP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VEofP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VPairP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VVectorP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VProcedureP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VBlobP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VSymbolP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VStringP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VDoubleP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VIntP2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VCharP2(V_CORE_ARGS, VWORD k, VWORD x);

// equality
SYSV_CALL void VEq2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VSymbolEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VBlobEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VEqv(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);

// logic
SYSV_CALL void VNot2(V_CORE_ARGS, VWORD k, VWORD x);

// lists
SYSV_CALL void VCons2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
SYSV_CALL void VCar2(V_CORE_ARGS, VWORD k, VWORD x);
SYSV_CALL void VCdr2(V_CORE_ARGS, VWORD k, VWORD x);

// vectors

SYSV_CALL void VListVector2(V_CORE_ARGS, VWORD k, VWORD vec);
SYSV_CALL void VVectorRef2(V_CORE_ARGS, VWORD k, VWORD vec, VWORD i);
SYSV_CALL void VVectorLength2(V_CORE_ARGS, VWORD k, VWORD vec);

// hash table

SYSV_CALL void VMakeHashTable(V_CORE_ARGS, VWORD k, VWORD eq, VWORD hash, VWORD _len);
SYSV_CALL void VHashTableEqvFunc(V_CORE_ARGS, VWORD k, VWORD table);
SYSV_CALL void VHashTableHashFunc(V_CORE_ARGS, VWORD k, VWORD table);
SYSV_CALL void VHashTableRef(V_CORE_ARGS, VWORD k, VWORD table, VWORD key, VWORD thunk);
SYSV_CALL void VHashTableSet(V_CORE_ARGS, VWORD k, VWORD table, VWORD key, VWORD val);
SYSV_CALL void VHashTableDelete(V_CORE_ARGS, VWORD k, VWORD table, VWORD key);

// strings

SYSV_CALL void VMakeString2(V_CORE_ARGS, VWORD k, VWORD i, ...);
SYSV_CALL void VSubstring2(V_CORE_ARGS, VWORD k, VWORD str, ...);
SYSV_CALL void VStringCopy2(V_CORE_ARGS, VWORD k, VWORD dst, VWORD src, VWORD at, ...);
SYSV_CALL void VStringLength2(V_CORE_ARGS, VWORD k, VWORD str);
SYSV_CALL void VStringRef2(V_CORE_ARGS, VWORD k, VWORD str, VWORD i);
SYSV_CALL void VStringSet2(V_CORE_ARGS, VWORD k, VWORD str, VWORD i, VWORD c);

SYSV_CALL void VStringNumber2(V_CORE_ARGS, VWORD k, VWORD str);
//void VNumberString2(V_CORE_ARGS, VWORD k, VWORD num);
SYSV_CALL void VStringSymbol2(V_CORE_ARGS, VWORD k, VWORD str);
SYSV_CALL void VSymbolString2(V_CORE_ARGS, VWORD k, VWORD sym);

// chars

SYSV_CALL void VCharInt2(V_CORE_ARGS, VWORD k, VWORD c);
//void VIntChar2(V_CORE_ARGS, VWORD k, VWORD int);

// ports
SYSV_CALL void VStdinPort(V_CORE_ARGS, VWORD k);
SYSV_CALL void VStdoutPort(V_CORE_ARGS, VWORD k);
SYSV_CALL void VStderrPort(V_CORE_ARGS, VWORD k);

SYSV_CALL void VDupStdin2(V_CORE_ARGS, VWORD k);
SYSV_CALL void VDupStdout2(V_CORE_ARGS, VWORD k);
SYSV_CALL void VDupStderr2(V_CORE_ARGS, VWORD k);

SYSV_CALL void VOpenInputStream2(V_CORE_ARGS, VWORD k, VWORD path);
SYSV_CALL void VOpenOutputStream2(V_CORE_ARGS, VWORD k, VWORD path);
SYSV_CALL void VCloseStream2(V_CORE_ARGS, VWORD k, VWORD port);

SYSV_CALL void VOpenOutputString2(V_CORE_ARGS, VWORD k);
SYSV_CALL void VGetOutputString2(V_CORE_ARGS, VWORD k, VWORD port);

// input
SYSV_CALL void VReadChar2(V_CORE_ARGS, VWORD k, VWORD port);
SYSV_CALL void VReadLine2(V_CORE_ARGS, VWORD k, VWORD port);
SYSV_CALL void VRead2(V_CORE_ARGS, VWORD k, VWORD port);

// output
SYSV_CALL void VDisplay2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port);
SYSV_CALL void VWrite2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port);
SYSV_CALL void VNewline2(V_CORE_ARGS, VWORD k, VWORD port);

// control flow
SYSV_CALL void VCallCC2(V_CORE_ARGS, VWORD k, VWORD proc);
SYSV_CALL void VCallValues2(V_CORE_ARGS, VWORD k, VWORD producer, VWORD consumer);
SYSV_CALL void VApply2(V_CORE_ARGS, VWORD k, VWORD proc, ...);

// system
SYSV_CALL void VSystem2(V_CORE_ARGS, VWORD k, VWORD cmd);
SYSV_CALL void VOpenInputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd);
SYSV_CALL void VOpenOutputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd);
SYSV_CALL void VMakeTemporaryFile2(V_CORE_ARGS, VWORD k, VWORD prefix, ...);

// rng
SYSV_CALL void VMakeRandom(V_CORE_ARGS, VWORD k, VWORD seed, VWORD stream);
SYSV_CALL void VRandomCopy(V_CORE_ARGS, VWORD k, VWORD rng);
SYSV_CALL void VRandomSample(V_CORE_ARGS, VWORD k, VWORD rng);
SYSV_CALL void VRandomSampleBounded(V_CORE_ARGS, VWORD k, VWORD rng, VWORD end);
SYSV_CALL void VRandomSampleFloat(V_CORE_ARGS, VWORD k, VWORD rng);
SYSV_CALL void VRandomAdvance(V_CORE_ARGS, VWORD k, VWORD rng, VWORD step);
