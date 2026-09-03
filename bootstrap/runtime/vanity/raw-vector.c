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

V_DECLARE_FUNC_BASIC(VU8VectorSetPointer, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefPointer, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetF64, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefF64, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetF32, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefF32, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetS32, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefS32, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetU16, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefU16, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetS16, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefS16, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetU8, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefU8, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetS8, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefS8, _var0, _var1);
V_DECLARE_FUNC_BASIC(VU8VectorSetBool, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VU8VectorRefBool, _var0, _var1);
V_DECLARE_FUNC(VRawVectorCopy, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0raw__vector;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1312 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1311 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "_V0vanity_V0raw__vector_V20" };
VWEAK VWORD _V0u8vector__set__f64v_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__f64v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-f64v!" };
VWEAK VWORD _V0u8vector__copy__f64;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__copy__f64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-copy-f64" };
VWEAK VWORD _V0u8vector__set__f64x4_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f64x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f64x4!" };
VWEAK VWORD _V0u8vector__set__f64x3_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f64x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f64x3!" };
VWEAK VWORD _V0u8vector__set__f64x2_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f64x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f64x2!" };
VWEAK VWORD _V0u8vector__ref__f64x4;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f64x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f64x4" };
VWEAK VWORD _V0u8vector__ref__f64x3;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f64x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f64x3" };
VWEAK VWORD _V0u8vector__ref__f64x2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f64x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f64x2" };
VWEAK VWORD _V0u8vector__set__f32v_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__f32v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-f32v!" };
VWEAK VWORD _V0u8vector__copy__f32;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__copy__f32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-copy-f32" };
VWEAK VWORD _V0u8vector__set__f32x4_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f32x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f32x4!" };
VWEAK VWORD _V0u8vector__set__f32x3_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f32x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f32x3!" };
VWEAK VWORD _V0u8vector__set__f32x2_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__f32x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-f32x2!" };
VWEAK VWORD _V0u8vector__ref__f32x4;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f32x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f32x4" };
VWEAK VWORD _V0u8vector__ref__f32x3;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f32x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f32x3" };
VWEAK VWORD _V0u8vector__ref__f32x2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__f32x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-f32x2" };
VWEAK VWORD _V0u8vector__set__s32v_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__s32v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-s32v!" };
VWEAK VWORD _V0u8vector__copy__s32;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__copy__s32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-copy-s32" };
VWEAK VWORD _V0u8vector__set__s32x4_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s32x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s32x4!" };
VWEAK VWORD _V0u8vector__set__s32x3_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s32x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s32x3!" };
VWEAK VWORD _V0u8vector__set__s32x2_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s32x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s32x2!" };
VWEAK VWORD _V0u8vector__ref__s32x4;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s32x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s32x4" };
VWEAK VWORD _V0u8vector__ref__s32x3;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s32x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s32x3" };
VWEAK VWORD _V0u8vector__ref__s32x2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s32x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s32x2" };
VWEAK VWORD _V0u8vector__set__u16v_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__u16v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-u16v!" };
VWEAK VWORD _V0u8vector__copy__u16;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__copy__u16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-copy-u16" };
VWEAK VWORD _V0u8vector__set__u16x4_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__u16x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-u16x4!" };
VWEAK VWORD _V0u8vector__set__u16x3_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__u16x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-u16x3!" };
VWEAK VWORD _V0u8vector__set__u16x2_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__u16x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-u16x2!" };
VWEAK VWORD _V0u8vector__ref__u16x4;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__u16x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-u16x4" };
VWEAK VWORD _V0u8vector__ref__u16x3;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__u16x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-u16x3" };
VWEAK VWORD _V0u8vector__ref__u16x2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__u16x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-u16x2" };
VWEAK VWORD _V0u8vector__set__s16v_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__s16v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-s16v!" };
VWEAK VWORD _V0u8vector__copy__s16;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__copy__s16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-copy-s16" };
VWEAK VWORD _V0u8vector__set__s16x4_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s16x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s16x4!" };
VWEAK VWORD _V0u8vector__set__s16x3_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s16x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s16x3!" };
VWEAK VWORD _V0u8vector__set__s16x2_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0u8vector__set__s16x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "u8vector-set-s16x2!" };
VWEAK VWORD _V0u8vector__ref__s16x4;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s16x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s16x4" };
VWEAK VWORD _V0u8vector__ref__s16x3;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s16x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s16x3" };
VWEAK VWORD _V0u8vector__ref__s16x2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__ref__s16x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-ref-s16x2" };
VWEAK VWORD _V0u8vector__set__u8v_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__u8v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-u8v!" };
VWEAK VWORD _V0u8vector__copy__u8;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__copy__u8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-copy-u8" };
VWEAK VWORD _V0u8vector__set__u8x4_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__u8x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-u8x4!" };
VWEAK VWORD _V0u8vector__set__u8x3_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__u8x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-u8x3!" };
VWEAK VWORD _V0u8vector__set__u8x2_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__u8x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-u8x2!" };
VWEAK VWORD _V0u8vector__ref__u8x4;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__u8x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-u8x4" };
VWEAK VWORD _V0u8vector__ref__u8x3;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__u8x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-u8x3" };
VWEAK VWORD _V0u8vector__ref__u8x2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__u8x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-u8x2" };
VWEAK VWORD _V0u8vector__set__s8v_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__s8v_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-s8v!" };
VWEAK VWORD _V0u8vector__copy__s8;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__copy__s8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-copy-s8" };
VWEAK VWORD _V0u8vector__set__s8x4_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__s8x4_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-s8x4!" };
VWEAK VWORD _V0u8vector__set__s8x3_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__s8x3_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-s8x3!" };
VWEAK VWORD _V0u8vector__set__s8x2_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0u8vector__set__s8x2_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "u8vector-set-s8x2!" };
VWEAK VWORD _V0u8vector__ref__s8x4;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__s8x4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-s8x4" };
VWEAK VWORD _V0u8vector__ref__s8x3;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__s8x3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-s8x3" };
VWEAK VWORD _V0u8vector__ref__s8x2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__ref__s8x2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-ref-s8x2" };
VWEAK VWORD _V40VU8VectorSetPointer;
VWEAK VClosure _VW_V40VU8VectorSetPointer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetPointer, NULL };
VWEAK VWORD _V0u8vector__set__pointer_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0u8vector__set__pointer_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "u8vector-set-pointer!" };
VWEAK VWORD _V40VU8VectorRefPointer;
VWEAK VClosure _VW_V40VU8VectorRefPointer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefPointer, NULL };
VWEAK VWORD _V0u8vector__ref__pointer;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0u8vector__ref__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "u8vector-ref-pointer" };
VWEAK VWORD _V40VU8VectorSetF64;
VWEAK VClosure _VW_V40VU8VectorSetF64 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetF64, NULL };
VWEAK VWORD _V0u8vector__set__f64_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__f64_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-f64!" };
VWEAK VWORD _V40VU8VectorRefF64;
VWEAK VClosure _VW_V40VU8VectorRefF64 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefF64, NULL };
VWEAK VWORD _V0u8vector__ref__f64;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__ref__f64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-ref-f64" };
VWEAK VWORD _V40VU8VectorSetF32;
VWEAK VClosure _VW_V40VU8VectorSetF32 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetF32, NULL };
VWEAK VWORD _V0u8vector__set__f32_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__f32_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-f32!" };
VWEAK VWORD _V40VU8VectorRefF32;
VWEAK VClosure _VW_V40VU8VectorRefF32 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefF32, NULL };
VWEAK VWORD _V0u8vector__ref__f32;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__ref__f32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-ref-f32" };
VWEAK VWORD _V40VU8VectorSetS32;
VWEAK VClosure _VW_V40VU8VectorSetS32 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetS32, NULL };
VWEAK VWORD _V0u8vector__set__s32_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__s32_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-s32!" };
VWEAK VWORD _V40VU8VectorRefS32;
VWEAK VClosure _VW_V40VU8VectorRefS32 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefS32, NULL };
VWEAK VWORD _V0u8vector__ref__s32;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__ref__s32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-ref-s32" };
VWEAK VWORD _V40VU8VectorSetU16;
VWEAK VClosure _VW_V40VU8VectorSetU16 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetU16, NULL };
VWEAK VWORD _V0u8vector__set__u16_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__u16_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-u16!" };
VWEAK VWORD _V40VU8VectorRefU16;
VWEAK VClosure _VW_V40VU8VectorRefU16 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefU16, NULL };
VWEAK VWORD _V0u8vector__ref__u16;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__ref__u16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-ref-u16" };
VWEAK VWORD _V40VU8VectorSetS16;
VWEAK VClosure _VW_V40VU8VectorSetS16 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetS16, NULL };
VWEAK VWORD _V0u8vector__set__s16_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0u8vector__set__s16_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "u8vector-set-s16!" };
VWEAK VWORD _V40VU8VectorRefS16;
VWEAK VClosure _VW_V40VU8VectorRefS16 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefS16, NULL };
VWEAK VWORD _V0u8vector__ref__s16;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__ref__s16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-ref-s16" };
VWEAK VWORD _V40VU8VectorSetU8;
VWEAK VClosure _VW_V40VU8VectorSetU8 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetU8, NULL };
VWEAK VWORD _V0u8vector__set__u8_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__set__u8_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-set-u8!" };
VWEAK VWORD _V40VU8VectorRefU8;
VWEAK VClosure _VW_V40VU8VectorRefU8 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefU8, NULL };
VWEAK VWORD _V0u8vector__ref__u8;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u8vector__ref__u8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u8vector-ref-u8" };
VWEAK VWORD _V40VU8VectorSetS8;
VWEAK VClosure _VW_V40VU8VectorSetS8 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetS8, NULL };
VWEAK VWORD _V0u8vector__set__s8_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u8vector__set__s8_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u8vector-set-s8!" };
VWEAK VWORD _V40VU8VectorRefS8;
VWEAK VClosure _VW_V40VU8VectorRefS8 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefS8, NULL };
VWEAK VWORD _V0u8vector__ref__s8;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u8vector__ref__s8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u8vector-ref-s8" };
VWEAK VWORD _V40VU8VectorSetBool;
VWEAK VClosure _VW_V40VU8VectorSetBool = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSetBool, NULL };
VWEAK VWORD _V0u8vector__set__boolean_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0u8vector__set__boolean_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "u8vector-set-boolean!" };
VWEAK VWORD _V40VU8VectorRefBool;
VWEAK VClosure _VW_V40VU8VectorRefBool = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRefBool, NULL };
VWEAK VWORD _V0u8vector__ref__boolean;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0u8vector__ref__boolean = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "u8vector-ref-boolean" };
VWEAK VWORD _V0raw__vector___Gu8vector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0raw__vector___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "raw-vector->u8vector" };
VWEAK VWORD _V0raw__vector__length;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0raw__vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "raw-vector-length" };
VWEAK VWORD _V0raw__vector__elem__width;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0raw__vector__elem__width = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "raw-vector-elem-width" };
VWEAK VWORD _V0raw__vector__type;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0raw__vector__type = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "raw-vector-type" };
VWEAK VWORD _V0raw__vector__copy_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0raw__vector__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "raw-vector-copy!" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1310 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "raw-vector-type: not a raw vector" };
VWEAK VWORD _V0f64;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0f64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "f64" };
VWEAK VWORD _V0f32;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0f32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "f32" };
VWEAK VWORD _V0s32;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0s32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "s32" };
VWEAK VWORD _V0u16;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0u16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "u16" };
VWEAK VWORD _V0s16;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0s16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "s16" };
VWEAK VWORD _V0s8;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0s8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "s8" };
VWEAK VWORD _V0u8;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0u8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "u8" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1309 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "raw-vector-elem-width: not a raw vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1308 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "raw-vector-length: not a raw vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1307 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-s8x2: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1306 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-s8x3: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1305 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-s8x4: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1304 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x2!: not a s8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1303 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x2!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1302 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x3!: not a s8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1301 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x3!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x4!: not a s8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1299 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s8x4!: not a u8vector" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1298 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "u8vector-copy-s8: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1297 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-set-s8v!: not a s8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1296 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-set-s8v!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1295 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-u8x2: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1294 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-u8x3: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1293 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-ref-u8x4: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1292 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-u8x2!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1291 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-u8x3!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1290 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-u8x4!: not a u8vector" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1289 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "u8vector-copy-u8: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1288 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-set-u8v!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s16x2: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1286 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s16x3: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1285 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s16x4: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1284 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s16x2!: not a s16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1283 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s16x2!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1282 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s16x3!: not a s16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1281 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s16x3!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1280 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s16x4!: not a s16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1279 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s16x4!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1278 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-copy-s16: not a u8vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1277 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s16v!: not a s16vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1276 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s16v!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1275 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-u16x2: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1274 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-u16x3: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1273 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-u16x4: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1272 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-u16x2!: not a u16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1271 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-u16x2!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1270 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-u16x3!: not a u16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1269 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-u16x3!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1268 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-u16x4!: not a u16vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1267 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-u16x4!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1266 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-copy-u16: not a u8vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1265 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-u16v!: not a u16vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1264 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-u16v!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1263 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s32x2: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1262 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s32x3: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1261 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-s32x4: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1260 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s32x2!: not a s32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1259 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s32x2!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1258 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s32x3!: not a s32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1257 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s32x3!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1256 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-s32x4!: not a s32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1255 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s32x4!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1254 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-copy-s32: not a u8vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1253 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-s32v!: not a s32vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1252 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-s32v!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1251 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f32x2: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1250 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f32x3: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1249 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f32x4: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1248 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f32x2!: not a f32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1247 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f32x2!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f32x3!: not a f32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1245 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f32x3!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1244 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f32x4!: not a f32vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1243 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f32x4!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1242 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-copy-f32: not a u8vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f32v!: not a f32vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-f32v!: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1239 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f64x2: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1238 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f64x3: not a u8vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-ref-f64x4: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1236 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f64x2!: not a f64vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f64x2!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f64x3!: not a f64vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f64x3!: not a u8vector" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "u8vector-set-f64x4!: not a f64vector" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f64x4!: not a u8vector" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1230 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "u8vector-copy-f64: not a u8vector" };
VWEAK VWORD _V40VRawVectorCopy;
VWEAK VClosure _VW_V40VRawVectorCopy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRawVectorCopy, NULL };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1229 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "u8vector-set-f64v!: not a f64vector" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1228 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "u8vector-set-f64v!: not a u8vector" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0raw__vector__type, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0raw__vector__elem__width, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0raw__vector__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B);
static void _V10_Du8vector__set__f64v_B_D46_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f64v_B_D46_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.891 1 0) ((bruijn ##.%k.377 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.377 0 0) (##string ##.string.1228) (bruijn ##.dst.109 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1228.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__f64v_B_D46_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f64v_B_D46_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.892 1 0) ((bruijn ##.%k.375 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.375 0 0) (##string ##.string.1229) (bruijn ##.src.111 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1229.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__f64v_B_D46_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.373 2 0) (bruijn ##.dst.109 2 1) (bruijn ##.byte-offset.110 2 2) (bruijn ##.src.111 2 3) (bruijn ##.start.112 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__f64v_B_D46_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.892) ((##vcore.f64vector? (bruijn ##.src.111 2 3))) ((close _V10_Du8vector__set__f64v_B_D46_V0k5) (close _V10_Du8vector__set__f64v_B_D46_V0k6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k6, self)))));
    }
}
static void _V10_Du8vector__set__f64v_B_D46_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f64v_B_D46_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.893 1 0) ((bruijn ##.%k.382 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.382 0 0) (##string ##.string.1228) (bruijn ##.dst.113 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1228.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__f64v_B_D46_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f64v_B_D46_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.894 1 0) ((bruijn ##.%k.380 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.380 0 0) (##string ##.string.1229) (bruijn ##.src.115 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1229.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__f64v_B_D46_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.378 2 0) (bruijn ##.dst.113 2 1) (bruijn ##.byte-offset.114 2 2) (bruijn ##.src.115 2 3) (bruijn ##.start.116 2 4) (bruijn ##.end.117 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__f64v_B_D46_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.894) ((##vcore.f64vector? (bruijn ##.src.115 2 3))) ((close _V10_Du8vector__set__f64v_B_D46_V0k9) (close _V10_Du8vector__set__f64v_B_D46_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k10, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-f64v!) #t (bruijn ##.u8vector-set-f64v!.46 1 0) (bruijn ##.%k.372 0 0) (bruijn ##.dst.106 0 1) (bruijn ##.byte-offset.107 0 2) (bruijn ##.src.108 0 3) 0)) (5 (basic-block 1 1 (##.%p.891) ((##vcore.u8vector? (bruijn ##.dst.109 1 1))) ((close _V10_Du8vector__set__f64v_B_D46_V0k3) (close _V10_Du8vector__set__f64v_B_D46_V0k4)))) (6 (basic-block 1 1 (##.%p.893) ((##vcore.u8vector? (bruijn ##.dst.113 1 1))) ((close _V10_Du8vector__set__f64v_B_D46_V0k7) (close _V10_Du8vector__set__f64v_B_D46_V0k8)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-f64v!) #t (bruijn ##.u8vector-set-f64v!.46 1 0) (bruijn ##.%k.372 0 0) (bruijn ##.dst.106 0 1) (bruijn ##.byte-offset.107 0 2) (bruijn ##.src.108 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.891) ((##vcore.u8vector? (bruijn ##.dst.109 1 1))) ((close _V10_Du8vector__set__f64v_B_D46_V0k3) (close _V10_Du8vector__set__f64v_B_D46_V0k4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k4, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.893) ((##vcore.u8vector? (bruijn ##.dst.113 1 1))) ((close _V10_Du8vector__set__f64v_B_D46_V0k7) (close _V10_Du8vector__set__f64v_B_D46_V0k8)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f64v_B_D46_V0k8, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B\n"
);
static void _V10_Du8vector__copy__f64_D47_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__f64_D47_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.898 1 0) ((bruijn ##.%k.392 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.392 0 0) (##string ##.string.1230) (bruijn ##.vec.121 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1230.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__f64_D47_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.388 3 0) (bruijn ##.ret.124 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__f64_D47_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__f64_D47_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.899 ##.%x.900) ((##vcore.* (bruijn ##.n.123 3 3) 8) (##vcore.+ (bruijn ##.byte-offset.122 3 2) (bruijn ##.%x.899 0 0))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__f64_D47_V0k14) (bruijn ##.ret.124 1 0) 0 (bruijn ##.vec.121 3 1) (bruijn ##.byte-offset.122 3 2) (bruijn ##.%x.900 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(8l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f64_D47_V0k14, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[1]);
    }
}
static void _V10_Du8vector__copy__f64_D47_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f64vector (close _V10_Du8vector__copy__f64_D47_V0k13) (bruijn ##.n.123 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f64_D47_V0k13, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-f64) #t (bruijn ##.u8vector-copy-f64.47 1 1) (bruijn ##.%k.383 0 0) (bruijn ##.vec.118 0 1) 0)) (3 (basic-block 3 3 (##.%x.895 ##.%x.896 ##.%x.897) ((##vcore.u8vector-length (bruijn ##.vec.119 1 1)) (##vcore.- (bruijn ##.%x.895 0 0) (bruijn ##.byte-offset.120 1 2)) (##vcore.quotient (bruijn ##.%x.896 0 1) 8)) (##qualified-call (vanity raw-vector u8vector-copy-f64) #t (bruijn ##.u8vector-copy-f64.47 2 1) (bruijn ##.%k.384 1 0) (bruijn ##.vec.119 1 1) (bruijn ##.byte-offset.120 1 2) (bruijn ##.%x.897 0 2)))) (4 (basic-block 1 1 (##.%p.898) ((##vcore.u8vector? (bruijn ##.vec.121 1 1))) ((close _V10_Du8vector__copy__f64_D47_V0k11) (close _V10_Du8vector__copy__f64_D47_V0k12)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-f64) #t (bruijn ##.u8vector-copy-f64.47 1 1) (bruijn ##.%k.383 0 0) (bruijn ##.vec.118 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.895 ##.%x.896 ##.%x.897) ((##vcore.u8vector-length (bruijn ##.vec.119 1 1)) (##vcore.- (bruijn ##.%x.895 0 0) (bruijn ##.byte-offset.120 1 2)) (##vcore.quotient (bruijn ##.%x.896 0 1) 8)) (##qualified-call (vanity raw-vector u8vector-copy-f64) #t (bruijn ##.u8vector-copy-f64.47 2 1) (bruijn ##.%k.384 1 0) (bruijn ##.vec.119 1 1) (bruijn ##.byte-offset.120 1 2) (bruijn ##.%x.897 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
    self->vars[2] = _VBasic_VQuot2(runtime, NULL,
      self->vars[1],
      VEncodeInt(8l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.898) ((##vcore.u8vector? (bruijn ##.vec.121 1 1))) ((close _V10_Du8vector__copy__f64_D47_V0k11) (close _V10_Du8vector__copy__f64_D47_V0k12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f64_D47_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f64_D47_V0k12, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__f64\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__f64\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.901 1 0) ((bruijn ##.%k.397 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.397 0 0) (##string ##.string.1231) (bruijn ##.vec.125 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1231.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.902 1 0) ((bruijn ##.%k.395 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.395 0 0) (##string ##.string.1232) (bruijn ##.src.127 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1232.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.393 2 0) (bruijn ##.vec.125 2 1) (bruijn ##.byte-offset.126 2 2) (bruijn ##.src.127 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.902) ((##vcore.f64vector? (bruijn ##.src.127 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k17) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k18, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.901) ((##vcore.u8vector? (bruijn ##.vec.125 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k15) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B_V0k16, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.903 1 0) ((bruijn ##.%k.402 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.402 0 0) (##string ##.string.1233) (bruijn ##.vec.128 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1233.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.904 1 0) ((bruijn ##.%k.400 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.400 0 0) (##string ##.string.1234) (bruijn ##.src.130 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1234.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.398 2 0) (bruijn ##.vec.128 2 1) (bruijn ##.byte-offset.129 2 2) (bruijn ##.src.130 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.904) ((##vcore.f64vector? (bruijn ##.src.130 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k21) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k22, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.903) ((##vcore.u8vector? (bruijn ##.vec.128 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k19) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k20)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B_V0k20, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.905 1 0) ((bruijn ##.%k.407 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.407 0 0) (##string ##.string.1235) (bruijn ##.vec.131 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1235.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.906 1 0) ((bruijn ##.%k.405 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.405 0 0) (##string ##.string.1236) (bruijn ##.src.133 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1236.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.403 2 0) (bruijn ##.vec.131 2 1) (bruijn ##.byte-offset.132 2 2) (bruijn ##.src.133 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.906) ((##vcore.f64vector? (bruijn ##.src.133 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k25) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k26)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k26, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.905) ((##vcore.u8vector? (bruijn ##.vec.131 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k23) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k24)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B_V0k24, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.907 1 0) ((bruijn ##.%k.411 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.411 0 0) (##string ##.string.1237) (bruijn ##.vec.134 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.408 3 0) (bruijn ##.ret.136 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.908) ((##vcore.+ (bruijn ##.byte-offset.135 3 2) 32)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k30) (bruijn ##.ret.136 1 0) 0 (bruijn ##.vec.134 3 1) (bruijn ##.byte-offset.135 3 2) (bruijn ##.%x.908 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(32l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k30, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f64vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k29) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k29, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.907) ((##vcore.u8vector? (bruijn ##.vec.134 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k27) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4_V0k28, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.909 1 0) ((bruijn ##.%k.415 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.415 0 0) (##string ##.string.1238) (bruijn ##.vec.137 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1238.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.412 3 0) (bruijn ##.ret.139 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.910) ((##vcore.+ (bruijn ##.byte-offset.138 3 2) 24)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k34) (bruijn ##.ret.139 1 0) 0 (bruijn ##.vec.137 3 1) (bruijn ##.byte-offset.138 3 2) (bruijn ##.%x.910 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(24l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k34, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f64vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k33) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k33, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.909) ((##vcore.u8vector? (bruijn ##.vec.137 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k31) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k31, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3_V0k32, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.911 1 0) ((bruijn ##.%k.419 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.419 0 0) (##string ##.string.1239) (bruijn ##.vec.140 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1239.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k38(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.416 3 0) (bruijn ##.ret.142 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.912) ((##vcore.+ (bruijn ##.byte-offset.141 3 2) 16)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k38) (bruijn ##.ret.142 1 0) 0 (bruijn ##.vec.140 3 1) (bruijn ##.byte-offset.141 3 2) (bruijn ##.%x.912 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(16l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k38, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f64vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k37) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k37, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.911) ((##vcore.u8vector? (bruijn ##.vec.140 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k35) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k36)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2_V0k36, self)))));
    }
}
static void _V10_Du8vector__set__f32v_B_D54_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f32v_B_D54_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.913 1 0) ((bruijn ##.%k.425 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.425 0 0) (##string ##.string.1240) (bruijn ##.dst.146 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1240.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__f32v_B_D54_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f32v_B_D54_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.914 1 0) ((bruijn ##.%k.423 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.423 0 0) (##string ##.string.1241) (bruijn ##.src.148 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1241.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__f32v_B_D54_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.421 2 0) (bruijn ##.dst.146 2 1) (bruijn ##.byte-offset.147 2 2) (bruijn ##.src.148 2 3) (bruijn ##.start.149 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__f32v_B_D54_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.914) ((##vcore.f32vector? (bruijn ##.src.148 2 3))) ((close _V10_Du8vector__set__f32v_B_D54_V0k41) (close _V10_Du8vector__set__f32v_B_D54_V0k42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k42, self)))));
    }
}
static void _V10_Du8vector__set__f32v_B_D54_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f32v_B_D54_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.915 1 0) ((bruijn ##.%k.430 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.430 0 0) (##string ##.string.1240) (bruijn ##.dst.150 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1240.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__f32v_B_D54_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__f32v_B_D54_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.916 1 0) ((bruijn ##.%k.428 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.428 0 0) (##string ##.string.1241) (bruijn ##.src.152 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1241.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__f32v_B_D54_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.426 2 0) (bruijn ##.dst.150 2 1) (bruijn ##.byte-offset.151 2 2) (bruijn ##.src.152 2 3) (bruijn ##.start.153 2 4) (bruijn ##.end.154 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__f32v_B_D54_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.916) ((##vcore.f32vector? (bruijn ##.src.152 2 3))) ((close _V10_Du8vector__set__f32v_B_D54_V0k45) (close _V10_Du8vector__set__f32v_B_D54_V0k46)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k46, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-f32v!) #t (bruijn ##.u8vector-set-f32v!.54 1 8) (bruijn ##.%k.420 0 0) (bruijn ##.dst.143 0 1) (bruijn ##.byte-offset.144 0 2) (bruijn ##.src.145 0 3) 0)) (5 (basic-block 1 1 (##.%p.913) ((##vcore.u8vector? (bruijn ##.dst.146 1 1))) ((close _V10_Du8vector__set__f32v_B_D54_V0k39) (close _V10_Du8vector__set__f32v_B_D54_V0k40)))) (6 (basic-block 1 1 (##.%p.915) ((##vcore.u8vector? (bruijn ##.dst.150 1 1))) ((close _V10_Du8vector__set__f32v_B_D54_V0k43) (close _V10_Du8vector__set__f32v_B_D54_V0k44)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-f32v!) #t (bruijn ##.u8vector-set-f32v!.54 1 8) (bruijn ##.%k.420 0 0) (bruijn ##.dst.143 0 1) (bruijn ##.byte-offset.144 0 2) (bruijn ##.src.145 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.913) ((##vcore.u8vector? (bruijn ##.dst.146 1 1))) ((close _V10_Du8vector__set__f32v_B_D54_V0k39) (close _V10_Du8vector__set__f32v_B_D54_V0k40)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k40, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.915) ((##vcore.u8vector? (bruijn ##.dst.150 1 1))) ((close _V10_Du8vector__set__f32v_B_D54_V0k43) (close _V10_Du8vector__set__f32v_B_D54_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__f32v_B_D54_V0k44, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B\n"
);
static void _V10_Du8vector__copy__f32_D55_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__f32_D55_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.920 1 0) ((bruijn ##.%k.440 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.440 0 0) (##string ##.string.1242) (bruijn ##.vec.158 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1242.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__f32_D55_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.436 3 0) (bruijn ##.ret.161 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__f32_D55_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__f32_D55_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.921 ##.%x.922) ((##vcore.* (bruijn ##.n.160 3 3) 4) (##vcore.+ (bruijn ##.byte-offset.159 3 2) (bruijn ##.%x.921 0 0))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__f32_D55_V0k50) (bruijn ##.ret.161 1 0) 0 (bruijn ##.vec.158 3 1) (bruijn ##.byte-offset.159 3 2) (bruijn ##.%x.922 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(4l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f32_D55_V0k50, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[1]);
    }
}
static void _V10_Du8vector__copy__f32_D55_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f32vector (close _V10_Du8vector__copy__f32_D55_V0k49) (bruijn ##.n.160 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f32_D55_V0k49, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-f32) #t (bruijn ##.u8vector-copy-f32.55 1 9) (bruijn ##.%k.431 0 0) (bruijn ##.vec.155 0 1) 0)) (3 (basic-block 3 3 (##.%x.917 ##.%x.918 ##.%x.919) ((##vcore.u8vector-length (bruijn ##.vec.156 1 1)) (##vcore.- (bruijn ##.%x.917 0 0) (bruijn ##.byte-offset.157 1 2)) (##vcore.quotient (bruijn ##.%x.918 0 1) 4)) (##qualified-call (vanity raw-vector u8vector-copy-f32) #t (bruijn ##.u8vector-copy-f32.55 2 9) (bruijn ##.%k.432 1 0) (bruijn ##.vec.156 1 1) (bruijn ##.byte-offset.157 1 2) (bruijn ##.%x.919 0 2)))) (4 (basic-block 1 1 (##.%p.920) ((##vcore.u8vector? (bruijn ##.vec.158 1 1))) ((close _V10_Du8vector__copy__f32_D55_V0k47) (close _V10_Du8vector__copy__f32_D55_V0k48)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-f32) #t (bruijn ##.u8vector-copy-f32.55 1 9) (bruijn ##.%k.431 0 0) (bruijn ##.vec.155 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.917 ##.%x.918 ##.%x.919) ((##vcore.u8vector-length (bruijn ##.vec.156 1 1)) (##vcore.- (bruijn ##.%x.917 0 0) (bruijn ##.byte-offset.157 1 2)) (##vcore.quotient (bruijn ##.%x.918 0 1) 4)) (##qualified-call (vanity raw-vector u8vector-copy-f32) #t (bruijn ##.u8vector-copy-f32.55 2 9) (bruijn ##.%k.432 1 0) (bruijn ##.vec.156 1 1) (bruijn ##.byte-offset.157 1 2) (bruijn ##.%x.919 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
    self->vars[2] = _VBasic_VQuot2(runtime, NULL,
      self->vars[1],
      VEncodeInt(4l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.920) ((##vcore.u8vector? (bruijn ##.vec.158 1 1))) ((close _V10_Du8vector__copy__f32_D55_V0k47) (close _V10_Du8vector__copy__f32_D55_V0k48)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f32_D55_V0k47, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__f32_D55_V0k48, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__f32\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__f32\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.923 1 0) ((bruijn ##.%k.445 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.445 0 0) (##string ##.string.1243) (bruijn ##.vec.162 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1243.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.924 1 0) ((bruijn ##.%k.443 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.443 0 0) (##string ##.string.1244) (bruijn ##.src.164 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1244.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.441 2 0) (bruijn ##.vec.162 2 1) (bruijn ##.byte-offset.163 2 2) (bruijn ##.src.164 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k52(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.924) ((##vcore.f32vector? (bruijn ##.src.164 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k53) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k54)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k54, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.923) ((##vcore.u8vector? (bruijn ##.vec.162 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k51) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k52)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B_V0k52, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.925 1 0) ((bruijn ##.%k.450 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.450 0 0) (##string ##.string.1245) (bruijn ##.vec.165 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1245.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.926 1 0) ((bruijn ##.%k.448 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.448 0 0) (##string ##.string.1246) (bruijn ##.src.167 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1246.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.446 2 0) (bruijn ##.vec.165 2 1) (bruijn ##.byte-offset.166 2 2) (bruijn ##.src.167 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k56(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.926) ((##vcore.f32vector? (bruijn ##.src.167 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k57) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k58, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.925) ((##vcore.u8vector? (bruijn ##.vec.165 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k55) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B_V0k56, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.927 1 0) ((bruijn ##.%k.455 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.455 0 0) (##string ##.string.1247) (bruijn ##.vec.168 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1247.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.928 1 0) ((bruijn ##.%k.453 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.453 0 0) (##string ##.string.1248) (bruijn ##.src.170 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1248.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.451 2 0) (bruijn ##.vec.168 2 1) (bruijn ##.byte-offset.169 2 2) (bruijn ##.src.170 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.928) ((##vcore.f32vector? (bruijn ##.src.170 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k61) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k62, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.927) ((##vcore.u8vector? (bruijn ##.vec.168 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k59) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k60)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B_V0k60, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.929 1 0) ((bruijn ##.%k.459 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.459 0 0) (##string ##.string.1249) (bruijn ##.vec.171 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1249.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.456 3 0) (bruijn ##.ret.173 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.930) ((##vcore.+ (bruijn ##.byte-offset.172 3 2) 16)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k66) (bruijn ##.ret.173 1 0) 0 (bruijn ##.vec.171 3 1) (bruijn ##.byte-offset.172 3 2) (bruijn ##.%x.930 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(16l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k66, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k65) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k65, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.929) ((##vcore.u8vector? (bruijn ##.vec.171 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k63) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4_V0k64, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.931 1 0) ((bruijn ##.%k.463 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.463 0 0) (##string ##.string.1250) (bruijn ##.vec.174 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1250.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.460 3 0) (bruijn ##.ret.176 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.932) ((##vcore.+ (bruijn ##.byte-offset.175 3 2) 12)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k70) (bruijn ##.ret.176 1 0) 0 (bruijn ##.vec.174 3 1) (bruijn ##.byte-offset.175 3 2) (bruijn ##.%x.932 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(12l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k70, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k68(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k69) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k69, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.931) ((##vcore.u8vector? (bruijn ##.vec.174 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k67) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k68)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3_V0k68, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.933 1 0) ((bruijn ##.%k.467 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.467 0 0) (##string ##.string.1251) (bruijn ##.vec.177 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1251.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.464 3 0) (bruijn ##.ret.179 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.934) ((##vcore.+ (bruijn ##.byte-offset.178 3 2) 8)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k74) (bruijn ##.ret.179 1 0) 0 (bruijn ##.vec.177 3 1) (bruijn ##.byte-offset.178 3 2) (bruijn ##.%x.934 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(8l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k74, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-f32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k73) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k73, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.933) ((##vcore.u8vector? (bruijn ##.vec.177 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k71) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k72)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2_V0k72, self)))));
    }
}
static void _V10_Du8vector__set__s32v_B_D62_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s32v_B_D62_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.935 1 0) ((bruijn ##.%k.473 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.473 0 0) (##string ##.string.1252) (bruijn ##.dst.183 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1252.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s32v_B_D62_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s32v_B_D62_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.936 1 0) ((bruijn ##.%k.471 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.471 0 0) (##string ##.string.1253) (bruijn ##.src.185 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1253.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s32v_B_D62_V0k78(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.469 2 0) (bruijn ##.dst.183 2 1) (bruijn ##.byte-offset.184 2 2) (bruijn ##.src.185 2 3) (bruijn ##.start.186 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__s32v_B_D62_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.936) ((##vcore.s32vector? (bruijn ##.src.185 2 3))) ((close _V10_Du8vector__set__s32v_B_D62_V0k77) (close _V10_Du8vector__set__s32v_B_D62_V0k78)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k78, self)))));
    }
}
static void _V10_Du8vector__set__s32v_B_D62_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s32v_B_D62_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.937 1 0) ((bruijn ##.%k.478 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.478 0 0) (##string ##.string.1252) (bruijn ##.dst.187 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1252.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s32v_B_D62_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s32v_B_D62_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.938 1 0) ((bruijn ##.%k.476 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.476 0 0) (##string ##.string.1253) (bruijn ##.src.189 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1253.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s32v_B_D62_V0k82(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.474 2 0) (bruijn ##.dst.187 2 1) (bruijn ##.byte-offset.188 2 2) (bruijn ##.src.189 2 3) (bruijn ##.start.190 2 4) (bruijn ##.end.191 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__s32v_B_D62_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.938) ((##vcore.s32vector? (bruijn ##.src.189 2 3))) ((close _V10_Du8vector__set__s32v_B_D62_V0k81) (close _V10_Du8vector__set__s32v_B_D62_V0k82)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k82, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-s32v!) #t (bruijn ##.u8vector-set-s32v!.62 1 16) (bruijn ##.%k.468 0 0) (bruijn ##.dst.180 0 1) (bruijn ##.byte-offset.181 0 2) (bruijn ##.src.182 0 3) 0)) (5 (basic-block 1 1 (##.%p.935) ((##vcore.u8vector? (bruijn ##.dst.183 1 1))) ((close _V10_Du8vector__set__s32v_B_D62_V0k75) (close _V10_Du8vector__set__s32v_B_D62_V0k76)))) (6 (basic-block 1 1 (##.%p.937) ((##vcore.u8vector? (bruijn ##.dst.187 1 1))) ((close _V10_Du8vector__set__s32v_B_D62_V0k79) (close _V10_Du8vector__set__s32v_B_D62_V0k80)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-s32v!) #t (bruijn ##.u8vector-set-s32v!.62 1 16) (bruijn ##.%k.468 0 0) (bruijn ##.dst.180 0 1) (bruijn ##.byte-offset.181 0 2) (bruijn ##.src.182 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.935) ((##vcore.u8vector? (bruijn ##.dst.183 1 1))) ((close _V10_Du8vector__set__s32v_B_D62_V0k75) (close _V10_Du8vector__set__s32v_B_D62_V0k76)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k76, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.937) ((##vcore.u8vector? (bruijn ##.dst.187 1 1))) ((close _V10_Du8vector__set__s32v_B_D62_V0k79) (close _V10_Du8vector__set__s32v_B_D62_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s32v_B_D62_V0k80, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B\n"
);
static void _V10_Du8vector__copy__s32_D63_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s32_D63_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.942 1 0) ((bruijn ##.%k.488 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.488 0 0) (##string ##.string.1254) (bruijn ##.vec.195 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1254.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__s32_D63_V0k86(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.484 3 0) (bruijn ##.ret.198 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__s32_D63_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s32_D63_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.943 ##.%x.944) ((##vcore.* (bruijn ##.n.197 3 3) 4) (##vcore.+ (bruijn ##.byte-offset.196 3 2) (bruijn ##.%x.943 0 0))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__s32_D63_V0k86) (bruijn ##.ret.198 1 0) 0 (bruijn ##.vec.195 3 1) (bruijn ##.byte-offset.196 3 2) (bruijn ##.%x.944 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(4l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s32_D63_V0k86, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[1]);
    }
}
static void _V10_Du8vector__copy__s32_D63_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s32vector (close _V10_Du8vector__copy__s32_D63_V0k85) (bruijn ##.n.197 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s32_D63_V0k85, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-s32) #t (bruijn ##.u8vector-copy-s32.63 1 17) (bruijn ##.%k.479 0 0) (bruijn ##.vec.192 0 1) 0)) (3 (basic-block 3 3 (##.%x.939 ##.%x.940 ##.%x.941) ((##vcore.u8vector-length (bruijn ##.vec.193 1 1)) (##vcore.- (bruijn ##.%x.939 0 0) (bruijn ##.byte-offset.194 1 2)) (##vcore.quotient (bruijn ##.%x.940 0 1) 4)) (##qualified-call (vanity raw-vector u8vector-copy-s32) #t (bruijn ##.u8vector-copy-s32.63 2 17) (bruijn ##.%k.480 1 0) (bruijn ##.vec.193 1 1) (bruijn ##.byte-offset.194 1 2) (bruijn ##.%x.941 0 2)))) (4 (basic-block 1 1 (##.%p.942) ((##vcore.u8vector? (bruijn ##.vec.195 1 1))) ((close _V10_Du8vector__copy__s32_D63_V0k83) (close _V10_Du8vector__copy__s32_D63_V0k84)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-s32) #t (bruijn ##.u8vector-copy-s32.63 1 17) (bruijn ##.%k.479 0 0) (bruijn ##.vec.192 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.939 ##.%x.940 ##.%x.941) ((##vcore.u8vector-length (bruijn ##.vec.193 1 1)) (##vcore.- (bruijn ##.%x.939 0 0) (bruijn ##.byte-offset.194 1 2)) (##vcore.quotient (bruijn ##.%x.940 0 1) 4)) (##qualified-call (vanity raw-vector u8vector-copy-s32) #t (bruijn ##.u8vector-copy-s32.63 2 17) (bruijn ##.%k.480 1 0) (bruijn ##.vec.193 1 1) (bruijn ##.byte-offset.194 1 2) (bruijn ##.%x.941 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
    self->vars[2] = _VBasic_VQuot2(runtime, NULL,
      self->vars[1],
      VEncodeInt(4l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.942) ((##vcore.u8vector? (bruijn ##.vec.195 1 1))) ((close _V10_Du8vector__copy__s32_D63_V0k83) (close _V10_Du8vector__copy__s32_D63_V0k84)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s32_D63_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s32_D63_V0k84, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__s32\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s32\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.945 1 0) ((bruijn ##.%k.493 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.493 0 0) (##string ##.string.1255) (bruijn ##.vec.199 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1255.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.946 1 0) ((bruijn ##.%k.491 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.491 0 0) (##string ##.string.1256) (bruijn ##.src.201 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1256.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.489 2 0) (bruijn ##.vec.199 2 1) (bruijn ##.byte-offset.200 2 2) (bruijn ##.src.201 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.946) ((##vcore.s32vector? (bruijn ##.src.201 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k89) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k90, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.945) ((##vcore.u8vector? (bruijn ##.vec.199 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k87) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B_V0k88, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.947 1 0) ((bruijn ##.%k.498 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.498 0 0) (##string ##.string.1257) (bruijn ##.vec.202 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1257.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.948 1 0) ((bruijn ##.%k.496 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.496 0 0) (##string ##.string.1258) (bruijn ##.src.204 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1258.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.494 2 0) (bruijn ##.vec.202 2 1) (bruijn ##.byte-offset.203 2 2) (bruijn ##.src.204 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.948) ((##vcore.s32vector? (bruijn ##.src.204 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k93) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k94, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.947) ((##vcore.u8vector? (bruijn ##.vec.202 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k91) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k92)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B_V0k92, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.949 1 0) ((bruijn ##.%k.503 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.503 0 0) (##string ##.string.1259) (bruijn ##.vec.205 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1259.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.950 1 0) ((bruijn ##.%k.501 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.501 0 0) (##string ##.string.1260) (bruijn ##.src.207 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1260.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.499 2 0) (bruijn ##.vec.205 2 1) (bruijn ##.byte-offset.206 2 2) (bruijn ##.src.207 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.950) ((##vcore.s32vector? (bruijn ##.src.207 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k97) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k98)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k98, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.949) ((##vcore.u8vector? (bruijn ##.vec.205 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k95) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B_V0k96, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.951 1 0) ((bruijn ##.%k.507 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.507 0 0) (##string ##.string.1261) (bruijn ##.vec.208 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1261.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.504 3 0) (bruijn ##.ret.210 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.952) ((##vcore.+ (bruijn ##.byte-offset.209 3 2) 16)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k102) (bruijn ##.ret.210 1 0) 0 (bruijn ##.vec.208 3 1) (bruijn ##.byte-offset.209 3 2) (bruijn ##.%x.952 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(16l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k102, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k101) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k101, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.951) ((##vcore.u8vector? (bruijn ##.vec.208 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k99) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4_V0k100, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.953 1 0) ((bruijn ##.%k.511 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.511 0 0) (##string ##.string.1262) (bruijn ##.vec.211 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1262.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k106(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.508 3 0) (bruijn ##.ret.213 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.954) ((##vcore.+ (bruijn ##.byte-offset.212 3 2) 12)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k106) (bruijn ##.ret.213 1 0) 0 (bruijn ##.vec.211 3 1) (bruijn ##.byte-offset.212 3 2) (bruijn ##.%x.954 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(12l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k106, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k105) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k105, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.953) ((##vcore.u8vector? (bruijn ##.vec.211 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k103) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3_V0k104, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.955 1 0) ((bruijn ##.%k.515 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.515 0 0) (##string ##.string.1263) (bruijn ##.vec.214 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1263.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k110(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.512 3 0) (bruijn ##.ret.216 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.956) ((##vcore.+ (bruijn ##.byte-offset.215 3 2) 8)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k110) (bruijn ##.ret.216 1 0) 0 (bruijn ##.vec.214 3 1) (bruijn ##.byte-offset.215 3 2) (bruijn ##.%x.956 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(8l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k110, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s32vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k109) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k109, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.955) ((##vcore.u8vector? (bruijn ##.vec.214 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k107) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k108)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2_V0k108, self)))));
    }
}
static void _V10_Du8vector__set__u16v_B_D70_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u16v_B_D70_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.957 1 0) ((bruijn ##.%k.521 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.521 0 0) (##string ##.string.1264) (bruijn ##.dst.220 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1264.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__u16v_B_D70_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u16v_B_D70_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.958 1 0) ((bruijn ##.%k.519 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.519 0 0) (##string ##.string.1265) (bruijn ##.src.222 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1265.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__u16v_B_D70_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.517 2 0) (bruijn ##.dst.220 2 1) (bruijn ##.byte-offset.221 2 2) (bruijn ##.src.222 2 3) (bruijn ##.start.223 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__u16v_B_D70_V0k112(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.958) ((##vcore.u16vector? (bruijn ##.src.222 2 3))) ((close _V10_Du8vector__set__u16v_B_D70_V0k113) (close _V10_Du8vector__set__u16v_B_D70_V0k114)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k114, self)))));
    }
}
static void _V10_Du8vector__set__u16v_B_D70_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u16v_B_D70_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.959 1 0) ((bruijn ##.%k.526 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.526 0 0) (##string ##.string.1264) (bruijn ##.dst.224 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1264.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__u16v_B_D70_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u16v_B_D70_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.960 1 0) ((bruijn ##.%k.524 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.524 0 0) (##string ##.string.1265) (bruijn ##.src.226 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1265.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__u16v_B_D70_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.522 2 0) (bruijn ##.dst.224 2 1) (bruijn ##.byte-offset.225 2 2) (bruijn ##.src.226 2 3) (bruijn ##.start.227 2 4) (bruijn ##.end.228 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__u16v_B_D70_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.960) ((##vcore.u16vector? (bruijn ##.src.226 2 3))) ((close _V10_Du8vector__set__u16v_B_D70_V0k117) (close _V10_Du8vector__set__u16v_B_D70_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k118, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-u16v!) #t (bruijn ##.u8vector-set-u16v!.70 1 24) (bruijn ##.%k.516 0 0) (bruijn ##.dst.217 0 1) (bruijn ##.byte-offset.218 0 2) (bruijn ##.src.219 0 3) 0)) (5 (basic-block 1 1 (##.%p.957) ((##vcore.u8vector? (bruijn ##.dst.220 1 1))) ((close _V10_Du8vector__set__u16v_B_D70_V0k111) (close _V10_Du8vector__set__u16v_B_D70_V0k112)))) (6 (basic-block 1 1 (##.%p.959) ((##vcore.u8vector? (bruijn ##.dst.224 1 1))) ((close _V10_Du8vector__set__u16v_B_D70_V0k115) (close _V10_Du8vector__set__u16v_B_D70_V0k116)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-u16v!) #t (bruijn ##.u8vector-set-u16v!.70 1 24) (bruijn ##.%k.516 0 0) (bruijn ##.dst.217 0 1) (bruijn ##.byte-offset.218 0 2) (bruijn ##.src.219 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.957) ((##vcore.u8vector? (bruijn ##.dst.220 1 1))) ((close _V10_Du8vector__set__u16v_B_D70_V0k111) (close _V10_Du8vector__set__u16v_B_D70_V0k112)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k112, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.959) ((##vcore.u8vector? (bruijn ##.dst.224 1 1))) ((close _V10_Du8vector__set__u16v_B_D70_V0k115) (close _V10_Du8vector__set__u16v_B_D70_V0k116)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u16v_B_D70_V0k116, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B\n"
);
static void _V10_Du8vector__copy__u16_D71_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__u16_D71_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.964 1 0) ((bruijn ##.%k.536 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.536 0 0) (##string ##.string.1266) (bruijn ##.vec.232 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1266.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__u16_D71_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.532 3 0) (bruijn ##.ret.235 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__u16_D71_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__u16_D71_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.965 ##.%x.966) ((##vcore.* (bruijn ##.n.234 3 3) 2) (##vcore.+ (bruijn ##.byte-offset.233 3 2) (bruijn ##.%x.965 0 0))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__u16_D71_V0k122) (bruijn ##.ret.235 1 0) 0 (bruijn ##.vec.232 3 1) (bruijn ##.byte-offset.233 3 2) (bruijn ##.%x.966 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u16_D71_V0k122, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[1]);
    }
}
static void _V10_Du8vector__copy__u16_D71_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u16vector (close _V10_Du8vector__copy__u16_D71_V0k121) (bruijn ##.n.234 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u16_D71_V0k121, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-u16) #t (bruijn ##.u8vector-copy-u16.71 1 25) (bruijn ##.%k.527 0 0) (bruijn ##.vec.229 0 1) 0)) (3 (basic-block 3 3 (##.%x.961 ##.%x.962 ##.%x.963) ((##vcore.u8vector-length (bruijn ##.vec.230 1 1)) (##vcore.- (bruijn ##.%x.961 0 0) (bruijn ##.byte-offset.231 1 2)) (##vcore.quotient (bruijn ##.%x.962 0 1) 2)) (##qualified-call (vanity raw-vector u8vector-copy-u16) #t (bruijn ##.u8vector-copy-u16.71 2 25) (bruijn ##.%k.528 1 0) (bruijn ##.vec.230 1 1) (bruijn ##.byte-offset.231 1 2) (bruijn ##.%x.963 0 2)))) (4 (basic-block 1 1 (##.%p.964) ((##vcore.u8vector? (bruijn ##.vec.232 1 1))) ((close _V10_Du8vector__copy__u16_D71_V0k119) (close _V10_Du8vector__copy__u16_D71_V0k120)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-u16) #t (bruijn ##.u8vector-copy-u16.71 1 25) (bruijn ##.%k.527 0 0) (bruijn ##.vec.229 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.961 ##.%x.962 ##.%x.963) ((##vcore.u8vector-length (bruijn ##.vec.230 1 1)) (##vcore.- (bruijn ##.%x.961 0 0) (bruijn ##.byte-offset.231 1 2)) (##vcore.quotient (bruijn ##.%x.962 0 1) 2)) (##qualified-call (vanity raw-vector u8vector-copy-u16) #t (bruijn ##.u8vector-copy-u16.71 2 25) (bruijn ##.%k.528 1 0) (bruijn ##.vec.230 1 1) (bruijn ##.byte-offset.231 1 2) (bruijn ##.%x.963 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
    self->vars[2] = _VBasic_VQuot2(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.964) ((##vcore.u8vector? (bruijn ##.vec.232 1 1))) ((close _V10_Du8vector__copy__u16_D71_V0k119) (close _V10_Du8vector__copy__u16_D71_V0k120)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u16_D71_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u16_D71_V0k120, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__u16\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__u16\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.967 1 0) ((bruijn ##.%k.541 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.541 0 0) (##string ##.string.1267) (bruijn ##.vec.236 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1267.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.968 1 0) ((bruijn ##.%k.539 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.539 0 0) (##string ##.string.1268) (bruijn ##.src.238 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1268.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.537 2 0) (bruijn ##.vec.236 2 1) (bruijn ##.byte-offset.237 2 2) (bruijn ##.src.238 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.968) ((##vcore.u16vector? (bruijn ##.src.238 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k125) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k126, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.967) ((##vcore.u8vector? (bruijn ##.vec.236 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k123) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k124)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B_V0k124, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.969 1 0) ((bruijn ##.%k.546 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.546 0 0) (##string ##.string.1269) (bruijn ##.vec.239 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1269.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.970 1 0) ((bruijn ##.%k.544 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.544 0 0) (##string ##.string.1270) (bruijn ##.src.241 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1270.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.542 2 0) (bruijn ##.vec.239 2 1) (bruijn ##.byte-offset.240 2 2) (bruijn ##.src.241 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k128(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.970) ((##vcore.u16vector? (bruijn ##.src.241 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k129) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k129, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k130, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.969) ((##vcore.u8vector? (bruijn ##.vec.239 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k127) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k128)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B_V0k128, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.971 1 0) ((bruijn ##.%k.551 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.551 0 0) (##string ##.string.1271) (bruijn ##.vec.242 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1271.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.972 1 0) ((bruijn ##.%k.549 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.549 0 0) (##string ##.string.1272) (bruijn ##.src.244 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1272.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.547 2 0) (bruijn ##.vec.242 2 1) (bruijn ##.byte-offset.243 2 2) (bruijn ##.src.244 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.972) ((##vcore.u16vector? (bruijn ##.src.244 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k133) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k133, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k134, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.971) ((##vcore.u8vector? (bruijn ##.vec.242 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k131) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B_V0k132, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.973 1 0) ((bruijn ##.%k.555 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.555 0 0) (##string ##.string.1273) (bruijn ##.vec.245 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1273.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.552 3 0) (bruijn ##.ret.247 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.974) ((##vcore.+ (bruijn ##.byte-offset.246 3 2) 8)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k138) (bruijn ##.ret.247 1 0) 0 (bruijn ##.vec.245 3 1) (bruijn ##.byte-offset.246 3 2) (bruijn ##.%x.974 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(8l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k138, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k137) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k137, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.973) ((##vcore.u8vector? (bruijn ##.vec.245 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k135) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k136)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4_V0k136, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.975 1 0) ((bruijn ##.%k.559 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.559 0 0) (##string ##.string.1274) (bruijn ##.vec.248 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1274.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.556 3 0) (bruijn ##.ret.250 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.976) ((##vcore.+ (bruijn ##.byte-offset.249 3 2) 6)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k142) (bruijn ##.ret.250 1 0) 0 (bruijn ##.vec.248 3 1) (bruijn ##.byte-offset.249 3 2) (bruijn ##.%x.976 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(6l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k142, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k141) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k141, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.975) ((##vcore.u8vector? (bruijn ##.vec.248 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k139) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k140)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k139, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3_V0k140, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.977 1 0) ((bruijn ##.%k.563 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.563 0 0) (##string ##.string.1275) (bruijn ##.vec.251 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1275.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k146(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.560 3 0) (bruijn ##.ret.253 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.978) ((##vcore.+ (bruijn ##.byte-offset.252 3 2) 4)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k146) (bruijn ##.ret.253 1 0) 0 (bruijn ##.vec.251 3 1) (bruijn ##.byte-offset.252 3 2) (bruijn ##.%x.978 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(4l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k146, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k145) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k145, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.977) ((##vcore.u8vector? (bruijn ##.vec.251 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k143) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k144)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2_V0k144, self)))));
    }
}
static void _V10_Du8vector__set__s16v_B_D78_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s16v_B_D78_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.979 1 0) ((bruijn ##.%k.569 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.569 0 0) (##string ##.string.1276) (bruijn ##.dst.257 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1276.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s16v_B_D78_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s16v_B_D78_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.980 1 0) ((bruijn ##.%k.567 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.567 0 0) (##string ##.string.1277) (bruijn ##.src.259 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1277.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s16v_B_D78_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.565 2 0) (bruijn ##.dst.257 2 1) (bruijn ##.byte-offset.258 2 2) (bruijn ##.src.259 2 3) (bruijn ##.start.260 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__s16v_B_D78_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.980) ((##vcore.s16vector? (bruijn ##.src.259 2 3))) ((close _V10_Du8vector__set__s16v_B_D78_V0k149) (close _V10_Du8vector__set__s16v_B_D78_V0k150)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k150, self)))));
    }
}
static void _V10_Du8vector__set__s16v_B_D78_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s16v_B_D78_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.981 1 0) ((bruijn ##.%k.574 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.574 0 0) (##string ##.string.1276) (bruijn ##.dst.261 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1276.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s16v_B_D78_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s16v_B_D78_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.982 1 0) ((bruijn ##.%k.572 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.572 0 0) (##string ##.string.1277) (bruijn ##.src.263 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1277.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s16v_B_D78_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.570 2 0) (bruijn ##.dst.261 2 1) (bruijn ##.byte-offset.262 2 2) (bruijn ##.src.263 2 3) (bruijn ##.start.264 2 4) (bruijn ##.end.265 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__s16v_B_D78_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.982) ((##vcore.s16vector? (bruijn ##.src.263 2 3))) ((close _V10_Du8vector__set__s16v_B_D78_V0k153) (close _V10_Du8vector__set__s16v_B_D78_V0k154)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k154, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-s16v!) #t (bruijn ##.u8vector-set-s16v!.78 1 32) (bruijn ##.%k.564 0 0) (bruijn ##.dst.254 0 1) (bruijn ##.byte-offset.255 0 2) (bruijn ##.src.256 0 3) 0)) (5 (basic-block 1 1 (##.%p.979) ((##vcore.u8vector? (bruijn ##.dst.257 1 1))) ((close _V10_Du8vector__set__s16v_B_D78_V0k147) (close _V10_Du8vector__set__s16v_B_D78_V0k148)))) (6 (basic-block 1 1 (##.%p.981) ((##vcore.u8vector? (bruijn ##.dst.261 1 1))) ((close _V10_Du8vector__set__s16v_B_D78_V0k151) (close _V10_Du8vector__set__s16v_B_D78_V0k152)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-s16v!) #t (bruijn ##.u8vector-set-s16v!.78 1 32) (bruijn ##.%k.564 0 0) (bruijn ##.dst.254 0 1) (bruijn ##.byte-offset.255 0 2) (bruijn ##.src.256 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.979) ((##vcore.u8vector? (bruijn ##.dst.257 1 1))) ((close _V10_Du8vector__set__s16v_B_D78_V0k147) (close _V10_Du8vector__set__s16v_B_D78_V0k148)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k148, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.981) ((##vcore.u8vector? (bruijn ##.dst.261 1 1))) ((close _V10_Du8vector__set__s16v_B_D78_V0k151) (close _V10_Du8vector__set__s16v_B_D78_V0k152)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k151, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s16v_B_D78_V0k152, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B\n"
);
static void _V10_Du8vector__copy__s16_D79_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s16_D79_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.986 1 0) ((bruijn ##.%k.584 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.584 0 0) (##string ##.string.1278) (bruijn ##.vec.269 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1278.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__s16_D79_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.580 3 0) (bruijn ##.ret.272 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__s16_D79_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s16_D79_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.987 ##.%x.988) ((##vcore.* (bruijn ##.n.271 3 3) 2) (##vcore.+ (bruijn ##.byte-offset.270 3 2) (bruijn ##.%x.987 0 0))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__s16_D79_V0k158) (bruijn ##.ret.272 1 0) 0 (bruijn ##.vec.269 3 1) (bruijn ##.byte-offset.270 3 2) (bruijn ##.%x.988 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s16_D79_V0k158, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[1]);
    }
}
static void _V10_Du8vector__copy__s16_D79_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s16vector (close _V10_Du8vector__copy__s16_D79_V0k157) (bruijn ##.n.271 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s16_D79_V0k157, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-s16) #t (bruijn ##.u8vector-copy-s16.79 1 33) (bruijn ##.%k.575 0 0) (bruijn ##.vec.266 0 1) 0)) (3 (basic-block 3 3 (##.%x.983 ##.%x.984 ##.%x.985) ((##vcore.u8vector-length (bruijn ##.vec.267 1 1)) (##vcore.- (bruijn ##.%x.983 0 0) (bruijn ##.byte-offset.268 1 2)) (##vcore.quotient (bruijn ##.%x.984 0 1) 2)) (##qualified-call (vanity raw-vector u8vector-copy-s16) #t (bruijn ##.u8vector-copy-s16.79 2 33) (bruijn ##.%k.576 1 0) (bruijn ##.vec.267 1 1) (bruijn ##.byte-offset.268 1 2) (bruijn ##.%x.985 0 2)))) (4 (basic-block 1 1 (##.%p.986) ((##vcore.u8vector? (bruijn ##.vec.269 1 1))) ((close _V10_Du8vector__copy__s16_D79_V0k155) (close _V10_Du8vector__copy__s16_D79_V0k156)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-s16) #t (bruijn ##.u8vector-copy-s16.79 1 33) (bruijn ##.%k.575 0 0) (bruijn ##.vec.266 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.983 ##.%x.984 ##.%x.985) ((##vcore.u8vector-length (bruijn ##.vec.267 1 1)) (##vcore.- (bruijn ##.%x.983 0 0) (bruijn ##.byte-offset.268 1 2)) (##vcore.quotient (bruijn ##.%x.984 0 1) 2)) (##qualified-call (vanity raw-vector u8vector-copy-s16) #t (bruijn ##.u8vector-copy-s16.79 2 33) (bruijn ##.%k.576 1 0) (bruijn ##.vec.267 1 1) (bruijn ##.byte-offset.268 1 2) (bruijn ##.%x.985 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
    self->vars[2] = _VBasic_VQuot2(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.986) ((##vcore.u8vector? (bruijn ##.vec.269 1 1))) ((close _V10_Du8vector__copy__s16_D79_V0k155) (close _V10_Du8vector__copy__s16_D79_V0k156)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s16_D79_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s16_D79_V0k156, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__s16\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s16\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.989 1 0) ((bruijn ##.%k.589 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.589 0 0) (##string ##.string.1279) (bruijn ##.vec.273 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1279.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.990 1 0) ((bruijn ##.%k.587 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.587 0 0) (##string ##.string.1280) (bruijn ##.src.275 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1280.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.585 2 0) (bruijn ##.vec.273 2 1) (bruijn ##.byte-offset.274 2 2) (bruijn ##.src.275 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.990) ((##vcore.s16vector? (bruijn ##.src.275 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k161) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k162)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k162, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.989) ((##vcore.u8vector? (bruijn ##.vec.273 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k159) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k160)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k159, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B_V0k160, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.991 1 0) ((bruijn ##.%k.594 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.594 0 0) (##string ##.string.1281) (bruijn ##.vec.276 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1281.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.992 1 0) ((bruijn ##.%k.592 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.592 0 0) (##string ##.string.1282) (bruijn ##.src.278 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1282.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k166(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.590 2 0) (bruijn ##.vec.276 2 1) (bruijn ##.byte-offset.277 2 2) (bruijn ##.src.278 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.992) ((##vcore.s16vector? (bruijn ##.src.278 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k165) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k166)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k166, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.991) ((##vcore.u8vector? (bruijn ##.vec.276 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k163) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k164)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B_V0k164, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.993 1 0) ((bruijn ##.%k.599 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.599 0 0) (##string ##.string.1283) (bruijn ##.vec.279 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1283.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.994 1 0) ((bruijn ##.%k.597 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.597 0 0) (##string ##.string.1284) (bruijn ##.src.281 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1284.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k170(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.595 2 0) (bruijn ##.vec.279 2 1) (bruijn ##.byte-offset.280 2 2) (bruijn ##.src.281 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k168(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.994) ((##vcore.s16vector? (bruijn ##.src.281 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k169) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k170)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k169, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k170, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.993) ((##vcore.u8vector? (bruijn ##.vec.279 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k167) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k168)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k167, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B_V0k168, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.995 1 0) ((bruijn ##.%k.603 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.603 0 0) (##string ##.string.1285) (bruijn ##.vec.282 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1285.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k174(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.600 3 0) (bruijn ##.ret.284 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.996) ((##vcore.+ (bruijn ##.byte-offset.283 3 2) 8)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k174) (bruijn ##.ret.284 1 0) 0 (bruijn ##.vec.282 3 1) (bruijn ##.byte-offset.283 3 2) (bruijn ##.%x.996 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(8l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k174, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k173) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k173, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.995) ((##vcore.u8vector? (bruijn ##.vec.282 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k171) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k172)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k171, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4_V0k172, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.997 1 0) ((bruijn ##.%k.607 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.607 0 0) (##string ##.string.1286) (bruijn ##.vec.285 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1286.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k178(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.604 3 0) (bruijn ##.ret.287 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.998) ((##vcore.+ (bruijn ##.byte-offset.286 3 2) 6)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k178) (bruijn ##.ret.287 1 0) 0 (bruijn ##.vec.285 3 1) (bruijn ##.byte-offset.286 3 2) (bruijn ##.%x.998 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(6l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k178, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k176(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k177) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k177, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.997) ((##vcore.u8vector? (bruijn ##.vec.285 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k175) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k176)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k175, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3_V0k176, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.999 1 0) ((bruijn ##.%k.611 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.611 0 0) (##string ##.string.1287) (bruijn ##.vec.288 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1287.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.608 3 0) (bruijn ##.ret.290 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1000) ((##vcore.+ (bruijn ##.byte-offset.289 3 2) 4)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k182) (bruijn ##.ret.290 1 0) 0 (bruijn ##.vec.288 3 1) (bruijn ##.byte-offset.289 3 2) (bruijn ##.%x.1000 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(4l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k182, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s16vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k181) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k181, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.999) ((##vcore.u8vector? (bruijn ##.vec.288 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k179) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k180)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2_V0k180, self)))));
    }
}
static void _V10_Du8vector__set__u8v_B_D86_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u8v_B_D86_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1001 1 0) ((bruijn ##.%k.617 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.617 0 0) (##string ##.string.1288) (bruijn ##.dst.294 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1288.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__u8v_B_D86_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u8v_B_D86_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1002 1 0) ((bruijn ##.%k.615 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.615 0 0) (##string ##.string.1288) (bruijn ##.src.296 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1288.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__u8v_B_D86_V0k186(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.613 2 0) (bruijn ##.dst.294 2 1) (bruijn ##.byte-offset.295 2 2) (bruijn ##.src.296 2 3) (bruijn ##.start.297 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__u8v_B_D86_V0k184(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1002) ((##vcore.u8vector? (bruijn ##.src.296 2 3))) ((close _V10_Du8vector__set__u8v_B_D86_V0k185) (close _V10_Du8vector__set__u8v_B_D86_V0k186)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k185, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k186, self)))));
    }
}
static void _V10_Du8vector__set__u8v_B_D86_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u8v_B_D86_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1003 1 0) ((bruijn ##.%k.622 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.622 0 0) (##string ##.string.1288) (bruijn ##.dst.298 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1288.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__u8v_B_D86_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__u8v_B_D86_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1004 1 0) ((bruijn ##.%k.620 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.620 0 0) (##string ##.string.1288) (bruijn ##.src.300 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1288.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__u8v_B_D86_V0k190(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.618 2 0) (bruijn ##.dst.298 2 1) (bruijn ##.byte-offset.299 2 2) (bruijn ##.src.300 2 3) (bruijn ##.start.301 2 4) (bruijn ##.end.302 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__u8v_B_D86_V0k188(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1004) ((##vcore.u8vector? (bruijn ##.src.300 2 3))) ((close _V10_Du8vector__set__u8v_B_D86_V0k189) (close _V10_Du8vector__set__u8v_B_D86_V0k190)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k189, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k190, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-u8v!) #t (bruijn ##.u8vector-set-u8v!.86 1 40) (bruijn ##.%k.612 0 0) (bruijn ##.dst.291 0 1) (bruijn ##.byte-offset.292 0 2) (bruijn ##.src.293 0 3) 0)) (5 (basic-block 1 1 (##.%p.1001) ((##vcore.u8vector? (bruijn ##.dst.294 1 1))) ((close _V10_Du8vector__set__u8v_B_D86_V0k183) (close _V10_Du8vector__set__u8v_B_D86_V0k184)))) (6 (basic-block 1 1 (##.%p.1003) ((##vcore.u8vector? (bruijn ##.dst.298 1 1))) ((close _V10_Du8vector__set__u8v_B_D86_V0k187) (close _V10_Du8vector__set__u8v_B_D86_V0k188)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-u8v!) #t (bruijn ##.u8vector-set-u8v!.86 1 40) (bruijn ##.%k.612 0 0) (bruijn ##.dst.291 0 1) (bruijn ##.byte-offset.292 0 2) (bruijn ##.src.293 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.1001) ((##vcore.u8vector? (bruijn ##.dst.294 1 1))) ((close _V10_Du8vector__set__u8v_B_D86_V0k183) (close _V10_Du8vector__set__u8v_B_D86_V0k184)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k184, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.1003) ((##vcore.u8vector? (bruijn ##.dst.298 1 1))) ((close _V10_Du8vector__set__u8v_B_D86_V0k187) (close _V10_Du8vector__set__u8v_B_D86_V0k188)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__u8v_B_D86_V0k188, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B\n"
);
static void _V10_Du8vector__copy__u8_D87_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__u8_D87_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1007 1 0) ((bruijn ##.%k.630 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.630 0 0) (##string ##.string.1289) (bruijn ##.vec.306 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1289.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__u8_D87_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.627 3 0) (bruijn ##.ret.309 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__u8_D87_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__u8_D87_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1008) ((##vcore.+ (bruijn ##.byte-offset.307 3 2) (bruijn ##.n.308 3 3))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__u8_D87_V0k194) (bruijn ##.ret.309 1 0) 0 (bruijn ##.vec.306 3 1) (bruijn ##.byte-offset.307 3 2) (bruijn ##.%x.1008 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u8_D87_V0k194, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V10_Du8vector__copy__u8_D87_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u8vector (close _V10_Du8vector__copy__u8_D87_V0k193) (bruijn ##.n.308 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u8_D87_V0k193, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-u8) #t (bruijn ##.u8vector-copy-u8.87 1 41) (bruijn ##.%k.623 0 0) (bruijn ##.vec.303 0 1) 0)) (3 (basic-block 2 2 (##.%x.1005 ##.%x.1006) ((##vcore.u8vector-length (bruijn ##.vec.304 1 1)) (##vcore.- (bruijn ##.%x.1005 0 0) (bruijn ##.byte-offset.305 1 2))) (##qualified-call (vanity raw-vector u8vector-copy-u8) #t (bruijn ##.u8vector-copy-u8.87 2 41) (bruijn ##.%k.624 1 0) (bruijn ##.vec.304 1 1) (bruijn ##.byte-offset.305 1 2) (bruijn ##.%x.1006 0 1)))) (4 (basic-block 1 1 (##.%p.1007) ((##vcore.u8vector? (bruijn ##.vec.306 1 1))) ((close _V10_Du8vector__copy__u8_D87_V0k191) (close _V10_Du8vector__copy__u8_D87_V0k192)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-u8) #t (bruijn ##.u8vector-copy-u8.87 1 41) (bruijn ##.%k.623 0 0) (bruijn ##.vec.303 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1005 ##.%x.1006) ((##vcore.u8vector-length (bruijn ##.vec.304 1 1)) (##vcore.- (bruijn ##.%x.1005 0 0) (bruijn ##.byte-offset.305 1 2))) (##qualified-call (vanity raw-vector u8vector-copy-u8) #t (bruijn ##.u8vector-copy-u8.87 2 41) (bruijn ##.%k.624 1 0) (bruijn ##.vec.304 1 1) (bruijn ##.byte-offset.305 1 2) (bruijn ##.%x.1006 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1007) ((##vcore.u8vector? (bruijn ##.vec.306 1 1))) ((close _V10_Du8vector__copy__u8_D87_V0k191) (close _V10_Du8vector__copy__u8_D87_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u8_D87_V0k191, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__u8_D87_V0k192, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__u8\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__u8\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1009 1 0) ((bruijn ##.%k.635 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.635 0 0) (##string ##.string.1290) (bruijn ##.vec.310 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1290.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1010 1 0) ((bruijn ##.%k.633 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.633 0 0) (##string ##.string.1290) (bruijn ##.src.312 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1290.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k198(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.631 2 0) (bruijn ##.vec.310 2 1) (bruijn ##.byte-offset.311 2 2) (bruijn ##.src.312 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k196(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1010) ((##vcore.u8vector? (bruijn ##.src.312 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k197) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k198)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k198, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1009) ((##vcore.u8vector? (bruijn ##.vec.310 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k195) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k196)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B_V0k196, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1011 1 0) ((bruijn ##.%k.640 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.640 0 0) (##string ##.string.1291) (bruijn ##.vec.313 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1291.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1012 1 0) ((bruijn ##.%k.638 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.638 0 0) (##string ##.string.1291) (bruijn ##.src.315 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1291.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k202(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.636 2 0) (bruijn ##.vec.313 2 1) (bruijn ##.byte-offset.314 2 2) (bruijn ##.src.315 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k200(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1012) ((##vcore.u8vector? (bruijn ##.src.315 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k201) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k202)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k201, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k202, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1011) ((##vcore.u8vector? (bruijn ##.vec.313 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k199) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k200)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k199, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B_V0k200, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1013 1 0) ((bruijn ##.%k.645 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.645 0 0) (##string ##.string.1292) (bruijn ##.vec.316 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1292.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1014 1 0) ((bruijn ##.%k.643 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.643 0 0) (##string ##.string.1292) (bruijn ##.src.318 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1292.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.641 2 0) (bruijn ##.vec.316 2 1) (bruijn ##.byte-offset.317 2 2) (bruijn ##.src.318 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k204(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1014) ((##vcore.u8vector? (bruijn ##.src.318 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k205) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k206)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k205, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k206, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1013) ((##vcore.u8vector? (bruijn ##.vec.316 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k203) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k204)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B_V0k204, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1015 1 0) ((bruijn ##.%k.649 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.649 0 0) (##string ##.string.1293) (bruijn ##.vec.319 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1293.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.646 3 0) (bruijn ##.ret.321 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1016) ((##vcore.+ (bruijn ##.byte-offset.320 3 2) 4)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k210) (bruijn ##.ret.321 1 0) 0 (bruijn ##.vec.319 3 1) (bruijn ##.byte-offset.320 3 2) (bruijn ##.%x.1016 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(4l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k210, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k208(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k209) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k209, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1015) ((##vcore.u8vector? (bruijn ##.vec.319 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k207) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k208)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k207, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4_V0k208, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1017 1 0) ((bruijn ##.%k.653 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.653 0 0) (##string ##.string.1294) (bruijn ##.vec.322 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1294.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k214(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.650 3 0) (bruijn ##.ret.324 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1018) ((##vcore.+ (bruijn ##.byte-offset.323 3 2) 3)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k214) (bruijn ##.ret.324 1 0) 0 (bruijn ##.vec.322 3 1) (bruijn ##.byte-offset.323 3 2) (bruijn ##.%x.1018 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(3l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k214, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k212(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k213) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k213, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1017) ((##vcore.u8vector? (bruijn ##.vec.322 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k211) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k212)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k211, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3_V0k212, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1019 1 0) ((bruijn ##.%k.657 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.657 0 0) (##string ##.string.1295) (bruijn ##.vec.325 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1295.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k218(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.654 3 0) (bruijn ##.ret.327 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1020) ((##vcore.+ (bruijn ##.byte-offset.326 3 2) 2)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k218) (bruijn ##.ret.327 1 0) 0 (bruijn ##.vec.325 3 1) (bruijn ##.byte-offset.326 3 2) (bruijn ##.%x.1020 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(2l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k218, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k216(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-u8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k217) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k217, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1019) ((##vcore.u8vector? (bruijn ##.vec.325 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k215) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k216)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k215, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2_V0k216, self)))));
    }
}
static void _V10_Du8vector__set__s8v_B_D94_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s8v_B_D94_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1021 1 0) ((bruijn ##.%k.663 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.663 0 0) (##string ##.string.1296) (bruijn ##.dst.331 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1296.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s8v_B_D94_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s8v_B_D94_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1022 1 0) ((bruijn ##.%k.661 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.661 0 0) (##string ##.string.1297) (bruijn ##.src.333 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1297.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s8v_B_D94_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.659 2 0) (bruijn ##.dst.331 2 1) (bruijn ##.byte-offset.332 2 2) (bruijn ##.src.333 2 3) (bruijn ##.start.334 2 4))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4]);
}
static void _V10_Du8vector__set__s8v_B_D94_V0k220(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1022) ((##vcore.s8vector? (bruijn ##.src.333 2 3))) ((close _V10_Du8vector__set__s8v_B_D94_V0k221) (close _V10_Du8vector__set__s8v_B_D94_V0k222)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k221, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k222, self)))));
    }
}
static void _V10_Du8vector__set__s8v_B_D94_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s8v_B_D94_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1023 1 0) ((bruijn ##.%k.668 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.668 0 0) (##string ##.string.1296) (bruijn ##.dst.335 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1296.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__set__s8v_B_D94_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__set__s8v_B_D94_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1024 1 0) ((bruijn ##.%k.666 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.666 0 0) (##string ##.string.1297) (bruijn ##.src.337 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1297.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V10_Du8vector__set__s8v_B_D94_V0k226(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.664 2 0) (bruijn ##.dst.335 2 1) (bruijn ##.byte-offset.336 2 2) (bruijn ##.src.337 2 3) (bruijn ##.start.338 2 4) (bruijn ##.end.339 2 5))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
}
static void _V10_Du8vector__set__s8v_B_D94_V0k224(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1024) ((##vcore.s8vector? (bruijn ##.src.337 2 3))) ((close _V10_Du8vector__set__s8v_B_D94_V0k225) (close _V10_Du8vector__set__s8v_B_D94_V0k226)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k225, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k226, self)))));
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B" #t #f (4 (##qualified-call (vanity raw-vector u8vector-set-s8v!) #t (bruijn ##.u8vector-set-s8v!.94 1 48) (bruijn ##.%k.658 0 0) (bruijn ##.dst.328 0 1) (bruijn ##.byte-offset.329 0 2) (bruijn ##.src.330 0 3) 0)) (5 (basic-block 1 1 (##.%p.1021) ((##vcore.u8vector? (bruijn ##.dst.331 1 1))) ((close _V10_Du8vector__set__s8v_B_D94_V0k219) (close _V10_Du8vector__set__s8v_B_D94_V0k220)))) (6 (basic-block 1 1 (##.%p.1023) ((##vcore.u8vector? (bruijn ##.dst.335 1 1))) ((close _V10_Du8vector__set__s8v_B_D94_V0k223) (close _V10_Du8vector__set__s8v_B_D94_V0k224)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity raw-vector u8vector-set-s8v!) #t (bruijn ##.u8vector-set-s8v!.94 1 48) (bruijn ##.%k.658 0 0) (bruijn ##.dst.328 0 1) (bruijn ##.byte-offset.329 0 2) (bruijn ##.src.330 0 3) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B, _V60_V0vanity_V0raw__vector)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.1021) ((##vcore.u8vector? (bruijn ##.dst.331 1 1))) ((close _V10_Du8vector__set__s8v_B_D94_V0k219) (close _V10_Du8vector__set__s8v_B_D94_V0k220)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k219, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k220, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.1023) ((##vcore.u8vector? (bruijn ##.dst.335 1 1))) ((close _V10_Du8vector__set__s8v_B_D94_V0k223) (close _V10_Du8vector__set__s8v_B_D94_V0k224)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__set__s8v_B_D94_V0k224, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B\n"
);
static void _V10_Du8vector__copy__s8_D95_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s8_D95_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1027 1 0) ((bruijn ##.%k.676 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.676 0 0) (##string ##.string.1298) (bruijn ##.vec.343 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1298.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Du8vector__copy__s8_D95_V0k230(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.673 3 0) (bruijn ##.ret.346 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Du8vector__copy__s8_D95_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector__copy__s8_D95_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1028) ((##vcore.+ (bruijn ##.byte-offset.344 3 2) (bruijn ##.n.345 3 3))) ((##intrinsic "VRawVectorCopy") (close _V10_Du8vector__copy__s8_D95_V0k230) (bruijn ##.ret.346 1 0) 0 (bruijn ##.vec.343 3 1) (bruijn ##.byte-offset.344 3 2) (bruijn ##.%x.1028 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s8_D95_V0k230, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V10_Du8vector__copy__s8_D95_V0k228(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s8vector (close _V10_Du8vector__copy__s8_D95_V0k229) (bruijn ##.n.345 1 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s8_D95_V0k229, self)))),
      statics->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8" #t #f (2 (##qualified-call (vanity raw-vector u8vector-copy-s8) #t (bruijn ##.u8vector-copy-s8.95 1 49) (bruijn ##.%k.669 0 0) (bruijn ##.vec.340 0 1) 0)) (3 (basic-block 2 2 (##.%x.1025 ##.%x.1026) ((##vcore.u8vector-length (bruijn ##.vec.341 1 1)) (##vcore.- (bruijn ##.%x.1025 0 0) (bruijn ##.byte-offset.342 1 2))) (##qualified-call (vanity raw-vector u8vector-copy-s8) #t (bruijn ##.u8vector-copy-s8.95 2 49) (bruijn ##.%k.670 1 0) (bruijn ##.vec.341 1 1) (bruijn ##.byte-offset.342 1 2) (bruijn ##.%x.1026 0 1)))) (4 (basic-block 1 1 (##.%p.1027) ((##vcore.u8vector? (bruijn ##.vec.343 1 1))) ((close _V10_Du8vector__copy__s8_D95_V0k227) (close _V10_Du8vector__copy__s8_D95_V0k228)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity raw-vector u8vector-copy-s8) #t (bruijn ##.u8vector-copy-s8.95 1 49) (bruijn ##.%k.669 0 0) (bruijn ##.vec.340 0 1) 0)
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8, _V60_V0vanity_V0raw__vector)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1025 ##.%x.1026) ((##vcore.u8vector-length (bruijn ##.vec.341 1 1)) (##vcore.- (bruijn ##.%x.1025 0 0) (bruijn ##.byte-offset.342 1 2))) (##qualified-call (vanity raw-vector u8vector-copy-s8) #t (bruijn ##.u8vector-copy-s8.95 2 49) (bruijn ##.%k.670 1 0) (bruijn ##.vec.341 1 1) (bruijn ##.byte-offset.342 1 2) (bruijn ##.%x.1026 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      statics->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8, _V60_V0vanity_V0raw__vector)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1027) ((##vcore.u8vector? (bruijn ##.vec.343 1 1))) ((close _V10_Du8vector__copy__s8_D95_V0k227) (close _V10_Du8vector__copy__s8_D95_V0k228)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s8_D95_V0k227, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Du8vector__copy__s8_D95_V0k228, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8, @function\n"
#endif
".globl _V50_V0vanity_V0raw__vector_V0u8vector__copy__s8\n"
"_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8\n"
"    jmp _V20CaseError__V50_V0vanity_V0raw__vector_V0u8vector__copy__s8\n"
);
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1029 1 0) ((bruijn ##.%k.681 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.681 0 0) (##string ##.string.1299) (bruijn ##.vec.347 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1299.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1030 1 0) ((bruijn ##.%k.679 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.679 0 0) (##string ##.string.1300) (bruijn ##.src.349 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1300.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k234(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.677 2 0) (bruijn ##.vec.347 2 1) (bruijn ##.byte-offset.348 2 2) (bruijn ##.src.349 2 3) 0 4)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(4l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k232(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1030) ((##vcore.s8vector? (bruijn ##.src.349 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k233) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k234)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k233, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k234, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1029) ((##vcore.u8vector? (bruijn ##.vec.347 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k231) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k232)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k231, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B_V0k232, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1031 1 0) ((bruijn ##.%k.686 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.686 0 0) (##string ##.string.1301) (bruijn ##.vec.350 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1301.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1032 1 0) ((bruijn ##.%k.684 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.684 0 0) (##string ##.string.1302) (bruijn ##.src.352 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1302.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k238(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.682 2 0) (bruijn ##.vec.350 2 1) (bruijn ##.byte-offset.351 2 2) (bruijn ##.src.352 2 3) 0 3)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(3l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k236(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1032) ((##vcore.s8vector? (bruijn ##.src.352 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k237) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k238)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k237, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k238, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1031) ((##vcore.u8vector? (bruijn ##.vec.350 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k235) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k236)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k235, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B_V0k236, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1033 1 0) ((bruijn ##.%k.691 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.691 0 0) (##string ##.string.1303) (bruijn ##.vec.353 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1303.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1034 1 0) ((bruijn ##.%k.689 0 0) #void) ((bruijn ##.error.1 5 0) (bruijn ##.%k.689 0 0) (##string ##.string.1304) (bruijn ##.src.355 3 3)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1304.sym, VPOINTER_OTHER),
      statics->up->up->vars[3]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k242(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VRawVectorCopy") (bruijn ##.%k.687 2 0) (bruijn ##.vec.353 2 1) (bruijn ##.byte-offset.354 2 2) (bruijn ##.src.355 2 3) 0 2)
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeInt(0l),
      VEncodeInt(2l));
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k240(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1034) ((##vcore.s8vector? (bruijn ##.src.355 2 3))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k241) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k242)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k241, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k242, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.1033) ((##vcore.u8vector? (bruijn ##.vec.353 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k239) (close _V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k240)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k239, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B_V0k240, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1035 1 0) ((bruijn ##.%k.695 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.695 0 0) (##string ##.string.1305) (bruijn ##.vec.356 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1305.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k246(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.692 3 0) (bruijn ##.ret.358 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1036) ((##vcore.+ (bruijn ##.byte-offset.357 3 2) 4)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k246) (bruijn ##.ret.358 1 0) 0 (bruijn ##.vec.356 3 1) (bruijn ##.byte-offset.357 3 2) (bruijn ##.%x.1036 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(4l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k246, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k244(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k245) 4)
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k245, self)))),
      VEncodeInt(4l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1035) ((##vcore.u8vector? (bruijn ##.vec.356 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k243) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k244)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k243, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4_V0k244, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1037 1 0) ((bruijn ##.%k.699 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.699 0 0) (##string ##.string.1306) (bruijn ##.vec.359 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1306.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k250(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.696 3 0) (bruijn ##.ret.361 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1038) ((##vcore.+ (bruijn ##.byte-offset.360 3 2) 3)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k250) (bruijn ##.ret.361 1 0) 0 (bruijn ##.vec.359 3 1) (bruijn ##.byte-offset.360 3 2) (bruijn ##.%x.1038 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(3l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k250, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k248(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k249) 3)
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k249, self)))),
      VEncodeInt(3l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1037) ((##vcore.u8vector? (bruijn ##.vec.359 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k247) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k248)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k247, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3_V0k248, self)))));
    }
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1039 1 0) ((bruijn ##.%k.703 0 0) #void) ((bruijn ##.error.1 4 0) (bruijn ##.%k.703 0 0) (##string ##.string.1307) (bruijn ##.vec.362 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1307.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k254(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.700 3 0) (bruijn ##.ret.364 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1040) ((##vcore.+ (bruijn ##.byte-offset.363 3 2) 2)) ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k254) (bruijn ##.ret.364 1 0) 0 (bruijn ##.vec.362 3 1) (bruijn ##.byte-offset.363 3 2) (bruijn ##.%x.1040 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(2l));
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k254, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k252(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-s8vector (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k253) 2)
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k253, self)))),
      VEncodeInt(2l));
}
void _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1039) ((##vcore.u8vector? (bruijn ##.vec.362 1 1))) ((close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k251) (close _V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k252)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k251, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2_V0k252, self)))));
    }
}
static void _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k258(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.704 4 0) (bruijn ##.ret.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VRawVectorCopy") (close _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k258) (bruijn ##.ret.366 0 0) 0 (bruijn ##.vec.365 4 1))
    VCallFuncWithGC(runtime, (VFunc)VRawVectorCopy, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k258, self)))),
      _var0,
      VEncodeInt(0l),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1041) ((##vcore.* (bruijn ##.%x.706 2 0) (bruijn ##.%x.707 1 0))) (##vcore.make-u8vector (close _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k257) (bruijn ##.%x.1041 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k257, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity raw-vector raw-vector-elem-width) #t (bruijn ##.raw-vector-elem-width.104 2 58) (close _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k256) (bruijn ##.vec.365 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k256, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector__elem__width, _V60_V0vanity_V0raw__vector)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0raw__vector_V0raw__vector__elem__width(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity raw-vector raw-vector-length) #t (bruijn ##.raw-vector-length.103 1 57) (close _V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k255) (bruijn ##.vec.365 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0raw__vector;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector_V0k255, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector__length, _V60_V0vanity_V0raw__vector)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0raw__vector_V0raw__vector__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0raw__vector_V0raw__vector__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1042) ((##vcore.u8vector? (bruijn ##.v.367 1 1))) (if (bruijn ##.%p.1042 0 0) (basic-block 1 1 (##.%r.1043) ((##vcore.u8vector-length (bruijn ##.v.367 2 1))) ((bruijn ##.%k.708 2 0) (bruijn ##.%r.1043 0 0))) (basic-block 1 1 (##.%p.1044) ((##vcore.s8vector? (bruijn ##.v.367 2 1))) (if (bruijn ##.%p.1044 0 0) (basic-block 1 1 (##.%r.1045) ((##vcore.s8vector-length (bruijn ##.v.367 3 1))) ((bruijn ##.%k.708 3 0) (bruijn ##.%r.1045 0 0))) (basic-block 1 1 (##.%p.1046) ((##vcore.s16vector? (bruijn ##.v.367 3 1))) (if (bruijn ##.%p.1046 0 0) (basic-block 1 1 (##.%r.1047) ((##vcore.s16vector-length (bruijn ##.v.367 4 1))) ((bruijn ##.%k.708 4 0) (bruijn ##.%r.1047 0 0))) (basic-block 1 1 (##.%p.1048) ((##vcore.u16vector? (bruijn ##.v.367 4 1))) (if (bruijn ##.%p.1048 0 0) (basic-block 1 1 (##.%r.1049) ((##vcore.u16vector-length (bruijn ##.v.367 5 1))) ((bruijn ##.%k.708 5 0) (bruijn ##.%r.1049 0 0))) (basic-block 1 1 (##.%p.1050) ((##vcore.s32vector? (bruijn ##.v.367 5 1))) (if (bruijn ##.%p.1050 0 0) (basic-block 1 1 (##.%r.1051) ((##vcore.s32vector-length (bruijn ##.v.367 6 1))) ((bruijn ##.%k.708 6 0) (bruijn ##.%r.1051 0 0))) (basic-block 1 1 (##.%p.1052) ((##vcore.f32vector? (bruijn ##.v.367 6 1))) (if (bruijn ##.%p.1052 0 0) (basic-block 1 1 (##.%r.1053) ((##vcore.f32vector-length (bruijn ##.v.367 7 1))) ((bruijn ##.%k.708 7 0) (bruijn ##.%r.1053 0 0))) (basic-block 1 1 (##.%p.1054) ((##vcore.f64vector? (bruijn ##.v.367 7 1))) (if (bruijn ##.%p.1054 0 0) (basic-block 1 1 (##.%r.1055) ((##vcore.f64vector-length (bruijn ##.v.367 8 1))) ((bruijn ##.%k.708 8 0) (bruijn ##.%r.1055 0 0))) ((bruijn ##.error.1 9 0) (bruijn ##.%k.708 7 0) (##string ##.string.1308) (bruijn ##.v.367 7 1))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1308.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0raw__vector_V0raw__vector__elem__width(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector__elem__width, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1056) ((##vcore.u8vector? (bruijn ##.v.368 1 1))) (if (bruijn ##.%p.1056 0 0) ((bruijn ##.%k.716 1 0) 1) (basic-block 1 1 (##.%p.1057) ((##vcore.s8vector? (bruijn ##.v.368 2 1))) (if (bruijn ##.%p.1057 0 0) ((bruijn ##.%k.716 2 0) 1) (basic-block 1 1 (##.%p.1058) ((##vcore.s16vector? (bruijn ##.v.368 3 1))) (if (bruijn ##.%p.1058 0 0) ((bruijn ##.%k.716 3 0) 2) (basic-block 1 1 (##.%p.1059) ((##vcore.u16vector? (bruijn ##.v.368 4 1))) (if (bruijn ##.%p.1059 0 0) ((bruijn ##.%k.716 4 0) 2) (basic-block 1 1 (##.%p.1060) ((##vcore.s32vector? (bruijn ##.v.368 5 1))) (if (bruijn ##.%p.1060 0 0) ((bruijn ##.%k.716 5 0) 4) (basic-block 1 1 (##.%p.1061) ((##vcore.f32vector? (bruijn ##.v.368 6 1))) (if (bruijn ##.%p.1061 0 0) ((bruijn ##.%k.716 6 0) 4) (basic-block 1 1 (##.%p.1062) ((##vcore.f64vector? (bruijn ##.v.368 7 1))) (if (bruijn ##.%p.1062 0 0) ((bruijn ##.%k.716 7 0) 8) ((bruijn ##.error.1 9 0) (bruijn ##.%k.716 7 0) (##string ##.string.1309) (bruijn ##.v.368 7 1))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeInt(1l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeInt(1l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeInt(2l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeInt(2l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeInt(4l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeInt(4l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeInt(8l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1309.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0raw__vector_V0raw__vector__type(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0raw__vector_V0raw__vector__type, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1063) ((##vcore.u8vector? (bruijn ##.v.369 1 1))) (if (bruijn ##.%p.1063 0 0) ((bruijn ##.%k.724 1 0) 'u8) (basic-block 1 1 (##.%p.1064) ((##vcore.s8vector? (bruijn ##.v.369 2 1))) (if (bruijn ##.%p.1064 0 0) ((bruijn ##.%k.724 2 0) 's8) (basic-block 1 1 (##.%p.1065) ((##vcore.s16vector? (bruijn ##.v.369 3 1))) (if (bruijn ##.%p.1065 0 0) ((bruijn ##.%k.724 3 0) 's16) (basic-block 1 1 (##.%p.1066) ((##vcore.u16vector? (bruijn ##.v.369 4 1))) (if (bruijn ##.%p.1066 0 0) ((bruijn ##.%k.724 4 0) 'u16) (basic-block 1 1 (##.%p.1067) ((##vcore.s32vector? (bruijn ##.v.369 5 1))) (if (bruijn ##.%p.1067 0 0) ((bruijn ##.%k.724 5 0) 's32) (basic-block 1 1 (##.%p.1068) ((##vcore.f32vector? (bruijn ##.v.369 6 1))) (if (bruijn ##.%p.1068 0 0) ((bruijn ##.%k.724 6 0) 'f32) (basic-block 1 1 (##.%p.1069) ((##vcore.f64vector? (bruijn ##.v.369 7 1))) (if (bruijn ##.%p.1069 0 0) ((bruijn ##.%k.724 7 0) 'f64) ((bruijn ##.error.1 9 0) (bruijn ##.%k.724 7 0) (##string ##.string.1310) (bruijn ##.v.369 7 1))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0u8);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V0s8);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _V0s16);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _V0u16);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      _V0s32);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _V0f32);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      _V0f64);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1310.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
static void _V0vanity_V0raw__vector_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0raw__vector_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity raw-vector) 60 ((close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0raw__vector__length" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0raw__vector__elem__width" (vanity raw-vector)) (close "_V50_V0vanity_V0raw__vector_V0raw__vector__type" (vanity raw-vector))) (basic-block 158 158 (##.%x.1070 ##.%x.1071 ##.%x.1072 ##.%x.1073 ##.%x.1074 ##.%x.1075 ##.%x.1076 ##.%x.1077 ##.%x.1078 ##.%x.1079 ##.%x.1080 ##.%x.1081 ##.%x.1082 ##.%x.1083 ##.%x.1084 ##.%x.1085 ##.%x.1086 ##.%x.1087 ##.%x.1088 ##.%x.1089 ##.%x.1090 ##.%x.1091 ##.%x.1092 ##.%x.1093 ##.%x.1094 ##.%x.1095 ##.%x.1096 ##.%x.1097 ##.%x.1098 ##.%x.1099 ##.%x.1100 ##.%x.1101 ##.%x.1102 ##.%x.1103 ##.%x.1104 ##.%x.1105 ##.%x.1106 ##.%x.1107 ##.%x.1108 ##.%x.1109 ##.%x.1110 ##.%x.1111 ##.%x.1112 ##.%x.1113 ##.%x.1114 ##.%x.1115 ##.%x.1116 ##.%x.1117 ##.%x.1118 ##.%x.1119 ##.%x.1120 ##.%x.1121 ##.%x.1122 ##.%x.1123 ##.%x.1124 ##.%x.1125 ##.%x.1126 ##.%x.1127 ##.%x.1128 ##.%x.1129 ##.%x.1130 ##.%x.1131 ##.%x.1132 ##.%x.1133 ##.%x.1134 ##.%x.1135 ##.%x.1136 ##.%x.1137 ##.%x.1138 ##.%x.1139 ##.%x.1140 ##.%x.1141 ##.%x.1142 ##.%x.1143 ##.%x.1144 ##.%x.1145 ##.%x.1146 ##.%x.1147 ##.%x.1148 ##.%x.1149 ##.%x.1150 ##.%x.1151 ##.%x.1152 ##.%x.1153 ##.%x.1154 ##.%x.1155 ##.%x.1156 ##.%x.1157 ##.%x.1158 ##.%x.1159 ##.%x.1160 ##.%x.1161 ##.%x.1162 ##.%x.1163 ##.%x.1164 ##.%x.1165 ##.%x.1166 ##.%x.1167 ##.%x.1168 ##.%x.1169 ##.%x.1170 ##.%x.1171 ##.%x.1172 ##.%x.1173 ##.%x.1174 ##.%x.1175 ##.%x.1176 ##.%x.1177 ##.%x.1178 ##.%x.1179 ##.%x.1180 ##.%x.1181 ##.%x.1182 ##.%x.1183 ##.%x.1184 ##.%x.1185 ##.%x.1186 ##.%x.1187 ##.%x.1188 ##.%x.1189 ##.%x.1190 ##.%x.1191 ##.%x.1192 ##.%x.1193 ##.%x.1194 ##.%x.1195 ##.%x.1196 ##.%x.1197 ##.%x.1198 ##.%x.1199 ##.%x.1200 ##.%x.1201 ##.%x.1202 ##.%x.1203 ##.%x.1204 ##.%x.1205 ##.%x.1206 ##.%x.1207 ##.%x.1208 ##.%x.1209 ##.%x.1210 ##.%x.1211 ##.%x.1212 ##.%x.1213 ##.%x.1214 ##.%x.1215 ##.%x.1216 ##.%x.1217 ##.%x.1218 ##.%x.1219 ##.%x.1220 ##.%x.1221 ##.%x.1222 ##.%x.1223 ##.%x.1224 ##.%x.1225 ##.%x.1226 ##.%r.1227) ((##vcore.cons 'raw-vector-copy! (##intrinsic "VRawVectorCopy")) (##vcore.cons 'raw-vector-type (bruijn ##.raw-vector-type.105 1 59)) (##vcore.cons 'raw-vector-elem-width (bruijn ##.raw-vector-elem-width.104 1 58)) (##vcore.cons 'raw-vector-length (bruijn ##.raw-vector-length.103 1 57)) (##vcore.cons 'raw-vector->u8vector (bruijn ##.raw-vector->u8vector.102 1 56)) (##vcore.cons 'u8vector-ref-boolean (##basic-intrinsic "VU8VectorRefBool")) (##vcore.cons 'u8vector-set-boolean! (##basic-intrinsic "VU8VectorSetBool")) (##vcore.cons 'u8vector-ref-s8 (##basic-intrinsic "VU8VectorRefS8")) (##vcore.cons 'u8vector-set-s8! (##basic-intrinsic "VU8VectorSetS8")) (##vcore.cons 'u8vector-ref-u8 (##basic-intrinsic "VU8VectorRefU8")) (##vcore.cons 'u8vector-set-u8! (##basic-intrinsic "VU8VectorSetU8")) (##vcore.cons 'u8vector-ref-s16 (##basic-intrinsic "VU8VectorRefS16")) (##vcore.cons 'u8vector-set-s16! (##basic-intrinsic "VU8VectorSetS16")) (##vcore.cons 'u8vector-ref-u16 (##basic-intrinsic "VU8VectorRefU16")) (##vcore.cons 'u8vector-set-u16! (##basic-intrinsic "VU8VectorSetU16")) (##vcore.cons 'u8vector-ref-s32 (##basic-intrinsic "VU8VectorRefS32")) (##vcore.cons 'u8vector-set-s32! (##basic-intrinsic "VU8VectorSetS32")) (##vcore.cons 'u8vector-ref-f32 (##basic-intrinsic "VU8VectorRefF32")) (##vcore.cons 'u8vector-set-f32! (##basic-intrinsic "VU8VectorSetF32")) (##vcore.cons 'u8vector-ref-f64 (##basic-intrinsic "VU8VectorRefF64")) (##vcore.cons 'u8vector-set-f64! (##basic-intrinsic "VU8VectorSetF64")) (##vcore.cons 'u8vector-ref-pointer (##basic-intrinsic "VU8VectorRefPointer")) (##vcore.cons 'u8vector-set-pointer! (##basic-intrinsic "VU8VectorSetPointer")) (##vcore.cons 'u8vector-ref-s8x2 (bruijn ##.u8vector-ref-s8x2.101 1 55)) (##vcore.cons 'u8vector-ref-s8x3 (bruijn ##.u8vector-ref-s8x3.100 1 54)) (##vcore.cons 'u8vector-ref-s8x4 (bruijn ##.u8vector-ref-s8x4.99 1 53)) (##vcore.cons 'u8vector-set-s8x2! (bruijn ##.u8vector-set-s8x2!.98 1 52)) (##vcore.cons 'u8vector-set-s8x3! (bruijn ##.u8vector-set-s8x3!.97 1 51)) (##vcore.cons 'u8vector-set-s8x4! (bruijn ##.u8vector-set-s8x4!.96 1 50)) (##vcore.cons 'u8vector-copy-s8 (bruijn ##.u8vector-copy-s8.95 1 49)) (##vcore.cons 'u8vector-set-s8v! (bruijn ##.u8vector-set-s8v!.94 1 48)) (##vcore.cons 'u8vector-ref-u8x2 (bruijn ##.u8vector-ref-u8x2.93 1 47)) (##vcore.cons 'u8vector-ref-u8x3 (bruijn ##.u8vector-ref-u8x3.92 1 46)) (##vcore.cons 'u8vector-ref-u8x4 (bruijn ##.u8vector-ref-u8x4.91 1 45)) (##vcore.cons 'u8vector-set-u8x2! (bruijn ##.u8vector-set-u8x2!.90 1 44)) (##vcore.cons 'u8vector-set-u8x3! (bruijn ##.u8vector-set-u8x3!.89 1 43)) (##vcore.cons 'u8vector-set-u8x4! (bruijn ##.u8vector-set-u8x4!.88 1 42)) (##vcore.cons 'u8vector-copy-u8 (bruijn ##.u8vector-copy-u8.87 1 41)) (##vcore.cons 'u8vector-set-u8v! (bruijn ##.u8vector-set-u8v!.86 1 40)) (##vcore.cons 'u8vector-ref-s16x2 (bruijn ##.u8vector-ref-s16x2.85 1 39)) (##vcore.cons 'u8vector-ref-s16x3 (bruijn ##.u8vector-ref-s16x3.84 1 38)) (##vcore.cons 'u8vector-ref-s16x4 (bruijn ##.u8vector-ref-s16x4.83 1 37)) (##vcore.cons 'u8vector-set-s16x2! (bruijn ##.u8vector-set-s16x2!.82 1 36)) (##vcore.cons 'u8vector-set-s16x3! (bruijn ##.u8vector-set-s16x3!.81 1 35)) (##vcore.cons 'u8vector-set-s16x4! (bruijn ##.u8vector-set-s16x4!.80 1 34)) (##vcore.cons 'u8vector-copy-s16 (bruijn ##.u8vector-copy-s16.79 1 33)) (##vcore.cons 'u8vector-set-s16v! (bruijn ##.u8vector-set-s16v!.78 1 32)) (##vcore.cons 'u8vector-ref-u16x2 (bruijn ##.u8vector-ref-u16x2.77 1 31)) (##vcore.cons 'u8vector-ref-u16x3 (bruijn ##.u8vector-ref-u16x3.76 1 30)) (##vcore.cons 'u8vector-ref-u16x4 (bruijn ##.u8vector-ref-u16x4.75 1 29)) (##vcore.cons 'u8vector-set-u16x2! (bruijn ##.u8vector-set-u16x2!.74 1 28)) (##vcore.cons 'u8vector-set-u16x3! (bruijn ##.u8vector-set-u16x3!.73 1 27)) (##vcore.cons 'u8vector-set-u16x4! (bruijn ##.u8vector-set-u16x4!.72 1 26)) (##vcore.cons 'u8vector-copy-u16 (bruijn ##.u8vector-copy-u16.71 1 25)) (##vcore.cons 'u8vector-set-u16v! (bruijn ##.u8vector-set-u16v!.70 1 24)) (##vcore.cons 'u8vector-ref-s32x2 (bruijn ##.u8vector-ref-s32x2.69 1 23)) (##vcore.cons 'u8vector-ref-s32x3 (bruijn ##.u8vector-ref-s32x3.68 1 22)) (##vcore.cons 'u8vector-ref-s32x4 (bruijn ##.u8vector-ref-s32x4.67 1 21)) (##vcore.cons 'u8vector-set-s32x2! (bruijn ##.u8vector-set-s32x2!.66 1 20)) (##vcore.cons 'u8vector-set-s32x3! (bruijn ##.u8vector-set-s32x3!.65 1 19)) (##vcore.cons 'u8vector-set-s32x4! (bruijn ##.u8vector-set-s32x4!.64 1 18)) (##vcore.cons 'u8vector-copy-s32 (bruijn ##.u8vector-copy-s32.63 1 17)) (##vcore.cons 'u8vector-set-s32v! (bruijn ##.u8vector-set-s32v!.62 1 16)) (##vcore.cons 'u8vector-ref-f32x2 (bruijn ##.u8vector-ref-f32x2.61 1 15)) (##vcore.cons 'u8vector-ref-f32x3 (bruijn ##.u8vector-ref-f32x3.60 1 14)) (##vcore.cons 'u8vector-ref-f32x4 (bruijn ##.u8vector-ref-f32x4.59 1 13)) (##vcore.cons 'u8vector-set-f32x2! (bruijn ##.u8vector-set-f32x2!.58 1 12)) (##vcore.cons 'u8vector-set-f32x3! (bruijn ##.u8vector-set-f32x3!.57 1 11)) (##vcore.cons 'u8vector-set-f32x4! (bruijn ##.u8vector-set-f32x4!.56 1 10)) (##vcore.cons 'u8vector-copy-f32 (bruijn ##.u8vector-copy-f32.55 1 9)) (##vcore.cons 'u8vector-set-f32v! (bruijn ##.u8vector-set-f32v!.54 1 8)) (##vcore.cons 'u8vector-ref-f64x2 (bruijn ##.u8vector-ref-f64x2.53 1 7)) (##vcore.cons 'u8vector-ref-f64x3 (bruijn ##.u8vector-ref-f64x3.52 1 6)) (##vcore.cons 'u8vector-ref-f64x4 (bruijn ##.u8vector-ref-f64x4.51 1 5)) (##vcore.cons 'u8vector-set-f64x2! (bruijn ##.u8vector-set-f64x2!.50 1 4)) (##vcore.cons 'u8vector-set-f64x3! (bruijn ##.u8vector-set-f64x3!.49 1 3)) (##vcore.cons 'u8vector-set-f64x4! (bruijn ##.u8vector-set-f64x4!.48 1 2)) (##vcore.cons 'u8vector-copy-f64 (bruijn ##.u8vector-copy-f64.47 1 1)) (##vcore.cons 'u8vector-set-f64v! (bruijn ##.u8vector-set-f64v!.46 1 0)) (##vcore.cons (bruijn ##.%x.1148 0 78) '()) (##vcore.cons (bruijn ##.%x.1147 0 77) (bruijn ##.%x.1149 0 79)) (##vcore.cons (bruijn ##.%x.1146 0 76) (bruijn ##.%x.1150 0 80)) (##vcore.cons (bruijn ##.%x.1145 0 75) (bruijn ##.%x.1151 0 81)) (##vcore.cons (bruijn ##.%x.1144 0 74) (bruijn ##.%x.1152 0 82)) (##vcore.cons (bruijn ##.%x.1143 0 73) (bruijn ##.%x.1153 0 83)) (##vcore.cons (bruijn ##.%x.1142 0 72) (bruijn ##.%x.1154 0 84)) (##vcore.cons (bruijn ##.%x.1141 0 71) (bruijn ##.%x.1155 0 85)) (##vcore.cons (bruijn ##.%x.1140 0 70) (bruijn ##.%x.1156 0 86)) (##vcore.cons (bruijn ##.%x.1139 0 69) (bruijn ##.%x.1157 0 87)) (##vcore.cons (bruijn ##.%x.1138 0 68) (bruijn ##.%x.1158 0 88)) (##vcore.cons (bruijn ##.%x.1137 0 67) (bruijn ##.%x.1159 0 89)) (##vcore.cons (bruijn ##.%x.1136 0 66) (bruijn ##.%x.1160 0 90)) (##vcore.cons (bruijn ##.%x.1135 0 65) (bruijn ##.%x.1161 0 91)) (##vcore.cons (bruijn ##.%x.1134 0 64) (bruijn ##.%x.1162 0 92)) (##vcore.cons (bruijn ##.%x.1133 0 63) (bruijn ##.%x.1163 0 93)) (##vcore.cons (bruijn ##.%x.1132 0 62) (bruijn ##.%x.1164 0 94)) (##vcore.cons (bruijn ##.%x.1131 0 61) (bruijn ##.%x.1165 0 95)) (##vcore.cons (bruijn ##.%x.1130 0 60) (bruijn ##.%x.1166 0 96)) (##vcore.cons (bruijn ##.%x.1129 0 59) (bruijn ##.%x.1167 0 97)) (##vcore.cons (bruijn ##.%x.1128 0 58) (bruijn ##.%x.1168 0 98)) (##vcore.cons (bruijn ##.%x.1127 0 57) (bruijn ##.%x.1169 0 99)) (##vcore.cons (bruijn ##.%x.1126 0 56) (bruijn ##.%x.1170 0 100)) (##vcore.cons (bruijn ##.%x.1125 0 55) (bruijn ##.%x.1171 0 101)) (##vcore.cons (bruijn ##.%x.1124 0 54) (bruijn ##.%x.1172 0 102)) (##vcore.cons (bruijn ##.%x.1123 0 53) (bruijn ##.%x.1173 0 103)) (##vcore.cons (bruijn ##.%x.1122 0 52) (bruijn ##.%x.1174 0 104)) (##vcore.cons (bruijn ##.%x.1121 0 51) (bruijn ##.%x.1175 0 105)) (##vcore.cons (bruijn ##.%x.1120 0 50) (bruijn ##.%x.1176 0 106)) (##vcore.cons (bruijn ##.%x.1119 0 49) (bruijn ##.%x.1177 0 107)) (##vcore.cons (bruijn ##.%x.1118 0 48) (bruijn ##.%x.1178 0 108)) (##vcore.cons (bruijn ##.%x.1117 0 47) (bruijn ##.%x.1179 0 109)) (##vcore.cons (bruijn ##.%x.1116 0 46) (bruijn ##.%x.1180 0 110)) (##vcore.cons (bruijn ##.%x.1115 0 45) (bruijn ##.%x.1181 0 111)) (##vcore.cons (bruijn ##.%x.1114 0 44) (bruijn ##.%x.1182 0 112)) (##vcore.cons (bruijn ##.%x.1113 0 43) (bruijn ##.%x.1183 0 113)) (##vcore.cons (bruijn ##.%x.1112 0 42) (bruijn ##.%x.1184 0 114)) (##vcore.cons (bruijn ##.%x.1111 0 41) (bruijn ##.%x.1185 0 115)) (##vcore.cons (bruijn ##.%x.1110 0 40) (bruijn ##.%x.1186 0 116)) (##vcore.cons (bruijn ##.%x.1109 0 39) (bruijn ##.%x.1187 0 117)) (##vcore.cons (bruijn ##.%x.1108 0 38) (bruijn ##.%x.1188 0 118)) (##vcore.cons (bruijn ##.%x.1107 0 37) (bruijn ##.%x.1189 0 119)) (##vcore.cons (bruijn ##.%x.1106 0 36) (bruijn ##.%x.1190 0 120)) (##vcore.cons (bruijn ##.%x.1105 0 35) (bruijn ##.%x.1191 0 121)) (##vcore.cons (bruijn ##.%x.1104 0 34) (bruijn ##.%x.1192 0 122)) (##vcore.cons (bruijn ##.%x.1103 0 33) (bruijn ##.%x.1193 0 123)) (##vcore.cons (bruijn ##.%x.1102 0 32) (bruijn ##.%x.1194 0 124)) (##vcore.cons (bruijn ##.%x.1101 0 31) (bruijn ##.%x.1195 0 125)) (##vcore.cons (bruijn ##.%x.1100 0 30) (bruijn ##.%x.1196 0 126)) (##vcore.cons (bruijn ##.%x.1099 0 29) (bruijn ##.%x.1197 0 127)) (##vcore.cons (bruijn ##.%x.1098 0 28) (bruijn ##.%x.1198 0 128)) (##vcore.cons (bruijn ##.%x.1097 0 27) (bruijn ##.%x.1199 0 129)) (##vcore.cons (bruijn ##.%x.1096 0 26) (bruijn ##.%x.1200 0 130)) (##vcore.cons (bruijn ##.%x.1095 0 25) (bruijn ##.%x.1201 0 131)) (##vcore.cons (bruijn ##.%x.1094 0 24) (bruijn ##.%x.1202 0 132)) (##vcore.cons (bruijn ##.%x.1093 0 23) (bruijn ##.%x.1203 0 133)) (##vcore.cons (bruijn ##.%x.1092 0 22) (bruijn ##.%x.1204 0 134)) (##vcore.cons (bruijn ##.%x.1091 0 21) (bruijn ##.%x.1205 0 135)) (##vcore.cons (bruijn ##.%x.1090 0 20) (bruijn ##.%x.1206 0 136)) (##vcore.cons (bruijn ##.%x.1089 0 19) (bruijn ##.%x.1207 0 137)) (##vcore.cons (bruijn ##.%x.1088 0 18) (bruijn ##.%x.1208 0 138)) (##vcore.cons (bruijn ##.%x.1087 0 17) (bruijn ##.%x.1209 0 139)) (##vcore.cons (bruijn ##.%x.1086 0 16) (bruijn ##.%x.1210 0 140)) (##vcore.cons (bruijn ##.%x.1085 0 15) (bruijn ##.%x.1211 0 141)) (##vcore.cons (bruijn ##.%x.1084 0 14) (bruijn ##.%x.1212 0 142)) (##vcore.cons (bruijn ##.%x.1083 0 13) (bruijn ##.%x.1213 0 143)) (##vcore.cons (bruijn ##.%x.1082 0 12) (bruijn ##.%x.1214 0 144)) (##vcore.cons (bruijn ##.%x.1081 0 11) (bruijn ##.%x.1215 0 145)) (##vcore.cons (bruijn ##.%x.1080 0 10) (bruijn ##.%x.1216 0 146)) (##vcore.cons (bruijn ##.%x.1079 0 9) (bruijn ##.%x.1217 0 147)) (##vcore.cons (bruijn ##.%x.1078 0 8) (bruijn ##.%x.1218 0 148)) (##vcore.cons (bruijn ##.%x.1077 0 7) (bruijn ##.%x.1219 0 149)) (##vcore.cons (bruijn ##.%x.1076 0 6) (bruijn ##.%x.1220 0 150)) (##vcore.cons (bruijn ##.%x.1075 0 5) (bruijn ##.%x.1221 0 151)) (##vcore.cons (bruijn ##.%x.1074 0 4) (bruijn ##.%x.1222 0 152)) (##vcore.cons (bruijn ##.%x.1073 0 3) (bruijn ##.%x.1223 0 153)) (##vcore.cons (bruijn ##.%x.1072 0 2) (bruijn ##.%x.1224 0 154)) (##vcore.cons (bruijn ##.%x.1071 0 1) (bruijn ##.%x.1225 0 155)) (##vcore.cons (bruijn ##.%x.1070 0 0) (bruijn ##.%x.1226 0 156))) ((bruijn ##.%k.371 5 0) (bruijn ##.%r.1227 0 157))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[60]; } container;
    self = &container.self;
    _V60_V0vanity_V0raw__vector = self;
    VInitEnv(self, 60, 60, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f64, _V60_V0vanity_V0raw__vector))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f64x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x4, _V60_V0vanity_V0raw__vector))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x3, _V60_V0vanity_V0raw__vector))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f64x2, _V60_V0vanity_V0raw__vector))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__f32, _V60_V0vanity_V0raw__vector))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__f32x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x4, _V60_V0vanity_V0raw__vector))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x3, _V60_V0vanity_V0raw__vector))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__f32x2, _V60_V0vanity_V0raw__vector))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s32, _V60_V0vanity_V0raw__vector))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s32x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x4, _V60_V0vanity_V0raw__vector))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x3, _V60_V0vanity_V0raw__vector))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s32x2, _V60_V0vanity_V0raw__vector))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u16, _V60_V0vanity_V0raw__vector))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u16x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x4, _V60_V0vanity_V0raw__vector))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x3, _V60_V0vanity_V0raw__vector))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u16x2, _V60_V0vanity_V0raw__vector))));
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s16, _V60_V0vanity_V0raw__vector))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s16x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x4, _V60_V0vanity_V0raw__vector))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x3, _V60_V0vanity_V0raw__vector))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s16x2, _V60_V0vanity_V0raw__vector))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__u8, _V60_V0vanity_V0raw__vector))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[44] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__u8x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x4, _V60_V0vanity_V0raw__vector))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x3, _V60_V0vanity_V0raw__vector))));
    self->vars[47] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__u8x2, _V60_V0vanity_V0raw__vector))));
    self->vars[48] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8v_B, _V60_V0vanity_V0raw__vector))));
    self->vars[49] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__copy__s8, _V60_V0vanity_V0raw__vector))));
    self->vars[50] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x4_B, _V60_V0vanity_V0raw__vector))));
    self->vars[51] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x3_B, _V60_V0vanity_V0raw__vector))));
    self->vars[52] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__set__s8x2_B, _V60_V0vanity_V0raw__vector))));
    self->vars[53] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x4, _V60_V0vanity_V0raw__vector))));
    self->vars[54] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x3, _V60_V0vanity_V0raw__vector))));
    self->vars[55] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0u8vector__ref__s8x2, _V60_V0vanity_V0raw__vector))));
    self->vars[56] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector___Gu8vector, _V60_V0vanity_V0raw__vector))));
    self->vars[57] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector__length, _V60_V0vanity_V0raw__vector))));
    self->vars[58] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector__elem__width, _V60_V0vanity_V0raw__vector))));
    self->vars[59] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0raw__vector_V0raw__vector__type, _V60_V0vanity_V0raw__vector))));
    VRegisterStaticEnv("_V0vanity_V0raw__vector_V20", &_V60_V0vanity_V0raw__vector);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[158]; } container;
    self = &container.self;
    VInitEnv(self, 158, 158, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0raw__vector__copy_B,
      _V40VRawVectorCopy);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0raw__vector__type,
      statics->vars[59]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0raw__vector__elem__width,
      statics->vars[58]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0raw__vector__length,
      statics->vars[57]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0raw__vector___Gu8vector,
      statics->vars[56]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__boolean,
      _V40VU8VectorRefBool);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__boolean_B,
      _V40VU8VectorSetBool);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s8,
      _V40VU8VectorRefS8);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s8_B,
      _V40VU8VectorSetS8);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u8,
      _V40VU8VectorRefU8);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u8_B,
      _V40VU8VectorSetU8);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s16,
      _V40VU8VectorRefS16);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s16_B,
      _V40VU8VectorSetS16);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u16,
      _V40VU8VectorRefU16);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u16_B,
      _V40VU8VectorSetU16);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s32,
      _V40VU8VectorRefS32);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s32_B,
      _V40VU8VectorSetS32);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f32,
      _V40VU8VectorRefF32);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f32_B,
      _V40VU8VectorSetF32);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f64,
      _V40VU8VectorRefF64);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f64_B,
      _V40VU8VectorSetF64);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__pointer,
      _V40VU8VectorRefPointer);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__pointer_B,
      _V40VU8VectorSetPointer);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s8x2,
      statics->vars[55]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s8x3,
      statics->vars[54]);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s8x4,
      statics->vars[53]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s8x2_B,
      statics->vars[52]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s8x3_B,
      statics->vars[51]);
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s8x4_B,
      statics->vars[50]);
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__s8,
      statics->vars[49]);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s8v_B,
      statics->vars[48]);
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u8x2,
      statics->vars[47]);
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u8x3,
      statics->vars[46]);
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u8x4,
      statics->vars[45]);
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u8x2_B,
      statics->vars[44]);
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u8x3_B,
      statics->vars[43]);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u8x4_B,
      statics->vars[42]);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__u8,
      statics->vars[41]);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u8v_B,
      statics->vars[40]);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s16x2,
      statics->vars[39]);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s16x3,
      statics->vars[38]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s16x4,
      statics->vars[37]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s16x2_B,
      statics->vars[36]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s16x3_B,
      statics->vars[35]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s16x4_B,
      statics->vars[34]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__s16,
      statics->vars[33]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s16v_B,
      statics->vars[32]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u16x2,
      statics->vars[31]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u16x3,
      statics->vars[30]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__u16x4,
      statics->vars[29]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u16x2_B,
      statics->vars[28]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u16x3_B,
      statics->vars[27]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u16x4_B,
      statics->vars[26]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__u16,
      statics->vars[25]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__u16v_B,
      statics->vars[24]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s32x2,
      statics->vars[23]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s32x3,
      statics->vars[22]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__s32x4,
      statics->vars[21]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s32x2_B,
      statics->vars[20]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s32x3_B,
      statics->vars[19]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s32x4_B,
      statics->vars[18]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__s32,
      statics->vars[17]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__s32v_B,
      statics->vars[16]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f32x2,
      statics->vars[15]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f32x3,
      statics->vars[14]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f32x4,
      statics->vars[13]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f32x2_B,
      statics->vars[12]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f32x3_B,
      statics->vars[11]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f32x4_B,
      statics->vars[10]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__f32,
      statics->vars[9]);
    self->vars[70] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f32v_B,
      statics->vars[8]);
    self->vars[71] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f64x2,
      statics->vars[7]);
    self->vars[72] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f64x3,
      statics->vars[6]);
    self->vars[73] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__ref__f64x4,
      statics->vars[5]);
    self->vars[74] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f64x2_B,
      statics->vars[4]);
    self->vars[75] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f64x3_B,
      statics->vars[3]);
    self->vars[76] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f64x4_B,
      statics->vars[2]);
    self->vars[77] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__copy__f64,
      statics->vars[1]);
    self->vars[78] = _VBasic_VCons2(runtime, NULL,
      _V0u8vector__set__f64v_B,
      statics->vars[0]);
    self->vars[79] = _VBasic_VCons2(runtime, NULL,
      self->vars[78],
      VNULL);
    self->vars[80] = _VBasic_VCons2(runtime, NULL,
      self->vars[77],
      self->vars[79]);
    self->vars[81] = _VBasic_VCons2(runtime, NULL,
      self->vars[76],
      self->vars[80]);
    self->vars[82] = _VBasic_VCons2(runtime, NULL,
      self->vars[75],
      self->vars[81]);
    self->vars[83] = _VBasic_VCons2(runtime, NULL,
      self->vars[74],
      self->vars[82]);
    self->vars[84] = _VBasic_VCons2(runtime, NULL,
      self->vars[73],
      self->vars[83]);
    self->vars[85] = _VBasic_VCons2(runtime, NULL,
      self->vars[72],
      self->vars[84]);
    self->vars[86] = _VBasic_VCons2(runtime, NULL,
      self->vars[71],
      self->vars[85]);
    self->vars[87] = _VBasic_VCons2(runtime, NULL,
      self->vars[70],
      self->vars[86]);
    self->vars[88] = _VBasic_VCons2(runtime, NULL,
      self->vars[69],
      self->vars[87]);
    self->vars[89] = _VBasic_VCons2(runtime, NULL,
      self->vars[68],
      self->vars[88]);
    self->vars[90] = _VBasic_VCons2(runtime, NULL,
      self->vars[67],
      self->vars[89]);
    self->vars[91] = _VBasic_VCons2(runtime, NULL,
      self->vars[66],
      self->vars[90]);
    self->vars[92] = _VBasic_VCons2(runtime, NULL,
      self->vars[65],
      self->vars[91]);
    self->vars[93] = _VBasic_VCons2(runtime, NULL,
      self->vars[64],
      self->vars[92]);
    self->vars[94] = _VBasic_VCons2(runtime, NULL,
      self->vars[63],
      self->vars[93]);
    self->vars[95] = _VBasic_VCons2(runtime, NULL,
      self->vars[62],
      self->vars[94]);
    self->vars[96] = _VBasic_VCons2(runtime, NULL,
      self->vars[61],
      self->vars[95]);
    self->vars[97] = _VBasic_VCons2(runtime, NULL,
      self->vars[60],
      self->vars[96]);
    self->vars[98] = _VBasic_VCons2(runtime, NULL,
      self->vars[59],
      self->vars[97]);
    self->vars[99] = _VBasic_VCons2(runtime, NULL,
      self->vars[58],
      self->vars[98]);
    self->vars[100] = _VBasic_VCons2(runtime, NULL,
      self->vars[57],
      self->vars[99]);
    self->vars[101] = _VBasic_VCons2(runtime, NULL,
      self->vars[56],
      self->vars[100]);
    self->vars[102] = _VBasic_VCons2(runtime, NULL,
      self->vars[55],
      self->vars[101]);
    self->vars[103] = _VBasic_VCons2(runtime, NULL,
      self->vars[54],
      self->vars[102]);
    self->vars[104] = _VBasic_VCons2(runtime, NULL,
      self->vars[53],
      self->vars[103]);
    self->vars[105] = _VBasic_VCons2(runtime, NULL,
      self->vars[52],
      self->vars[104]);
    self->vars[106] = _VBasic_VCons2(runtime, NULL,
      self->vars[51],
      self->vars[105]);
    self->vars[107] = _VBasic_VCons2(runtime, NULL,
      self->vars[50],
      self->vars[106]);
    self->vars[108] = _VBasic_VCons2(runtime, NULL,
      self->vars[49],
      self->vars[107]);
    self->vars[109] = _VBasic_VCons2(runtime, NULL,
      self->vars[48],
      self->vars[108]);
    self->vars[110] = _VBasic_VCons2(runtime, NULL,
      self->vars[47],
      self->vars[109]);
    self->vars[111] = _VBasic_VCons2(runtime, NULL,
      self->vars[46],
      self->vars[110]);
    self->vars[112] = _VBasic_VCons2(runtime, NULL,
      self->vars[45],
      self->vars[111]);
    self->vars[113] = _VBasic_VCons2(runtime, NULL,
      self->vars[44],
      self->vars[112]);
    self->vars[114] = _VBasic_VCons2(runtime, NULL,
      self->vars[43],
      self->vars[113]);
    self->vars[115] = _VBasic_VCons2(runtime, NULL,
      self->vars[42],
      self->vars[114]);
    self->vars[116] = _VBasic_VCons2(runtime, NULL,
      self->vars[41],
      self->vars[115]);
    self->vars[117] = _VBasic_VCons2(runtime, NULL,
      self->vars[40],
      self->vars[116]);
    self->vars[118] = _VBasic_VCons2(runtime, NULL,
      self->vars[39],
      self->vars[117]);
    self->vars[119] = _VBasic_VCons2(runtime, NULL,
      self->vars[38],
      self->vars[118]);
    self->vars[120] = _VBasic_VCons2(runtime, NULL,
      self->vars[37],
      self->vars[119]);
    self->vars[121] = _VBasic_VCons2(runtime, NULL,
      self->vars[36],
      self->vars[120]);
    self->vars[122] = _VBasic_VCons2(runtime, NULL,
      self->vars[35],
      self->vars[121]);
    self->vars[123] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      self->vars[122]);
    self->vars[124] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[123]);
    self->vars[125] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[124]);
    self->vars[126] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[125]);
    self->vars[127] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[126]);
    self->vars[128] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[127]);
    self->vars[129] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[128]);
    self->vars[130] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[129]);
    self->vars[131] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[130]);
    self->vars[132] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[131]);
    self->vars[133] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[132]);
    self->vars[134] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[133]);
    self->vars[135] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[134]);
    self->vars[136] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[135]);
    self->vars[137] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[136]);
    self->vars[138] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[137]);
    self->vars[139] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[138]);
    self->vars[140] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[139]);
    self->vars[141] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[140]);
    self->vars[142] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[141]);
    self->vars[143] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[142]);
    self->vars[144] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[143]);
    self->vars[145] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[144]);
    self->vars[146] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[145]);
    self->vars[147] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[146]);
    self->vars[148] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[147]);
    self->vars[149] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[148]);
    self->vars[150] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[149]);
    self->vars[151] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[150]);
    self->vars[152] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[151]);
    self->vars[153] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[152]);
    self->vars[154] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[153]);
    self->vars[155] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[154]);
    self->vars[156] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[155]);
    self->vars[157] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[156]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[157]);
    }
    }
}
static void _V0vanity_V0raw__vector_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0raw__vector_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0raw__vector_V20_V0lambda2) (##string ##.string.1311) (bruijn ##.%x.889 0 0) 'error)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0raw__vector_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1311.sym, VPOINTER_OTHER),
      _var0,
      _V0error);
}
static void _V0vanity_V0raw__vector_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0raw__vector_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0raw__vector_V20_V0k2) (bruijn ##.%x.890 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0raw__vector_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0raw__vector_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0raw__vector_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0raw__vector_V20_V0k1) (##string ##.string.1312))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0raw__vector_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1312.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0raw__vector_V20 = (VFunc)_V0vanity_V0raw__vector_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0u8vector__set__f64v_B = VEncodePointer(VInternSymbol(431159807, &_VW_V0u8vector__set__f64v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__f64 = VEncodePointer(VInternSymbol(486307850, &_VW_V0u8vector__copy__f64.sym), VPOINTER_OTHER);
  _V0u8vector__set__f64x4_B = VEncodePointer(VInternSymbol(717134802, &_VW_V0u8vector__set__f64x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__f64x3_B = VEncodePointer(VInternSymbol(1554061179, &_VW_V0u8vector__set__f64x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__f64x2_B = VEncodePointer(VInternSymbol(-941061023, &_VW_V0u8vector__set__f64x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f64x4 = VEncodePointer(VInternSymbol(149242238, &_VW_V0u8vector__ref__f64x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f64x3 = VEncodePointer(VInternSymbol(214481015, &_VW_V0u8vector__ref__f64x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f64x2 = VEncodePointer(VInternSymbol(610588840, &_VW_V0u8vector__ref__f64x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__f32v_B = VEncodePointer(VInternSymbol(886538241, &_VW_V0u8vector__set__f32v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__f32 = VEncodePointer(VInternSymbol(400474708, &_VW_V0u8vector__copy__f32.sym), VPOINTER_OTHER);
  _V0u8vector__set__f32x4_B = VEncodePointer(VInternSymbol(1666499875, &_VW_V0u8vector__set__f32x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__f32x3_B = VEncodePointer(VInternSymbol(1995046294, &_VW_V0u8vector__set__f32x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__f32x2_B = VEncodePointer(VInternSymbol(988052844, &_VW_V0u8vector__set__f32x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f32x4 = VEncodePointer(VInternSymbol(-576403226, &_VW_V0u8vector__ref__f32x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f32x3 = VEncodePointer(VInternSymbol(-289625399, &_VW_V0u8vector__ref__f32x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f32x2 = VEncodePointer(VInternSymbol(257085784, &_VW_V0u8vector__ref__f32x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__s32v_B = VEncodePointer(VInternSymbol(-1904057013, &_VW_V0u8vector__set__s32v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__s32 = VEncodePointer(VInternSymbol(-923612606, &_VW_V0u8vector__copy__s32.sym), VPOINTER_OTHER);
  _V0u8vector__set__s32x4_B = VEncodePointer(VInternSymbol(1986642193, &_VW_V0u8vector__set__s32x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s32x3_B = VEncodePointer(VInternSymbol(-1717603032, &_VW_V0u8vector__set__s32x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s32x2_B = VEncodePointer(VInternSymbol(1156141321, &_VW_V0u8vector__set__s32x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s32x4 = VEncodePointer(VInternSymbol(-927132632, &_VW_V0u8vector__ref__s32x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s32x3 = VEncodePointer(VInternSymbol(-656663554, &_VW_V0u8vector__ref__s32x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s32x2 = VEncodePointer(VInternSymbol(720746474, &_VW_V0u8vector__ref__s32x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__u16v_B = VEncodePointer(VInternSymbol(-989239698, &_VW_V0u8vector__set__u16v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__u16 = VEncodePointer(VInternSymbol(520030618, &_VW_V0u8vector__copy__u16.sym), VPOINTER_OTHER);
  _V0u8vector__set__u16x4_B = VEncodePointer(VInternSymbol(575159678, &_VW_V0u8vector__set__u16x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__u16x3_B = VEncodePointer(VInternSymbol(1813028562, &_VW_V0u8vector__set__u16x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__u16x2_B = VEncodePointer(VInternSymbol(54786418, &_VW_V0u8vector__set__u16x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u16x4 = VEncodePointer(VInternSymbol(1923514542, &_VW_V0u8vector__ref__u16x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u16x3 = VEncodePointer(VInternSymbol(-884882270, &_VW_V0u8vector__ref__u16x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u16x2 = VEncodePointer(VInternSymbol(1339160680, &_VW_V0u8vector__ref__u16x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__s16v_B = VEncodePointer(VInternSymbol(-482047157, &_VW_V0u8vector__set__s16v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__s16 = VEncodePointer(VInternSymbol(-832734358, &_VW_V0u8vector__copy__s16.sym), VPOINTER_OTHER);
  _V0u8vector__set__s16x4_B = VEncodePointer(VInternSymbol(874607338, &_VW_V0u8vector__set__s16x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s16x3_B = VEncodePointer(VInternSymbol(-1860960826, &_VW_V0u8vector__set__s16x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s16x2_B = VEncodePointer(VInternSymbol(637690208, &_VW_V0u8vector__set__s16x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s16x4 = VEncodePointer(VInternSymbol(-368586202, &_VW_V0u8vector__ref__s16x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s16x3 = VEncodePointer(VInternSymbol(-552284537, &_VW_V0u8vector__ref__s16x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s16x2 = VEncodePointer(VInternSymbol(-1669089091, &_VW_V0u8vector__ref__s16x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__u8v_B = VEncodePointer(VInternSymbol(-1890628731, &_VW_V0u8vector__set__u8v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__u8 = VEncodePointer(VInternSymbol(-1348348319, &_VW_V0u8vector__copy__u8.sym), VPOINTER_OTHER);
  _V0u8vector__set__u8x4_B = VEncodePointer(VInternSymbol(1371091173, &_VW_V0u8vector__set__u8x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__u8x3_B = VEncodePointer(VInternSymbol(892438713, &_VW_V0u8vector__set__u8x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__u8x2_B = VEncodePointer(VInternSymbol(972456968, &_VW_V0u8vector__set__u8x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u8x4 = VEncodePointer(VInternSymbol(1738848661, &_VW_V0u8vector__ref__u8x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u8x3 = VEncodePointer(VInternSymbol(1251931596, &_VW_V0u8vector__ref__u8x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u8x2 = VEncodePointer(VInternSymbol(1282537924, &_VW_V0u8vector__ref__u8x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__s8v_B = VEncodePointer(VInternSymbol(2076698005, &_VW_V0u8vector__set__s8v_B.sym), VPOINTER_OTHER);
  _V0u8vector__copy__s8 = VEncodePointer(VInternSymbol(-588467359, &_VW_V0u8vector__copy__s8.sym), VPOINTER_OTHER);
  _V0u8vector__set__s8x4_B = VEncodePointer(VInternSymbol(198070475, &_VW_V0u8vector__set__s8x4_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s8x3_B = VEncodePointer(VInternSymbol(-556862628, &_VW_V0u8vector__set__s8x3_B.sym), VPOINTER_OTHER);
  _V0u8vector__set__s8x2_B = VEncodePointer(VInternSymbol(1156623422, &_VW_V0u8vector__set__s8x2_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s8x4 = VEncodePointer(VInternSymbol(-1784405615, &_VW_V0u8vector__ref__s8x4.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s8x3 = VEncodePointer(VInternSymbol(326772522, &_VW_V0u8vector__ref__s8x3.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s8x2 = VEncodePointer(VInternSymbol(1395505458, &_VW_V0u8vector__ref__s8x2.sym), VPOINTER_OTHER);
  _V0u8vector__set__pointer_B = VEncodePointer(VInternSymbol(-1822551869, &_VW_V0u8vector__set__pointer_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__pointer = VEncodePointer(VInternSymbol(-135474460, &_VW_V0u8vector__ref__pointer.sym), VPOINTER_OTHER);
  _V0u8vector__set__f64_B = VEncodePointer(VInternSymbol(-880867123, &_VW_V0u8vector__set__f64_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f64 = VEncodePointer(VInternSymbol(-1808551446, &_VW_V0u8vector__ref__f64.sym), VPOINTER_OTHER);
  _V0u8vector__set__f32_B = VEncodePointer(VInternSymbol(-735256389, &_VW_V0u8vector__set__f32_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__f32 = VEncodePointer(VInternSymbol(-1619631298, &_VW_V0u8vector__ref__f32.sym), VPOINTER_OTHER);
  _V0u8vector__set__s32_B = VEncodePointer(VInternSymbol(-1501615106, &_VW_V0u8vector__set__s32_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s32 = VEncodePointer(VInternSymbol(-1821677198, &_VW_V0u8vector__ref__s32.sym), VPOINTER_OTHER);
  _V0u8vector__set__u16_B = VEncodePointer(VInternSymbol(32704604, &_VW_V0u8vector__set__u16_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u16 = VEncodePointer(VInternSymbol(-372941123, &_VW_V0u8vector__ref__u16.sym), VPOINTER_OTHER);
  _V0u8vector__set__s16_B = VEncodePointer(VInternSymbol(-703976432, &_VW_V0u8vector__set__s16_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s16 = VEncodePointer(VInternSymbol(-1812865162, &_VW_V0u8vector__ref__s16.sym), VPOINTER_OTHER);
  _V0u8vector__set__u8_B = VEncodePointer(VInternSymbol(-864716077, &_VW_V0u8vector__set__u8_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__u8 = VEncodePointer(VInternSymbol(-1507196819, &_VW_V0u8vector__ref__u8.sym), VPOINTER_OTHER);
  _V0u8vector__set__s8_B = VEncodePointer(VInternSymbol(-549096562, &_VW_V0u8vector__set__s8_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__s8 = VEncodePointer(VInternSymbol(-372320427, &_VW_V0u8vector__ref__s8.sym), VPOINTER_OTHER);
  _V0u8vector__set__boolean_B = VEncodePointer(VInternSymbol(1041769015, &_VW_V0u8vector__set__boolean_B.sym), VPOINTER_OTHER);
  _V0u8vector__ref__boolean = VEncodePointer(VInternSymbol(1331364222, &_VW_V0u8vector__ref__boolean.sym), VPOINTER_OTHER);
  _V0raw__vector___Gu8vector = VEncodePointer(VInternSymbol(1022055033, &_VW_V0raw__vector___Gu8vector.sym), VPOINTER_OTHER);
  _V0raw__vector__length = VEncodePointer(VInternSymbol(1392432435, &_VW_V0raw__vector__length.sym), VPOINTER_OTHER);
  _V0raw__vector__elem__width = VEncodePointer(VInternSymbol(-1669981348, &_VW_V0raw__vector__elem__width.sym), VPOINTER_OTHER);
  _V0raw__vector__type = VEncodePointer(VInternSymbol(-1494600136, &_VW_V0raw__vector__type.sym), VPOINTER_OTHER);
  _V0raw__vector__copy_B = VEncodePointer(VInternSymbol(120520244, &_VW_V0raw__vector__copy_B.sym), VPOINTER_OTHER);
  _V0f64 = VEncodePointer(VInternSymbol(413728775, &_VW_V0f64.sym), VPOINTER_OTHER);
  _V0f32 = VEncodePointer(VInternSymbol(-1585717716, &_VW_V0f32.sym), VPOINTER_OTHER);
  _V0s32 = VEncodePointer(VInternSymbol(-456042930, &_VW_V0s32.sym), VPOINTER_OTHER);
  _V0u16 = VEncodePointer(VInternSymbol(-987094047, &_VW_V0u16.sym), VPOINTER_OTHER);
  _V0s16 = VEncodePointer(VInternSymbol(-1188390709, &_VW_V0s16.sym), VPOINTER_OTHER);
  _V0s8 = VEncodePointer(VInternSymbol(615111082, &_VW_V0s8.sym), VPOINTER_OTHER);
  _V0u8 = VEncodePointer(VInternSymbol(1265422019, &_VW_V0u8.sym), VPOINTER_OTHER);
  _V40VU8VectorSetPointer = VEncodePointer(VLookupConstant("_V40VU8VectorSetPointer", &_VW_V40VU8VectorSetPointer), VPOINTER_CLOSURE);
  _V40VU8VectorRefPointer = VEncodePointer(VLookupConstant("_V40VU8VectorRefPointer", &_VW_V40VU8VectorRefPointer), VPOINTER_CLOSURE);
  _V40VU8VectorSetF64 = VEncodePointer(VLookupConstant("_V40VU8VectorSetF64", &_VW_V40VU8VectorSetF64), VPOINTER_CLOSURE);
  _V40VU8VectorRefF64 = VEncodePointer(VLookupConstant("_V40VU8VectorRefF64", &_VW_V40VU8VectorRefF64), VPOINTER_CLOSURE);
  _V40VU8VectorSetF32 = VEncodePointer(VLookupConstant("_V40VU8VectorSetF32", &_VW_V40VU8VectorSetF32), VPOINTER_CLOSURE);
  _V40VU8VectorRefF32 = VEncodePointer(VLookupConstant("_V40VU8VectorRefF32", &_VW_V40VU8VectorRefF32), VPOINTER_CLOSURE);
  _V40VU8VectorSetS32 = VEncodePointer(VLookupConstant("_V40VU8VectorSetS32", &_VW_V40VU8VectorSetS32), VPOINTER_CLOSURE);
  _V40VU8VectorRefS32 = VEncodePointer(VLookupConstant("_V40VU8VectorRefS32", &_VW_V40VU8VectorRefS32), VPOINTER_CLOSURE);
  _V40VU8VectorSetU16 = VEncodePointer(VLookupConstant("_V40VU8VectorSetU16", &_VW_V40VU8VectorSetU16), VPOINTER_CLOSURE);
  _V40VU8VectorRefU16 = VEncodePointer(VLookupConstant("_V40VU8VectorRefU16", &_VW_V40VU8VectorRefU16), VPOINTER_CLOSURE);
  _V40VU8VectorSetS16 = VEncodePointer(VLookupConstant("_V40VU8VectorSetS16", &_VW_V40VU8VectorSetS16), VPOINTER_CLOSURE);
  _V40VU8VectorRefS16 = VEncodePointer(VLookupConstant("_V40VU8VectorRefS16", &_VW_V40VU8VectorRefS16), VPOINTER_CLOSURE);
  _V40VU8VectorSetU8 = VEncodePointer(VLookupConstant("_V40VU8VectorSetU8", &_VW_V40VU8VectorSetU8), VPOINTER_CLOSURE);
  _V40VU8VectorRefU8 = VEncodePointer(VLookupConstant("_V40VU8VectorRefU8", &_VW_V40VU8VectorRefU8), VPOINTER_CLOSURE);
  _V40VU8VectorSetS8 = VEncodePointer(VLookupConstant("_V40VU8VectorSetS8", &_VW_V40VU8VectorSetS8), VPOINTER_CLOSURE);
  _V40VU8VectorRefS8 = VEncodePointer(VLookupConstant("_V40VU8VectorRefS8", &_VW_V40VU8VectorRefS8), VPOINTER_CLOSURE);
  _V40VU8VectorSetBool = VEncodePointer(VLookupConstant("_V40VU8VectorSetBool", &_VW_V40VU8VectorSetBool), VPOINTER_CLOSURE);
  _V40VU8VectorRefBool = VEncodePointer(VLookupConstant("_V40VU8VectorRefBool", &_VW_V40VU8VectorRefBool), VPOINTER_CLOSURE);
  _V40VRawVectorCopy = VEncodePointer(VLookupConstant("_V40VRawVectorCopy", &_VW_V40VRawVectorCopy), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
