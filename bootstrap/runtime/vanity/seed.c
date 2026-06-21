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

VEnv * _V60_V0vanity_V0seed;

static VPair _V10_Dpair_D379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0setter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0setter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "setter" };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dset__setter_B_D33;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dset__setter_B_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.set-setter!.33" };
VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
static VPair _V10_Dpair_D372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0mutator;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0mutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "mutator" };
VWEAK VWORD _V0getter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getter" };
static VPair _V10_Dpair_D366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dset__mutator_B_D36;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dset__mutator_B_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.set-mutator!.36" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
static VPair _V10_Dpair_D365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pair;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "pair" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
static VPair _V10_Dpair_D356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0proc;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0proc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "proc" };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
VWEAK VWORD _V0vec;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0vec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "vec" };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V10vcore_Dpromise_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dpromise_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.promise\?" };
VWEAK VWORD _V0promise__box;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0promise__box = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "promise-box" };
static VPair _V10_Dpair_D343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set__mutator_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0set__mutator_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "set-mutator!" };
static VPair _V10_Dpair_D337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set__setter_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0set__setter_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "set-setter!" };
static VPair _V10_Dpair_D328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D327 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "set!: procedure doesn't have a setter: " };
static VPair _V10_Dpair_D326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "set!: procedure doesn't have a mutator: " };
static VPair _V10_Dpair_D320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0err;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0err = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "err" };
static VPair _V10_Dpair_D314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0func;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0func = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "func" };
static VPair _V10_Dpair_D306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
static VPair _V10_Dpair_D303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_D_Dvcore_Dpromise_Q_D2;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10_D_Dvcore_Dpromise_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##..vcore.promise\?.2" };
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kind__val;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "kind-val" };
static VPair _V10_Dpair_D293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D275 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rec;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0rec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "rec" };
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lazy;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lazy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lazy" };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0thunk;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0thunk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "thunk" };
static VPair _V10_Dpair_D253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Ddelay__force__impl;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ddelay__force__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.delay-force-impl" };
static VPair _V10_Dpair_D250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dmake__promise;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dmake__promise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.make-promise" };
static VPair _V10_Dpair_D237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0promise_S;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0promise_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "promise*" };
VWEAK VWORD _V0eager;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0eager = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "eager" };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0content;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0content = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "content" };
static VPair _V10_Dpair_D200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0setter__table;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0setter__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "setter-table" };
VWEAK VWORD _V0_Dvcore_Dsetter;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0_Dvcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, ".vcore.setter" };
VWEAK VWORD _V0_Dvcore_Dset__setter_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0_Dvcore_Dset__setter_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, ".vcore.set-setter!" };
VWEAK VWORD _V0mutator__table;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mutator__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mutator-table" };
VWEAK VWORD _V0_Dvcore_Dmutator;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0_Dvcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, ".vcore.mutator" };
VWEAK VWORD _V0_Dvcore_Dset__mutator_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0_Dvcore_Dset__mutator_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, ".vcore.set-mutator!" };
VWEAK VWORD _V0promise__box_D1;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0promise__box_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "promise-box.1" };
VWEAK VWORD _V0_Dvcore_Dpromise_Q_D2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0_Dvcore_Dpromise_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, ".vcore.promise\?.2" };
VWEAK VWORD _V0_Dvcore_Dpromise_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0_Dvcore_Dpromise_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, ".vcore.promise\?" };
VWEAK VWORD _V0make__promise__impl;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0make__promise__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "make-promise-impl" };
VWEAK VWORD _V0get__promise__kind__val;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__promise__kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-promise-kind-val" };
VWEAK VWORD _V0set__promise__kind__val_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0set__promise__kind__val_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "set-promise-kind-val!" };
VWEAK VWORD _V0_Dvcore_Ddelay__force__impl;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0_Dvcore_Ddelay__force__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, ".vcore.delay-force-impl" };
VWEAK VWORD _V0_Dvcore_Dmake__promise;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0_Dvcore_Dmake__promise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, ".vcore.make-promise" };
VWEAK VWORD _V0_Dvcore_Dforce;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0_Dvcore_Dforce = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, ".vcore.force" };
static VPair _V10_Dpair_D182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0promise;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0promise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "promise" };
static VPair _V10_Dpair_D178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dforce;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dforce = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.force" };
VWEAK VWORD _V0seed;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0seed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "seed" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D175 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V10_Dset__setter_B_D33, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dset__mutator_B_D36, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dsetter, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmutator, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0make__promise__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0get__promise__kind__val, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmake__promise, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dforce, _var0, _var1);
static void _V0vanity_V0seed_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.51 1 0) (##string ##.string.175) (bruijn ##.%x.52 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D175.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0seed_V20_V0k1))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k1, self)))));
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed set-promise-kind-val!) #t (bruijn ##.set-promise-kind-val!.6 12 3) (bruijn ##.%k.57 4 0) (bruijn ##.promise*.20 7 0) (bruijn ##.content.21 6 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _V60_V0vanity_V0seed)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0seed_V0set__promise__kind__val_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.127) ((##vcore.cdr (bruijn ##.%x.59 1 0))) (##vcore.set-cdr! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9) (bruijn ##.content.21 6 0) (bruijn ##.%x.127 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k9, self)))),
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 10 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8) (bruijn ##.promise*.20 5 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.126) ((##vcore.car (bruijn ##.%x.61 1 0))) (##vcore.set-car! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7) (bruijn ##.content.21 4 0) (bruijn ##.%x.126 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k7, self)))),
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.125 1 2) (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 8 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6) (bruijn ##.promise*.20 3 0)) ((bruijn ##.%k.57 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed ##vcore.force) #t (bruijn ##..vcore.force.3 7 0) (bruijn ##.%k.54 6 0) (bruijn ##.promise.18 6 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10vcore_Dforce(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.123 ##.%x.124 ##.%p.125) ((##vcore.car (bruijn ##.content.21 1 0)) (##vcore.eqv? (bruijn ##.%x.123 0 0) 'eager) (##vcore.not (bruijn ##.%x.124 0 1))) ((close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0eager);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k10, self)))));
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 5 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4) (bruijn ##.promise.18 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.119 ##.%p.120) ((##vcore.car (bruijn ##.content.19 1 0)) (##vcore.eqv? (bruijn ##.%x.119 0 0) 'eager)) (if (bruijn ##.%p.120 0 1) (basic-block 1 1 (##.%r.121) ((##vcore.cdr (bruijn ##.content.19 2 0))) ((bruijn ##.%k.54 3 0) (bruijn ##.%r.121 0 0))) (basic-block 1 1 (##.%x.122) ((##vcore.cdr (bruijn ##.content.19 2 0))) ((bruijn ##.%x.122 0 0) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0eager);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, self)))));
    }
}
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 1 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2) (bruijn ##.promise.18 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.67 0 0) ((bruijn ##.%k.66 1 0) (bruijn ##.x.22 1 1)) (basic-block 1 1 (##.%x.128) ((##vcore.cons 'eager (bruijn ##.x.22 2 1))) (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.8 3 5) (bruijn ##.%k.66 2 0) (bruijn ##.%x.128 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eager,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmake__promise" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmake__promise, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##..vcore.promise?.9 1 6) (close _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11) (bruijn ##.x.22 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11, self)))),
      _var1);
}
void _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.129) ((##vcore.cons 'lazy (bruijn ##.thunk.23 1 1))) (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.8 2 5) (bruijn ##.%k.69 1 0) (bruijn ##.%x.129 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0lazy,
      statics->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.71 3 0) (bruijn ##.%x.73 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.72 0 0) (##vcore.record-set! (bruijn ##.%k.71 1 0) (bruijn ##.rec.24 1 1) 1 (bruijn ##.x.25 1 2)) (basic-block 2 2 (##.%x.130 ##.%x.131) ((##vcore.cons (bruijn ##.rec.24 2 1) '()) (##vcore.cons 'set-promise-kind-val! (bruijn ##.%x.130 0 0))) (##vcore.record (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13) #f 'error (##string ##.string.275) (bruijn ##.%x.131 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__promise__kind__val_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D275.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity seed ##..vcore.promise?.2) #t (bruijn ##..vcore.promise?.2.10 1 7) (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12) (bruijn ##.rec.24 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.76 3 0) (bruijn ##.%x.78 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.77 0 0) (basic-block 1 1 (##.%r.132) ((##vcore.record-ref (bruijn ##.rec.26 2 1) 1)) ((bruijn ##.%k.76 2 0) (bruijn ##.%r.132 0 0))) (basic-block 2 2 (##.%x.133 ##.%x.134) ((##vcore.cons (bruijn ##.rec.26 2 1) '()) (##vcore.cons 'get-promise-kind-val (bruijn ##.%x.133 0 0))) (##vcore.record (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15) #f 'error (##string ##.string.275) (bruijn ##.%x.134 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__promise__kind__val,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D275.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity seed ##..vcore.promise?.2) #t (bruijn ##..vcore.promise?.2.10 1 7) (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14) (bruijn ##.rec.26 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0make__promise__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0make__promise__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0make__promise__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.81 0 0) (bruijn ##.promise-box.1.11 1 8) (bruijn ##.kind-val.27 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[8],
      _var1);
}
void _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.135) ((##vcore.record? (bruijn ##.x.28 1 1))) (if (bruijn ##.%p.135 0 0) (basic-block 2 2 (##.%x.136 ##.%r.137) ((##vcore.record-ref (bruijn ##.x.28 2 1) 0) (##vcore.eqv? (bruijn ##.%x.136 0 0) (bruijn ##.promise-box.1.11 3 8))) ((bruijn ##.%k.82 2 0) (bruijn ##.%r.137 0 1))) ((bruijn ##.%k.82 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[8]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%r.138 ##.%r.139 ##.%k.140) ((##vcore.display-word (##string ##.string.321) (bruijn ##.err.30 1 0)) (##vcore.write (bruijn ##.func.29 3 1) (bruijn ##.err.30 1 0)) (##vcore.newline (bruijn ##.err.30 1 0))) (##vcore.abort (bruijn ##.%k.86 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D321.sym, VPOINTER_OTHER),
      statics->vars[0]);
    self->vars[1] = _VBasic_VWrite2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    self->vars[2] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.%k.85 0 0) (bruijn ##.mutator-table.14 1 11) (bruijn ##.func.29 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[11],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%r.141 ##.%r.142 ##.%k.143) ((##vcore.display-word (##string ##.string.327) (bruijn ##.err.32 1 0)) (##vcore.write (bruijn ##.func.31 3 1) (bruijn ##.err.32 1 0)) (##vcore.newline (bruijn ##.err.32 1 0))) (##vcore.abort (bruijn ##.%k.88 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D327.sym, VPOINTER_OTHER),
      statics->vars[0]);
    self->vars[1] = _VBasic_VWrite2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    self->vars[2] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.%k.87 0 0) (bruijn ##.setter-table.17 1 14) (bruijn ##.func.31 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[14],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5, self)))));
}
static void _V0vanity_V0seed_V20_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 12 12 (##.%x.145 ##.%x.146 ##.%x.147 ##.%x.148 ##.%x.149 ##.%x.150 ##.%x.151 ##.%x.152 ##.%x.153 ##.%x.154 ##.%x.155 ##.%r.156) ((##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.16 6 13)) (##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.13 6 10)) (##vcore.cons '##vcore.delay-force-impl (bruijn ##..vcore.delay-force-impl.5 6 2)) (##vcore.cons '##vcore.make-promise (bruijn ##..vcore.make-promise.4 6 1)) (##vcore.cons '##vcore.promise? (bruijn ##..vcore.promise?.9 6 6)) (##vcore.cons '##vcore.force (bruijn ##..vcore.force.3 6 0)) (##vcore.cons (bruijn ##.%x.150 0 5) '()) (##vcore.cons (bruijn ##.%x.149 0 4) (bruijn ##.%x.151 0 6)) (##vcore.cons (bruijn ##.%x.148 0 3) (bruijn ##.%x.152 0 7)) (##vcore.cons (bruijn ##.%x.147 0 2) (bruijn ##.%x.153 0 8)) (##vcore.cons (bruijn ##.%x.146 0 1) (bruijn ##.%x.154 0 9)) (##vcore.cons (bruijn ##.%x.145 0 0) (bruijn ##.%x.155 0 10))) ((bruijn ##.%k.53 7 0) (bruijn ##.%r.156 0 11)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dsetter,
      VGetArg(statics, 6-1, 13));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dmutator,
      VGetArg(statics, 6-1, 10));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddelay__force__impl,
      VGetArg(statics, 6-1, 2));
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dmake__promise,
      VGetArg(statics, 6-1, 1));
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpromise_Q,
      VGetArg(statics, 6-1, 6));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dforce,
      VGetArg(statics, 6-1, 0));
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[10]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[11]);
    }
}
static void _V0vanity_V0seed_V20_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k35) (bruijn ##..vcore.promise?.9 5 6) (bruijn ##..vcore.promise?.2.10 5 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k35, self)))),
      VEncodeInt(5l), VEncodeInt(6l),
      VGetArg(statics, 5-1, 7)
    );
}
static void _V0vanity_V0seed_V20_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.144) ((##vcore.cons 'promise-box '(##pair ##.pair.294))) (set! (close _V0vanity_V0seed_V20_V0k34) (bruijn ##.promise-box.1.11 5 8) (bruijn ##.%x.144 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0promise__box,
      VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k34, self)))),
      VEncodeInt(5l), VEncodeInt(8l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0seed_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k33) (bruijn ##..vcore.set-mutator!.12 4 9) (bruijn ##.set-mutator!.36 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k33, self)))),
      VEncodeInt(4l), VEncodeInt(9l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.158) ((##vcore.string-set! (bruijn ##.vec.44 3 1) (bruijn ##.i.45 3 2) (bruijn ##.%x.104 1 0))) ((bruijn ##.%k.103 3 0) (bruijn ##.%r.158 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringSet2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda8, got ~D~N"
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
  // (basic-block 1 1 (##.%x.157) ((##vcore.string-ref (bruijn ##.vec.44 1 1) (bruijn ##.i.45 1 2))) ((bruijn ##.proc.46 1 3) (close _V0vanity_V0seed_V20_V0k36) (bruijn ##.%x.157 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k36, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k32) (##intrinsic ##vcore.string-ref) (close _V0vanity_V0seed_V20_V0lambda8))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k32, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda8, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.vector-set! (bruijn ##.%k.106 2 0) (bruijn ##.vec.41 2 1) (bruijn ##.i.42 2 2) (bruijn ##.%x.107 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda9, got ~D~N"
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
  // (basic-block 1 1 (##.%x.159) ((##vcore.vector-ref (bruijn ##.vec.41 1 1) (bruijn ##.i.42 1 2))) ((bruijn ##.proc.43 1 3) (close _V0vanity_V0seed_V20_V0k37) (bruijn ##.%x.159 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k37, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k31) (##intrinsic ##vcore.vector-ref) (close _V0vanity_V0seed_V20_V0lambda9))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k31, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda9, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.109 2 0) (bruijn ##.pair.39 2 1) (bruijn ##.%x.110 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.160) ((##vcore.cdr (bruijn ##.pair.39 1 1))) ((bruijn ##.proc.40 1 2) (close _V0vanity_V0seed_V20_V0k38) (bruijn ##.%x.160 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k38, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k30) (##intrinsic ##vcore.cdr) (close _V0vanity_V0seed_V20_V0lambda10))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k30, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda10, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.%k.112 2 0) (bruijn ##.pair.37 2 1) (bruijn ##.%x.113 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.161) ((##vcore.car (bruijn ##.pair.37 1 1))) ((bruijn ##.proc.38 1 2) (close _V0vanity_V0seed_V20_V0k39) (bruijn ##.%x.161 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k39, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k29) (##intrinsic ##vcore.car) (close _V0vanity_V0seed_V20_V0lambda11))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k29, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda11, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda7" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.set-setter!.15 4 12) (close _V0vanity_V0seed_V20_V0k28) (bruijn ##..vcore.mutator.13 4 10) (bruijn ##.set-mutator!.36 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k28, self)))),
      statics->up->up->up->vars[10],
      _var0);
}
void _V50_V10_Dset__mutator_B_D36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dset__mutator_B_D36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__mutator_B_D36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.%k.102 0 0) (bruijn ##.mutator-table.14 4 11) (bruijn ##.getter.47 0 1) (bruijn ##.mutator.48 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->up->up->vars[11],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda7) (close "_V50_V10_Dset__mutator_B_D36"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__mutator_B_D36, self)))));
}
static void _V0vanity_V0seed_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k27) (bruijn ##.mutator-table.14 3 11) (bruijn ##.%x.115 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k27, self)))),
      VEncodeInt(3l), VEncodeInt(11l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k26) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k26, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
static void _V0vanity_V0seed_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k25) (bruijn ##..vcore.set-setter!.15 2 12) (bruijn ##.set-setter!.33 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k25, self)))),
      VEncodeInt(2l), VEncodeInt(12l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k24) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k24, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dstring__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k23) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k23, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dvector__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k22) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-cdr!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k22, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__cdr_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k21) (##intrinsic ##vcore.car) (##intrinsic ##vcore.set-car!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k21, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__car_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda6" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k20) (bruijn ##..vcore.setter.16 2 13) (bruijn ##.set-setter!.33 0 0))
  {
    VClosure * _closure = VDecodeClosure(_var0);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k20, self))));
    VWORD _arg1 = 
      statics->up->vars[13];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dset__setter_B_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dset__setter_B_D33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__setter_B_D33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.%k.117 0 0) (bruijn ##.setter-table.17 2 14) (bruijn ##.getter.34 0 1) (bruijn ##.setter.35 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->vars[14],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda6) (close "_V50_V10_Dset__setter_B_D33"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__setter_B_D33, self)))));
}
static void _V0vanity_V0seed_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k19) (bruijn ##.setter-table.17 1 14) (bruijn ##.%x.118 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k19, self)))),
      VEncodeInt(1l), VEncodeInt(14l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity seed) 15 ((close "_V50_V0vanity_V0seed_V10vcore_Dforce" (vanity seed)) (close "_V50_V0vanity_V0seed_V10vcore_Dmake__promise" (vanity seed)) (close "_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl" (vanity seed)) (close "_V50_V0vanity_V0seed_V0set__promise__kind__val_B" (vanity seed)) (close "_V50_V0vanity_V0seed_V0get__promise__kind__val" (vanity seed)) (close "_V50_V0vanity_V0seed_V0make__promise__impl" (vanity seed)) #f (close "_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2" (vanity seed)) #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dmutator" (vanity seed)) #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dsetter" (vanity seed)) #f) (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k18) (##intrinsic ##vcore.eq?) #f 32))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[15]; } container;
    self = &container.self;
    _V60_V0vanity_V0seed = self;
    VInitEnv(self, 15, 15, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, _V60_V0vanity_V0seed))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise, _V60_V0vanity_V0seed))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, _V60_V0vanity_V0seed))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _V60_V0vanity_V0seed))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = VEncodeBool(false);
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator, _V60_V0vanity_V0seed))));
    self->vars[11] = VEncodeBool(false);
    self->vars[12] = VEncodeBool(false);
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter, _V60_V0vanity_V0seed))));
    self->vars[14] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0seed_V20", &_V60_V0vanity_V0seed);
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k18, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
    }
}
static void _V0vanity_V0seed_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.50 0 0) (close _V0vanity_V0seed_V20_V0lambda2) (close _V0vanity_V0seed_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0setter = VEncodePointer(VInternSymbol(751384157, &_VW_V0setter.sym), VPOINTER_OTHER);
  _V10_Dset__setter_B_D33 = VEncodePointer(VInternSymbol(2134719746, &_VW_V10_Dset__setter_B_D33.sym), VPOINTER_OTHER);
  _V0mutator = VEncodePointer(VInternSymbol(-650056220, &_VW_V0mutator.sym), VPOINTER_OTHER);
  _V0getter = VEncodePointer(VInternSymbol(1875051061, &_VW_V0getter.sym), VPOINTER_OTHER);
  _V10_Dset__mutator_B_D36 = VEncodePointer(VInternSymbol(-636589203, &_VW_V10_Dset__mutator_B_D36.sym), VPOINTER_OTHER);
  _V0pair = VEncodePointer(VInternSymbol(-766571036, &_VW_V0pair.sym), VPOINTER_OTHER);
  _V0proc = VEncodePointer(VInternSymbol(1454542134, &_VW_V0proc.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V0vec = VEncodePointer(VInternSymbol(1875852456, &_VW_V0vec.sym), VPOINTER_OTHER);
  _V10vcore_Dpromise_Q = VEncodePointer(VInternSymbol(1895122411, &_VW_V10vcore_Dpromise_Q.sym), VPOINTER_OTHER);
  _V0promise__box = VEncodePointer(VInternSymbol(-1997416820, &_VW_V0promise__box.sym), VPOINTER_OTHER);
  _V0set__mutator_B = VEncodePointer(VInternSymbol(1349768548, &_VW_V0set__mutator_B.sym), VPOINTER_OTHER);
  _V0set__setter_B = VEncodePointer(VInternSymbol(-762452450, &_VW_V0set__setter_B.sym), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VInternSymbol(2136925547, &_VW_V10vcore_Dsetter.sym), VPOINTER_OTHER);
  _V0err = VEncodePointer(VInternSymbol(-494507917, &_VW_V0err.sym), VPOINTER_OTHER);
  _V0func = VEncodePointer(VInternSymbol(1210668626, &_VW_V0func.sym), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VInternSymbol(-315800619, &_VW_V10vcore_Dmutator.sym), VPOINTER_OTHER);
  _V10_D_Dvcore_Dpromise_Q_D2 = VEncodePointer(VInternSymbol(2143768558, &_VW_V10_D_Dvcore_Dpromise_Q_D2.sym), VPOINTER_OTHER);
  _V0kind__val = VEncodePointer(VInternSymbol(-1820418493, &_VW_V0kind__val.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0rec = VEncodePointer(VInternSymbol(-370118234, &_VW_V0rec.sym), VPOINTER_OTHER);
  _V0lazy = VEncodePointer(VInternSymbol(2123886502, &_VW_V0lazy.sym), VPOINTER_OTHER);
  _V0thunk = VEncodePointer(VInternSymbol(447097569, &_VW_V0thunk.sym), VPOINTER_OTHER);
  _V10vcore_Ddelay__force__impl = VEncodePointer(VInternSymbol(-898912511, &_VW_V10vcore_Ddelay__force__impl.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__promise = VEncodePointer(VInternSymbol(-1357658304, &_VW_V10vcore_Dmake__promise.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0promise_S = VEncodePointer(VInternSymbol(-1764134356, &_VW_V0promise_S.sym), VPOINTER_OTHER);
  _V0eager = VEncodePointer(VInternSymbol(468685020, &_VW_V0eager.sym), VPOINTER_OTHER);
  _V0content = VEncodePointer(VInternSymbol(835037692, &_VW_V0content.sym), VPOINTER_OTHER);
  _V0setter__table = VEncodePointer(VInternSymbol(-847309487, &_VW_V0setter__table.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dsetter = VEncodePointer(VInternSymbol(-1976245314, &_VW_V0_Dvcore_Dsetter.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dset__setter_B = VEncodePointer(VInternSymbol(2132449561, &_VW_V0_Dvcore_Dset__setter_B.sym), VPOINTER_OTHER);
  _V0mutator__table = VEncodePointer(VInternSymbol(-1333651500, &_VW_V0mutator__table.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dmutator = VEncodePointer(VInternSymbol(589854643, &_VW_V0_Dvcore_Dmutator.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dset__mutator_B = VEncodePointer(VInternSymbol(176825948, &_VW_V0_Dvcore_Dset__mutator_B.sym), VPOINTER_OTHER);
  _V0promise__box_D1 = VEncodePointer(VInternSymbol(-776190186, &_VW_V0promise__box_D1.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dpromise_Q_D2 = VEncodePointer(VInternSymbol(1106054990, &_VW_V0_Dvcore_Dpromise_Q_D2.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dpromise_Q = VEncodePointer(VInternSymbol(-840120968, &_VW_V0_Dvcore_Dpromise_Q.sym), VPOINTER_OTHER);
  _V0make__promise__impl = VEncodePointer(VInternSymbol(149741023, &_VW_V0make__promise__impl.sym), VPOINTER_OTHER);
  _V0get__promise__kind__val = VEncodePointer(VInternSymbol(-1805015442, &_VW_V0get__promise__kind__val.sym), VPOINTER_OTHER);
  _V0set__promise__kind__val_B = VEncodePointer(VInternSymbol(234371586, &_VW_V0set__promise__kind__val_B.sym), VPOINTER_OTHER);
  _V0_Dvcore_Ddelay__force__impl = VEncodePointer(VInternSymbol(-327193032, &_VW_V0_Dvcore_Ddelay__force__impl.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dmake__promise = VEncodePointer(VInternSymbol(798835902, &_VW_V0_Dvcore_Dmake__promise.sym), VPOINTER_OTHER);
  _V0_Dvcore_Dforce = VEncodePointer(VInternSymbol(1916530099, &_VW_V0_Dvcore_Dforce.sym), VPOINTER_OTHER);
  _V0promise = VEncodePointer(VInternSymbol(2067745110, &_VW_V0promise.sym), VPOINTER_OTHER);
  _V10vcore_Dforce = VEncodePointer(VInternSymbol(787577650, &_VW_V10vcore_Dforce.sym), VPOINTER_OTHER);
  _V0seed = VEncodePointer(VInternSymbol(-1873337552, &_VW_V0seed.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D379.first = VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR);
  _V10_Dpair_D379.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D378.first = VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR);
  _V10_Dpair_D378.rest = VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR);
  _V10_Dpair_D377.first = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D377.rest = VNULL;
  _V10_Dpair_D376.first = _V0_Mk;
  _V10_Dpair_D376.rest = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D375.first = _V0getter;
  _V10_Dpair_D375.rest = VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR);
  _V10_Dpair_D374.first = _V0setter;
  _V10_Dpair_D374.rest = VNULL;
  _V10_Dpair_D373.first = _V10_Dset__setter_B_D33;
  _V10_Dpair_D373.rest = VNULL;
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D372.first = VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR);
  _V10_Dpair_D372.rest = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D371.first = VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR);
  _V10_Dpair_D371.rest = VEncodePointer(&_V10_Dpair_D370, VPOINTER_PAIR);
  _V10_Dpair_D370.first = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D370.rest = VNULL;
  _V10_Dpair_D369.first = _V0_Mk;
  _V10_Dpair_D369.rest = VEncodePointer(&_V10_Dpair_D368, VPOINTER_PAIR);
  _V10_Dpair_D368.first = _V0getter;
  _V10_Dpair_D368.rest = VEncodePointer(&_V10_Dpair_D367, VPOINTER_PAIR);
  _V10_Dpair_D367.first = _V0mutator;
  _V10_Dpair_D367.rest = VNULL;
  _V10_Dpair_D366.first = _V10_Dset__mutator_B_D36;
  _V10_Dpair_D366.rest = VNULL;
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D364.first = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D364.rest = VNULL;
  _V10_Dpair_D363.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D363.rest = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D362.first = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D362.rest = VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR);
  _V10_Dpair_D361.first = VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR);
  _V10_Dpair_D361.rest = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D360.first = VEncodeBool(false);
  _V10_Dpair_D360.rest = VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR);
  _V10_Dpair_D359.first = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D359.rest = VNULL;
  _V10_Dpair_D358.first = _V0_Mk;
  _V10_Dpair_D358.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D357.first = _V0pair;
  _V10_Dpair_D357.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V10_Dpair_D356.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D355.first = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D355.rest = VNULL;
  _V10_Dpair_D354.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D354.rest = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D353.first = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR);
  _V10_Dpair_D352.first = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D352.rest = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D351.first = VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR);
  _V10_Dpair_D351.rest = VNULL;
  _V10_Dpair_D350.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D350.rest = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D349.first = VEncodeBool(false);
  _V10_Dpair_D349.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D348.first = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D348.rest = VNULL;
  _V10_Dpair_D347.first = _V0_Mk;
  _V10_Dpair_D347.rest = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D346.first = _V0vec;
  _V10_Dpair_D346.rest = VEncodePointer(&_V10_Dpair_D345, VPOINTER_PAIR);
  _V10_Dpair_D345.first = _V0i;
  _V10_Dpair_D345.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V10_Dpair_D344.first = _V0proc;
  _V10_Dpair_D344.rest = VNULL;
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V10_Dpair_D343.first = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D343.rest = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D342.first = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D342.rest = VNULL;
  _V10_Dpair_D341.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D341.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D340.first = VEncodeBool(false);
  _V10_Dpair_D340.rest = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D339.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D339.rest = VNULL;
  _V10_Dpair_D338.first = _V0set__mutator_B;
  _V10_Dpair_D338.rest = VNULL;
  _V10_Dpair_D337.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D337.rest = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D336.first = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D336.rest = VNULL;
  _V10_Dpair_D335.first = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D335.rest = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D334.first = VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR);
  _V10_Dpair_D334.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D333.first = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D333.rest = VNULL;
  _V10_Dpair_D332.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D332.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D331.first = VEncodeBool(false);
  _V10_Dpair_D331.rest = VEncodePointer(&_V10_Dpair_D330, VPOINTER_PAIR);
  _V10_Dpair_D330.first = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D330.rest = VNULL;
  _V10_Dpair_D329.first = _V0set__setter_B;
  _V10_Dpair_D329.rest = VNULL;
  _V10_Dpair_D328.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D328.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D325.first = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D325.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D324.first = _V0vanity;
  _V10_Dpair_D324.rest = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D323.first = _V0seed;
  _V10_Dpair_D323.rest = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D322.first = _V10vcore_Dsetter;
  _V10_Dpair_D322.rest = VNULL;
  _V10_Dpair_D320.first = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D320.rest = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D319.first = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D319.rest = VNULL;
  _V10_Dpair_D318.first = VEncodePointer(&_V10_Dpair_D162, VPOINTER_PAIR);
  _V10_Dpair_D318.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D317.first = VEncodeBool(false);
  _V10_Dpair_D317.rest = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D316.first = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D316.rest = VNULL;
  _V10_Dpair_D315.first = _V0err;
  _V10_Dpair_D315.rest = VNULL;
  _V10_Dpair_D314.first = VEncodePointer(&_V10_Dpair_D164, VPOINTER_PAIR);
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR);
  _V10_Dpair_D313.first = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D313.rest = VNULL;
  _V10_Dpair_D312.first = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D312.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D311.first = VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR);
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D309.first = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D309.rest = VNULL;
  _V10_Dpair_D308.first = _V0_Mk;
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D307.first = _V0func;
  _V10_Dpair_D307.rest = VNULL;
  _V10_Dpair_D306.first = _V0vanity;
  _V10_Dpair_D306.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D305.first = _V0seed;
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D304.first = _V10vcore_Dmutator;
  _V10_Dpair_D304.rest = VNULL;
  _V10_Dpair_D303.first = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D303.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D302.first = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D301.first = _V0vanity;
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = _V0seed;
  _V10_Dpair_D300.rest = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D299.first = _V10_D_Dvcore_Dpromise_Q_D2;
  _V10_Dpair_D299.rest = VNULL;
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D297.first = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D297.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VNULL;
  _V10_Dpair_D295.first = _V0_Mk;
  _V10_Dpair_D295.rest = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D294.first = _V0kind__val;
  _V10_Dpair_D294.rest = VNULL;
  _V10_Dpair_D293.first = _V0vanity;
  _V10_Dpair_D293.rest = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D292.first = _V0seed;
  _V10_Dpair_D292.rest = VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR);
  _V10_Dpair_D291.first = _V0make__promise__impl;
  _V10_Dpair_D291.rest = VNULL;
  _V10_Dpair_D290.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D290.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D289.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D289.rest = VNULL;
  _V10_Dpair_D288.first = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D287.first = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D287.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D286.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D286.rest = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D285.first = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D285.rest = VNULL;
  _V10_Dpair_D284.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D284.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D283.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D283.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D282.first = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D282.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D281.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D281.rest = VNULL;
  _V10_Dpair_D280.first = _V0_Mk;
  _V10_Dpair_D280.rest = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D279.first = _V0rec;
  _V10_Dpair_D279.rest = VNULL;
  _V10_Dpair_D278.first = _V0vanity;
  _V10_Dpair_D278.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D277.first = _V0seed;
  _V10_Dpair_D277.rest = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D276.first = _V0get__promise__kind__val;
  _V10_Dpair_D276.rest = VNULL;
  _V10_Dpair_D274.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D274.rest = VEncodePointer(&_V10_Dpair_D273, VPOINTER_PAIR);
  _V10_Dpair_D273.first = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D273.rest = VNULL;
  _V10_Dpair_D272.first = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D272.rest = VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR);
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D270.first = _V0_Mx;
  _V10_Dpair_D270.rest = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D269.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D269.rest = VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR);
  _V10_Dpair_D268.first = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D268.rest = VNULL;
  _V10_Dpair_D267.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D267.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D266.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D266.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D265.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D265.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D264.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D264.rest = VNULL;
  _V10_Dpair_D263.first = _V0_Mk;
  _V10_Dpair_D263.rest = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D262.first = _V0rec;
  _V10_Dpair_D262.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D261.first = _V0vanity;
  _V10_Dpair_D261.rest = VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR);
  _V10_Dpair_D260.first = _V0seed;
  _V10_Dpair_D260.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D259.first = _V0set__promise__kind__val_B;
  _V10_Dpair_D259.rest = VNULL;
  _V10_Dpair_D258.first = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D257.first = VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR);
  _V10_Dpair_D257.rest = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D256.first = VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR);
  _V10_Dpair_D256.rest = VNULL;
  _V10_Dpair_D255.first = _V0_Mk;
  _V10_Dpair_D255.rest = VEncodePointer(&_V10_Dpair_D254, VPOINTER_PAIR);
  _V10_Dpair_D254.first = _V0thunk;
  _V10_Dpair_D254.rest = VNULL;
  _V10_Dpair_D253.first = _V0vanity;
  _V10_Dpair_D253.rest = VEncodePointer(&_V10_Dpair_D252, VPOINTER_PAIR);
  _V10_Dpair_D252.first = _V0seed;
  _V10_Dpair_D252.rest = VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR);
  _V10_Dpair_D251.first = _V10vcore_Ddelay__force__impl;
  _V10_Dpair_D251.rest = VNULL;
  _V10_Dpair_D250.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D250.rest = VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR);
  _V10_Dpair_D249.first = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D249.rest = VNULL;
  _V10_Dpair_D248.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D248.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D247.first = VEncodeBool(false);
  _V10_Dpair_D247.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D246.first = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D246.rest = VNULL;
  _V10_Dpair_D245.first = VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR);
  _V10_Dpair_D245.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D244.first = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D244.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D243.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D243.rest = VNULL;
  _V10_Dpair_D242.first = _V0_Mk;
  _V10_Dpair_D242.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D241.first = _V0x;
  _V10_Dpair_D241.rest = VNULL;
  _V10_Dpair_D240.first = _V0vanity;
  _V10_Dpair_D240.rest = VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR);
  _V10_Dpair_D239.first = _V0seed;
  _V10_Dpair_D239.rest = VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR);
  _V10_Dpair_D238.first = _V10vcore_Dmake__promise;
  _V10_Dpair_D238.rest = VNULL;
  _V10_Dpair_D237.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D237.rest = VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR);
  _V10_Dpair_D236.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D236.rest = VNULL;
  _V10_Dpair_D235.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D235.rest = VEncodePointer(&_V10_Dpair_D234, VPOINTER_PAIR);
  _V10_Dpair_D234.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D234.rest = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D233.first = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D233.rest = VEncodePointer(&_V10_Dpair_D232, VPOINTER_PAIR);
  _V10_Dpair_D232.first = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D232.rest = VNULL;
  _V10_Dpair_D231.first = _V0unquote;
  _V10_Dpair_D231.rest = VEncodePointer(&_V10_Dpair_D230, VPOINTER_PAIR);
  _V10_Dpair_D230.first = _V0unmangled__env;
  _V10_Dpair_D230.rest = VNULL;
  _V10_Dpair_D229.first = VEncodeBool(false);
  _V10_Dpair_D229.rest = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D228.first = _V0_U;
  _V10_Dpair_D228.rest = VNULL;
  _V10_Dpair_D227.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D227.rest = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D226.first = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D226.rest = VNULL;
  _V10_Dpair_D225.first = VEncodePointer(&_V10_Dpair_D162, VPOINTER_PAIR);
  _V10_Dpair_D225.rest = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D224.first = VEncodePointer(&_V10_Dpair_D164, VPOINTER_PAIR);
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dpair_D223, VPOINTER_PAIR);
  _V10_Dpair_D223.first = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D223.rest = VNULL;
  _V10_Dpair_D222.first = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR);
  _V10_Dpair_D221.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D221.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D220.first = _V0_Mx;
  _V10_Dpair_D220.rest = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D219.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D219.rest = VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR);
  _V10_Dpair_D218.first = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D218.rest = VNULL;
  _V10_Dpair_D217.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D217.rest = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D216.first = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D216.rest = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D215.first = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D215.rest = VNULL;
  _V10_Dpair_D214.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D214.rest = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D213.first = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D213.rest = VEncodePointer(&_V10_Dpair_D212, VPOINTER_PAIR);
  _V10_Dpair_D212.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D212.rest = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D211.first = _V0_Mx;
  _V10_Dpair_D211.rest = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D210.first = _V0_Mp;
  _V10_Dpair_D210.rest = VNULL;
  _V10_Dpair_D209.first = VEncodeBool(false);
  _V10_Dpair_D209.rest = VEncodePointer(&_V10_Dpair_D208, VPOINTER_PAIR);
  _V10_Dpair_D208.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D208.rest = VNULL;
  _V10_Dpair_D207.first = _V0promise_S;
  _V10_Dpair_D207.rest = VNULL;
  _V10_Dpair_D206.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D206.rest = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D205.first = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D205.rest = VNULL;
  _V10_Dpair_D204.first = VEncodePointer(&_V10_Dpair_D180, VPOINTER_PAIR);
  _V10_Dpair_D204.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D203.first = VEncodeBool(false);
  _V10_Dpair_D203.rest = VEncodePointer(&_V10_Dpair_D202, VPOINTER_PAIR);
  _V10_Dpair_D202.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D202.rest = VNULL;
  _V10_Dpair_D201.first = _V0content;
  _V10_Dpair_D201.rest = VNULL;
  _V10_Dpair_D200.first = VEncodePointer(&_V10_Dpair_D182, VPOINTER_PAIR);
  _V10_Dpair_D200.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D199.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D199.rest = VNULL;
  _V10_Dpair_D198.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D198.rest = VEncodePointer(&_V10_Dpair_D172, VPOINTER_PAIR);
  _V10_Dpair_D197.first = _V0_Dvcore_Dforce;
  _V10_Dpair_D197.rest = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D196.first = _V0_Dvcore_Dmake__promise;
  _V10_Dpair_D196.rest = VEncodePointer(&_V10_Dpair_D195, VPOINTER_PAIR);
  _V10_Dpair_D195.first = _V0_Dvcore_Ddelay__force__impl;
  _V10_Dpair_D195.rest = VEncodePointer(&_V10_Dpair_D194, VPOINTER_PAIR);
  _V10_Dpair_D194.first = _V0set__promise__kind__val_B;
  _V10_Dpair_D194.rest = VEncodePointer(&_V10_Dpair_D193, VPOINTER_PAIR);
  _V10_Dpair_D193.first = _V0get__promise__kind__val;
  _V10_Dpair_D193.rest = VEncodePointer(&_V10_Dpair_D192, VPOINTER_PAIR);
  _V10_Dpair_D192.first = _V0make__promise__impl;
  _V10_Dpair_D192.rest = VEncodePointer(&_V10_Dpair_D191, VPOINTER_PAIR);
  _V10_Dpair_D191.first = _V0_Dvcore_Dpromise_Q;
  _V10_Dpair_D191.rest = VEncodePointer(&_V10_Dpair_D190, VPOINTER_PAIR);
  _V10_Dpair_D190.first = _V0_Dvcore_Dpromise_Q_D2;
  _V10_Dpair_D190.rest = VEncodePointer(&_V10_Dpair_D189, VPOINTER_PAIR);
  _V10_Dpair_D189.first = _V0promise__box_D1;
  _V10_Dpair_D189.rest = VEncodePointer(&_V10_Dpair_D188, VPOINTER_PAIR);
  _V10_Dpair_D188.first = _V0_Dvcore_Dset__mutator_B;
  _V10_Dpair_D188.rest = VEncodePointer(&_V10_Dpair_D187, VPOINTER_PAIR);
  _V10_Dpair_D187.first = _V0_Dvcore_Dmutator;
  _V10_Dpair_D187.rest = VEncodePointer(&_V10_Dpair_D186, VPOINTER_PAIR);
  _V10_Dpair_D186.first = _V0mutator__table;
  _V10_Dpair_D186.rest = VEncodePointer(&_V10_Dpair_D185, VPOINTER_PAIR);
  _V10_Dpair_D185.first = _V0_Dvcore_Dset__setter_B;
  _V10_Dpair_D185.rest = VEncodePointer(&_V10_Dpair_D184, VPOINTER_PAIR);
  _V10_Dpair_D184.first = _V0_Dvcore_Dsetter;
  _V10_Dpair_D184.rest = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D183.first = _V0setter__table;
  _V10_Dpair_D183.rest = VNULL;
  _V10_Dpair_D182.first = VEncodePointer(&_V10_Dpair_D178, VPOINTER_PAIR);
  _V10_Dpair_D182.rest = VEncodePointer(&_V10_Dpair_D181, VPOINTER_PAIR);
  _V10_Dpair_D181.first = VEncodePointer(&_V10_Dpair_D180, VPOINTER_PAIR);
  _V10_Dpair_D181.rest = VNULL;
  _V10_Dpair_D180.first = _V0_Mk;
  _V10_Dpair_D180.rest = VEncodePointer(&_V10_Dpair_D179, VPOINTER_PAIR);
  _V10_Dpair_D179.first = _V0promise;
  _V10_Dpair_D179.rest = VNULL;
  _V10_Dpair_D178.first = _V0vanity;
  _V10_Dpair_D178.rest = VEncodePointer(&_V10_Dpair_D177, VPOINTER_PAIR);
  _V10_Dpair_D177.first = _V0seed;
  _V10_Dpair_D177.rest = VEncodePointer(&_V10_Dpair_D176, VPOINTER_PAIR);
  _V10_Dpair_D176.first = _V10vcore_Dforce;
  _V10_Dpair_D176.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D174.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D174.rest = VEncodePointer(&_V10_Dpair_D173, VPOINTER_PAIR);
  _V10_Dpair_D173.first = VEncodePointer(&_V10_Dpair_D172, VPOINTER_PAIR);
  _V10_Dpair_D173.rest = VNULL;
  _V10_Dpair_D172.first = VEncodePointer(&_V10_Dpair_D162, VPOINTER_PAIR);
  _V10_Dpair_D172.rest = VEncodePointer(&_V10_Dpair_D163, VPOINTER_PAIR);
  _V10_Dpair_D171.first = VEncodeBool(false);
  _V10_Dpair_D171.rest = VEncodePointer(&_V10_Dpair_D170, VPOINTER_PAIR);
  _V10_Dpair_D170.first = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D170.rest = VNULL;
  _V10_Dpair_D169.first = _V0_Mx;
  _V10_Dpair_D169.rest = VNULL;
  _V10_Dpair_D168.first = VEncodePointer(&_V10_Dpair_D164, VPOINTER_PAIR);
  _V10_Dpair_D168.rest = VEncodePointer(&_V10_Dpair_D167, VPOINTER_PAIR);
  _V10_Dpair_D167.first = VEncodePointer(&_V10_Dpair_D163, VPOINTER_PAIR);
  _V10_Dpair_D167.rest = VNULL;
  _V10_Dpair_D166.first = VEncodePointer(&_V10_Dpair_D164, VPOINTER_PAIR);
  _V10_Dpair_D166.rest = VEncodePointer(&_V10_Dpair_D165, VPOINTER_PAIR);
  _V10_Dpair_D165.first = VNULL;
  _V10_Dpair_D165.rest = VNULL;
  _V10_Dpair_D164.first = VEncodeBool(false);
  _V10_Dpair_D164.rest = VEncodePointer(&_V10_Dpair_D163, VPOINTER_PAIR);
  _V10_Dpair_D163.first = VEncodePointer(&_V10_Dpair_D162, VPOINTER_PAIR);
  _V10_Dpair_D163.rest = VNULL;
  _V10_Dpair_D162.first = _V0_Mk;
  _V10_Dpair_D162.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k1, VEncodePointer(&_V10_Dpair_D174, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D168, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k9, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k7, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k10, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, VEncodePointer(&_V10_Dpair_D200, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11, VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise, VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13, VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12, VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15, VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14, VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16, VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4, VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator, VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17, VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5, VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter, VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k35, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k34, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k33, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k32, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k36, VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda8, VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k31, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k37, VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda9, VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k30, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k38, VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda10, VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k29, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k39, VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda11, VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k28, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda7, VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dset__mutator_B_D36, VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k27, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k26, VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k25, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k24, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k23, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k22, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k21, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k20, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda6, VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V10_Dset__setter_B_D33, VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k19, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0k18, VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D168, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0seed_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D166, VPOINTER_PAIR));
}
