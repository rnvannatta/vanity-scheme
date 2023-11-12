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
void VAdd2(V_CORE_ARGS, VWORD k, ...);
void VSub2(V_CORE_ARGS, VWORD k, VWORD x, ...);
void VMul2(V_CORE_ARGS, VWORD k, ...);
void VCmp2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b);

void VQuot2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VRem2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VDiv2(V_CORE_ARGS, VWORD k, VWORD x, ...);

// predicates
void VNullP2(V_CORE_ARGS, VWORD k, VWORD x);
void VEofP2(V_CORE_ARGS, VWORD k, VWORD x);
void VPairP2(V_CORE_ARGS, VWORD k, VWORD x);
void VVectorP2(V_CORE_ARGS, VWORD k, VWORD x);
void VProcedureP2(V_CORE_ARGS, VWORD k, VWORD x);
void VBlobP2(V_CORE_ARGS, VWORD k, VWORD x);
void VSymbolP2(V_CORE_ARGS, VWORD k, VWORD x);
void VStringP2(V_CORE_ARGS, VWORD k, VWORD x);
void VDoubleP2(V_CORE_ARGS, VWORD k, VWORD x);
void VIntP2(V_CORE_ARGS, VWORD k, VWORD x);
void VCharP2(V_CORE_ARGS, VWORD k, VWORD x);

// equality
void VEq2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VSymbolEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VBlobEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VEqv(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);

// logic
void VNot2(V_CORE_ARGS, VWORD k, VWORD x);

// lists
void VCons2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y);
void VCar2(V_CORE_ARGS, VWORD k, VWORD x);
void VCdr2(V_CORE_ARGS, VWORD k, VWORD x);

// vectors

void VListVector2(V_CORE_ARGS, VWORD k, VWORD vec);
void VVectorRef2(V_CORE_ARGS, VWORD k, VWORD vec, VWORD i);
void VVectorLength2(V_CORE_ARGS, VWORD k, VWORD vec);

// hash table

void VMakeHashTable(V_CORE_ARGS, VWORD k, VWORD eq, VWORD hash, VWORD _len);
void VHashTableEqvFunc(V_CORE_ARGS, VWORD k, VWORD table);
void VHashTableHashFunc(V_CORE_ARGS, VWORD k, VWORD table);
void VHashTableRef(V_CORE_ARGS, VWORD k, VWORD table, VWORD key, VWORD thunk);
void VHashTableSet(V_CORE_ARGS, VWORD k, VWORD table, VWORD key, VWORD val);
void VHashTableDelete(V_CORE_ARGS, VWORD k, VWORD table, VWORD key);

// strings

void VMakeString2(V_CORE_ARGS, VWORD k, VWORD i, ...);
void VSubstring2(V_CORE_ARGS, VWORD k, VWORD str, ...);
void VStringCopy2(V_CORE_ARGS, VWORD k, VWORD dst, VWORD src, VWORD at, ...);
void VStringLength2(V_CORE_ARGS, VWORD k, VWORD str);
void VStringRef2(V_CORE_ARGS, VWORD k, VWORD str, VWORD i);
void VStringSet2(V_CORE_ARGS, VWORD k, VWORD str, VWORD i, VWORD c);

void VStringNumber2(V_CORE_ARGS, VWORD k, VWORD str);
//void VNumberString2(V_CORE_ARGS, VWORD k, VWORD num);
void VStringSymbol2(V_CORE_ARGS, VWORD k, VWORD str);
void VSymbolString2(V_CORE_ARGS, VWORD k, VWORD sym);

// chars

void VCharInt2(V_CORE_ARGS, VWORD k, VWORD c);
//void VIntChar2(V_CORE_ARGS, VWORD k, VWORD int);

// ports
void VStdinPort(V_CORE_ARGS, VWORD k);
void VStdoutPort(V_CORE_ARGS, VWORD k);
void VStderrPort(V_CORE_ARGS, VWORD k);

void VDupStdin2(V_CORE_ARGS, VWORD k);
void VDupStdout2(V_CORE_ARGS, VWORD k);
void VDupStderr2(V_CORE_ARGS, VWORD k);

void VOpenInputStream2(V_CORE_ARGS, VWORD k, VWORD path);
void VOpenOutputStream2(V_CORE_ARGS, VWORD k, VWORD path);
void VCloseStream2(V_CORE_ARGS, VWORD k, VWORD port);

void VOpenOutputString2(V_CORE_ARGS, VWORD k);
void VGetOutputString2(V_CORE_ARGS, VWORD k, VWORD port);

// input
void VReadChar2(V_CORE_ARGS, VWORD k, VWORD port);
void VReadLine2(V_CORE_ARGS, VWORD k, VWORD port);
void VRead2(V_CORE_ARGS, VWORD k, VWORD port);

// output
void VDisplay2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port);
void VWrite2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port);
void VNewline2(V_CORE_ARGS, VWORD k, VWORD port);

// control flow
void VCallCC2(V_CORE_ARGS, VWORD k, VWORD proc);
void VCallValues2(V_CORE_ARGS, VWORD k, VWORD producer, VWORD consumer);
void VApply2(V_CORE_ARGS, VWORD k, VWORD proc, ...);

// system
void VSystem2(V_CORE_ARGS, VWORD k, VWORD cmd);
void VOpenInputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd);
void VOpenOutputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd);
void VMakeTemporaryFile2(V_CORE_ARGS, VWORD k, VWORD prefix, ...);

// rng
void VMakeRandom(V_CORE_ARGS, VWORD k, VWORD seed, VWORD stream);
void VRandomCopy(V_CORE_ARGS, VWORD k, VWORD rng);
void VRandomSample(V_CORE_ARGS, VWORD k, VWORD rng);
void VRandomSampleBounded(V_CORE_ARGS, VWORD k, VWORD rng, VWORD end);
void VRandomSampleFloat(V_CORE_ARGS, VWORD k, VWORD rng);
void VRandomAdvance(V_CORE_ARGS, VWORD k, VWORD rng, VWORD step);
