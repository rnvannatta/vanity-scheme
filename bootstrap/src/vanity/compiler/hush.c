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

V_DECLARE_FUNC_BASIC(VEqHash, _var0);
V_DECLARE_FUNC_BASIC(VHashCombine, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashBlob, _var0);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0hush;

static VPair _V10_Dpair_D366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0hush__table;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0hush__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "hush-table" };
VWEAK VWORD _V40VEqHash;
VWEAK VClosure _VW_V40VEqHash = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqHash, NULL };
VWEAK VWORD _V40VHashCombine;
VWEAK VClosure _VW_V40VHashCombine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashCombine, NULL };
VWEAK VWORD _V40VHashBlob;
VWEAK VClosure _VW_V40VHashBlob = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashBlob, NULL };
static VPair _V10_Dpair_D360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dhush__table_Q_D2;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Dhush__table_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.hush-table\?.2" };
static VPair _V10_Dpair_D354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hash__table;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "hash-table" };
static VPair _V10_Dpair_D349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D345 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static VPair _V10_Dpair_D344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rec;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0rec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "rec" };
static VPair _V10_Dpair_D330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_DARECORDDAWG;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_DARECORDDAWG = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.ARECORDDAWG" };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D49;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D49 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.49" };
VWEAK VWORD _V10_DAVECTORDAWG;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_DAVECTORDAWG = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.AVECTORDAWG" };
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0h;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0h = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "h" };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D46;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.46" };
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
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pair;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "pair" };
static VPair _V10_Dpair_D218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0chain;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0chain = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "chain" };
static VPair _V10_Dpair_D212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0real;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0real = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "real" };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hash;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "hash" };
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
VWEAK VWORD _V0eq__hash;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0eq__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "eq-hash" };
VWEAK VWORD _V0hash__combine;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0hash__combine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "hash-combine" };
VWEAK VWORD _V0hash__blob;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0hash__blob = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "hash-blob" };
VWEAK VWORD _V0hush__table_D1;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0hush__table_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "hush-table.1" };
VWEAK VWORD _V0hush__table_Q_D2;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0hush__table_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "hush-table\?.2" };
VWEAK VWORD _V0hush__table_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0hush__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "hush-table\?" };
VWEAK VWORD _V0make__hush__table__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0make__hush__table__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "make-hush-table-impl" };
VWEAK VWORD _V0hush__table_Dget;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hush__table_Dget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hush-table.get" };
VWEAK VWORD _V0make__hush__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hush__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hush-table" };
VWEAK VWORD _V0hush__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hush__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hush-table-set!" };
static VPair _V10_Dpair_D184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0thunk;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0thunk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "thunk" };
VWEAK VWORD _V0key;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0key = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "key" };
VWEAK VWORD _V0ht;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ht = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ht" };
static VPair _V10_Dpair_D178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hush__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hush__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hush-table-ref" };
VWEAK VWORD _V0hush;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0hush = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "hush" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D165 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "_V0vanity_V0compiler_V0hush_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0make__hush__table, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, _var0, _var1, _var2, _var3);
static void _V0vanity_V0compiler_V0hush_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hush_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.57 2 0) (##string ##.string.164) (bruijn ##.%x.58 0 0) 'assoc 'hash-table-ref 'hash-table-set! 'list 'make-hash-table)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 8,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D164.sym, VPOINTER_OTHER),
      _var0,
      _V0assoc,
      _V0hash__table__ref,
      _V0hash__table__set_B,
      _V0list,
      _V0make__hash__table);
}
static void _V0vanity_V0compiler_V0hush_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hush_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hush_V20_V0k2) (bruijn ##.%x.59 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hush_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hush_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hush_V20_V0k1) (##string ##.string.165))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D165.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.pair.37 0 0) (basic-block 1 1 (##.%r.114) ((##vcore.cdr (bruijn ##.pair.37 1 0))) ((bruijn ##.%k.61 5 0) (bruijn ##.%r.114 0 0))) ((bruijn ##.thunk.33 4 3) (bruijn ##.%k.61 4 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 1,
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.chain.36 0 0) ((bruijn ##.assoc.3 5 1) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6) (bruijn ##.key.32 3 2) (bruijn ##.chain.36 0 0)) ((bruijn ##.thunk.33 3 3) (bruijn ##.%k.61 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6, self)))),
      statics->up->up->vars[2],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 1,
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.62 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.4 4 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5) (bruijn ##.real.35 0 0) (bruijn ##.hash.34 1 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5, self)))),
      _var0,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hush hush-table.get) #t (bruijn ##.hush-table.get.23 2 4) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4) (bruijn ##.ht.31 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, got ~D~N"
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
  // (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 1 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3) (bruijn ##.key.32 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.pair.44 0 0) (##vcore.set-cdr! (bruijn ##.%k.63 4 0) (bruijn ##.pair.44 0 0) (bruijn ##.val.40 4 3)) (basic-block 3 3 (##.%x.115 ##.%x.116 ##.%x.117) ((##vcore.cons (bruijn ##.key.39 5 2) (bruijn ##.val.40 5 3)) (##vcore.cdr (bruijn ##.chain.43 2 0)) (##vcore.cons (bruijn ##.%x.115 0 0) (bruijn ##.%x.116 0 1))) (##vcore.set-cdr! (bruijn ##.%k.63 5 0) (bruijn ##.chain.43 2 0) (bruijn ##.%x.117 0 2))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.5 7 3) (bruijn ##.%k.63 5 0) (bruijn ##.real.42 3 0) (bruijn ##.hash.41 4 0) (bruijn ##.%x.67 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 4,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.chain.43 0 0) ((bruijn ##.assoc.3 5 1) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10) (bruijn ##.key.39 3 2) (bruijn ##.chain.43 0 0)) (basic-block 1 1 (##.%x.118) ((##vcore.cons (bruijn ##.key.39 4 2) (bruijn ##.val.40 4 3))) ((bruijn ##.list.6 6 4) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11) (bruijn ##.%x.118 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10, self)))),
      statics->up->up->vars[2],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.69 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.4 4 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9) (bruijn ##.real.42 0 0) (bruijn ##.hash.41 1 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9, self)))),
      _var0,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hush hush-table.get) #t (bruijn ##.hush-table.get.23 2 4) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8) (bruijn ##.ht.38 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, got ~D~N"
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
  // (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 1 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7) (bruijn ##.key.39 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-combine.29 6 10) (bruijn ##.%k.70 5 0) (bruijn ##.%x.72 2 0) (bruijn ##.%x.73 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.121) ((##vcore.cdr (bruijn ##.x.45 4 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 5 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13) (bruijn ##.%x.121 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.46) #f (bruijn ##.loop.46 5 0) (bruijn ##.%k.78 4 0) (bruijn ##.%x.126 2 0) (bruijn ##.%x.81 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-combine.29 9 10) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15) (bruijn ##.%x.82 0 0) (bruijn ##.h.48 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.124 ##.%p.125) ((##vcore.vector-length (bruijn ##.x.45 6 1)) (##vcore.= (bruijn ##.i.47 1 1) (bruijn ##.%x.124 0 0))) (if (bruijn ##.%p.125 0 1) ((bruijn ##.%k.78 1 0) (bruijn ##.h.48 1 2)) (basic-block 2 2 (##.%x.126 ##.%x.127) ((##vcore.+ (bruijn ##.i.47 2 1) 1) (##vcore.vector-ref (bruijn ##.x.45 7 1) (bruijn ##.i.47 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 8 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14) (bruijn ##.%x.127 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.46) #f (bruijn ##.loop.46 1 0) (bruijn ##.%k.70 5 0) 0 (bruijn ##.%x.85 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.49) #f (bruijn ##.loop.49 5 0) (bruijn ##.%k.87 4 0) (bruijn ##.%x.131 2 0) (bruijn ##.%x.90 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-combine.29 10 10) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18) (bruijn ##.%x.91 0 0) (bruijn ##.h.51 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.129 ##.%p.130) ((##vcore.record-length (bruijn ##.x.45 7 1)) (##vcore.= (bruijn ##.i.50 1 1) (bruijn ##.%x.129 0 0))) (if (bruijn ##.%p.130 0 1) ((bruijn ##.%k.87 1 0) (bruijn ##.h.51 1 2)) (basic-block 2 2 (##.%x.131 ##.%x.132) ((##vcore.+ (bruijn ##.i.50 2 1) 1) (##vcore.record-ref (bruijn ##.x.45 8 1) (bruijn ##.i.50 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 9 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17) (bruijn ##.%x.132 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.49) #f (bruijn ##.loop.49 1 0) (bruijn ##.%k.70 6 0) 0 (bruijn ##.%x.94 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.119) ((##vcore.pair? (bruijn ##.x.45 1 1))) (if (bruijn ##.%p.119 0 0) (basic-block 1 1 (##.%x.120) ((##vcore.car (bruijn ##.x.45 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 3 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k12) (bruijn ##.%x.120 0 0))) (basic-block 1 1 (##.%p.122) ((##vcore.blob? (bruijn ##.x.45 2 1))) (if (bruijn ##.%p.122 0 0) ((bruijn ##.hash-blob.28 3 9) (bruijn ##.%k.70 2 0) (bruijn ##.x.45 2 1)) (basic-block 1 1 (##.%p.123) ((##vcore.vector? (bruijn ##.x.45 3 1))) (if (bruijn ##.%p.123 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46")) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 5 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k16) '##.AVECTORDAWG)) (basic-block 1 1 (##.%p.128) ((##vcore.record? (bruijn ##.x.45 4 1))) (if (bruijn ##.%p.128 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49")) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.21 6 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k19) '##.ARECORDDAWG)) ((bruijn ##.eq-hash.30 5 11) (bruijn ##.%k.70 4 0) (bruijn ##.x.45 4 1))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k12, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k16, self))));
    VWORD _arg1 = 
      _V10_DAVECTORDAWG;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k19, self))));
    VWORD _arg1 = 
      _V10_DARECORDDAWG;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush make-hush-table-impl) #t (bruijn ##.make-hush-table-impl.24 2 5) (bruijn ##.%k.95 1 0) (bruijn ##.%x.96 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-hash-table.7 2 5) (close _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20, self)))));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.97 3 0) (bruijn ##.%x.99 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.98 0 0) (basic-block 1 1 (##.%r.133) ((##vcore.record-ref (bruijn ##.rec.52 2 1) 1)) ((bruijn ##.%k.97 2 0) (bruijn ##.%r.133 0 0))) (basic-block 2 2 (##.%x.134 ##.%x.135) ((##vcore.cons (bruijn ##.rec.52 2 1) '()) (##vcore.cons 'hush-table.get (bruijn ##.%x.134 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22) #f 'error (##string ##.string.345) (bruijn ##.%x.135 0 1))))
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
      _V0hush__table_Dget,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D345.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hush ##.hush-table?.2) #t (bruijn ##.hush-table?.2.26 1 7) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21) (bruijn ##.rec.52 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.102 0 0) (bruijn ##.hush-table.1.27 1 8) (bruijn ##.hash-table.53 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[8],
      _var1);
}
void _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.136) ((##vcore.record? (bruijn ##.x.54 1 1))) (if (bruijn ##.%p.136 0 0) (basic-block 2 2 (##.%x.137 ##.%r.138) ((##vcore.record-ref (bruijn ##.x.54 2 1) 0) (##vcore.eqv? (bruijn ##.%x.137 0 0) (bruijn ##.hush-table.1.27 3 8))) ((bruijn ##.%k.103 2 0) (bruijn ##.%r.138 0 1))) ((bruijn ##.%k.103 1 0) #f)))
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
static void _V0vanity_V0compiler_V0hush_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 8 8 (##.%x.140 ##.%x.141 ##.%x.142 ##.%x.143 ##.%x.144 ##.%x.145 ##.%x.146 ##.%r.147) ((##vcore.cons 'hush (bruijn ##.hush.21 2 2)) (##vcore.cons 'make-hush-table (bruijn ##.make-hush-table.22 2 3)) (##vcore.cons 'hush-table-set! (bruijn ##.hush-table-set!.20 2 1)) (##vcore.cons 'hush-table-ref (bruijn ##.hush-table-ref.19 2 0)) (##vcore.cons (bruijn ##.%x.143 0 3) '()) (##vcore.cons (bruijn ##.%x.142 0 2) (bruijn ##.%x.144 0 4)) (##vcore.cons (bruijn ##.%x.141 0 1) (bruijn ##.%x.145 0 5)) (##vcore.cons (bruijn ##.%x.140 0 0) (bruijn ##.%x.146 0 6))) ((bruijn ##.%k.60 3 0) (bruijn ##.%r.147 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0hush,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0make__hush__table,
      statics->up->vars[3]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table__set_B,
      statics->up->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table__ref,
      statics->up->vars[0]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[7]);
    }
}
static void _V0vanity_V0compiler_V0hush_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hush_V20_V0k24) (bruijn ##.hush-table?.25 1 6) (bruijn ##.hush-table?.2.26 1 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k24, self)))),
      VEncodeInt(1l), VEncodeInt(6l),
      statics->vars[7]
    );
}
static void _V0vanity_V0compiler_V0hush_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hush_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0lambda3, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (##letrec (vanity compiler hush) 12 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl" (vanity compiler hush)) #f (close "_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2" (vanity compiler hush)) #f (##basic-intrinsic "VHashBlob") (##basic-intrinsic "VHashCombine") (##basic-intrinsic "VEqHash")) (basic-block 1 1 (##.%x.139) ((##vcore.cons 'hush-table '(##pair ##.pair.350))) (set! (close _V0vanity_V0compiler_V0hush_V20_V0k23) (bruijn ##.hush-table.1.27 1 8) (bruijn ##.%x.139 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hush = self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = _V40VHashBlob;
    self->vars[10] = _V40VHashCombine;
    self->vars[11] = _V40VEqHash;
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hush_V20", &_V60_V0vanity_V0compiler_V0hush);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table,
      VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k23, self)))),
      VEncodeInt(1l), VEncodeInt(8l),
      self->vars[0]
    );
    }
    }
}
static void _V0vanity_V0compiler_V0hush_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hush_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.56 0 0) (close _V0vanity_V0compiler_V0hush_V20_V0lambda2) (close _V0vanity_V0compiler_V0hush_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hush_V20 = (VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0hush__table = VEncodePointer(VInternSymbol(346844745, &_VW_V0hush__table.sym), VPOINTER_OTHER);
  _V10_Dhush__table_Q_D2 = VEncodePointer(VInternSymbol(1068895897, &_VW_V10_Dhush__table_Q_D2.sym), VPOINTER_OTHER);
  _V0hash__table = VEncodePointer(VInternSymbol(-747738850, &_VW_V0hash__table.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0rec = VEncodePointer(VInternSymbol(-370118234, &_VW_V0rec.sym), VPOINTER_OTHER);
  _V10_DARECORDDAWG = VEncodePointer(VInternSymbol(911526808, &_VW_V10_DARECORDDAWG.sym), VPOINTER_OTHER);
  _V10_Dloop_D49 = VEncodePointer(VInternSymbol(1895937871, &_VW_V10_Dloop_D49.sym), VPOINTER_OTHER);
  _V10_DAVECTORDAWG = VEncodePointer(VInternSymbol(778957291, &_VW_V10_DAVECTORDAWG.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0h = VEncodePointer(VInternSymbol(-1202196209, &_VW_V0h.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D46 = VEncodePointer(VInternSymbol(993847936, &_VW_V10_Dloop_D46.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V0pair = VEncodePointer(VInternSymbol(-766571036, &_VW_V0pair.sym), VPOINTER_OTHER);
  _V0chain = VEncodePointer(VInternSymbol(1109133836, &_VW_V0chain.sym), VPOINTER_OTHER);
  _V0real = VEncodePointer(VInternSymbol(-652995456, &_VW_V0real.sym), VPOINTER_OTHER);
  _V0hash = VEncodePointer(VInternSymbol(827081031, &_VW_V0hash.sym), VPOINTER_OTHER);
  _V0eq__hash = VEncodePointer(VInternSymbol(-1742164742, &_VW_V0eq__hash.sym), VPOINTER_OTHER);
  _V0hash__combine = VEncodePointer(VInternSymbol(-1675037197, &_VW_V0hash__combine.sym), VPOINTER_OTHER);
  _V0hash__blob = VEncodePointer(VInternSymbol(2063833725, &_VW_V0hash__blob.sym), VPOINTER_OTHER);
  _V0hush__table_D1 = VEncodePointer(VInternSymbol(359545385, &_VW_V0hush__table_D1.sym), VPOINTER_OTHER);
  _V0hush__table_Q_D2 = VEncodePointer(VInternSymbol(-1390823837, &_VW_V0hush__table_Q_D2.sym), VPOINTER_OTHER);
  _V0hush__table_Q = VEncodePointer(VInternSymbol(572785852, &_VW_V0hush__table_Q.sym), VPOINTER_OTHER);
  _V0make__hush__table__impl = VEncodePointer(VInternSymbol(880834279, &_VW_V0make__hush__table__impl.sym), VPOINTER_OTHER);
  _V0hush__table_Dget = VEncodePointer(VInternSymbol(-1806845772, &_VW_V0hush__table_Dget.sym), VPOINTER_OTHER);
  _V0make__hush__table = VEncodePointer(VInternSymbol(-1788547486, &_VW_V0make__hush__table.sym), VPOINTER_OTHER);
  _V0hush__table__set_B = VEncodePointer(VInternSymbol(-1662644055, &_VW_V0hush__table__set_B.sym), VPOINTER_OTHER);
  _V0thunk = VEncodePointer(VInternSymbol(447097569, &_VW_V0thunk.sym), VPOINTER_OTHER);
  _V0key = VEncodePointer(VInternSymbol(769737524, &_VW_V0key.sym), VPOINTER_OTHER);
  _V0ht = VEncodePointer(VInternSymbol(1200510951, &_VW_V0ht.sym), VPOINTER_OTHER);
  _V0hush__table__ref = VEncodePointer(VInternSymbol(-845139466, &_VW_V0hush__table__ref.sym), VPOINTER_OTHER);
  _V0hush = VEncodePointer(VInternSymbol(2033234706, &_VW_V0hush.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D366.first = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D366.rest = VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR);
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VNULL;
  _V10_Dpair_D364.first = _V0unquote;
  _V10_Dpair_D364.rest = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D363.first = _V0unmangled__env;
  _V10_Dpair_D363.rest = VNULL;
  _V10_Dpair_D362.first = VEncodeBool(false);
  _V10_Dpair_D362.rest = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D361.first = _V0_U;
  _V10_Dpair_D361.rest = VNULL;
  _V40VEqHash = VEncodePointer(VLookupConstant("_V40VEqHash", &_VW_V40VEqHash), VPOINTER_CLOSURE);
  _V40VHashCombine = VEncodePointer(VLookupConstant("_V40VHashCombine", &_VW_V40VHashCombine), VPOINTER_CLOSURE);
  _V40VHashBlob = VEncodePointer(VLookupConstant("_V40VHashBlob", &_VW_V40VHashBlob), VPOINTER_CLOSURE);
  _V10_Dpair_D360.first = VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR);
  _V10_Dpair_D360.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D359.first = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D359.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D358.first = _V0vanity;
  _V10_Dpair_D358.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D357.first = _V0compiler;
  _V10_Dpair_D357.rest = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D356.first = _V0hush;
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D355.first = _V10_Dhush__table_Q_D2;
  _V10_Dpair_D355.rest = VNULL;
  _V10_Dpair_D354.first = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D354.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D353.first = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D352.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D352.rest = VNULL;
  _V10_Dpair_D351.first = _V0_Mk;
  _V10_Dpair_D351.rest = VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR);
  _V10_Dpair_D350.first = _V0hash__table;
  _V10_Dpair_D350.rest = VNULL;
  _V10_Dpair_D349.first = _V0vanity;
  _V10_Dpair_D349.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D348.first = _V0compiler;
  _V10_Dpair_D348.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D347.first = _V0hush;
  _V10_Dpair_D347.rest = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D346.first = _V0make__hush__table__impl;
  _V10_Dpair_D346.rest = VNULL;
  _V10_Dpair_D344.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D344.rest = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D343.first = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D343.rest = VNULL;
  _V10_Dpair_D342.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D342.rest = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D341.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D341.rest = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D340.first = VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR);
  _V10_Dpair_D340.rest = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D339.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D339.rest = VNULL;
  _V10_Dpair_D338.first = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D338.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D337.first = VEncodeBool(false);
  _V10_Dpair_D337.rest = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D336.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D336.rest = VNULL;
  _V10_Dpair_D335.first = VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR);
  _V10_Dpair_D335.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D334.first = VEncodePointer(&_V10_Dpair_D330, VPOINTER_PAIR);
  _V10_Dpair_D334.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D333.first = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D333.rest = VNULL;
  _V10_Dpair_D332.first = _V0_Mk;
  _V10_Dpair_D332.rest = VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR);
  _V10_Dpair_D331.first = _V0rec;
  _V10_Dpair_D331.rest = VNULL;
  _V10_Dpair_D330.first = _V0vanity;
  _V10_Dpair_D330.rest = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D329.first = _V0compiler;
  _V10_Dpair_D329.rest = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D328.first = _V0hush;
  _V10_Dpair_D328.rest = VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR);
  _V10_Dpair_D327.first = _V0hush__table_Dget;
  _V10_Dpair_D327.rest = VNULL;
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR);
  _V10_Dpair_D325.first = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D325.rest = VNULL;
  _V10_Dpair_D324.first = VEncodePointer(&_V10_Dpair_D148, VPOINTER_PAIR);
  _V10_Dpair_D324.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D323.first = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D323.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D322.first = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D322.rest = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D321.first = _V0vanity;
  _V10_Dpair_D321.rest = VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR);
  _V10_Dpair_D320.first = _V0compiler;
  _V10_Dpair_D320.rest = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D319.first = _V0hush;
  _V10_Dpair_D319.rest = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D318.first = _V0make__hush__table;
  _V10_Dpair_D318.rest = VNULL;
  _V10_Dpair_D317.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D317.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D316.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D315.first = VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR);
  _V10_Dpair_D315.rest = VNULL;
  _V10_Dpair_D314.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D313.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D313.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D312.first = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D312.rest = VNULL;
  _V10_Dpair_D311.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR);
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D309.first = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D309.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D308.first = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D307.first = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D307.rest = VNULL;
  _V10_Dpair_D306.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D306.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D305.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D304.first = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D304.rest = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D303.first = _V0vanity;
  _V10_Dpair_D303.rest = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D302.first = _V0compiler;
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D301.first = _V0hush;
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = _V0hush;
  _V10_Dpair_D300.rest = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D299.first = _V10_Dloop_D49;
  _V10_Dpair_D299.rest = VNULL;
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D297.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D297.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VNULL;
  _V10_Dpair_D295.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D295.rest = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D294.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D294.rest = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D293.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D293.rest = VNULL;
  _V10_Dpair_D292.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D292.rest = VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR);
  _V10_Dpair_D291.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D291.rest = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D290.first = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D290.rest = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D289.first = _V0_Mx;
  _V10_Dpair_D289.rest = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D288.first = _V0_Mx;
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D287.first = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D287.rest = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D286.first = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D286.rest = VNULL;
  _V10_Dpair_D285.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D285.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D284.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D284.rest = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D283.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D283.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D282.first = _V0loop;
  _V10_Dpair_D282.rest = VNULL;
  _V10_Dpair_D281.first = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D281.rest = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D280.first = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D280.rest = VNULL;
  _V10_Dpair_D279.first = _V0_Mk;
  _V10_Dpair_D279.rest = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D278.first = _V0i;
  _V10_Dpair_D278.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D277.first = _V0h;
  _V10_Dpair_D277.rest = VNULL;
  _V10_Dpair_D276.first = _V0vanity;
  _V10_Dpair_D276.rest = VEncodePointer(&_V10_Dpair_D275, VPOINTER_PAIR);
  _V10_Dpair_D275.first = _V0compiler;
  _V10_Dpair_D275.rest = VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR);
  _V10_Dpair_D274.first = _V0hush;
  _V10_Dpair_D274.rest = VEncodePointer(&_V10_Dpair_D273, VPOINTER_PAIR);
  _V10_Dpair_D273.first = _V0hush;
  _V10_Dpair_D273.rest = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D272.first = _V10_Dloop_D46;
  _V10_Dpair_D272.rest = VNULL;
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D270.first = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D270.rest = VNULL;
  _V10_Dpair_D269.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D269.rest = VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR);
  _V10_Dpair_D268.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D268.rest = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D267.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D267.rest = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D266.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D266.rest = VNULL;
  _V10_Dpair_D265.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D265.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D264.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D264.rest = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D263.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D263.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D262.first = _V0_Mp;
  _V10_Dpair_D262.rest = VNULL;
  _V10_Dpair_D261.first = VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR);
  _V10_Dpair_D261.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D260.first = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D260.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D259.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D259.rest = VNULL;
  _V10_Dpair_D258.first = _V0_Mk;
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D257.first = _V0x;
  _V10_Dpair_D257.rest = VNULL;
  _V10_Dpair_D256.first = _V0vanity;
  _V10_Dpair_D256.rest = VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR);
  _V10_Dpair_D255.first = _V0compiler;
  _V10_Dpair_D255.rest = VEncodePointer(&_V10_Dpair_D254, VPOINTER_PAIR);
  _V10_Dpair_D254.first = _V0hush;
  _V10_Dpair_D254.rest = VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR);
  _V10_Dpair_D253.first = _V0hush;
  _V10_Dpair_D253.rest = VNULL;
  _V10_Dpair_D252.first = VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR);
  _V10_Dpair_D252.rest = VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR);
  _V10_Dpair_D251.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D251.rest = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D250.first = VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR);
  _V10_Dpair_D250.rest = VNULL;
  _V10_Dpair_D249.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D249.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D248.first = VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR);
  _V10_Dpair_D248.rest = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D247.first = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D247.rest = VNULL;
  _V10_Dpair_D246.first = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D246.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D245.first = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D245.rest = VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR);
  _V10_Dpair_D244.first = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D244.rest = VNULL;
  _V10_Dpair_D243.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D243.rest = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D242.first = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D242.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D241.first = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D241.rest = VNULL;
  _V10_Dpair_D240.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D240.rest = VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR);
  _V10_Dpair_D239.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D239.rest = VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR);
  _V10_Dpair_D238.first = VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR);
  _V10_Dpair_D238.rest = VNULL;
  _V10_Dpair_D237.first = VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR);
  _V10_Dpair_D237.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D236.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D236.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D235.first = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D235.rest = VEncodePointer(&_V10_Dpair_D234, VPOINTER_PAIR);
  _V10_Dpair_D234.first = VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR);
  _V10_Dpair_D234.rest = VNULL;
  _V10_Dpair_D233.first = _V0_Mk;
  _V10_Dpair_D233.rest = VEncodePointer(&_V10_Dpair_D232, VPOINTER_PAIR);
  _V10_Dpair_D232.first = _V0ht;
  _V10_Dpair_D232.rest = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D231.first = _V0key;
  _V10_Dpair_D231.rest = VEncodePointer(&_V10_Dpair_D230, VPOINTER_PAIR);
  _V10_Dpair_D230.first = _V0val;
  _V10_Dpair_D230.rest = VNULL;
  _V10_Dpair_D229.first = _V0vanity;
  _V10_Dpair_D229.rest = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D228.first = _V0compiler;
  _V10_Dpair_D228.rest = VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR);
  _V10_Dpair_D227.first = _V0hush;
  _V10_Dpair_D227.rest = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D226.first = _V0hush__table__set_B;
  _V10_Dpair_D226.rest = VNULL;
  _V10_Dpair_D225.first = VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR);
  _V10_Dpair_D225.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D224.first = VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR);
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dpair_D223, VPOINTER_PAIR);
  _V10_Dpair_D223.first = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D223.rest = VNULL;
  _V10_Dpair_D222.first = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D221.first = VEncodeBool(false);
  _V10_Dpair_D221.rest = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D220.first = VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR);
  _V10_Dpair_D220.rest = VNULL;
  _V10_Dpair_D219.first = _V0pair;
  _V10_Dpair_D219.rest = VNULL;
  _V10_Dpair_D218.first = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D218.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D217.first = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D217.rest = VNULL;
  _V10_Dpair_D216.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D216.rest = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D215.first = VEncodeBool(false);
  _V10_Dpair_D215.rest = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D214.first = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D214.rest = VNULL;
  _V10_Dpair_D213.first = _V0chain;
  _V10_Dpair_D213.rest = VNULL;
  _V10_Dpair_D212.first = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D212.rest = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D211.first = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D211.rest = VNULL;
  _V10_Dpair_D210.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D210.rest = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D209.first = VEncodeBool(false);
  _V10_Dpair_D209.rest = VEncodePointer(&_V10_Dpair_D208, VPOINTER_PAIR);
  _V10_Dpair_D208.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D208.rest = VNULL;
  _V10_Dpair_D207.first = _V0real;
  _V10_Dpair_D207.rest = VNULL;
  _V10_Dpair_D206.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D206.rest = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D205.first = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D205.rest = VNULL;
  _V10_Dpair_D204.first = VEncodePointer(&_V10_Dpair_D182, VPOINTER_PAIR);
  _V10_Dpair_D204.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D203.first = VEncodeBool(false);
  _V10_Dpair_D203.rest = VEncodePointer(&_V10_Dpair_D202, VPOINTER_PAIR);
  _V10_Dpair_D202.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D202.rest = VNULL;
  _V10_Dpair_D201.first = _V0hash;
  _V10_Dpair_D201.rest = VNULL;
  _V10_Dpair_D200.first = VEncodePointer(&_V10_Dpair_D184, VPOINTER_PAIR);
  _V10_Dpair_D200.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D199.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D199.rest = VNULL;
  _V10_Dpair_D198.first = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D198.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D197.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D197.rest = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D196.first = _V0hush__table__ref;
  _V10_Dpair_D196.rest = VEncodePointer(&_V10_Dpair_D195, VPOINTER_PAIR);
  _V10_Dpair_D195.first = _V0hush__table__set_B;
  _V10_Dpair_D195.rest = VEncodePointer(&_V10_Dpair_D194, VPOINTER_PAIR);
  _V10_Dpair_D194.first = _V0hush;
  _V10_Dpair_D194.rest = VEncodePointer(&_V10_Dpair_D193, VPOINTER_PAIR);
  _V10_Dpair_D193.first = _V0make__hush__table;
  _V10_Dpair_D193.rest = VEncodePointer(&_V10_Dpair_D192, VPOINTER_PAIR);
  _V10_Dpair_D192.first = _V0hush__table_Dget;
  _V10_Dpair_D192.rest = VEncodePointer(&_V10_Dpair_D191, VPOINTER_PAIR);
  _V10_Dpair_D191.first = _V0make__hush__table__impl;
  _V10_Dpair_D191.rest = VEncodePointer(&_V10_Dpair_D190, VPOINTER_PAIR);
  _V10_Dpair_D190.first = _V0hush__table_Q;
  _V10_Dpair_D190.rest = VEncodePointer(&_V10_Dpair_D189, VPOINTER_PAIR);
  _V10_Dpair_D189.first = _V0hush__table_Q_D2;
  _V10_Dpair_D189.rest = VEncodePointer(&_V10_Dpair_D188, VPOINTER_PAIR);
  _V10_Dpair_D188.first = _V0hush__table_D1;
  _V10_Dpair_D188.rest = VEncodePointer(&_V10_Dpair_D187, VPOINTER_PAIR);
  _V10_Dpair_D187.first = _V0hash__blob;
  _V10_Dpair_D187.rest = VEncodePointer(&_V10_Dpair_D186, VPOINTER_PAIR);
  _V10_Dpair_D186.first = _V0hash__combine;
  _V10_Dpair_D186.rest = VEncodePointer(&_V10_Dpair_D185, VPOINTER_PAIR);
  _V10_Dpair_D185.first = _V0eq__hash;
  _V10_Dpair_D185.rest = VNULL;
  _V10_Dpair_D184.first = VEncodePointer(&_V10_Dpair_D178, VPOINTER_PAIR);
  _V10_Dpair_D184.rest = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D183.first = VEncodePointer(&_V10_Dpair_D182, VPOINTER_PAIR);
  _V10_Dpair_D183.rest = VNULL;
  _V10_Dpair_D182.first = _V0_Mk;
  _V10_Dpair_D182.rest = VEncodePointer(&_V10_Dpair_D181, VPOINTER_PAIR);
  _V10_Dpair_D181.first = _V0ht;
  _V10_Dpair_D181.rest = VEncodePointer(&_V10_Dpair_D180, VPOINTER_PAIR);
  _V10_Dpair_D180.first = _V0key;
  _V10_Dpair_D180.rest = VEncodePointer(&_V10_Dpair_D179, VPOINTER_PAIR);
  _V10_Dpair_D179.first = _V0thunk;
  _V10_Dpair_D179.rest = VNULL;
  _V10_Dpair_D178.first = _V0vanity;
  _V10_Dpair_D178.rest = VEncodePointer(&_V10_Dpair_D177, VPOINTER_PAIR);
  _V10_Dpair_D177.first = _V0compiler;
  _V10_Dpair_D177.rest = VEncodePointer(&_V10_Dpair_D176, VPOINTER_PAIR);
  _V10_Dpair_D176.first = _V0hush;
  _V10_Dpair_D176.rest = VEncodePointer(&_V10_Dpair_D175, VPOINTER_PAIR);
  _V10_Dpair_D175.first = _V0hush__table__ref;
  _V10_Dpair_D175.rest = VNULL;
  _V10_Dpair_D174.first = VEncodePointer(&_V10_Dpair_D173, VPOINTER_PAIR);
  _V10_Dpair_D174.rest = VEncodePointer(&_V10_Dpair_D153, VPOINTER_PAIR);
  _V10_Dpair_D173.first = VEncodeBool(false);
  _V10_Dpair_D173.rest = VEncodePointer(&_V10_Dpair_D172, VPOINTER_PAIR);
  _V10_Dpair_D172.first = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D172.rest = VNULL;
  _V10_Dpair_D171.first = _V0_Mk;
  _V10_Dpair_D171.rest = VEncodePointer(&_V10_Dpair_D170, VPOINTER_PAIR);
  _V10_Dpair_D170.first = _V0assoc;
  _V10_Dpair_D170.rest = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D169.first = _V0hash__table__ref;
  _V10_Dpair_D169.rest = VEncodePointer(&_V10_Dpair_D168, VPOINTER_PAIR);
  _V10_Dpair_D168.first = _V0hash__table__set_B;
  _V10_Dpair_D168.rest = VEncodePointer(&_V10_Dpair_D167, VPOINTER_PAIR);
  _V10_Dpair_D167.first = _V0list;
  _V10_Dpair_D167.rest = VEncodePointer(&_V10_Dpair_D166, VPOINTER_PAIR);
  _V10_Dpair_D166.first = _V0make__hash__table;
  _V10_Dpair_D166.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D163.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D163.rest = VEncodePointer(&_V10_Dpair_D162, VPOINTER_PAIR);
  _V10_Dpair_D162.first = VEncodePointer(&_V10_Dpair_D161, VPOINTER_PAIR);
  _V10_Dpair_D162.rest = VNULL;
  _V10_Dpair_D161.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D161.rest = VEncodePointer(&_V10_Dpair_D158, VPOINTER_PAIR);
  _V10_Dpair_D160.first = VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR);
  _V10_Dpair_D160.rest = VEncodePointer(&_V10_Dpair_D159, VPOINTER_PAIR);
  _V10_Dpair_D159.first = VEncodePointer(&_V10_Dpair_D158, VPOINTER_PAIR);
  _V10_Dpair_D159.rest = VNULL;
  _V10_Dpair_D158.first = VEncodePointer(&_V10_Dpair_D148, VPOINTER_PAIR);
  _V10_Dpair_D158.rest = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D157.first = VEncodeBool(false);
  _V10_Dpair_D157.rest = VEncodePointer(&_V10_Dpair_D156, VPOINTER_PAIR);
  _V10_Dpair_D156.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D156.rest = VNULL;
  _V10_Dpair_D155.first = _V0_Mx;
  _V10_Dpair_D155.rest = VNULL;
  _V10_Dpair_D154.first = VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR);
  _V10_Dpair_D154.rest = VEncodePointer(&_V10_Dpair_D153, VPOINTER_PAIR);
  _V10_Dpair_D153.first = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D153.rest = VNULL;
  _V10_Dpair_D152.first = VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR);
  _V10_Dpair_D152.rest = VEncodePointer(&_V10_Dpair_D151, VPOINTER_PAIR);
  _V10_Dpair_D151.first = VNULL;
  _V10_Dpair_D151.rest = VNULL;
  _V10_Dpair_D150.first = VEncodeBool(false);
  _V10_Dpair_D150.rest = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D149.first = VEncodePointer(&_V10_Dpair_D148, VPOINTER_PAIR);
  _V10_Dpair_D149.rest = VNULL;
  _V10_Dpair_D148.first = _V0_Mk;
  _V10_Dpair_D148.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k2, VEncodePointer(&_V10_Dpair_D163, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k1, VEncodePointer(&_V10_Dpair_D160, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D154, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6, VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5, VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda4, VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4, VEncodePointer(&_V10_Dpair_D212, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k3, VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, VEncodePointer(&_V10_Dpair_D200, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10, VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11, VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9, VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda5, VEncodePointer(&_V10_Dpair_D252, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8, VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k7, VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k13, VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k12, VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k15, VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46_V0k14, VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D46, VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k16, VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k18, VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49_V0k17, VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D49, VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k19, VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k20, VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table, VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22, VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k21, VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k24, VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k23, VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D174, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D152, VPOINTER_PAIR));
}
