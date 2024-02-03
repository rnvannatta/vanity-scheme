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
#include "vruntime.h"

// predicates
static inline VWORD VInlineNullP(VWORD v) {
  return VEncodeBool(VBits(v) == VBits(VNULL));
}
static inline VWORD VInlinePairP(VWORD v) {
  return VEncodeBool(VWordType(v) == VPOINTER_PAIR);
}
static inline VWORD VInlineSymbolP(VWORD v) {
  return VEncodeBool(VWordType(v) == VPOINTER_OTHER && *(VTAG*)VDecodePointer(v) == VSYMBOL);
}
static inline VWORD VInlineStringP(VWORD v) {
  return VEncodeBool(VWordType(v) == VPOINTER_OTHER && *(VTAG*)VDecodePointer(v) == VSTRING);
}
// need eof, procedure, vector, double, int, char

// logic
static inline VWORD VInlineNot(VWORD v) {
  return VEncodeBool(VBits(v) == VBits(VFALSE));
}

// equivalence
static inline VWORD VInlineEq(VWORD a, VWORD b) {
  return VEncodeBool(VBits(a) == VBits(b));
}

static inline VWORD VInlineSymbolEqv(VWORD a, VWORD b) {
  return VEncodeBool(VIsSymbol(a) && VIsSymbol(b) && VCheckSymbolEqv(a, b));
}

static inline VWORD VInlineEqv(VWORD a, VWORD b) {
  return VEncodeBool(VBits(a) == VBits(b) || (VIsSymbol(a) && VIsSymbol(b) && VCheckSymbolEqv(a, b)));
}

// lists
#define VInlineCons(a, b) VEncodePair(VFillPair(alloca(sizeof(VPair)), a, b))

static inline VWORD VInlineCar(VWORD v) {
    if(VWordType(v) != VPOINTER_PAIR) VError("car: not a pair\n");
    return VDecodePair(v)->first;
}

static inline VWORD VInlineCdr(VWORD v) {
    if(VWordType(v) != VPOINTER_PAIR) VError("cdr: not a pair\n");
    return VDecodePair(v)->rest;
}
