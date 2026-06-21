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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0eval;

static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "too few args to lambda" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D320 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "too many args to lambda" };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0formals;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0formals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "formals" };
static VPair _V10_Dpair_D313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
static VPair _V10_Dpair_D288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static VPair _V10_Dpair_D282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static VPair _V10_Dpair_D271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pair;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "pair" };
static VPair _V10_Dpair_D262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
VWEAK VWORD _V0binding;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0binding = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "binding" };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "vals" };
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
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bindings;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bindings" };
static VPair _V10_Dpair_D227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
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
static VPair _V10_Dpair_D209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D203 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "eval: stray null" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D202 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "eval: symbol not found" };
static VPair _V10_Dpair_D201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static VPair _V10_Dpair_D193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bind__formals;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0bind__formals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "bind-formals" };
static VPair _V10_Dpair_D187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0env;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "env" };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0eval;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eval = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eval" };
VWEAK VWORD _V0hygienic;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0hygienic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "hygienic" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D163 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D162 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "_V0vanity_V0compiler_V0hygienic_V0eval_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.39 5 0) (##string ##.string.161) (bruijn ##.%x.40 0 0) 'map 'cadr 'caddr 'cadddr 'append 'for-each 'error 'assoc)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 11,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D161.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0cadr,
      _V0caddr,
      _V0cadddr,
      _V0append,
      _V0for__each,
      _V0error,
      _V0assoc);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5) (bruijn ##.%x.41 3 0) (bruijn ##.%x.42 2 0) (bruijn ##.%x.43 1 0) (bruijn ##.%x.44 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4) (##string ##.string.162))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D162.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3) (##string ##.string.163))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D163.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2) (##string ##.string.164))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D164.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1) (##string ##.string.165))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D165.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.23 0 0) (basic-block 1 1 (##.%r.102) ((##vcore.cdr (bruijn ##.lookup.23 1 0))) ((bruijn ##.%k.46 3 0) (bruijn ##.%r.102 0 0))) ((bruijn ##.error.7 4 7) (bruijn ##.%k.46 2 0) (##string ##.string.202) (bruijn ##.expr.21 2 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D202.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 10 0) (bruijn ##.%k.52 3 0) (bruijn ##.%x.53 2 0) (bruijn ##.%x.54 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval bind-formals) #t (bruijn ##.bind-formals.20 9 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9) (bruijn ##.%x.55 0 0) (bruijn ##.args.24 2 1) (bruijn ##.env.22 8 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.2 9 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8) (bruijn ##.expr.21 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((bruijn ##.caddr.3 8 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7) (bruijn ##.expr.21 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 13 0) (bruijn ##.%k.46 12 0) (bruijn ##.%x.57 0 0) (bruijn ##.env.26 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.3 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16) (bruijn ##.expr.21 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.58 0 0) (bruijn ##.binding.28 0 1) (bruijn ##.val.29 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.6 13 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5) (bruijn ##.bindings.25 3 0) (bruijn ##.vals.27 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 13 0) (bruijn ##.%k.59 1 0) (bruijn ##.%x.60 0 0) (bruijn ##.env.26 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.2 13 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17) (bruijn ##.pair.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.1 12 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6) (bruijn ##.%x.61 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.2 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13) (bruijn ##.expr.21 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.5 10 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12) (bruijn ##.bindings.25 0 0) (bruijn ##.env.22 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, self)))),
      _var0,
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.112 ##.%r.113) ((##vcore.car (bruijn ##.pair.31 1 1)) (##vcore.cons (bruijn ##.%x.112 0 0) #void)) ((bruijn ##.%k.62 1 0) (bruijn ##.%r.113 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VVOID);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.1 9 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7) (bruijn ##.%x.64 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 11 0) (bruijn ##.%k.46 10 0) (bruijn ##.%x.67 0 0) (bruijn ##.env.22 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 11 0) (bruijn ##.%k.46 10 0) (bruijn ##.%x.68 0 0) (bruijn ##.env.22 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.66 0 0) ((bruijn ##.caddr.3 11 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20) (bruijn ##.expr.21 9 1)) ((bruijn ##.cadddr.4 11 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21) (bruijn ##.expr.21 9 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, self)))),
      VGetArg(statics, 9-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 9 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19) (bruijn ##.%x.69 0 0) (bruijn ##.env.22 8 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 11 0) (bruijn ##.%k.46 10 0) (bruijn ##.%x.71 0 0) (bruijn ##.env.22 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.3 11 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24) (bruijn ##.expr.21 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 10 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23) (bruijn ##.%x.72 0 0) (bruijn ##.env.22 9 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 13 0) (bruijn ##.%k.46 12 0) (bruijn ##.%x.74 0 0) (bruijn ##.env.22 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.32 0 0) ((bruijn ##.%k.46 11 0) (bruijn ##.ret.32 0 0)) ((bruijn ##.caddr.3 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27) (bruijn ##.expr.21 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, self)))),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 11 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26) (bruijn ##.%x.75 0 0) (bruijn ##.env.22 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.46 13 0) (bruijn ##.%x.76 2 0) (bruijn ##.%x.77 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      VGetArg(statics, 13-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 14 0) (bruijn ##.%k.78 0 0) (bruijn ##.e.33 0 1) (bruijn ##.env.22 13 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.121) ((##vcore.cdr (bruijn ##.expr.21 12 1))) ((bruijn ##.map.1 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8) (bruijn ##.%x.121 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.101) ((##vcore.symbol? (bruijn ##.expr.21 1 1))) (if (bruijn ##.%p.101 0 0) ((bruijn ##.assoc.8 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6) (bruijn ##.expr.21 1 1) (bruijn ##.env.22 1 2)) (basic-block 1 1 (##.%p.103) ((##vcore.null? (bruijn ##.expr.21 2 1))) (if (bruijn ##.%p.103 0 0) ((bruijn ##.error.7 4 7) (bruijn ##.%k.46 2 0) (##string ##.string.203)) (basic-block 2 2 (##.%x.104 ##.%p.105) ((##vcore.pair? (bruijn ##.expr.21 3 1)) (##vcore.not (bruijn ##.%x.104 0 0))) (if (bruijn ##.%p.105 0 1) ((bruijn ##.%k.46 3 0) (bruijn ##.expr.21 3 1)) (basic-block 2 2 (##.%x.106 ##.%p.107) ((##vcore.car (bruijn ##.expr.21 4 1)) (##vcore.eq? (bruijn ##.%x.106 0 0) 'quote)) (if (bruijn ##.%p.107 0 1) ((bruijn ##.cadr.2 6 2) (bruijn ##.%k.46 4 0) (bruijn ##.expr.21 4 1)) (basic-block 2 2 (##.%x.108 ##.%p.109) ((##vcore.car (bruijn ##.expr.21 5 1)) (##vcore.eq? (bruijn ##.%x.108 0 0) 'lambda)) (if (bruijn ##.%p.109 0 1) ((bruijn ##.%k.46 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4)) (basic-block 2 2 (##.%x.110 ##.%p.111) ((##vcore.car (bruijn ##.expr.21 6 1)) (##vcore.eq? (bruijn ##.%x.110 0 0) 'letrec)) (if (bruijn ##.%p.111 0 1) ((bruijn ##.cadr.2 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10) (bruijn ##.expr.21 6 1)) (basic-block 2 2 (##.%x.114 ##.%p.115) ((##vcore.car (bruijn ##.expr.21 7 1)) (##vcore.eq? (bruijn ##.%x.114 0 0) 'if)) (if (bruijn ##.%p.115 0 1) ((bruijn ##.cadr.2 9 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18) (bruijn ##.expr.21 7 1)) (basic-block 2 2 (##.%x.116 ##.%p.117) ((##vcore.car (bruijn ##.expr.21 8 1)) (##vcore.eq? (bruijn ##.%x.116 0 0) 'begin)) (if (bruijn ##.%p.117 0 1) ((bruijn ##.cadr.2 10 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22) (bruijn ##.expr.21 8 1)) (basic-block 2 2 (##.%x.118 ##.%p.119) ((##vcore.car (bruijn ##.expr.21 9 1)) (##vcore.eq? (bruijn ##.%x.118 0 0) 'or)) (if (bruijn ##.%p.119 0 1) ((bruijn ##.cadr.2 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25) (bruijn ##.expr.21 9 1)) (basic-block 1 1 (##.%x.120) ((##vcore.car (bruijn ##.expr.21 10 1))) (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.19 11 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28) (bruijn ##.%x.120 0 0) (bruijn ##.env.22 10 2)))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, self)))),
      statics->vars[1],
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D203.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0quote);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0lambda);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, self)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0letrec);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0if);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0begin);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0or);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, got ~D~N"
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
  // (basic-block 1 1 (##.%p.122) ((##vcore.null? (bruijn ##.formals.34 1 1))) (if (bruijn ##.%p.122 0 0) (basic-block 1 1 (##.%p.123) ((##vcore.null? (bruijn ##.args.35 2 2))) (if (bruijn ##.%p.123 0 0) ((bruijn ##.%k.88 2 0) (bruijn ##.env.36 2 3)) ((bruijn ##.error.7 4 7) (bruijn ##.%k.88 2 0) (##string ##.string.320)))) (basic-block 1 1 (##.%p.124) ((##vcore.pair? (bruijn ##.formals.34 2 1))) (if (bruijn ##.%p.124 0 0) (basic-block 1 1 (##.%p.125) ((##vcore.pair? (bruijn ##.args.35 3 2))) (if (bruijn ##.%p.125 0 0) (basic-block 6 6 (##.%x.126 ##.%x.127 ##.%x.128 ##.%x.129 ##.%x.130 ##.%x.131) ((##vcore.cdr (bruijn ##.formals.34 4 1)) (##vcore.cdr (bruijn ##.args.35 4 2)) (##vcore.car (bruijn ##.formals.34 4 1)) (##vcore.car (bruijn ##.args.35 4 2)) (##vcore.cons (bruijn ##.%x.128 0 2) (bruijn ##.%x.129 0 3)) (##vcore.cons (bruijn ##.%x.130 0 4) (bruijn ##.env.36 4 3))) (##qualified-call (vanity compiler hygienic eval bind-formals) #t (bruijn ##.bind-formals.20 5 1) (bruijn ##.%k.88 4 0) (bruijn ##.%x.126 0 0) (bruijn ##.%x.127 0 1) (bruijn ##.%x.131 0 5))) ((bruijn ##.error.7 5 7) (bruijn ##.%k.88 3 0) (##string ##.string.321)))) (basic-block 2 2 (##.%x.132 ##.%r.133) ((##vcore.cons (bruijn ##.formals.34 3 1) (bruijn ##.args.35 3 2)) (##vcore.cons (bruijn ##.%x.132 0 0) (bruijn ##.env.36 3 3))) ((bruijn ##.%k.88 3 0) (bruijn ##.%r.133 0 1)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D320.sym, VPOINTER_OTHER));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[3] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      statics->up->up->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D321.sym, VPOINTER_OTHER));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
    }
}
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[9]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 9, 9, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  // (##letrec (vanity compiler hygienic eval) 2 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval" (vanity compiler hygienic eval)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals" (vanity compiler hygienic eval))) (basic-block 2 2 (##.%x.134 ##.%r.135) ((##vcore.cons 'eval (bruijn ##.eval.19 1 0)) (##vcore.cons (bruijn ##.%x.134 0 0) '())) ((bruijn ##.%k.45 2 0) (bruijn ##.%r.135 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0eval = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0eval_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0eval);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eval,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.38 0 0) (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0eval_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0formals = VEncodePointer(VInternSymbol(-861190023, &_VW_V0formals.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0pair = VEncodePointer(VInternSymbol(-766571036, &_VW_V0pair.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V0binding = VEncodePointer(VInternSymbol(103333849, &_VW_V0binding.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0vals = VEncodePointer(VInternSymbol(900385374, &_VW_V0vals.sym), VPOINTER_OTHER);
  _V0bindings = VEncodePointer(VInternSymbol(-448679587, &_VW_V0bindings.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V0bind__formals = VEncodePointer(VInternSymbol(888926885, &_VW_V0bind__formals.sym), VPOINTER_OTHER);
  _V0env = VEncodePointer(VInternSymbol(-249978633, &_VW_V0env.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0eval = VEncodePointer(VInternSymbol(-2078907041, &_VW_V0eval.sym), VPOINTER_OTHER);
  _V0hygienic = VEncodePointer(VInternSymbol(1358647835, &_VW_V0hygienic.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D319.first = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D319.rest = VEncodePointer(&_V10_Dpair_D192, VPOINTER_PAIR);
  _V10_Dpair_D318.first = VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR);
  _V10_Dpair_D318.rest = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D317.first = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D317.rest = VNULL;
  _V10_Dpair_D316.first = _V0_Mk;
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D315.first = _V0formals;
  _V10_Dpair_D315.rest = VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR);
  _V10_Dpair_D314.first = _V0args;
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D313.first = _V0vanity;
  _V10_Dpair_D313.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D312.first = _V0compiler;
  _V10_Dpair_D312.rest = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D311.first = _V0hygienic;
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D189, VPOINTER_PAIR);
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D309.first = VEncodeBool(false);
  _V10_Dpair_D309.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D308.first = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D308.rest = VNULL;
  _V10_Dpair_D307.first = _V0_Mk;
  _V10_Dpair_D307.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D306.first = _V0e;
  _V10_Dpair_D306.rest = VNULL;
  _V10_Dpair_D305.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D304.first = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D304.rest = VNULL;
  _V10_Dpair_D303.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D303.rest = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D302.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D301.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D300.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D300.rest = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D299.first = VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR);
  _V10_Dpair_D299.rest = VNULL;
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D297.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D297.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VNULL;
  _V10_Dpair_D295.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D295.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D294.first = VEncodeBool(false);
  _V10_Dpair_D294.rest = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D293.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D293.rest = VNULL;
  _V10_Dpair_D292.first = _V0ret;
  _V10_Dpair_D292.rest = VNULL;
  _V10_Dpair_D291.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D291.rest = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D290.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D290.rest = VNULL;
  _V10_Dpair_D289.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D289.rest = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D288.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D287.first = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D287.rest = VNULL;
  _V10_Dpair_D286.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D286.rest = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D285.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D285.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D284.first = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D284.rest = VNULL;
  _V10_Dpair_D283.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D283.rest = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D282.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D282.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D281.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D281.rest = VNULL;
  _V10_Dpair_D280.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D280.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D279.first = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D279.rest = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D278.first = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D278.rest = VNULL;
  _V10_Dpair_D277.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D277.rest = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D276.first = VEncodeBool(false);
  _V10_Dpair_D276.rest = VEncodePointer(&_V10_Dpair_D275, VPOINTER_PAIR);
  _V10_Dpair_D275.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D275.rest = VNULL;
  _V10_Dpair_D274.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D274.rest = VEncodePointer(&_V10_Dpair_D273, VPOINTER_PAIR);
  _V10_Dpair_D273.first = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D273.rest = VNULL;
  _V10_Dpair_D272.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D272.rest = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VEncodePointer(&_V10_Dpair_D232, VPOINTER_PAIR);
  _V10_Dpair_D270.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D270.rest = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D269.first = VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR);
  _V10_Dpair_D269.rest = VNULL;
  _V10_Dpair_D268.first = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D268.rest = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D267.first = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D267.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D266.first = VEncodeBool(false);
  _V10_Dpair_D266.rest = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D265.first = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D265.rest = VNULL;
  _V10_Dpair_D264.first = _V0_Mk;
  _V10_Dpair_D264.rest = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D263.first = _V0pair;
  _V10_Dpair_D263.rest = VNULL;
  _V10_Dpair_D262.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D262.rest = VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR);
  _V10_Dpair_D261.first = VEncodeBool(false);
  _V10_Dpair_D261.rest = VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR);
  _V10_Dpair_D260.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D260.rest = VNULL;
  _V10_Dpair_D259.first = _V0_Mk;
  _V10_Dpair_D259.rest = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D258.first = _V0binding;
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D257.first = _V0val;
  _V10_Dpair_D257.rest = VNULL;
  _V10_Dpair_D256.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D256.rest = VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR);
  _V10_Dpair_D255.first = VEncodePointer(&_V10_Dpair_D254, VPOINTER_PAIR);
  _V10_Dpair_D255.rest = VNULL;
  _V10_Dpair_D254.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D254.rest = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D253.first = VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR);
  _V10_Dpair_D253.rest = VEncodePointer(&_V10_Dpair_D252, VPOINTER_PAIR);
  _V10_Dpair_D252.first = VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR);
  _V10_Dpair_D252.rest = VNULL;
  _V10_Dpair_D251.first = _V0unquote;
  _V10_Dpair_D251.rest = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D250.first = _V0unmangled__env;
  _V10_Dpair_D250.rest = VNULL;
  _V10_Dpair_D249.first = VEncodeBool(false);
  _V10_Dpair_D249.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D248.first = _V0_U;
  _V10_Dpair_D248.rest = VNULL;
  _V10_Dpair_D247.first = VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR);
  _V10_Dpair_D247.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D246.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D246.rest = VNULL;
  _V10_Dpair_D245.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D245.rest = VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR);
  _V10_Dpair_D244.first = VEncodeBool(false);
  _V10_Dpair_D244.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D243.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D243.rest = VNULL;
  _V10_Dpair_D242.first = _V0vals;
  _V10_Dpair_D242.rest = VNULL;
  _V10_Dpair_D241.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D241.rest = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D240.first = VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR);
  _V10_Dpair_D240.rest = VNULL;
  _V10_Dpair_D239.first = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D239.rest = VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR);
  _V10_Dpair_D238.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D238.rest = VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR);
  _V10_Dpair_D237.first = VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR);
  _V10_Dpair_D237.rest = VNULL;
  _V10_Dpair_D236.first = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D236.rest = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D235.first = VEncodeBool(false);
  _V10_Dpair_D235.rest = VEncodePointer(&_V10_Dpair_D234, VPOINTER_PAIR);
  _V10_Dpair_D234.first = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D234.rest = VNULL;
  _V10_Dpair_D233.first = VEncodePointer(&_V10_Dpair_D230, VPOINTER_PAIR);
  _V10_Dpair_D233.rest = VEncodePointer(&_V10_Dpair_D232, VPOINTER_PAIR);
  _V10_Dpair_D232.first = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D232.rest = VNULL;
  _V10_Dpair_D231.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D231.rest = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D230.first = VEncodeBool(false);
  _V10_Dpair_D230.rest = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D229.first = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D229.rest = VNULL;
  _V10_Dpair_D228.first = _V0bindings;
  _V10_Dpair_D228.rest = VNULL;
  _V10_Dpair_D227.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D227.rest = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D226.first = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D226.rest = VNULL;
  _V10_Dpair_D225.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D225.rest = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D224.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dpair_D223, VPOINTER_PAIR);
  _V10_Dpair_D223.first = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D223.rest = VNULL;
  _V10_Dpair_D222.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR);
  _V10_Dpair_D221.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D221.rest = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D220.first = VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR);
  _V10_Dpair_D220.rest = VNULL;
  _V10_Dpair_D219.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D219.rest = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D218.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D218.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D217.first = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D217.rest = VNULL;
  _V10_Dpair_D216.first = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D216.rest = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D215.first = _V0_Mk;
  _V10_Dpair_D215.rest = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D214.first = _V0args;
  _V10_Dpair_D214.rest = VNULL;
  _V10_Dpair_D213.first = VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR);
  _V10_Dpair_D213.rest = VEncodePointer(&_V10_Dpair_D212, VPOINTER_PAIR);
  _V10_Dpair_D212.first = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D212.rest = VNULL;
  _V10_Dpair_D211.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D211.rest = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D210.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D210.rest = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D209.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D209.rest = VEncodePointer(&_V10_Dpair_D208, VPOINTER_PAIR);
  _V10_Dpair_D208.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D208.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D207.first = _V0_Mx;
  _V10_Dpair_D207.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D206.first = VEncodeBool(false);
  _V10_Dpair_D206.rest = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D205.first = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D205.rest = VNULL;
  _V10_Dpair_D204.first = _V0_Mk;
  _V10_Dpair_D204.rest = _V0args;
  _V10_Dpair_D201.first = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D201.rest = VEncodePointer(&_V10_Dpair_D200, VPOINTER_PAIR);
  _V10_Dpair_D200.first = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D200.rest = VNULL;
  _V10_Dpair_D199.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D199.rest = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D198.first = VEncodePointer(&_V10_Dpair_D185, VPOINTER_PAIR);
  _V10_Dpair_D198.rest = VEncodePointer(&_V10_Dpair_D191, VPOINTER_PAIR);
  _V10_Dpair_D197.first = _V0_Mp;
  _V10_Dpair_D197.rest = VNULL;
  _V10_Dpair_D196.first = VEncodeBool(false);
  _V10_Dpair_D196.rest = VEncodePointer(&_V10_Dpair_D195, VPOINTER_PAIR);
  _V10_Dpair_D195.first = VEncodePointer(&_V10_Dpair_D194, VPOINTER_PAIR);
  _V10_Dpair_D195.rest = VNULL;
  _V10_Dpair_D194.first = _V0lookup;
  _V10_Dpair_D194.rest = VNULL;
  _V10_Dpair_D193.first = VEncodePointer(&_V10_Dpair_D187, VPOINTER_PAIR);
  _V10_Dpair_D193.rest = VEncodePointer(&_V10_Dpair_D192, VPOINTER_PAIR);
  _V10_Dpair_D192.first = VEncodePointer(&_V10_Dpair_D191, VPOINTER_PAIR);
  _V10_Dpair_D192.rest = VNULL;
  _V10_Dpair_D191.first = VEncodePointer(&_V10_Dpair_D189, VPOINTER_PAIR);
  _V10_Dpair_D191.rest = VEncodePointer(&_V10_Dpair_D190, VPOINTER_PAIR);
  _V10_Dpair_D190.first = VEncodePointer(&_V10_Dpair_D174, VPOINTER_PAIR);
  _V10_Dpair_D190.rest = VEncodePointer(&_V10_Dpair_D137, VPOINTER_PAIR);
  _V10_Dpair_D189.first = _V0eval;
  _V10_Dpair_D189.rest = VEncodePointer(&_V10_Dpair_D188, VPOINTER_PAIR);
  _V10_Dpair_D188.first = _V0bind__formals;
  _V10_Dpair_D188.rest = VNULL;
  _V10_Dpair_D187.first = VEncodePointer(&_V10_Dpair_D182, VPOINTER_PAIR);
  _V10_Dpair_D187.rest = VEncodePointer(&_V10_Dpair_D186, VPOINTER_PAIR);
  _V10_Dpair_D186.first = VEncodePointer(&_V10_Dpair_D185, VPOINTER_PAIR);
  _V10_Dpair_D186.rest = VNULL;
  _V10_Dpair_D185.first = _V0_Mk;
  _V10_Dpair_D185.rest = VEncodePointer(&_V10_Dpair_D184, VPOINTER_PAIR);
  _V10_Dpair_D184.first = _V0expr;
  _V10_Dpair_D184.rest = VEncodePointer(&_V10_Dpair_D183, VPOINTER_PAIR);
  _V10_Dpair_D183.first = _V0env;
  _V10_Dpair_D183.rest = VNULL;
  _V10_Dpair_D182.first = _V0vanity;
  _V10_Dpair_D182.rest = VEncodePointer(&_V10_Dpair_D181, VPOINTER_PAIR);
  _V10_Dpair_D181.first = _V0compiler;
  _V10_Dpair_D181.rest = VEncodePointer(&_V10_Dpair_D180, VPOINTER_PAIR);
  _V10_Dpair_D180.first = _V0hygienic;
  _V10_Dpair_D180.rest = VEncodePointer(&_V10_Dpair_D179, VPOINTER_PAIR);
  _V10_Dpair_D179.first = _V0eval;
  _V10_Dpair_D179.rest = VEncodePointer(&_V10_Dpair_D178, VPOINTER_PAIR);
  _V10_Dpair_D178.first = _V0eval;
  _V10_Dpair_D178.rest = VNULL;
  _V10_Dpair_D177.first = VEncodePointer(&_V10_Dpair_D176, VPOINTER_PAIR);
  _V10_Dpair_D177.rest = VEncodePointer(&_V10_Dpair_D141, VPOINTER_PAIR);
  _V10_Dpair_D176.first = VEncodeBool(false);
  _V10_Dpair_D176.rest = VEncodePointer(&_V10_Dpair_D175, VPOINTER_PAIR);
  _V10_Dpair_D175.first = VEncodePointer(&_V10_Dpair_D174, VPOINTER_PAIR);
  _V10_Dpair_D175.rest = VNULL;
  _V10_Dpair_D174.first = _V0_Mk;
  _V10_Dpair_D174.rest = VEncodePointer(&_V10_Dpair_D173, VPOINTER_PAIR);
  _V10_Dpair_D173.first = _V0map;
  _V10_Dpair_D173.rest = VEncodePointer(&_V10_Dpair_D172, VPOINTER_PAIR);
  _V10_Dpair_D172.first = _V0cadr;
  _V10_Dpair_D172.rest = VEncodePointer(&_V10_Dpair_D171, VPOINTER_PAIR);
  _V10_Dpair_D171.first = _V0caddr;
  _V10_Dpair_D171.rest = VEncodePointer(&_V10_Dpair_D170, VPOINTER_PAIR);
  _V10_Dpair_D170.first = _V0cadddr;
  _V10_Dpair_D170.rest = VEncodePointer(&_V10_Dpair_D169, VPOINTER_PAIR);
  _V10_Dpair_D169.first = _V0append;
  _V10_Dpair_D169.rest = VEncodePointer(&_V10_Dpair_D168, VPOINTER_PAIR);
  _V10_Dpair_D168.first = _V0for__each;
  _V10_Dpair_D168.rest = VEncodePointer(&_V10_Dpair_D167, VPOINTER_PAIR);
  _V10_Dpair_D167.first = _V0error;
  _V10_Dpair_D167.rest = VEncodePointer(&_V10_Dpair_D166, VPOINTER_PAIR);
  _V10_Dpair_D166.first = _V0assoc;
  _V10_Dpair_D166.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D160.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D160.rest = VEncodePointer(&_V10_Dpair_D159, VPOINTER_PAIR);
  _V10_Dpair_D159.first = VEncodePointer(&_V10_Dpair_D158, VPOINTER_PAIR);
  _V10_Dpair_D159.rest = VNULL;
  _V10_Dpair_D158.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D158.rest = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D157.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D157.rest = VEncodePointer(&_V10_Dpair_D156, VPOINTER_PAIR);
  _V10_Dpair_D156.first = VEncodePointer(&_V10_Dpair_D155, VPOINTER_PAIR);
  _V10_Dpair_D156.rest = VNULL;
  _V10_Dpair_D155.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D155.rest = VEncodePointer(&_V10_Dpair_D152, VPOINTER_PAIR);
  _V10_Dpair_D154.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D154.rest = VEncodePointer(&_V10_Dpair_D153, VPOINTER_PAIR);
  _V10_Dpair_D153.first = VEncodePointer(&_V10_Dpair_D152, VPOINTER_PAIR);
  _V10_Dpair_D153.rest = VNULL;
  _V10_Dpair_D152.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D152.rest = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D151.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D151.rest = VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR);
  _V10_Dpair_D150.first = VEncodePointer(&_V10_Dpair_D149, VPOINTER_PAIR);
  _V10_Dpair_D150.rest = VNULL;
  _V10_Dpair_D149.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D149.rest = VEncodePointer(&_V10_Dpair_D146, VPOINTER_PAIR);
  _V10_Dpair_D148.first = VEncodePointer(&_V10_Dpair_D145, VPOINTER_PAIR);
  _V10_Dpair_D148.rest = VEncodePointer(&_V10_Dpair_D147, VPOINTER_PAIR);
  _V10_Dpair_D147.first = VEncodePointer(&_V10_Dpair_D146, VPOINTER_PAIR);
  _V10_Dpair_D147.rest = VNULL;
  _V10_Dpair_D146.first = VEncodePointer(&_V10_Dpair_D136, VPOINTER_PAIR);
  _V10_Dpair_D146.rest = VEncodePointer(&_V10_Dpair_D137, VPOINTER_PAIR);
  _V10_Dpair_D145.first = VEncodeBool(false);
  _V10_Dpair_D145.rest = VEncodePointer(&_V10_Dpair_D144, VPOINTER_PAIR);
  _V10_Dpair_D144.first = VEncodePointer(&_V10_Dpair_D143, VPOINTER_PAIR);
  _V10_Dpair_D144.rest = VNULL;
  _V10_Dpair_D143.first = _V0_Mx;
  _V10_Dpair_D143.rest = VNULL;
  _V10_Dpair_D142.first = VEncodePointer(&_V10_Dpair_D138, VPOINTER_PAIR);
  _V10_Dpair_D142.rest = VEncodePointer(&_V10_Dpair_D141, VPOINTER_PAIR);
  _V10_Dpair_D141.first = VEncodePointer(&_V10_Dpair_D137, VPOINTER_PAIR);
  _V10_Dpair_D141.rest = VNULL;
  _V10_Dpair_D140.first = VEncodePointer(&_V10_Dpair_D138, VPOINTER_PAIR);
  _V10_Dpair_D140.rest = VEncodePointer(&_V10_Dpair_D139, VPOINTER_PAIR);
  _V10_Dpair_D139.first = VNULL;
  _V10_Dpair_D139.rest = VNULL;
  _V10_Dpair_D138.first = VEncodeBool(false);
  _V10_Dpair_D138.rest = VEncodePointer(&_V10_Dpair_D137, VPOINTER_PAIR);
  _V10_Dpair_D137.first = VEncodePointer(&_V10_Dpair_D136, VPOINTER_PAIR);
  _V10_Dpair_D137.rest = VNULL;
  _V10_Dpair_D136.first = _V0_Mk;
  _V10_Dpair_D136.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, VEncodePointer(&_V10_Dpair_D160, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, VEncodePointer(&_V10_Dpair_D157, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, VEncodePointer(&_V10_Dpair_D154, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, VEncodePointer(&_V10_Dpair_D151, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, VEncodePointer(&_V10_Dpair_D148, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D142, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15, VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23, VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8, VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, VEncodePointer(&_V10_Dpair_D193, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D177, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D140, VPOINTER_PAIR));
}
