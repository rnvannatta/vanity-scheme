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
void VAdd(VEnv * env);
void VSub(VEnv * env);
void VMul(VEnv * env);
void VCmp(VEnv * env);

void VQuot(VEnv * env);
void VRem(VEnv * env);
void VDiv(VEnv * env);

// predicates
void VNullP(VEnv * env);
void VEofP(VEnv * env);
void VPairP(VEnv * env);
void VVectorP(VEnv * env);
void VProcedureP(VEnv * env);
void VBlobP(VEnv * env);
void VSymbolP(VEnv * env);
void VStringP(VEnv * env);
void VDoubleP(VEnv * env);
void VIntP(VEnv * env);
void VCharP(VEnv * env);

// equality
void VEq(VEnv * env);
void VSymbolEqv(VEnv * env);
void VBlobEqv(VEnv * env);

// logic
void VNot(VEnv * env);

// lists
void VCons(VEnv * env);
void VCar(VEnv * env);
void VCdr(VEnv * env);

// vectors

void VListVector(VEnv * env);
void VVectorRef(VEnv * env);
void VVectorLength(VEnv * env);

// strings

void VMakeString(VEnv * env);
void VSubstring(VEnv * env);
void VStringCopy(VEnv * env);
void VStringLength(VEnv * env);
void VStringRef(VEnv * env);
void VStringSet(VEnv * env);
void VStringSymbol(VEnv * env);
void VStringNumber(VEnv * env);

void VSymbolString(VEnv * env);

// chars

void VCharInt(VEnv * env);

// ports
void VDupStdin(VEnv * env);
void VDupStdout(VEnv * env);
void VDupStderr(VEnv * env);

void VOpenInputStream(VEnv * env);
void VOpenOutputStream(VEnv * env);
void VCloseStream(VEnv * env);

void VOpenOutputString(VEnv * env);
void VGetOutputString(VEnv * env);

// input
void VReadChar(VEnv * env);
void VReadLine(VEnv * env);
void VRead(VEnv * env);

// output
void VDisplay(VEnv * env);
void VWrite(VEnv * env);
void VNewline(VEnv * env);

// control flow
void VCallCC(VEnv * env);
void VCallValues(VEnv * env);
void VApply(VEnv * env);

// system
void VSystem(VEnv * env);
void VOpenInputProcess(VEnv * env);
void VOpenOutputProcess(VEnv * env);
void VMakeTemporaryFile(VEnv * env);
