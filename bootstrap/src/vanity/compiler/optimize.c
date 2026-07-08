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

VEnv * _V60_V0vanity_V0compiler_V0optimize;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2360 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2359 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2358 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2357 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2356 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D2355 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2354 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static VPair _V10_Dpair_D2353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D14;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.14" };
static VPair _V10_Dpair_D2324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new__lambda;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0new__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "new-lambda" };
static VPair _V10_Dpair_D2308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.12" };
static VPair _V10_Dpair_D2296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D9;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D9 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.9" };
static VPair _V10_Dpair_D2281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D10;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D10 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.10" };
static VPair _V10_Dpair_D2279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D8;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.8" };
static VPair _V10_Dpair_D2273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.5" };
static VPair _V10_Dpair_D2258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D6;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D6 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.6" };
static VPair _V10_Dpair_D2256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rest;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0rest = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "rest" };
static VPair _V10_Dpair_D2254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.4" };
static VPair _V10_Dpair_D2248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D1;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.1" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
static VPair _V10_Dpair_D2239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0qualify__lambda;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0qualify__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "qualify-lambda" };
static VPair _V10_Dpair_D2194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lambda__rest;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0lambda__rest = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "lambda-rest" };
VWEAK VWORD _V0lamb;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lamb = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lamb" };
static VPair _V10_Dpair_D2189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dqualify__lambda_D347;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10_Dqualify__lambda_D347 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##.qualify-lambda.347" };
static VPair _V10_Dpair_D2183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0scan__bindings__loop;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0scan__bindings__loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "scan-bindings-loop" };
static VPair _V10_Dpair_D2178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rest__vals;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0rest__vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "rest-vals" };
static VPair _V10_Dpair_D2171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dscan__bindings__loop_D342;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10_Dscan__bindings__loop_D342 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##.scan-bindings-loop.342" };
static VPair _V10_Dpair_D2166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec\?" };
static VPair _V10_Dpair_D2156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
static VPair _V10_Dpair_D2153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D20;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D20 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.20" };
static VPair _V10_Dpair_D2142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D21;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.21" };
static VPair _V10_Dpair_D2140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0l;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0l = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "l" };
static VPair _V10_Dpair_D2139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2134 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static VPair _V10_Dpair_D2132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D16;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D16 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.16" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D2115 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "qualify-callsites: NO matching case" };
static VPair _V10_Dpair_D2114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D114;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D114 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.114" };
static VPair _V10_Dpair_D2100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2096 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2091 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2090 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xs_D112;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0xs_D112 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "xs.112" };
VWEAK VWORD _V0expr_D115;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D115 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.115" };
static VPair _V10_Dpair_D2084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D316;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D316 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.316" };
static VPair _V10_Dpair_D2078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D113;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D113 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.113" };
static VPair _V10_Dpair_D2073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D119;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0x_D119 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "x.119" };
static VPair _V10_Dpair_D2068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D118;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0x_D118 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "x.118" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
static VPair _V10_Dpair_D2063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D117;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0x_D117 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "x.117" };
static VPair _V10_Dpair_D2050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D111;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D111 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.111" };
static VPair _V10_Dpair_D2035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D116;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0x_D116 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "x.116" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
static VPair _V10_Dpair_D2024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D109;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D109 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.109" };
static VPair _V10_Dpair_D2014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0f;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0f = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "f" };
static VPair _V10_Dpair_D2012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D2005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static VPair _V10_Dpair_D1994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
static VPair _V10_Dpair_D1983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static VPair _V10_Dpair_D1972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D101;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D101 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.101" };
static VPair _V10_Dpair_D1951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1938 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1937 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1936 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xs__vals_D99;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0xs__vals_D99 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "xs-vals.99" };
VWEAK VWORD _V0expr_D102;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D102 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.102" };
static VPair _V10_Dpair_D1935 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D294;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D294 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.294" };
static VPair _V10_Dpair_D1929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D100;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D100 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.100" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
static VPair _V10_Dpair_D1924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1908 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0appl;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0appl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "appl" };
static VPair _V10_Dpair_D1907 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xs__vals;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0xs__vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "xs-vals" };
static VPair _V10_Dpair_D1900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0tail_D97;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0tail_D97 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "tail.97" };
VWEAK VWORD _V0head_D96;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0head_D96 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "head.96" };
static VPair _V10_Dpair_D1892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D94;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D94 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.94" };
static VPair _V10_Dpair_D1886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D95;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D95 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.95" };
VWEAK VWORD _V0cost;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cost = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cost" };
static VPair _V10_Dpair_D1884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D90;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D90 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.90" };
static VPair _V10_Dpair_D1868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D88;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D88 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.88" };
static VPair _V10_Dpair_D1863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D86;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D86 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.86" };
VWEAK VWORD _V0xs_D85;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D85 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.85" };
VWEAK VWORD _V0expr_D89;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D89 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.89" };
static VPair _V10_Dpair_D1843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D268;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D268 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.268" };
static VPair _V10_Dpair_D1837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D87;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D87 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.87" };
static VPair _V10_Dpair_D1832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
static VPair _V10_Dpair_D1828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D92;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D92 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.92" };
static VPair _V10_Dpair_D1810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D82;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D82 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.82" };
static VPair _V10_Dpair_D1803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D83;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D83 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.83" };
VWEAK VWORD _V0path;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "path" };
static VPair _V10_Dpair_D1801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D84;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D84 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.84" };
static VPair _V10_Dpair_D1800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D78;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D78 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.78" };
static VPair _V10_Dpair_D1784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D76;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D76 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.76" };
static VPair _V10_Dpair_D1779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D74;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D74 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.74" };
VWEAK VWORD _V0xs_D73;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D73 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.73" };
VWEAK VWORD _V0expr_D77;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D77 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.77" };
static VPair _V10_Dpair_D1759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D244;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D244 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.244" };
static VPair _V10_Dpair_D1753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D75;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D75 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.75" };
static VPair _V10_Dpair_D1748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D1739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D80;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D80 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.80" };
static VPair _V10_Dpair_D1721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1720 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1719 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1718 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1717 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1716 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D71;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D71 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.71" };
static VPair _V10_Dpair_D1715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D72;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D72 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.72" };
static VPair _V10_Dpair_D1714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D68;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D68 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.68" };
static VPair _V10_Dpair_D1694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1688 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1687 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1686 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D66;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D66 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.66" };
VWEAK VWORD _V0expr_D69;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D69 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.69" };
static VPair _V10_Dpair_D1678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D231;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D231 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.231" };
static VPair _V10_Dpair_D1672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1668 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D67;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D67 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.67" };
static VPair _V10_Dpair_D1667 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1666 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1665 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1664 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1663 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1662 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1661 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1660 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1659 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1658 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1657 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1656 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1655 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1654 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1653 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1652 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1651 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1650 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1649 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1648 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1647 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1646 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1645 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D61;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D61 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.61" };
static VPair _V10_Dpair_D1639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D62;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D62 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.62" };
static VPair _V10_Dpair_D1637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D63;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D63 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.63" };
static VPair _V10_Dpair_D1635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D64;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.64" };
static VPair _V10_Dpair_D1633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D65;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D65 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.65" };
static VPair _V10_Dpair_D1632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D60;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D60 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.60" };
static VPair _V10_Dpair_D1626 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1625 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1624 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1623 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1622 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1621 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1620 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1619 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1618 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1617 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1616 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1615 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D57;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D57 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.57" };
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1609 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1608 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1607 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1606 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1605 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1604 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1603 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1602 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1601 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1600 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1599 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D55;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.55" };
VWEAK VWORD _V0expr_D58;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D58 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.58" };
static VPair _V10_Dpair_D1598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D210;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D210 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.210" };
static VPair _V10_Dpair_D1592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D56;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.56" };
static VPair _V10_Dpair_D1587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D52;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D52 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.52" };
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D53;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D53 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.53" };
static VPair _V10_Dpair_D1561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D54;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D54 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.54" };
static VPair _V10_Dpair_D1560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D51;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D51 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.51" };
static VPair _V10_Dpair_D1554 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D48;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.48" };
static VPair _V10_Dpair_D1541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D46;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.46" };
VWEAK VWORD _V0expr_D49;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D49 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.49" };
static VPair _V10_Dpair_D1524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D193;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D193 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.193" };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D47;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D47 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.47" };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new__qualified__funcs;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0new__qualified__funcs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "new-qualified-funcs" };
VWEAK VWORD _V0new__vals;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0new__vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "new-vals" };
static VPair _V10_Dpair_D1498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D43;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D43 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.43" };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D44;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.44" };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D45;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D45 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.45" };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "vals" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D42;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.42" };
static VPair _V10_Dpair_D1469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D40;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D40 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.40" };
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D37;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D37 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.37" };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.38" };
static VPair _V10_Dpair_D1436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
static VPair _V10_Dpair_D1421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D34;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.34" };
static VPair _V10_Dpair_D1410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D35;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D35 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.35" };
static VPair _V10_Dpair_D1408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static VPair _V10_Dpair_D1389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cases;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cases = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cases" };
static VPair _V10_Dpair_D1380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
static VPair _V10_Dpair_D1373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D28;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D28 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.28" };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D29;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.29" };
VWEAK VWORD _V0name;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "name" };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D30;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D30 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.30" };
VWEAK VWORD _V0static_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0static_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "static\?" };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D31;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D31 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.31" };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D25;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.25" };
static VPair _V10_Dpair_D1330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D26;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D26 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.26" };
VWEAK VWORD _V0xs;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0xs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "xs" };
static VPair _V10_Dpair_D1328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0body;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0body = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "body" };
static VPair _V10_Dpair_D1326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D22;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D22 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.22" };
static VPair _V10_Dpair_D1308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0qualify__iter;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0qualify__iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "qualify-iter" };
static VPair _V10_Dpair_D1303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0qualified__funcs;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0qualified__funcs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "qualified-funcs" };
VWEAK VWORD _V0current__qualname;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0current__qualname = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "current-qualname" };
static VPair _V10_Dpair_D1298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dqualify__iter_D147;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10_Dqualify__iter_D147 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##.qualify-iter.147" };
static VPair _V10_Dpair_D1293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0scan__bindings;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0scan__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "scan-bindings" };
static VPair _V10_Dpair_D1287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D1283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0qualify__callsites;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0qualify__callsites = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "qualify-callsites" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D1258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, _var0, _var1);
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.723 0 0) (bruijn ##.%k.718 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1126 ##.%x.1127 ##.%r.1128) ((##vcore.cons (bruijn ##.%x.727 1 0) '()) (##vcore.cons (bruijn ##.xs.1120 4 0) (bruijn ##.%x.1126 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.1127 0 1))) ((bruijn ##.%k.724 2 0) (bruijn ##.%r.1128 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12) (bruijn ##.current-qualname.148 9 1) (bruijn ##.qualified-funcs.149 9 2) (bruijn ##.body.1123 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.719 0 0) (basic-block 2 2 (##.expr.25.1118 ##.%p.1119) ((##vcore.cdr (bruijn ##.expr.150 6 3)) (##vcore.pair? (bruijn ##.expr.25.1118 0 0))) (if (bruijn ##.%p.1119 0 1) (basic-block 3 3 (##.xs.1120 ##.expr.26.1121 ##.%p.1122) ((##vcore.car (bruijn ##.expr.25.1118 1 0)) (##vcore.cdr (bruijn ##.expr.25.1118 1 0)) (##vcore.pair? (bruijn ##.expr.26.1121 0 1))) (if (bruijn ##.%p.1122 0 2) (basic-block 3 3 (##.body.1123 ##.%x.1124 ##.%p.1125) ((##vcore.car (bruijn ##.expr.26.1121 1 1)) (##vcore.cdr (bruijn ##.expr.26.1121 1 1)) (##vcore.null? (bruijn ##.%x.1124 0 1))) (if (bruijn ##.%p.1125 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4) (bruijn ##.kk.22.151 7 1)) ((bruijn ##.%k.718 5 0) #f))) ((bruijn ##.%k.718 4 0) #f))) ((bruijn ##.%k.718 3 0) #f))) ((bruijn ##.%k.718 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.866 1 0) (basic-block 1 1 (##.%x.1117) ((##vcore.car (bruijn ##.expr.150 4 3))) ((bruijn ##.equal?.120 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10) 'lambda (bruijn ##.%x.1117 0 0))) ((bruijn ##.%k.718 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.708 0 0) (bruijn ##.%k.701 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1112 ##.%x.1113 ##.%x.1114 ##.%x.1115 ##.%r.1116) ((##vcore.cons (bruijn ##.%x.714 1 0) '()) (##vcore.cons (bruijn ##.xs.1106 4 0) (bruijn ##.%x.1112 0 0)) (##vcore.cons (bruijn ##.static?.1103 5 0) (bruijn ##.%x.1113 0 1)) (##vcore.cons (bruijn ##.name.1100 6 0) (bruijn ##.%x.1114 0 2)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.1115 0 3))) ((bruijn ##.%k.709 2 0) (bruijn ##.%r.1116 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17) (bruijn ##.name.1100 4 0) (bruijn ##.qualified-funcs.149 12 2) (bruijn ##.body.1109 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.702 0 0) (basic-block 2 2 (##.expr.28.1098 ##.%p.1099) ((##vcore.cdr (bruijn ##.expr.150 7 3)) (##vcore.pair? (bruijn ##.expr.28.1098 0 0))) (if (bruijn ##.%p.1099 0 1) (basic-block 3 3 (##.name.1100 ##.expr.29.1101 ##.%p.1102) ((##vcore.car (bruijn ##.expr.28.1098 1 0)) (##vcore.cdr (bruijn ##.expr.28.1098 1 0)) (##vcore.pair? (bruijn ##.expr.29.1101 0 1))) (if (bruijn ##.%p.1102 0 2) (basic-block 3 3 (##.static?.1103 ##.expr.30.1104 ##.%p.1105) ((##vcore.car (bruijn ##.expr.29.1101 1 1)) (##vcore.cdr (bruijn ##.expr.29.1101 1 1)) (##vcore.pair? (bruijn ##.expr.30.1104 0 1))) (if (bruijn ##.%p.1105 0 2) (basic-block 3 3 (##.xs.1106 ##.expr.31.1107 ##.%p.1108) ((##vcore.car (bruijn ##.expr.30.1104 1 1)) (##vcore.cdr (bruijn ##.expr.30.1104 1 1)) (##vcore.pair? (bruijn ##.expr.31.1107 0 1))) (if (bruijn ##.%p.1108 0 2) (basic-block 3 3 (##.body.1109 ##.%x.1110 ##.%p.1111) ((##vcore.car (bruijn ##.expr.31.1107 1 1)) (##vcore.cdr (bruijn ##.expr.31.1107 1 1)) (##vcore.null? (bruijn ##.%x.1110 0 1))) (if (bruijn ##.%p.1111 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5) (bruijn ##.kk.22.151 10 1)) ((bruijn ##.%k.701 7 0) #f))) ((bruijn ##.%k.701 6 0) #f))) ((bruijn ##.%k.701 5 0) #f))) ((bruijn ##.%k.701 4 0) #f))) ((bruijn ##.%k.701 3 0) #f))) ((bruijn ##.%k.701 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.867 1 0) (basic-block 1 1 (##.%x.1097) ((##vcore.car (bruijn ##.expr.150 5 3))) ((bruijn ##.equal?.120 9 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15) '##qualified-lambda (bruijn ##.%x.1097 0 0))) ((bruijn ##.%k.701 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.691 0 0) (bruijn ##.%k.689 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1093) ((##vcore.cons 'case-lambda (bruijn ##.%x.693 1 0))) ((bruijn ##.%k.692 2 0) (bruijn ##.%r.1093 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1095 ##.%r.1096) ((##vcore.cons (bruijn ##.%x.697 1 0) '()) (##vcore.cons (bruijn ##.%x.1094 3 0) (bruijn ##.%x.1095 0 0))) ((bruijn ##.%k.694 4 0) (bruijn ##.%r.1096 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24) (bruijn ##.current-qualname.148 12 1) (bruijn ##.qualified-funcs.149 12 2) (bruijn ##.%x.698 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1094) ((##vcore.car (bruijn ##.cases.169 1 1))) ((bruijn ##.cadr.126 15 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23) (bruijn ##.cases.169 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 13 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7) (bruijn ##.cases.1092 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 0 0) (basic-block 1 1 (##.cases.1092) ((##vcore.cdr (bruijn ##.expr.150 8 3))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6) (bruijn ##.kk.22.151 7 1))) ((bruijn ##.%k.689 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.868 1 0) (basic-block 1 1 (##.%x.1091) ((##vcore.car (bruijn ##.expr.150 6 3))) ((bruijn ##.equal?.120 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20) 'case-lambda (bruijn ##.%x.1091 0 0))) ((bruijn ##.%k.689 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.677 0 0) (bruijn ##.%k.673 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1085 ##.%x.1086 ##.%r.1087) ((##vcore.cons (bruijn ##.static?.1083 3 0) (bruijn ##.%x.681 1 0)) (##vcore.cons (bruijn ##.name.1080 4 0) (bruijn ##.%x.1085 0 0)) (##vcore.cons '##qualified-case-lambda (bruijn ##.%x.1086 0 1))) ((bruijn ##.%k.678 2 0) (bruijn ##.%r.1087 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1089 ##.%r.1090) ((##vcore.cons (bruijn ##.%x.685 1 0) '()) (##vcore.cons (bruijn ##.%x.1088 3 0) (bruijn ##.%x.1089 0 0))) ((bruijn ##.%k.682 4 0) (bruijn ##.%r.1090 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31) (bruijn ##.name.1080 5 0) (bruijn ##.qualified-funcs.149 15 2) (bruijn ##.%x.686 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1088) ((##vcore.car (bruijn ##.cases.176 1 1))) ((bruijn ##.cadr.126 18 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30) (bruijn ##.cases.176 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 16 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9) (bruijn ##.cases.1084 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.674 0 0) (basic-block 2 2 (##.expr.34.1078 ##.%p.1079) ((##vcore.cdr (bruijn ##.expr.150 9 3)) (##vcore.pair? (bruijn ##.expr.34.1078 0 0))) (if (bruijn ##.%p.1079 0 1) (basic-block 3 3 (##.name.1080 ##.expr.35.1081 ##.%p.1082) ((##vcore.car (bruijn ##.expr.34.1078 1 0)) (##vcore.cdr (bruijn ##.expr.34.1078 1 0)) (##vcore.pair? (bruijn ##.expr.35.1081 0 1))) (if (bruijn ##.%p.1082 0 2) (basic-block 2 2 (##.static?.1083 ##.cases.1084) ((##vcore.car (bruijn ##.expr.35.1081 1 1)) (##vcore.cdr (bruijn ##.expr.35.1081 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8) (bruijn ##.kk.22.151 10 1))) ((bruijn ##.%k.673 4 0) #f))) ((bruijn ##.%k.673 3 0) #f))) ((bruijn ##.%k.673 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8, self)))),
      VGetArg(statics, 10-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.869 1 0) (basic-block 1 1 (##.%x.1077) ((##vcore.car (bruijn ##.expr.150 7 3))) ((bruijn ##.equal?.120 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27) '##qualified-case-lambda (bruijn ##.%x.1077 0 0))) ((bruijn ##.%k.673 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.665 0 0) (bruijn ##.%k.660 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1074 ##.%x.1075 ##.%r.1076) ((##vcore.cons (bruijn ##.%x.669 1 0) '()) (##vcore.cons (bruijn ##.xs.1068 4 0) (bruijn ##.%x.1074 0 0)) (##vcore.cons 'continuation (bruijn ##.%x.1075 0 1))) ((bruijn ##.%k.666 2 0) (bruijn ##.%r.1076 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36) (bruijn ##.current-qualname.148 13 1) (bruijn ##.qualified-funcs.149 13 2) (bruijn ##.body.1071 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.661 0 0) (basic-block 2 2 (##.expr.37.1066 ##.%p.1067) ((##vcore.cdr (bruijn ##.expr.150 10 3)) (##vcore.pair? (bruijn ##.expr.37.1066 0 0))) (if (bruijn ##.%p.1067 0 1) (basic-block 3 3 (##.xs.1068 ##.expr.38.1069 ##.%p.1070) ((##vcore.car (bruijn ##.expr.37.1066 1 0)) (##vcore.cdr (bruijn ##.expr.37.1066 1 0)) (##vcore.pair? (bruijn ##.expr.38.1069 0 1))) (if (bruijn ##.%p.1070 0 2) (basic-block 3 3 (##.body.1071 ##.%x.1072 ##.%p.1073) ((##vcore.car (bruijn ##.expr.38.1069 1 1)) (##vcore.cdr (bruijn ##.expr.38.1069 1 1)) (##vcore.null? (bruijn ##.%x.1072 0 1))) (if (bruijn ##.%p.1073 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10) (bruijn ##.kk.22.151 11 1)) ((bruijn ##.%k.660 5 0) #f))) ((bruijn ##.%k.660 4 0) #f))) ((bruijn ##.%k.660 3 0) #f))) ((bruijn ##.%k.660 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.870 1 0) (basic-block 1 1 (##.%x.1065) ((##vcore.car (bruijn ##.expr.150 8 3))) ((bruijn ##.equal?.120 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34) 'continuation (bruijn ##.%x.1065 0 0))) ((bruijn ##.%k.660 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.653 0 0) (bruijn ##.%k.649 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1063 ##.%r.1064) ((##vcore.cons (bruijn ##.%x.656 1 0) '()) (##vcore.cons 'continuation (bruijn ##.%x.1063 0 0))) ((bruijn ##.%k.654 2 0) (bruijn ##.%r.1064 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41) (bruijn ##.current-qualname.148 13 1) (bruijn ##.qualified-funcs.149 13 2) (bruijn ##.body.1060 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.650 0 0) (basic-block 2 2 (##.expr.40.1058 ##.%p.1059) ((##vcore.cdr (bruijn ##.expr.150 11 3)) (##vcore.pair? (bruijn ##.expr.40.1058 0 0))) (if (bruijn ##.%p.1059 0 1) (basic-block 3 3 (##.body.1060 ##.%x.1061 ##.%p.1062) ((##vcore.car (bruijn ##.expr.40.1058 1 0)) (##vcore.cdr (bruijn ##.expr.40.1058 1 0)) (##vcore.null? (bruijn ##.%x.1061 0 1))) (if (bruijn ##.%p.1062 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11) (bruijn ##.kk.22.151 11 1)) ((bruijn ##.%k.649 4 0) #f))) ((bruijn ##.%k.649 3 0) #f))) ((bruijn ##.%k.649 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.871 1 0) (basic-block 1 1 (##.%x.1057) ((##vcore.car (bruijn ##.expr.150 9 3))) ((bruijn ##.equal?.120 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39) 'continuation (bruijn ##.%x.1057 0 0))) ((bruijn ##.%k.649 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.626 0 0) (bruijn ##.%k.619 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 23 1) (bruijn ##.%k.628 0 0) (bruijn ##.current-qualname.148 20 1) (bruijn ##.qualified-funcs.149 20 2) (bruijn ##.xs.1040 6 0) (bruijn ##.vals.199 3 1) (bruijn ##.body.1043 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1051) ((##vcore.cons (bruijn ##.%x.1050 2 2) (bruijn ##.%x.631 1 0))) ((bruijn ##.%k.629 4 0) (bruijn ##.%r.1051 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1048 ##.%x.1049 ##.%x.1050) ((##vcore.cons (bruijn ##.%x.634 1 0) '()) (##vcore.cons (bruijn ##.xs.1040 8 0) (bruijn ##.%x.1048 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.1049 0 1))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47) (bruijn ##.current-qualname.148 22 1) (bruijn ##.qualified-funcs.149 22 2) (bruijn ##.new-vals.200 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47, self))));
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46) (bruijn ##.current-qualname.148 20 1) (bruijn ##.new-qualified-funcs.201 0 2) (bruijn ##.body.1043 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46, self))));
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.627 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1047) ((##vcore.null? (bruijn ##.tail-expr.198 1 0))) (if (bruijn ##.%p.1047 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13) (bruijn ##.kk.22.151 17 1)) ((bruijn ##.%k.619 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.192 5 1) (bruijn ##.%k.643 1 0) (bruijn ##.expr.49.194 3 1) (bruijn ##.%x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1053 1 1) ((bruijn ##.reverse.129 25 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49) (bruijn ##.vals.46.195 2 2)) ((bruijn ##.%k.643 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.192 7 1) (bruijn ##.%k.638 2 0) (bruijn ##.expr.49.194 5 1) (bruijn ##.%x.639 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52) (bruijn ##.vals.46.195 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1054 ##.%x.1055 ##.%x.1056) ((##vcore.car (bruijn ##.expr.49.194 4 1)) (##vcore.cdr (bruijn ##.expr.49.194 4 1)) (##vcore.cons (bruijn ##.vals.1054 0 0) (bruijn ##.vals.46.195 4 2))) ((bruijn ##.kk.48.196 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51) (bruijn ##.%x.1055 0 1) (bruijn ##.%x.1056 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.637 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.636 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17) (bruijn ##.loop.193 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1052 ##.%p.1053) ((##vcore.pair? (bruijn ##.expr.49.194 1 1)) (##vcore.not (bruijn ##.%x.1052 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.193) #f (bruijn ##.loop.193 0 0) (bruijn ##.%k.635 1 0) (bruijn ##.expr.45.1046 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.621 0 0) (basic-block 2 2 (##.expr.43.1038 ##.%p.1039) ((##vcore.cdr (bruijn ##.expr.42.1035 3 0)) (##vcore.pair? (bruijn ##.expr.43.1038 0 0))) (if (bruijn ##.%p.1039 0 1) (basic-block 3 3 (##.xs.1040 ##.expr.44.1041 ##.%p.1042) ((##vcore.car (bruijn ##.expr.43.1038 1 0)) (##vcore.cdr (bruijn ##.expr.43.1038 1 0)) (##vcore.pair? (bruijn ##.expr.44.1041 0 1))) (if (bruijn ##.%p.1042 0 2) (basic-block 3 3 (##.body.1043 ##.%x.1044 ##.%p.1045) ((##vcore.car (bruijn ##.expr.44.1041 1 1)) (##vcore.cdr (bruijn ##.expr.44.1041 1 1)) (##vcore.null? (bruijn ##.%x.1044 0 1))) (if (bruijn ##.%p.1045 0 2) (basic-block 1 1 (##.expr.45.1046) ((##vcore.cdr (bruijn ##.expr.150 16 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16))) ((bruijn ##.%k.619 6 0) #f))) ((bruijn ##.%k.619 5 0) #f))) ((bruijn ##.%k.619 4 0) #f))) ((bruijn ##.%k.619 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.872 1 0) (basic-block 2 2 (##.expr.42.1035 ##.%p.1036) ((##vcore.car (bruijn ##.expr.150 10 3)) (##vcore.pair? (bruijn ##.expr.42.1035 0 0))) (if (bruijn ##.%p.1036 0 1) (basic-block 1 1 (##.%x.1037) ((##vcore.car (bruijn ##.expr.42.1035 1 0))) ((bruijn ##.equal?.120 15 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44) 'lambda (bruijn ##.%x.1037 0 0))) ((bruijn ##.%k.619 1 0) #f))) ((bruijn ##.%k.619 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.596 0 0) (bruijn ##.%k.589 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 24 1) (bruijn ##.%k.598 0 0) (bruijn ##.current-qualname.148 21 1) (bruijn ##.qualified-funcs.149 21 2) (bruijn ##.xs.1018 6 0) (bruijn ##.vals.216 3 1) (bruijn ##.body.1021 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1029) ((##vcore.cons (bruijn ##.%x.1028 2 2) (bruijn ##.%x.601 1 0))) ((bruijn ##.%k.599 4 0) (bruijn ##.%r.1029 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1026 ##.%x.1027 ##.%x.1028) ((##vcore.cons (bruijn ##.%x.604 1 0) '()) (##vcore.cons (bruijn ##.xs.1018 8 0) (bruijn ##.%x.1026 0 0)) (##vcore.cons 'continuation (bruijn ##.%x.1027 0 1))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58) (bruijn ##.current-qualname.148 23 1) (bruijn ##.qualified-funcs.149 23 2) (bruijn ##.new-vals.217 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 23-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57) (bruijn ##.current-qualname.148 21 1) (bruijn ##.new-qualified-funcs.218 0 2) (bruijn ##.body.1021 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57, self))));
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.597 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1025) ((##vcore.null? (bruijn ##.tail-expr.215 1 0))) (if (bruijn ##.%p.1025 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20) (bruijn ##.kk.22.151 18 1)) ((bruijn ##.%k.589 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.209 5 1) (bruijn ##.%k.613 1 0) (bruijn ##.expr.58.211 3 1) (bruijn ##.%x.614 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1031 1 1) ((bruijn ##.reverse.129 26 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60) (bruijn ##.vals.55.212 2 2)) ((bruijn ##.%k.613 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.209 7 1) (bruijn ##.%k.608 2 0) (bruijn ##.expr.58.211 5 1) (bruijn ##.%x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63) (bruijn ##.vals.55.212 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1032 ##.%x.1033 ##.%x.1034) ((##vcore.car (bruijn ##.expr.58.211 4 1)) (##vcore.cdr (bruijn ##.expr.58.211 4 1)) (##vcore.cons (bruijn ##.vals.1032 0 0) (bruijn ##.vals.55.212 4 2))) ((bruijn ##.kk.57.213 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62) (bruijn ##.%x.1033 0 1) (bruijn ##.%x.1034 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.607 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.606 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24) (bruijn ##.loop.210 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1030 ##.%p.1031) ((##vcore.pair? (bruijn ##.expr.58.211 1 1)) (##vcore.not (bruijn ##.%x.1030 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.210) #f (bruijn ##.loop.210 0 0) (bruijn ##.%k.605 1 0) (bruijn ##.expr.54.1024 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.591 0 0) (basic-block 2 2 (##.expr.52.1016 ##.%p.1017) ((##vcore.cdr (bruijn ##.expr.51.1013 3 0)) (##vcore.pair? (bruijn ##.expr.52.1016 0 0))) (if (bruijn ##.%p.1017 0 1) (basic-block 3 3 (##.xs.1018 ##.expr.53.1019 ##.%p.1020) ((##vcore.car (bruijn ##.expr.52.1016 1 0)) (##vcore.cdr (bruijn ##.expr.52.1016 1 0)) (##vcore.pair? (bruijn ##.expr.53.1019 0 1))) (if (bruijn ##.%p.1020 0 2) (basic-block 3 3 (##.body.1021 ##.%x.1022 ##.%p.1023) ((##vcore.car (bruijn ##.expr.53.1019 1 1)) (##vcore.cdr (bruijn ##.expr.53.1019 1 1)) (##vcore.null? (bruijn ##.%x.1022 0 1))) (if (bruijn ##.%p.1023 0 2) (basic-block 1 1 (##.expr.54.1024) ((##vcore.cdr (bruijn ##.expr.150 17 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23))) ((bruijn ##.%k.589 6 0) #f))) ((bruijn ##.%k.589 5 0) #f))) ((bruijn ##.%k.589 4 0) #f))) ((bruijn ##.%k.589 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.873 1 0) (basic-block 2 2 (##.expr.51.1013 ##.%p.1014) ((##vcore.car (bruijn ##.expr.150 11 3)) (##vcore.pair? (bruijn ##.expr.51.1013 0 0))) (if (bruijn ##.%p.1014 0 1) (basic-block 1 1 (##.%x.1015) ((##vcore.car (bruijn ##.expr.51.1013 1 0))) ((bruijn ##.equal?.120 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55) 'continuation (bruijn ##.%x.1015 0 0))) ((bruijn ##.%k.589 1 0) #f))) ((bruijn ##.%k.589 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.564 0 0) (bruijn ##.%k.555 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 27 1) (bruijn ##.%k.566 0 0) (bruijn ##.current-qualname.148 24 1) (bruijn ##.qualified-funcs.149 24 2) (bruijn ##.xs.994 6 0) (bruijn ##.vals.237 3 1) (bruijn ##.body.997 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1007) ((##vcore.cons (bruijn ##.%x.1006 2 4) (bruijn ##.%x.569 1 0))) ((bruijn ##.%k.567 4 0) (bruijn ##.%r.1007 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1002 ##.%x.1003 ##.%x.1004 ##.%x.1005 ##.%x.1006) ((##vcore.cons (bruijn ##.%x.574 1 0) '()) (##vcore.cons (bruijn ##.xs.994 8 0) (bruijn ##.%x.1002 0 0)) (##vcore.cons (bruijn ##.static?.991 9 0) (bruijn ##.%x.1003 0 1)) (##vcore.cons (bruijn ##.name.988 10 0) (bruijn ##.%x.1004 0 2)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.1005 0 3))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.new-vals.238 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 25 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68) (bruijn ##.name.988 8 0) (bruijn ##.new-qualified-funcs.239 0 2) (bruijn ##.body.997 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.565 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1001) ((##vcore.null? (bruijn ##.tail-expr.236 1 0))) (if (bruijn ##.%p.1001 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27) (bruijn ##.kk.22.151 21 1)) ((bruijn ##.%k.555 11 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.230 5 1) (bruijn ##.%k.583 1 0) (bruijn ##.expr.69.232 3 1) (bruijn ##.%x.584 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1009 1 1) ((bruijn ##.reverse.129 29 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71) (bruijn ##.vals.66.233 2 2)) ((bruijn ##.%k.583 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.230 7 1) (bruijn ##.%k.578 2 0) (bruijn ##.expr.69.232 5 1) (bruijn ##.%x.579 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 31 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74) (bruijn ##.vals.66.233 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1010 ##.%x.1011 ##.%x.1012) ((##vcore.car (bruijn ##.expr.69.232 4 1)) (##vcore.cdr (bruijn ##.expr.69.232 4 1)) (##vcore.cons (bruijn ##.vals.1010 0 0) (bruijn ##.vals.66.233 4 2))) ((bruijn ##.kk.68.234 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73) (bruijn ##.%x.1011 0 1) (bruijn ##.%x.1012 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.577 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.576 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31) (bruijn ##.loop.231 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1008 ##.%p.1009) ((##vcore.pair? (bruijn ##.expr.69.232 1 1)) (##vcore.not (bruijn ##.%x.1008 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.231) #f (bruijn ##.loop.231 0 0) (bruijn ##.%k.575 1 0) (bruijn ##.expr.65.1000 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.557 0 0) (basic-block 2 2 (##.expr.61.986 ##.%p.987) ((##vcore.cdr (bruijn ##.expr.60.983 3 0)) (##vcore.pair? (bruijn ##.expr.61.986 0 0))) (if (bruijn ##.%p.987 0 1) (basic-block 3 3 (##.name.988 ##.expr.62.989 ##.%p.990) ((##vcore.car (bruijn ##.expr.61.986 1 0)) (##vcore.cdr (bruijn ##.expr.61.986 1 0)) (##vcore.pair? (bruijn ##.expr.62.989 0 1))) (if (bruijn ##.%p.990 0 2) (basic-block 3 3 (##.static?.991 ##.expr.63.992 ##.%p.993) ((##vcore.car (bruijn ##.expr.62.989 1 1)) (##vcore.cdr (bruijn ##.expr.62.989 1 1)) (##vcore.pair? (bruijn ##.expr.63.992 0 1))) (if (bruijn ##.%p.993 0 2) (basic-block 3 3 (##.xs.994 ##.expr.64.995 ##.%p.996) ((##vcore.car (bruijn ##.expr.63.992 1 1)) (##vcore.cdr (bruijn ##.expr.63.992 1 1)) (##vcore.pair? (bruijn ##.expr.64.995 0 1))) (if (bruijn ##.%p.996 0 2) (basic-block 3 3 (##.body.997 ##.%x.998 ##.%p.999) ((##vcore.car (bruijn ##.expr.64.995 1 1)) (##vcore.cdr (bruijn ##.expr.64.995 1 1)) (##vcore.null? (bruijn ##.%x.998 0 1))) (if (bruijn ##.%p.999 0 2) (basic-block 1 1 (##.expr.65.1000) ((##vcore.cdr (bruijn ##.expr.150 20 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30))) ((bruijn ##.%k.555 8 0) #f))) ((bruijn ##.%k.555 7 0) #f))) ((bruijn ##.%k.555 6 0) #f))) ((bruijn ##.%k.555 5 0) #f))) ((bruijn ##.%k.555 4 0) #f))) ((bruijn ##.%k.555 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.874 1 0) (basic-block 2 2 (##.expr.60.983 ##.%p.984) ((##vcore.car (bruijn ##.expr.150 12 3)) (##vcore.pair? (bruijn ##.expr.60.983 0 0))) (if (bruijn ##.%p.984 0 1) (basic-block 1 1 (##.%x.985) ((##vcore.car (bruijn ##.expr.60.983 1 0))) ((bruijn ##.equal?.120 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66) '##qualified-lambda (bruijn ##.%x.985 0 0))) ((bruijn ##.%k.555 1 0) #f))) ((bruijn ##.%k.555 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.523 0 0) (bruijn ##.%k.517 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 25 1) (bruijn ##.%k.525 0 0) (bruijn ##.current-qualname.148 22 1) (bruijn ##.qualified-funcs.149 22 2) (bruijn ##.xs.254 5 1) (bruijn ##.vals.255 5 2) (bruijn ##.body.964 2 0) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg5 = 
      statics->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.967 ##.%x.968 ##.%r.969) ((##vcore.cons (bruijn ##.%x.530 1 0) '()) (##vcore.cons (bruijn ##.%x.528 2 0) (bruijn ##.%x.967 0 0)) (##vcore.cons 'letrec (bruijn ##.%x.968 0 1))) ((bruijn ##.%k.526 3 0) (bruijn ##.%r.969 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0letrec,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80) (bruijn ##.current-qualname.148 23 1) (bruijn ##.new-qualified-funcs.259 1 2) (bruijn ##.body.964 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.122 28 2) (bruijn ##.%k.531 1 0) (bruijn ##.x.260 1 1) (bruijn ##.%x.532 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81) (bruijn ##.current-qualname.148 23 1) (bruijn ##.new-qualified-funcs.259 1 2) (bruijn ##.val.261 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.128 26 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37) (bruijn ##.xs.254 5 1) (bruijn ##.new-vals.258 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37, self)))),
      VGetArg(statics, 5-1, 1),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.524 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.961) ((##vcore.null? (bruijn ##.tail-expr.253 1 0))) (if (bruijn ##.%p.961 0 0) (basic-block 2 2 (##.expr.80.962 ##.%p.963) ((##vcore.cdr (bruijn ##.expr.71.958 4 0)) (##vcore.pair? (bruijn ##.expr.80.962 0 0))) (if (bruijn ##.%p.963 0 1) (basic-block 3 3 (##.body.964 ##.%x.965 ##.%p.966) ((##vcore.car (bruijn ##.expr.80.962 1 0)) (##vcore.cdr (bruijn ##.expr.80.962 1 0)) (##vcore.null? (bruijn ##.%x.965 0 1))) (if (bruijn ##.%p.966 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34) (bruijn ##.kk.22.151 19 1)) ((bruijn ##.%k.517 8 0) #f))) ((bruijn ##.%k.517 7 0) #f))) ((bruijn ##.%k.517 6 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.75.243 6 1) (bruijn ##.%k.549 2 0) (bruijn ##.expr.77.245 4 1) (bruijn ##.%x.550 1 0) (bruijn ##.%x.551 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 26 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84) (bruijn ##.vals.74.247 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.971 1 1) ((bruijn ##.reverse.129 25 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83) (bruijn ##.xs.73.246 2 2)) ((bruijn ##.%k.549 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.973 1 1) (basic-block 3 3 (##.xs.974 ##.expr.79.975 ##.%p.976) ((##vcore.car (bruijn ##.expr.78.972 2 0)) (##vcore.cdr (bruijn ##.expr.78.972 2 0)) (##vcore.pair? (bruijn ##.expr.79.975 0 1))) (if (bruijn ##.%p.976 0 2) (basic-block 3 3 (##.vals.977 ##.%x.978 ##.%p.979) ((##vcore.car (bruijn ##.expr.79.975 1 1)) (##vcore.cdr (bruijn ##.expr.79.975 1 1)) (##vcore.null? (bruijn ##.%x.978 0 1))) (if (bruijn ##.%p.979 0 2) (basic-block 3 3 (##.%x.980 ##.%x.981 ##.%x.982) ((##vcore.cdr (bruijn ##.expr.77.245 8 1)) (##vcore.cons (bruijn ##.xs.974 2 0) (bruijn ##.xs.73.246 8 2)) (##vcore.cons (bruijn ##.vals.977 1 0) (bruijn ##.vals.74.247 8 3))) ((bruijn ##.kk.76.248 5 1) (bruijn ##.%k.541 3 0) (bruijn ##.%x.980 0 0) (bruijn ##.%x.981 0 1) (bruijn ##.%x.982 0 2))) ((bruijn ##.%k.541 2 0) #f))) ((bruijn ##.%k.541 1 0) #f))) ((bruijn ##.%k.541 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.75.243 8 1) (bruijn ##.%k.537 3 0) (bruijn ##.expr.77.245 6 1) (bruijn ##.%x.538 1 0) (bruijn ##.%x.539 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89) (bruijn ##.vals.74.247 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88) (bruijn ##.xs.73.246 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.78.972 ##.%p.973) ((##vcore.car (bruijn ##.expr.77.245 4 1)) (##vcore.pair? (bruijn ##.expr.78.972 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.536 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.535 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39) (bruijn ##.loop.244 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, got ~D~N"
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
  // (basic-block 2 2 (##.%x.970 ##.%p.971) ((##vcore.pair? (bruijn ##.expr.77.245 1 1)) (##vcore.not (bruijn ##.%x.970 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.244) #f (bruijn ##.loop.244 0 0) (bruijn ##.%k.534 1 0) (bruijn ##.expr.72.960 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.518 0 0) (basic-block 2 2 (##.expr.71.958 ##.%p.959) ((##vcore.cdr (bruijn ##.expr.150 15 3)) (##vcore.pair? (bruijn ##.expr.71.958 0 0))) (if (bruijn ##.%p.959 0 1) (basic-block 1 1 (##.expr.72.960) ((##vcore.car (bruijn ##.expr.71.958 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38))) ((bruijn ##.%k.517 3 0) #f))) ((bruijn ##.%k.517 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.875 1 0) (basic-block 1 1 (##.%x.957) ((##vcore.car (bruijn ##.expr.150 13 3))) ((bruijn ##.equal?.120 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77) 'letrec (bruijn ##.%x.957 0 0))) ((bruijn ##.%k.517 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.484 0 0) (bruijn ##.%k.477 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 27 1) (bruijn ##.%k.486 0 0) (bruijn ##.current-qualname.148 24 1) (bruijn ##.qualified-funcs.149 24 2) (bruijn ##.xs.278 5 1) (bruijn ##.vals.279 5 2) (bruijn ##.body.937 2 0) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg5 = 
      statics->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.940 ##.%x.941 ##.%x.942 ##.%r.943) ((##vcore.cons (bruijn ##.%x.492 1 0) '()) (##vcore.cons (bruijn ##.%x.490 2 0) (bruijn ##.%x.940 0 0)) (##vcore.cons (bruijn ##.path.930 10 0) (bruijn ##.%x.941 0 1)) (##vcore.cons '##letrec (bruijn ##.%x.942 0 2))) ((bruijn ##.%k.487 3 0) (bruijn ##.%r.943 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10letrec,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95) (bruijn ##.current-qualname.148 25 1) (bruijn ##.new-qualified-funcs.283 1 2) (bruijn ##.body.937 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95, self))));
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.122 30 2) (bruijn ##.%k.493 1 0) (bruijn ##.x.284 1 1) (bruijn ##.%x.494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 2)), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96) (bruijn ##.current-qualname.148 25 1) (bruijn ##.new-qualified-funcs.283 1 2) (bruijn ##.val.285 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96, self))));
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.128 28 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45) (bruijn ##.xs.278 5 1) (bruijn ##.new-vals.282 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45, self)))),
      VGetArg(statics, 5-1, 1),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.485 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.934) ((##vcore.null? (bruijn ##.tail-expr.277 1 0))) (if (bruijn ##.%p.934 0 0) (basic-block 2 2 (##.expr.92.935 ##.%p.936) ((##vcore.cdr (bruijn ##.expr.83.931 4 1)) (##vcore.pair? (bruijn ##.expr.92.935 0 0))) (if (bruijn ##.%p.936 0 1) (basic-block 3 3 (##.body.937 ##.%x.938 ##.%p.939) ((##vcore.car (bruijn ##.expr.92.935 1 0)) (##vcore.cdr (bruijn ##.expr.92.935 1 0)) (##vcore.null? (bruijn ##.%x.938 0 1))) (if (bruijn ##.%p.939 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42) (bruijn ##.kk.22.151 21 1)) ((bruijn ##.%k.477 9 0) #f))) ((bruijn ##.%k.477 8 0) #f))) ((bruijn ##.%k.477 7 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.267 6 1) (bruijn ##.%k.511 2 0) (bruijn ##.expr.89.269 4 1) (bruijn ##.%x.512 1 0) (bruijn ##.%x.513 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99) (bruijn ##.vals.86.271 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.945 1 1) ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98) (bruijn ##.xs.85.270 2 2)) ((bruijn ##.%k.511 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.947 1 1) (basic-block 3 3 (##.xs.948 ##.expr.91.949 ##.%p.950) ((##vcore.car (bruijn ##.expr.90.946 2 0)) (##vcore.cdr (bruijn ##.expr.90.946 2 0)) (##vcore.pair? (bruijn ##.expr.91.949 0 1))) (if (bruijn ##.%p.950 0 2) (basic-block 3 3 (##.vals.951 ##.%x.952 ##.%p.953) ((##vcore.car (bruijn ##.expr.91.949 1 1)) (##vcore.cdr (bruijn ##.expr.91.949 1 1)) (##vcore.null? (bruijn ##.%x.952 0 1))) (if (bruijn ##.%p.953 0 2) (basic-block 3 3 (##.%x.954 ##.%x.955 ##.%x.956) ((##vcore.cdr (bruijn ##.expr.89.269 8 1)) (##vcore.cons (bruijn ##.xs.948 2 0) (bruijn ##.xs.85.270 8 2)) (##vcore.cons (bruijn ##.vals.951 1 0) (bruijn ##.vals.86.271 8 3))) ((bruijn ##.kk.88.272 5 1) (bruijn ##.%k.503 3 0) (bruijn ##.%x.954 0 0) (bruijn ##.%x.955 0 1) (bruijn ##.%x.956 0 2))) ((bruijn ##.%k.503 2 0) #f))) ((bruijn ##.%k.503 1 0) #f))) ((bruijn ##.%k.503 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.267 8 1) (bruijn ##.%k.499 3 0) (bruijn ##.expr.89.269 6 1) (bruijn ##.%x.500 1 0) (bruijn ##.%x.501 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104) (bruijn ##.vals.86.271 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 29 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103) (bruijn ##.xs.85.270 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.90.946 ##.%p.947) ((##vcore.car (bruijn ##.expr.89.269 4 1)) (##vcore.pair? (bruijn ##.expr.90.946 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.498 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.497 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47) (bruijn ##.loop.268 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, got ~D~N"
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
  // (basic-block 2 2 (##.%x.944 ##.%p.945) ((##vcore.pair? (bruijn ##.expr.89.269 1 1)) (##vcore.not (bruijn ##.%x.944 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.268) #f (bruijn ##.loop.268 0 0) (bruijn ##.%k.496 1 0) (bruijn ##.expr.84.933 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.478 0 0) (basic-block 2 2 (##.expr.82.928 ##.%p.929) ((##vcore.cdr (bruijn ##.expr.150 16 3)) (##vcore.pair? (bruijn ##.expr.82.928 0 0))) (if (bruijn ##.%p.929 0 1) (basic-block 3 3 (##.path.930 ##.expr.83.931 ##.%p.932) ((##vcore.car (bruijn ##.expr.82.928 1 0)) (##vcore.cdr (bruijn ##.expr.82.928 1 0)) (##vcore.pair? (bruijn ##.expr.83.931 0 1))) (if (bruijn ##.%p.932 0 2) (basic-block 1 1 (##.expr.84.933) ((##vcore.car (bruijn ##.expr.83.931 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46))) ((bruijn ##.%k.477 4 0) #f))) ((bruijn ##.%k.477 3 0) #f))) ((bruijn ##.%k.477 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.876 1 0) (basic-block 1 1 (##.%x.927) ((##vcore.car (bruijn ##.expr.150 14 3))) ((bruijn ##.equal?.120 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92) '##letrec (bruijn ##.%x.927 0 0))) ((bruijn ##.%k.477 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.456 0 0) (bruijn ##.%k.449 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.920 ##.%r.921) ((##vcore.cons (bruijn ##.cost.912 12 0) (bruijn ##.%x.459 1 0)) (##vcore.cons 'basic-block (bruijn ##.%x.920 0 0))) ((bruijn ##.%k.457 4 0) (bruijn ##.%r.921 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0basic__block,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.123 32 3) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112) (bruijn ##.xs-vals.300 6 1) (bruijn ##.%x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112, self)))),
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 31 2) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111) (bruijn ##.%x.461 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.appl.917 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.915) ((##vcore.null? (bruijn ##.tail-expr.299 1 0))) (if (bruijn ##.%p.915 0 0) (basic-block 1 1 (##.%p.916) ((##vcore.pair? (bruijn ##.tail.97.291 3 1))) (if (bruijn ##.%p.916 0 0) (basic-block 3 3 (##.appl.917 ##.%x.918 ##.%p.919) ((##vcore.car (bruijn ##.tail.97.291 4 1)) (##vcore.cdr (bruijn ##.tail.97.291 4 1)) (##vcore.null? (bruijn ##.%x.918 0 1))) (if (bruijn ##.%p.919 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51) (bruijn ##.kk.22.151 24 1)) ((bruijn ##.%k.449 11 0) #f))) ((bruijn ##.%k.449 10 0) #f))) ((bruijn ##.%k.449 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.100.293 5 1) (bruijn ##.%k.471 1 0) (bruijn ##.expr.102.295 3 1) (bruijn ##.%x.472 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.923 1 1) ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114) (bruijn ##.xs-vals.99.296 2 2)) ((bruijn ##.%k.471 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.100.293 7 1) (bruijn ##.%k.466 2 0) (bruijn ##.expr.102.295 5 1) (bruijn ##.%x.467 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 32 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117) (bruijn ##.xs-vals.99.296 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs-vals.924 ##.%x.925 ##.%x.926) ((##vcore.car (bruijn ##.expr.102.295 4 1)) (##vcore.cdr (bruijn ##.expr.102.295 4 1)) (##vcore.cons (bruijn ##.xs-vals.924 0 0) (bruijn ##.xs-vals.99.296 4 2))) ((bruijn ##.kk.101.297 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116) (bruijn ##.%x.925 0 1) (bruijn ##.%x.926 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.465 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.464 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53) (bruijn ##.loop.294 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.922 ##.%p.923) ((##vcore.pair? (bruijn ##.expr.102.295 1 1)) (##vcore.not (bruijn ##.%x.922 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.294) #f (bruijn ##.loop.294 0 0) (bruijn ##.%k.463 1 0) (bruijn ##.head.96.290 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.914) ((##vcore.< (bruijn ##.%x.474 1 0) 1)) (if (bruijn ##.%p.914 0 0) ((bruijn ##.%k.449 6 0) #f) ((bruijn ##.split-at-right.124 24 4) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49) (bruijn ##.expr.95.913 2 1) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49, self)))),
      statics->up->vars[1],
      VEncodeInt(1l));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.450 0 0) (basic-block 2 2 (##.expr.94.910 ##.%p.911) ((##vcore.cdr (bruijn ##.expr.150 17 3)) (##vcore.pair? (bruijn ##.expr.94.910 0 0))) (if (bruijn ##.%p.911 0 1) (basic-block 2 2 (##.cost.912 ##.expr.95.913) ((##vcore.car (bruijn ##.expr.94.910 1 0)) (##vcore.cdr (bruijn ##.expr.94.910 1 0))) ((bruijn ##.num-pairs.121 22 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108) (bruijn ##.expr.95.913 0 1))) ((bruijn ##.%k.449 3 0) #f))) ((bruijn ##.%k.449 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108, self)))),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.877 1 0) (basic-block 1 1 (##.%x.909) ((##vcore.car (bruijn ##.expr.150 15 3))) ((bruijn ##.equal?.120 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107) 'basic-block (bruijn ##.%x.909 0 0))) ((bruijn ##.%k.449 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107, self)))),
      _V0basic__block,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.445 0 0) (bruijn ##.%k.443 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.446 0 0) (bruijn ##.expr.150 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.444 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55) (bruijn ##.kk.22.151 16 1)) ((bruijn ##.%k.443 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.878 1 0) (basic-block 1 1 (##.%x.908) ((##vcore.car (bruijn ##.expr.150 16 3))) ((bruijn ##.equal?.120 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120) '##intrinsic (bruijn ##.%x.908 0 0))) ((bruijn ##.%k.443 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.439 0 0) (bruijn ##.%k.437 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.440 0 0) (bruijn ##.expr.150 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.438 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56) (bruijn ##.kk.22.151 17 1)) ((bruijn ##.%k.437 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.879 1 0) (basic-block 1 1 (##.%x.907) ((##vcore.car (bruijn ##.expr.150 17 3))) ((bruijn ##.equal?.120 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124) '##basic-intrinsic (bruijn ##.%x.907 0 0))) ((bruijn ##.%k.437 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.433 0 0) (bruijn ##.%k.431 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.434 0 0) (bruijn ##.expr.150 20 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 20-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.432 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57) (bruijn ##.kk.22.151 18 1)) ((bruijn ##.%k.431 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.880 1 0) (basic-block 1 1 (##.%x.906) ((##vcore.car (bruijn ##.expr.150 18 3))) ((bruijn ##.equal?.120 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128) '##foreign.function (bruijn ##.%x.906 0 0))) ((bruijn ##.%k.431 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.427 0 0) (bruijn ##.%k.425 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.428 0 0) (bruijn ##.expr.150 21 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 21-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.426 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58) (bruijn ##.kk.22.151 19 1)) ((bruijn ##.%k.425 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.881 1 0) (basic-block 1 1 (##.%x.905) ((##vcore.car (bruijn ##.expr.150 19 3))) ((bruijn ##.equal?.120 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132) 'quote (bruijn ##.%x.905 0 0))) ((bruijn ##.%k.425 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.418 0 0) (bruijn ##.%k.415 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.903 ##.%r.904) ((##vcore.cons (bruijn ##.f.901 3 0) (bruijn ##.%x.421 1 0)) (##vcore.cons '##inline (bruijn ##.%x.903 0 0))) ((bruijn ##.%k.419 2 0) (bruijn ##.%r.904 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10inline,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (bruijn ##.%k.422 0 0) (bruijn ##.current-qualname.148 25 1) (bruijn ##.qualified-funcs.149 25 2) (bruijn ##.x.116.311 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 28 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60) (bruijn ##.xs.902 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.416 0 0) (basic-block 2 2 (##.expr.109.899 ##.%p.900) ((##vcore.cdr (bruijn ##.expr.150 22 3)) (##vcore.pair? (bruijn ##.expr.109.899 0 0))) (if (bruijn ##.%p.900 0 1) (basic-block 2 2 (##.f.901 ##.xs.902) ((##vcore.car (bruijn ##.expr.109.899 1 0)) (##vcore.cdr (bruijn ##.expr.109.899 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59) (bruijn ##.kk.22.151 22 1))) ((bruijn ##.%k.415 3 0) #f))) ((bruijn ##.%k.415 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59, self)))),
      VGetArg(statics, 22-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.882 1 0) (basic-block 1 1 (##.%x.898) ((##vcore.car (bruijn ##.expr.150 20 3))) ((bruijn ##.equal?.120 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136) '##inline (bruijn ##.%x.898 0 0))) ((bruijn ##.%k.415 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136, self)))),
      _V10inline,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.389 0 0) (bruijn ##.%k.387 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.887 1 0) ((bruijn ##.assv.125 30 5) (bruijn ##.%k.402 0 0) (bruijn ##.f.884 5 0) (bruijn ##.qualified-funcs.149 26 2)) ((bruijn ##.%k.402 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 26-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.888 ##.%x.889 ##.%x.890 ##.%r.891) ((##vcore.cons (bruijn ##.f.884 9 0) (bruijn ##.%x.396 1 0)) (##vcore.cons (bruijn ##.%x.394 2 0) (bruijn ##.%x.888 0 0)) (##vcore.cons (bruijn ##.%x.392 3 0) (bruijn ##.%x.889 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.890 0 2))) ((bruijn ##.%k.390 6 0) (bruijn ##.%r.891 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__call,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 30 0) (bruijn ##.%k.397 0 0) (bruijn ##.current-qualname.148 29 1) (bruijn ##.qualified-funcs.149 29 2) (bruijn ##.x.118.325 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 30-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 29-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 32 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63) (bruijn ##.xs.322 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.126 31 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145) (bruijn ##.x.117.323 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.892) ((##vcore.cons (bruijn ##.%x.398 2 0) (bruijn ##.%x.399 1 0))) ((bruijn ##.%k.390 5 0) (bruijn ##.%r.892 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 29 0) (bruijn ##.%k.400 0 0) (bruijn ##.current-qualname.148 28 1) (bruijn ##.qualified-funcs.149 28 2) (bruijn ##.x.119.326 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 29-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 28-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 28-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 31 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64) (bruijn ##.xs.322 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.117.323 0 0) ((bruijn ##.caddr.127 30 7) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144) (bruijn ##.x.117.323 0 0)) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.f.884 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144, self)))),
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.887) ((##vcore.symbol? (bruijn ##.f.884 4 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.886) ((##vcore.null? (bruijn ##.tail-expr.321 1 0))) (if (bruijn ##.%p.886 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62) (bruijn ##.kk.22.151 22 1)) ((bruijn ##.%k.387 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.113.315 5 1) (bruijn ##.%k.411 1 0) (bruijn ##.expr.115.317 3 1) (bruijn ##.%x.412 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.894 1 1) ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150) (bruijn ##.xs.112.318 2 2)) ((bruijn ##.%k.411 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.113.315 7 1) (bruijn ##.%k.406 2 0) (bruijn ##.expr.115.317 5 1) (bruijn ##.%x.407 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 32 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153) (bruijn ##.xs.112.318 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.895 ##.%x.896 ##.%x.897) ((##vcore.car (bruijn ##.expr.115.317 4 1)) (##vcore.cdr (bruijn ##.expr.115.317 4 1)) (##vcore.cons (bruijn ##.xs.895 0 0) (bruijn ##.xs.112.318 4 2))) ((bruijn ##.kk.114.319 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152) (bruijn ##.%x.896 0 1) (bruijn ##.%x.897 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.405 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.404 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66) (bruijn ##.loop.316 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.893 ##.%p.894) ((##vcore.pair? (bruijn ##.expr.115.317 1 1)) (##vcore.not (bruijn ##.%x.893 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.316) #f (bruijn ##.loop.316 0 0) (bruijn ##.%k.403 1 0) (bruijn ##.expr.111.885 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.883 1 0) (basic-block 2 2 (##.f.884 ##.expr.111.885) ((##vcore.car (bruijn ##.expr.150 21 3)) (##vcore.cdr (bruijn ##.expr.150 21 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65))) ((bruijn ##.%k.387 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 21-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.130 25 10) (bruijn ##.%k.383 0 0) (##string ##.string.2115) (bruijn ##.expr.150 21 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 10)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2115.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.382 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68) (bruijn ##.kk.22.151 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68, self)))),
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.384 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.385 0 0) (bruijn ##.expr.150 20 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 20-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69) (bruijn ##.kk.22.151 18 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69, self)))),
      VGetArg(statics, 18-1, 1));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.883) ((##vcore.pair? (bruijn ##.expr.150 19 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.882) ((##vcore.pair? (bruijn ##.expr.150 18 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.881) ((##vcore.pair? (bruijn ##.expr.150 17 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.880) ((##vcore.pair? (bruijn ##.expr.150 16 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.879) ((##vcore.pair? (bruijn ##.expr.150 15 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.878) ((##vcore.pair? (bruijn ##.expr.150 14 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.877) ((##vcore.pair? (bruijn ##.expr.150 13 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.876) ((##vcore.pair? (bruijn ##.expr.150 12 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.875) ((##vcore.pair? (bruijn ##.expr.150 11 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.874) ((##vcore.pair? (bruijn ##.expr.150 10 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.873) ((##vcore.pair? (bruijn ##.expr.150 9 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.872) ((##vcore.pair? (bruijn ##.expr.150 8 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.871) ((##vcore.pair? (bruijn ##.expr.150 7 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.870) ((##vcore.pair? (bruijn ##.expr.150 6 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.869) ((##vcore.pair? (bruijn ##.expr.150 5 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.868) ((##vcore.pair? (bruijn ##.expr.150 4 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.867) ((##vcore.pair? (bruijn ##.expr.150 3 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.866) ((##vcore.pair? (bruijn ##.expr.150 2 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.381 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.748 0 0) (bruijn ##.%k.746 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.749 0 0) (bruijn ##.expr.146 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.747 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71) (bruijn ##.kk.16.328 4 1)) ((bruijn ##.%k.746 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1129 1 0) (basic-block 1 1 (##.%x.1143) ((##vcore.car (bruijn ##.expr.146 5 1))) ((bruijn ##.equal?.120 7 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158) '##foreign.declare (bruijn ##.%x.1143 0 0))) ((bruijn ##.%k.746 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.738 0 0) (bruijn ##.%k.733 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1140 ##.%x.1141 ##.%r.1142) ((##vcore.cons (bruijn ##.%x.742 1 0) '()) (##vcore.cons (bruijn ##.f.1134 4 0) (bruijn ##.%x.1140 0 0)) (##vcore.cons '##vcore.declare (bruijn ##.%x.1141 0 1))) ((bruijn ##.%k.739 2 0) (bruijn ##.%r.1142 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddeclare,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164) '() '() (bruijn ##.l.1137 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164, self))));
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.734 0 0) (basic-block 2 2 (##.expr.20.1132 ##.%p.1133) ((##vcore.cdr (bruijn ##.expr.146 8 1)) (##vcore.pair? (bruijn ##.expr.20.1132 0 0))) (if (bruijn ##.%p.1133 0 1) (basic-block 3 3 (##.f.1134 ##.expr.21.1135 ##.%p.1136) ((##vcore.car (bruijn ##.expr.20.1132 1 0)) (##vcore.cdr (bruijn ##.expr.20.1132 1 0)) (##vcore.pair? (bruijn ##.expr.21.1135 0 1))) (if (bruijn ##.%p.1136 0 2) (basic-block 3 3 (##.l.1137 ##.%x.1138 ##.%p.1139) ((##vcore.car (bruijn ##.expr.21.1135 1 1)) (##vcore.cdr (bruijn ##.expr.21.1135 1 1)) (##vcore.null? (bruijn ##.%x.1138 0 1))) (if (bruijn ##.%p.1139 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72) (bruijn ##.kk.16.328 8 1)) ((bruijn ##.%k.733 5 0) #f))) ((bruijn ##.%k.733 4 0) #f))) ((bruijn ##.%k.733 3 0) #f))) ((bruijn ##.%k.733 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1130 1 0) (basic-block 1 1 (##.%x.1131) ((##vcore.car (bruijn ##.expr.146 6 1))) ((bruijn ##.equal?.120 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162) '##vcore.declare (bruijn ##.%x.1131 0 0))) ((bruijn ##.%k.733 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 4 0) (bruijn ##.%k.731 0 0) '() '() (bruijn ##.expr.146 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.730 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73) (bruijn ##.kk.16.328 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1130) ((##vcore.pair? (bruijn ##.expr.146 4 1))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1129) ((##vcore.pair? (bruijn ##.expr.146 3 1))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147")) (##vcore.call/cc (bruijn ##.%k.380 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1144 1 0) (basic-block 1 1 (##.%x.1154) ((##vcore.car (bruijn ##.xs.345 5 3))) ((bruijn ##.variable-pure?.131 9 11) (bruijn ##.%k.772 1 0) (bruijn ##.%x.1154 0 0) (bruijn ##.body.340 7 5))) ((bruijn ##.%k.772 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 11)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 7-1, 5));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1151) ((##vcore.not (bruijn ##.%x.766 1 0))) ((bruijn ##.%k.764 4 0) (bruijn ##.%r.1151 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1153) ((##vcore.not (bruijn ##.%x.768 1 0))) ((bruijn ##.%k.767 3 0) (bruijn ##.%r.1153 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1152) ((##vcore.car (bruijn ##.xs.345 9 3))) ((bruijn ##.variable-pure?.131 13 11) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171) (bruijn ##.%x.1152 0 0) (bruijn ##.x.350 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171, self)))),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.765 0 0) ((bruijn ##.any?.132 11 12) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74) (bruijn ##.vals.339 9 4)) ((bruijn ##.%k.764 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74, self)))),
      VGetArg(statics, 9-1, 4));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.763 1 0) ((bruijn ##.%k.764 0 0) (bruijn ##.%p.763 1 0)) (if (bruijn ##.letrec?.341 7 6) (basic-block 1 1 (##.%x.1150) ((##vcore.car (bruijn ##.xs.345 6 3))) ((bruijn ##.variable-pure?.131 10 11) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169) (bruijn ##.%x.1150 0 0) (bruijn ##.body.340 8 5))) ((bruijn ##.%k.764 0 0) #f)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
if(VDecodeBool(
VGetArg(statics, 7-1, 6))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169, self)))),
      self->vars[0],
      VGetArg(statics, 8-1, 5));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1145 1 0) ((bruijn ##.%k.762 0 0) '##qualified-lambda) ((bruijn ##.%k.762 0 0) '##qualified-case-lambda))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__lambda);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__case__lambda);
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1147 ##.%x.1148 ##.%r.1149) ((##vcore.cons '#f (bruijn ##.lambda-rest.349 9 2)) (##vcore.cons (bruijn ##.%x.757 1 0) (bruijn ##.%x.1147 0 0)) (##vcore.cons (bruijn ##.%x.755 4 0) (bruijn ##.%x.1148 0 1))) ((bruijn ##.%k.753 9 0) (bruijn ##.%r.1149 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.123 13 3) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176) (bruijn ##.current-qualname.336 11 1) (bruijn ##.%x.759 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176, self)))),
      VGetArg(statics, 11-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1146) ((##vcore.car (bruijn ##.xs.345 8 3))) ((bruijn ##.list.122 12 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175) (bruijn ##.%x.1146 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.754 0 0) (basic-block 1 1 (##.%p.1145) ((##vcore.eq? (bruijn ##.lamb.348 4 1) 'lambda)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174))) ((bruijn ##.%k.753 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[1],
      _V0lambda);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1144) ((##vcore.not (bruijn ##.letrec?.341 5 6))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 5-1, 6));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.134 7 14) (bruijn ##.%k.752 3 0) (bruijn ##.%x.775 0 0) (bruijn ##.qualified-funcs.343 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.846 0 0) (bruijn ##.%k.841 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1221 ##.%x.1222 ##.%x.1223 ##.%x.1224 ##.%x.1225) ((##vcore.cons (bruijn ##.%x.853 1 0) (bruijn ##.qualified-funcs.343 15 1)) (##vcore.car (bruijn ##.rest-vals.346 15 4)) (##vcore.cons (bruijn ##.%x.1222 0 1) (bruijn ##.new-vals.344 15 2)) (##vcore.cdr (bruijn ##.xs.345 15 3)) (##vcore.cdr (bruijn ##.rest-vals.346 15 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 16 0) (bruijn ##.%k.847 3 0) (bruijn ##.%x.1221 0 0) (bruijn ##.%x.1223 0 2) (bruijn ##.%x.1224 0 3) (bruijn ##.%x.1225 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VGetArg(statics, 15-1, 2));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1220) ((##vcore.car (bruijn ##.xs.345 13 3))) ((bruijn ##.list.122 17 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181) (bruijn ##.%x.1220 0 0) (bruijn ##.static?.1218 2 0) (bruijn ##.name.1215 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181, self)))),
      self->vars[0],
      statics->up->vars[0],
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.843 0 0) (basic-block 2 2 (##.expr.5.1213 ##.%p.1214) ((##vcore.cdr (bruijn ##.expr.4.1210 3 0)) (##vcore.pair? (bruijn ##.expr.5.1213 0 0))) (if (bruijn ##.%p.1214 0 1) (basic-block 3 3 (##.name.1215 ##.expr.6.1216 ##.%p.1217) ((##vcore.car (bruijn ##.expr.5.1213 1 0)) (##vcore.cdr (bruijn ##.expr.5.1213 1 0)) (##vcore.pair? (bruijn ##.expr.6.1216 0 1))) (if (bruijn ##.%p.1217 0 2) (basic-block 2 2 (##.static?.1218 ##.rest.1219) ((##vcore.car (bruijn ##.expr.6.1216 1 1)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76) (bruijn ##.kk.1.351 8 1))) ((bruijn ##.%k.841 5 0) #f))) ((bruijn ##.%k.841 4 0) #f))) ((bruijn ##.%k.841 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76, self)))),
      VGetArg(statics, 8-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1157 1 0) (basic-block 2 2 (##.expr.4.1210 ##.%p.1211) ((##vcore.car (bruijn ##.rest-vals.346 6 4)) (##vcore.pair? (bruijn ##.expr.4.1210 0 0))) (if (bruijn ##.%p.1211 0 1) (basic-block 1 1 (##.%x.1212) ((##vcore.car (bruijn ##.expr.4.1210 1 0))) ((bruijn ##.equal?.120 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179) '##qualified-lambda (bruijn ##.%x.1212 0 0))) ((bruijn ##.%k.841 1 0) #f))) ((bruijn ##.%k.841 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 4));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.830 0 0) (bruijn ##.%k.825 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1205 ##.%x.1206 ##.%x.1207 ##.%x.1208 ##.%x.1209) ((##vcore.cons (bruijn ##.%x.837 1 0) (bruijn ##.qualified-funcs.343 16 1)) (##vcore.car (bruijn ##.rest-vals.346 16 4)) (##vcore.cons (bruijn ##.%x.1206 0 1) (bruijn ##.new-vals.344 16 2)) (##vcore.cdr (bruijn ##.xs.345 16 3)) (##vcore.cdr (bruijn ##.rest-vals.346 16 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 17 0) (bruijn ##.%k.831 3 0) (bruijn ##.%x.1205 0 0) (bruijn ##.%x.1207 0 2) (bruijn ##.%x.1208 0 3) (bruijn ##.%x.1209 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 4));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VGetArg(statics, 16-1, 2));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1204) ((##vcore.car (bruijn ##.xs.345 14 3))) ((bruijn ##.list.122 18 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186) (bruijn ##.%x.1204 0 0) (bruijn ##.static?.1202 2 0) (bruijn ##.name.1199 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186, self)))),
      self->vars[0],
      statics->up->vars[0],
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.827 0 0) (basic-block 2 2 (##.expr.9.1197 ##.%p.1198) ((##vcore.cdr (bruijn ##.expr.8.1194 3 0)) (##vcore.pair? (bruijn ##.expr.9.1197 0 0))) (if (bruijn ##.%p.1198 0 1) (basic-block 3 3 (##.name.1199 ##.expr.10.1200 ##.%p.1201) ((##vcore.car (bruijn ##.expr.9.1197 1 0)) (##vcore.cdr (bruijn ##.expr.9.1197 1 0)) (##vcore.pair? (bruijn ##.expr.10.1200 0 1))) (if (bruijn ##.%p.1201 0 2) (basic-block 2 2 (##.static?.1202 ##.rest.1203) ((##vcore.car (bruijn ##.expr.10.1200 1 1)) (##vcore.cdr (bruijn ##.rest-vals.346 12 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77) (bruijn ##.kk.1.351 9 1))) ((bruijn ##.%k.825 5 0) #f))) ((bruijn ##.%k.825 4 0) #f))) ((bruijn ##.%k.825 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1158 1 0) (basic-block 2 2 (##.expr.8.1194 ##.%p.1195) ((##vcore.car (bruijn ##.rest-vals.346 7 4)) (##vcore.pair? (bruijn ##.expr.8.1194 0 0))) (if (bruijn ##.%p.1195 0 1) (basic-block 1 1 (##.%x.1196) ((##vcore.car (bruijn ##.expr.8.1194 1 0))) ((bruijn ##.equal?.120 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184) '##qualified-case-lambda (bruijn ##.%x.1196 0 0))) ((bruijn ##.%k.825 1 0) #f))) ((bruijn ##.%k.825 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 4));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.810 0 0) (bruijn ##.%k.807 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1186 ##.%x.1187 ##.%x.1188 ##.%x.1189) ((##vcore.cons (bruijn ##.%x.816 1 0) (bruijn ##.qualified-funcs.343 17 1)) (##vcore.cons (bruijn ##.new-lambda.371 4 0) (bruijn ##.new-vals.344 17 2)) (##vcore.cdr (bruijn ##.xs.345 17 3)) (##vcore.cdr (bruijn ##.rest-vals.346 17 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 18 0) (bruijn ##.%k.811 5 0) (bruijn ##.%x.1186 0 0) (bruijn ##.%x.1187 0 1) (bruijn ##.%x.1188 0 2) (bruijn ##.%x.1189 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 17-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VGetArg(statics, 17-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 19 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193) (bruijn ##.%x.1185 1 0) #f (bruijn ##.%x.818 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193, self)))),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.371 0 0) (basic-block 1 1 (##.%x.1185) ((##vcore.car (bruijn ##.xs.345 14 3))) ((bruijn ##.cadr.126 18 6) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192) (bruijn ##.new-lambda.371 1 0))) (basic-block 4 4 (##.%x.1190 ##.%x.1191 ##.%x.1192 ##.%x.1193) ((##vcore.car (bruijn ##.rest-vals.346 14 4)) (##vcore.cons (bruijn ##.%x.1190 0 0) (bruijn ##.new-vals.344 14 2)) (##vcore.cdr (bruijn ##.xs.345 14 3)) (##vcore.cdr (bruijn ##.rest-vals.346 14 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 15 0) (bruijn ##.%k.811 2 0) (bruijn ##.qualified-funcs.343 14 1) (bruijn ##.%x.1191 0 1) (bruijn ##.%x.1192 0 2) (bruijn ##.%x.1193 0 3))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192, self)))),
      statics->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 14-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342 ##.qualify-lambda.347) #f (bruijn ##.qualify-lambda.347 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191) 'lambda (bruijn ##.lambda-rest.1183 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191, self))));
    VWORD _arg1 = 
      _V0lambda;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.809 0 0) (basic-block 2 2 (##.lambda-rest.1183 ##.rest.1184) ((##vcore.cdr (bruijn ##.expr.12.1180 3 0)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78) (bruijn ##.kk.1.351 8 1))) ((bruijn ##.%k.807 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78, self)))),
      VGetArg(statics, 8-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1159 1 0) (basic-block 2 2 (##.expr.12.1180 ##.%p.1181) ((##vcore.car (bruijn ##.rest-vals.346 8 4)) (##vcore.pair? (bruijn ##.expr.12.1180 0 0))) (if (bruijn ##.%p.1181 0 1) (basic-block 1 1 (##.%x.1182) ((##vcore.car (bruijn ##.expr.12.1180 1 0))) ((bruijn ##.equal?.120 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189) 'lambda (bruijn ##.%x.1182 0 0))) ((bruijn ##.%k.807 1 0) #f))) ((bruijn ##.%k.807 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 4));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.792 0 0) (bruijn ##.%k.789 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1172 ##.%x.1173 ##.%x.1174 ##.%x.1175) ((##vcore.cons (bruijn ##.%x.798 1 0) (bruijn ##.qualified-funcs.343 18 1)) (##vcore.cons (bruijn ##.new-lambda.376 4 0) (bruijn ##.new-vals.344 18 2)) (##vcore.cdr (bruijn ##.xs.345 18 3)) (##vcore.cdr (bruijn ##.rest-vals.346 18 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 19 0) (bruijn ##.%k.793 5 0) (bruijn ##.%x.1172 0 0) (bruijn ##.%x.1173 0 1) (bruijn ##.%x.1174 0 2) (bruijn ##.%x.1175 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 18-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VGetArg(statics, 18-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 20 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200) (bruijn ##.%x.1171 1 0) #f (bruijn ##.%x.800 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200, self)))),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.376 0 0) (basic-block 1 1 (##.%x.1171) ((##vcore.car (bruijn ##.xs.345 15 3))) ((bruijn ##.cadr.126 19 6) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199) (bruijn ##.new-lambda.376 1 0))) (basic-block 4 4 (##.%x.1176 ##.%x.1177 ##.%x.1178 ##.%x.1179) ((##vcore.car (bruijn ##.rest-vals.346 15 4)) (##vcore.cons (bruijn ##.%x.1176 0 0) (bruijn ##.new-vals.344 15 2)) (##vcore.cdr (bruijn ##.xs.345 15 3)) (##vcore.cdr (bruijn ##.rest-vals.346 15 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 16 0) (bruijn ##.%k.793 2 0) (bruijn ##.qualified-funcs.343 15 1) (bruijn ##.%x.1177 0 1) (bruijn ##.%x.1178 0 2) (bruijn ##.%x.1179 0 3))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199, self)))),
      statics->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 15-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342 ##.qualify-lambda.347) #f (bruijn ##.qualify-lambda.347 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198) 'case-lambda (bruijn ##.lambda-rest.1169 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198, self))));
    VWORD _arg1 = 
      _V0case__lambda;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.791 0 0) (basic-block 2 2 (##.lambda-rest.1169 ##.rest.1170) ((##vcore.cdr (bruijn ##.expr.14.1166 3 0)) (##vcore.cdr (bruijn ##.rest-vals.346 12 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79) (bruijn ##.kk.1.351 9 1))) ((bruijn ##.%k.789 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1160 1 0) (basic-block 2 2 (##.expr.14.1166 ##.%p.1167) ((##vcore.car (bruijn ##.rest-vals.346 9 4)) (##vcore.pair? (bruijn ##.expr.14.1166 0 0))) (if (bruijn ##.%p.1167 0 1) (basic-block 1 1 (##.%x.1168) ((##vcore.car (bruijn ##.expr.14.1166 1 0))) ((bruijn ##.equal?.120 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196) 'case-lambda (bruijn ##.%x.1168 0 0))) ((bruijn ##.%k.789 1 0) #f))) ((bruijn ##.%k.789 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 4));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.782 0 0) (bruijn ##.%k.781 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1162 ##.%x.1163 ##.%x.1164 ##.%x.1165) ((##vcore.car (bruijn ##.rest-vals.346 11 4)) (##vcore.cons (bruijn ##.%x.1162 0 0) (bruijn ##.new-vals.344 11 2)) (##vcore.cdr (bruijn ##.xs.345 11 3)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 12 0) (bruijn ##.%k.783 1 0) (bruijn ##.qualified-funcs.343 11 1) (bruijn ##.%x.1163 0 1) (bruijn ##.%x.1164 0 2) (bruijn ##.%x.1165 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 11-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1161 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80) (bruijn ##.kk.1.351 6 1)) ((bruijn ##.%k.781 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.135 13 15) (bruijn ##.%k.776 6 0) (##string ##.string.2354))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D2354.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.777 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.134 14 14) (bruijn ##.%k.778 1 0) (bruijn ##.%x.779 0 0) (bruijn ##.qualified-funcs.343 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.133 13 13) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207) (##intrinsic ##vcore.cons) (bruijn ##.rest-vals.346 9 4) (bruijn ##.new-vals.344 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207, self)))),
      _V40_V10vcore_Dcons,
      VGetArg(statics, 9-1, 4),
      VGetArg(statics, 9-1, 2));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81) (bruijn ##.kk.1.351 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1161) ((##vcore.pair? (bruijn ##.rest-vals.346 8 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1160) ((##vcore.pair? (bruijn ##.rest-vals.346 7 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1159) ((##vcore.pair? (bruijn ##.rest-vals.346 6 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1158) ((##vcore.pair? (bruijn ##.rest-vals.346 5 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1157) ((##vcore.pair? (bruijn ##.rest-vals.346 4 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[4]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347")) (basic-block 2 2 (##.%x.1155 ##.%p.1156) ((##vcore.pair? (bruijn ##.xs.345 2 3)) (##vcore.not (bruijn ##.%x.1155 0 0))) (if (bruijn ##.%p.1156 0 1) ((bruijn ##.fold.133 6 13) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177) (##intrinsic ##vcore.cons) (bruijn ##.rest-vals.346 2 4) (bruijn ##.new-vals.344 2 2)) (##vcore.call/cc (bruijn ##.%k.752 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177, self)))),
      _V40_V10vcore_Dcons,
      statics->up->vars[4],
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75, self)))));
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings" };
 VRecordCall2(runtime, &dbg);
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[7]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 7, 7, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342")) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 0 0) (bruijn ##.%k.751 1 0) (bruijn ##.qualified-funcs.337 1 2) '() (bruijn ##.xs.338 1 3) (bruijn ##.vals.339 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 16) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0lambda2, got ~D~N"
  "-- expected 16~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[16]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 16, 16, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  self->vars[10] = _var10;
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  // (##letrec (vanity compiler optimize) 2 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites" (vanity compiler optimize)) (close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings" (vanity compiler optimize))) (basic-block 2 2 (##.%x.1226 ##.%r.1227) ((##vcore.cons 'qualify-callsites (bruijn ##.qualify-callsites.144 1 0)) (##vcore.cons (bruijn ##.%x.1226 0 0) '())) ((bruijn ##.%k.379 11 0) (bruijn ##.%r.1227 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0optimize = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, _V60_V0vanity_V0compiler_V0optimize))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0optimize_V20", &_V60_V0vanity_V0compiler_V0optimize);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0qualify__callsites,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0optimize_V20_V0lambda2) (##string ##.string.2355) (bruijn ##.%x.858 0 0) 'equal? 'num-pairs 'list 'append 'split-at-right 'assv 'cadr 'caddr 'map 'reverse 'compiler-error 'variable-pure? 'any? 'fold 'values 'error)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 19,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D2355.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0num__pairs,
      _V0list,
      _V0append,
      _V0split__at__right,
      _V0assv,
      _V0cadr,
      _V0caddr,
      _V0map,
      _V0reverse,
      _V0compiler__error,
      _V0variable__pure_Q,
      _V0any_Q,
      _V0fold,
      _V0values,
      _V0error);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0optimize_V20_V0k8) (bruijn ##.%x.859 6 0) (bruijn ##.%x.860 5 0) (bruijn ##.%x.861 4 0) (bruijn ##.%x.862 3 0) (bruijn ##.%x.863 2 0) (bruijn ##.%x.864 1 0) (bruijn ##.%x.865 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k8, self)))),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k7) (##string ##.string.2356))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D2356.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k6) (##string ##.string.2357))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D2357.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k5) (##string ##.string.2358))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D2358.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k4) (##string ##.string.2359))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D2359.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k3) (##string ##.string.2360))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D2360.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k2) (##string ##.string.2361))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D2361.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0optimize_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k1) (##string ##.string.2362))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D2362.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0optimize_V20 = (VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0expr_D14 = VEncodePointer(VInternSymbol(-1690545628, &_VW_V0expr_D14.sym), VPOINTER_OTHER);
  _V0new__lambda = VEncodePointer(VInternSymbol(-1527820170, &_VW_V0new__lambda.sym), VPOINTER_OTHER);
  _V0expr_D12 = VEncodePointer(VInternSymbol(-345568046, &_VW_V0expr_D12.sym), VPOINTER_OTHER);
  _V0expr_D9 = VEncodePointer(VInternSymbol(388943303, &_VW_V0expr_D9.sym), VPOINTER_OTHER);
  _V0expr_D10 = VEncodePointer(VInternSymbol(-1791402052, &_VW_V0expr_D10.sym), VPOINTER_OTHER);
  _V0expr_D8 = VEncodePointer(VInternSymbol(1024544539, &_VW_V0expr_D8.sym), VPOINTER_OTHER);
  _V0expr_D5 = VEncodePointer(VInternSymbol(-265734499, &_VW_V0expr_D5.sym), VPOINTER_OTHER);
  _V0expr_D6 = VEncodePointer(VInternSymbol(1616899195, &_VW_V0expr_D6.sym), VPOINTER_OTHER);
  _V0rest = VEncodePointer(VInternSymbol(1577985677, &_VW_V0rest.sym), VPOINTER_OTHER);
  _V0expr_D4 = VEncodePointer(VInternSymbol(1998170004, &_VW_V0expr_D4.sym), VPOINTER_OTHER);
  _V0kk_D1 = VEncodePointer(VInternSymbol(-1164357159, &_VW_V0kk_D1.sym), VPOINTER_OTHER);
  _V0qualify__lambda = VEncodePointer(VInternSymbol(-1810953442, &_VW_V0qualify__lambda.sym), VPOINTER_OTHER);
  _V0lambda__rest = VEncodePointer(VInternSymbol(1019453791, &_VW_V0lambda__rest.sym), VPOINTER_OTHER);
  _V0lamb = VEncodePointer(VInternSymbol(48544135, &_VW_V0lamb.sym), VPOINTER_OTHER);
  _V10_Dqualify__lambda_D347 = VEncodePointer(VInternSymbol(1534715556, &_VW_V10_Dqualify__lambda_D347.sym), VPOINTER_OTHER);
  _V0scan__bindings__loop = VEncodePointer(VInternSymbol(-498884544, &_VW_V0scan__bindings__loop.sym), VPOINTER_OTHER);
  _V0rest__vals = VEncodePointer(VInternSymbol(268380968, &_VW_V0rest__vals.sym), VPOINTER_OTHER);
  _V10_Dscan__bindings__loop_D342 = VEncodePointer(VInternSymbol(-1875016535, &_VW_V10_Dscan__bindings__loop_D342.sym), VPOINTER_OTHER);
  _V0letrec_Q = VEncodePointer(VInternSymbol(1293980115, &_VW_V0letrec_Q.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V0expr_D20 = VEncodePointer(VInternSymbol(-966905598, &_VW_V0expr_D20.sym), VPOINTER_OTHER);
  _V0expr_D21 = VEncodePointer(VInternSymbol(1780795813, &_VW_V0expr_D21.sym), VPOINTER_OTHER);
  _V0l = VEncodePointer(VInternSymbol(1981138773, &_VW_V0l.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V0kk_D16 = VEncodePointer(VInternSymbol(1718877731, &_VW_V0kk_D16.sym), VPOINTER_OTHER);
  _V0kk_D114 = VEncodePointer(VInternSymbol(-1558594365, &_VW_V0kk_D114.sym), VPOINTER_OTHER);
  _V0xs_D112 = VEncodePointer(VInternSymbol(2086406911, &_VW_V0xs_D112.sym), VPOINTER_OTHER);
  _V0expr_D115 = VEncodePointer(VInternSymbol(-1764473077, &_VW_V0expr_D115.sym), VPOINTER_OTHER);
  _V10_Dloop_D316 = VEncodePointer(VInternSymbol(-561960025, &_VW_V10_Dloop_D316.sym), VPOINTER_OTHER);
  _V0kk_D113 = VEncodePointer(VInternSymbol(-2045188939, &_VW_V0kk_D113.sym), VPOINTER_OTHER);
  _V0x_D119 = VEncodePointer(VInternSymbol(-670702772, &_VW_V0x_D119.sym), VPOINTER_OTHER);
  _V0x_D118 = VEncodePointer(VInternSymbol(618296855, &_VW_V0x_D118.sym), VPOINTER_OTHER);
  _V10qualified__call = VEncodePointer(VInternSymbol(1058881829, &_VW_V10qualified__call.sym), VPOINTER_OTHER);
  _V0x_D117 = VEncodePointer(VInternSymbol(1459703534, &_VW_V0x_D117.sym), VPOINTER_OTHER);
  _V0expr_D111 = VEncodePointer(VInternSymbol(-957716762, &_VW_V0expr_D111.sym), VPOINTER_OTHER);
  _V0x_D116 = VEncodePointer(VInternSymbol(-1989405473, &_VW_V0x_D116.sym), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VInternSymbol(-1641713520, &_VW_V10inline.sym), VPOINTER_OTHER);
  _V0expr_D109 = VEncodePointer(VInternSymbol(918856657, &_VW_V0expr_D109.sym), VPOINTER_OTHER);
  _V0f = VEncodePointer(VInternSymbol(-265621939, &_VW_V0f.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0kk_D101 = VEncodePointer(VInternSymbol(1268514706, &_VW_V0kk_D101.sym), VPOINTER_OTHER);
  _V0xs__vals_D99 = VEncodePointer(VInternSymbol(-1193589439, &_VW_V0xs__vals_D99.sym), VPOINTER_OTHER);
  _V0expr_D102 = VEncodePointer(VInternSymbol(-1931584259, &_VW_V0expr_D102.sym), VPOINTER_OTHER);
  _V10_Dloop_D294 = VEncodePointer(VInternSymbol(-1792929614, &_VW_V10_Dloop_D294.sym), VPOINTER_OTHER);
  _V0kk_D100 = VEncodePointer(VInternSymbol(570819453, &_VW_V0kk_D100.sym), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VInternSymbol(200115236, &_VW_V0basic__block.sym), VPOINTER_OTHER);
  _V0appl = VEncodePointer(VInternSymbol(796006506, &_VW_V0appl.sym), VPOINTER_OTHER);
  _V0xs__vals = VEncodePointer(VInternSymbol(-1443464250, &_VW_V0xs__vals.sym), VPOINTER_OTHER);
  _V0tail_D97 = VEncodePointer(VInternSymbol(-1928119082, &_VW_V0tail_D97.sym), VPOINTER_OTHER);
  _V0head_D96 = VEncodePointer(VInternSymbol(2002752140, &_VW_V0head_D96.sym), VPOINTER_OTHER);
  _V0expr_D94 = VEncodePointer(VInternSymbol(-145525802, &_VW_V0expr_D94.sym), VPOINTER_OTHER);
  _V0expr_D95 = VEncodePointer(VInternSymbol(-14191843, &_VW_V0expr_D95.sym), VPOINTER_OTHER);
  _V0cost = VEncodePointer(VInternSymbol(826591650, &_VW_V0cost.sym), VPOINTER_OTHER);
  _V0expr_D90 = VEncodePointer(VInternSymbol(-94624484, &_VW_V0expr_D90.sym), VPOINTER_OTHER);
  _V0kk_D88 = VEncodePointer(VInternSymbol(-1394486626, &_VW_V0kk_D88.sym), VPOINTER_OTHER);
  _V0vals_D86 = VEncodePointer(VInternSymbol(38796502, &_VW_V0vals_D86.sym), VPOINTER_OTHER);
  _V0xs_D85 = VEncodePointer(VInternSymbol(-1445746847, &_VW_V0xs_D85.sym), VPOINTER_OTHER);
  _V0expr_D89 = VEncodePointer(VInternSymbol(1057569076, &_VW_V0expr_D89.sym), VPOINTER_OTHER);
  _V10_Dloop_D268 = VEncodePointer(VInternSymbol(-1477231766, &_VW_V10_Dloop_D268.sym), VPOINTER_OTHER);
  _V0kk_D87 = VEncodePointer(VInternSymbol(-568321693, &_VW_V0kk_D87.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0expr_D92 = VEncodePointer(VInternSymbol(2041379585, &_VW_V0expr_D92.sym), VPOINTER_OTHER);
  _V0expr_D82 = VEncodePointer(VInternSymbol(-2113310566, &_VW_V0expr_D82.sym), VPOINTER_OTHER);
  _V0expr_D83 = VEncodePointer(VInternSymbol(-1768393229, &_VW_V0expr_D83.sym), VPOINTER_OTHER);
  _V0path = VEncodePointer(VInternSymbol(-1450499945, &_VW_V0path.sym), VPOINTER_OTHER);
  _V0expr_D84 = VEncodePointer(VInternSymbol(-1144831374, &_VW_V0expr_D84.sym), VPOINTER_OTHER);
  _V0expr_D78 = VEncodePointer(VInternSymbol(1660169941, &_VW_V0expr_D78.sym), VPOINTER_OTHER);
  _V0kk_D76 = VEncodePointer(VInternSymbol(-1698197337, &_VW_V0kk_D76.sym), VPOINTER_OTHER);
  _V0vals_D74 = VEncodePointer(VInternSymbol(2026272380, &_VW_V0vals_D74.sym), VPOINTER_OTHER);
  _V0xs_D73 = VEncodePointer(VInternSymbol(-1457547474, &_VW_V0xs_D73.sym), VPOINTER_OTHER);
  _V0expr_D77 = VEncodePointer(VInternSymbol(-287251822, &_VW_V0expr_D77.sym), VPOINTER_OTHER);
  _V10_Dloop_D244 = VEncodePointer(VInternSymbol(-1102779067, &_VW_V10_Dloop_D244.sym), VPOINTER_OTHER);
  _V0kk_D75 = VEncodePointer(VInternSymbol(1574128339, &_VW_V0kk_D75.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0expr_D80 = VEncodePointer(VInternSymbol(1237815691, &_VW_V0expr_D80.sym), VPOINTER_OTHER);
  _V0expr_D71 = VEncodePointer(VInternSymbol(1414926221, &_VW_V0expr_D71.sym), VPOINTER_OTHER);
  _V0expr_D72 = VEncodePointer(VInternSymbol(2103944736, &_VW_V0expr_D72.sym), VPOINTER_OTHER);
  _V0kk_D68 = VEncodePointer(VInternSymbol(-818337501, &_VW_V0kk_D68.sym), VPOINTER_OTHER);
  _V0vals_D66 = VEncodePointer(VInternSymbol(853202889, &_VW_V0vals_D66.sym), VPOINTER_OTHER);
  _V0expr_D69 = VEncodePointer(VInternSymbol(1291983796, &_VW_V0expr_D69.sym), VPOINTER_OTHER);
  _V10_Dloop_D231 = VEncodePointer(VInternSymbol(-857864899, &_VW_V10_Dloop_D231.sym), VPOINTER_OTHER);
  _V0kk_D67 = VEncodePointer(VInternSymbol(148153146, &_VW_V0kk_D67.sym), VPOINTER_OTHER);
  _V0expr_D61 = VEncodePointer(VInternSymbol(-362582969, &_VW_V0expr_D61.sym), VPOINTER_OTHER);
  _V0expr_D62 = VEncodePointer(VInternSymbol(-278647127, &_VW_V0expr_D62.sym), VPOINTER_OTHER);
  _V0expr_D63 = VEncodePointer(VInternSymbol(211345152, &_VW_V0expr_D63.sym), VPOINTER_OTHER);
  _V0expr_D64 = VEncodePointer(VInternSymbol(-16134672, &_VW_V0expr_D64.sym), VPOINTER_OTHER);
  _V0expr_D65 = VEncodePointer(VInternSymbol(1920185625, &_VW_V0expr_D65.sym), VPOINTER_OTHER);
  _V0expr_D60 = VEncodePointer(VInternSymbol(-1030397400, &_VW_V0expr_D60.sym), VPOINTER_OTHER);
  _V0kk_D57 = VEncodePointer(VInternSymbol(-29894160, &_VW_V0kk_D57.sym), VPOINTER_OTHER);
  _V0vals_D55 = VEncodePointer(VInternSymbol(-271032589, &_VW_V0vals_D55.sym), VPOINTER_OTHER);
  _V0expr_D58 = VEncodePointer(VInternSymbol(-1926369690, &_VW_V0expr_D58.sym), VPOINTER_OTHER);
  _V10_Dloop_D210 = VEncodePointer(VInternSymbol(-840251458, &_VW_V10_Dloop_D210.sym), VPOINTER_OTHER);
  _V0kk_D56 = VEncodePointer(VInternSymbol(2030087415, &_VW_V0kk_D56.sym), VPOINTER_OTHER);
  _V0expr_D52 = VEncodePointer(VInternSymbol(1877625635, &_VW_V0expr_D52.sym), VPOINTER_OTHER);
  _V0expr_D53 = VEncodePointer(VInternSymbol(85795106, &_VW_V0expr_D53.sym), VPOINTER_OTHER);
  _V0expr_D54 = VEncodePointer(VInternSymbol(-428344651, &_VW_V0expr_D54.sym), VPOINTER_OTHER);
  _V0expr_D51 = VEncodePointer(VInternSymbol(1921305454, &_VW_V0expr_D51.sym), VPOINTER_OTHER);
  _V0kk_D48 = VEncodePointer(VInternSymbol(-1497092583, &_VW_V0kk_D48.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0vals_D46 = VEncodePointer(VInternSymbol(1181035236, &_VW_V0vals_D46.sym), VPOINTER_OTHER);
  _V0expr_D49 = VEncodePointer(VInternSymbol(-1734803903, &_VW_V0expr_D49.sym), VPOINTER_OTHER);
  _V10_Dloop_D193 = VEncodePointer(VInternSymbol(-1596197490, &_VW_V10_Dloop_D193.sym), VPOINTER_OTHER);
  _V0kk_D47 = VEncodePointer(VInternSymbol(-1643610586, &_VW_V0kk_D47.sym), VPOINTER_OTHER);
  _V0new__qualified__funcs = VEncodePointer(VInternSymbol(1351457585, &_VW_V0new__qualified__funcs.sym), VPOINTER_OTHER);
  _V0new__vals = VEncodePointer(VInternSymbol(-1063849775, &_VW_V0new__vals.sym), VPOINTER_OTHER);
  _V0expr_D43 = VEncodePointer(VInternSymbol(-858196652, &_VW_V0expr_D43.sym), VPOINTER_OTHER);
  _V0expr_D44 = VEncodePointer(VInternSymbol(166717540, &_VW_V0expr_D44.sym), VPOINTER_OTHER);
  _V0expr_D45 = VEncodePointer(VInternSymbol(281621129, &_VW_V0expr_D45.sym), VPOINTER_OTHER);
  _V0vals = VEncodePointer(VInternSymbol(900385374, &_VW_V0vals.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V0expr_D42 = VEncodePointer(VInternSymbol(-1983730220, &_VW_V0expr_D42.sym), VPOINTER_OTHER);
  _V0expr_D40 = VEncodePointer(VInternSymbol(-1817317687, &_VW_V0expr_D40.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V0expr_D37 = VEncodePointer(VInternSymbol(10786770, &_VW_V0expr_D37.sym), VPOINTER_OTHER);
  _V0expr_D38 = VEncodePointer(VInternSymbol(1190420271, &_VW_V0expr_D38.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0expr_D34 = VEncodePointer(VInternSymbol(2072463023, &_VW_V0expr_D34.sym), VPOINTER_OTHER);
  _V0expr_D35 = VEncodePointer(VInternSymbol(-913066290, &_VW_V0expr_D35.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0cases = VEncodePointer(VInternSymbol(1333321918, &_VW_V0cases.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0expr_D28 = VEncodePointer(VInternSymbol(-1579429271, &_VW_V0expr_D28.sym), VPOINTER_OTHER);
  _V0expr_D29 = VEncodePointer(VInternSymbol(-206703007, &_VW_V0expr_D29.sym), VPOINTER_OTHER);
  _V0name = VEncodePointer(VInternSymbol(1249508717, &_VW_V0name.sym), VPOINTER_OTHER);
  _V0expr_D30 = VEncodePointer(VInternSymbol(-177645212, &_VW_V0expr_D30.sym), VPOINTER_OTHER);
  _V0static_Q = VEncodePointer(VInternSymbol(-717454776, &_VW_V0static_Q.sym), VPOINTER_OTHER);
  _V0expr_D31 = VEncodePointer(VInternSymbol(-307722423, &_VW_V0expr_D31.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0expr_D25 = VEncodePointer(VInternSymbol(733883527, &_VW_V0expr_D25.sym), VPOINTER_OTHER);
  _V0expr_D26 = VEncodePointer(VInternSymbol(-555246409, &_VW_V0expr_D26.sym), VPOINTER_OTHER);
  _V0xs = VEncodePointer(VInternSymbol(-55341891, &_VW_V0xs.sym), VPOINTER_OTHER);
  _V0body = VEncodePointer(VInternSymbol(826092815, &_VW_V0body.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0kk_D22 = VEncodePointer(VInternSymbol(919253667, &_VW_V0kk_D22.sym), VPOINTER_OTHER);
  _V0qualify__iter = VEncodePointer(VInternSymbol(-232128718, &_VW_V0qualify__iter.sym), VPOINTER_OTHER);
  _V0qualified__funcs = VEncodePointer(VInternSymbol(-558343721, &_VW_V0qualified__funcs.sym), VPOINTER_OTHER);
  _V0current__qualname = VEncodePointer(VInternSymbol(139452063, &_VW_V0current__qualname.sym), VPOINTER_OTHER);
  _V10_Dqualify__iter_D147 = VEncodePointer(VInternSymbol(-1070382940, &_VW_V10_Dqualify__iter_D147.sym), VPOINTER_OTHER);
  _V0scan__bindings = VEncodePointer(VInternSymbol(-2044009932, &_VW_V0scan__bindings.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0qualify__callsites = VEncodePointer(VInternSymbol(1657397746, &_VW_V0qualify__callsites.sym), VPOINTER_OTHER);
  _V0optimize = VEncodePointer(VInternSymbol(264702816, &_VW_V0optimize.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VInternSymbol(-147461932, &_VW_V0any_Q.sym), VPOINTER_OTHER);
  _V0variable__pure_Q = VEncodePointer(VInternSymbol(426375154, &_VW_V0variable__pure_Q.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D2353.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2353.rest = VEncodePointer(&_V10_Dpair_D2347, VPOINTER_PAIR);
  _V10_Dpair_D2352.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2352.rest = VEncodePointer(&_V10_Dpair_D2350, VPOINTER_PAIR);
  _V10_Dpair_D2351.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2351.rest = VEncodePointer(&_V10_Dpair_D2350, VPOINTER_PAIR);
  _V10_Dpair_D2350.first = VEncodePointer(&_V10_Dpair_D2349, VPOINTER_PAIR);
  _V10_Dpair_D2350.rest = VNULL;
  _V10_Dpair_D2349.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2349.rest = VEncodePointer(&_V10_Dpair_D2346, VPOINTER_PAIR);
  _V10_Dpair_D2348.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2348.rest = VEncodePointer(&_V10_Dpair_D2347, VPOINTER_PAIR);
  _V10_Dpair_D2347.first = VEncodePointer(&_V10_Dpair_D2346, VPOINTER_PAIR);
  _V10_Dpair_D2347.rest = VNULL;
  _V10_Dpair_D2346.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2346.rest = VEncodePointer(&_V10_Dpair_D2322, VPOINTER_PAIR);
  _V10_Dpair_D2345.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2345.rest = VEncodePointer(&_V10_Dpair_D2344, VPOINTER_PAIR);
  _V10_Dpair_D2344.first = VEncodePointer(&_V10_Dpair_D2343, VPOINTER_PAIR);
  _V10_Dpair_D2344.rest = VNULL;
  _V10_Dpair_D2343.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2343.rest = VEncodePointer(&_V10_Dpair_D2340, VPOINTER_PAIR);
  _V10_Dpair_D2342.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2342.rest = VEncodePointer(&_V10_Dpair_D2341, VPOINTER_PAIR);
  _V10_Dpair_D2341.first = VEncodePointer(&_V10_Dpair_D2340, VPOINTER_PAIR);
  _V10_Dpair_D2341.rest = VNULL;
  _V10_Dpair_D2340.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2340.rest = VEncodePointer(&_V10_Dpair_D2339, VPOINTER_PAIR);
  _V10_Dpair_D2339.first = VEncodePointer(&_V10_Dpair_D2309, VPOINTER_PAIR);
  _V10_Dpair_D2339.rest = VEncodePointer(&_V10_Dpair_D2336, VPOINTER_PAIR);
  _V10_Dpair_D2338.first = VEncodePointer(&_V10_Dpair_D2311, VPOINTER_PAIR);
  _V10_Dpair_D2338.rest = VEncodePointer(&_V10_Dpair_D2337, VPOINTER_PAIR);
  _V10_Dpair_D2337.first = VEncodePointer(&_V10_Dpair_D2336, VPOINTER_PAIR);
  _V10_Dpair_D2337.rest = VNULL;
  _V10_Dpair_D2336.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2336.rest = VEncodePointer(&_V10_Dpair_D2332, VPOINTER_PAIR);
  _V10_Dpair_D2335.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2335.rest = VEncodePointer(&_V10_Dpair_D2333, VPOINTER_PAIR);
  _V10_Dpair_D2334.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2334.rest = VEncodePointer(&_V10_Dpair_D2333, VPOINTER_PAIR);
  _V10_Dpair_D2333.first = VEncodePointer(&_V10_Dpair_D2332, VPOINTER_PAIR);
  _V10_Dpair_D2333.rest = VNULL;
  _V10_Dpair_D2332.first = VEncodePointer(&_V10_Dpair_D2303, VPOINTER_PAIR);
  _V10_Dpair_D2332.rest = VEncodePointer(&_V10_Dpair_D2331, VPOINTER_PAIR);
  _V10_Dpair_D2331.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2331.rest = VEncodePointer(&_V10_Dpair_D2328, VPOINTER_PAIR);
  _V10_Dpair_D2330.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2330.rest = VEncodePointer(&_V10_Dpair_D2329, VPOINTER_PAIR);
  _V10_Dpair_D2329.first = VEncodePointer(&_V10_Dpair_D2328, VPOINTER_PAIR);
  _V10_Dpair_D2329.rest = VNULL;
  _V10_Dpair_D2328.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2328.rest = VEncodePointer(&_V10_Dpair_D2327, VPOINTER_PAIR);
  _V10_Dpair_D2327.first = VEncodePointer(&_V10_Dpair_D2325, VPOINTER_PAIR);
  _V10_Dpair_D2327.rest = VEncodePointer(&_V10_Dpair_D2326, VPOINTER_PAIR);
  _V10_Dpair_D2326.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2326.rest = VEncodePointer(&_V10_Dpair_D2322, VPOINTER_PAIR);
  _V10_Dpair_D2325.first = _V0expr_D14;
  _V10_Dpair_D2325.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2324.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2324.rest = VEncodePointer(&_V10_Dpair_D2323, VPOINTER_PAIR);
  _V10_Dpair_D2323.first = VEncodePointer(&_V10_Dpair_D2322, VPOINTER_PAIR);
  _V10_Dpair_D2323.rest = VNULL;
  _V10_Dpair_D2322.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2322.rest = VEncodePointer(&_V10_Dpair_D2294, VPOINTER_PAIR);
  _V10_Dpair_D2321.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2321.rest = VEncodePointer(&_V10_Dpair_D2320, VPOINTER_PAIR);
  _V10_Dpair_D2320.first = VEncodePointer(&_V10_Dpair_D2319, VPOINTER_PAIR);
  _V10_Dpair_D2320.rest = VNULL;
  _V10_Dpair_D2319.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2319.rest = VEncodePointer(&_V10_Dpair_D2316, VPOINTER_PAIR);
  _V10_Dpair_D2318.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2318.rest = VEncodePointer(&_V10_Dpair_D2317, VPOINTER_PAIR);
  _V10_Dpair_D2317.first = VEncodePointer(&_V10_Dpair_D2316, VPOINTER_PAIR);
  _V10_Dpair_D2317.rest = VNULL;
  _V10_Dpair_D2316.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2316.rest = VEncodePointer(&_V10_Dpair_D2315, VPOINTER_PAIR);
  _V10_Dpair_D2315.first = VEncodePointer(&_V10_Dpair_D2309, VPOINTER_PAIR);
  _V10_Dpair_D2315.rest = VEncodePointer(&_V10_Dpair_D2312, VPOINTER_PAIR);
  _V10_Dpair_D2314.first = VEncodePointer(&_V10_Dpair_D2311, VPOINTER_PAIR);
  _V10_Dpair_D2314.rest = VEncodePointer(&_V10_Dpair_D2313, VPOINTER_PAIR);
  _V10_Dpair_D2313.first = VEncodePointer(&_V10_Dpair_D2312, VPOINTER_PAIR);
  _V10_Dpair_D2313.rest = VNULL;
  _V10_Dpair_D2312.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2312.rest = VEncodePointer(&_V10_Dpair_D2305, VPOINTER_PAIR);
  _V10_Dpair_D2311.first = VEncodeBool(false);
  _V10_Dpair_D2311.rest = VEncodePointer(&_V10_Dpair_D2310, VPOINTER_PAIR);
  _V10_Dpair_D2310.first = VEncodePointer(&_V10_Dpair_D2309, VPOINTER_PAIR);
  _V10_Dpair_D2310.rest = VNULL;
  _V10_Dpair_D2309.first = _V0new__lambda;
  _V10_Dpair_D2309.rest = VNULL;
  _V10_Dpair_D2308.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2308.rest = VEncodePointer(&_V10_Dpair_D2306, VPOINTER_PAIR);
  _V10_Dpair_D2307.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2307.rest = VEncodePointer(&_V10_Dpair_D2306, VPOINTER_PAIR);
  _V10_Dpair_D2306.first = VEncodePointer(&_V10_Dpair_D2305, VPOINTER_PAIR);
  _V10_Dpair_D2306.rest = VNULL;
  _V10_Dpair_D2305.first = VEncodePointer(&_V10_Dpair_D2303, VPOINTER_PAIR);
  _V10_Dpair_D2305.rest = VEncodePointer(&_V10_Dpair_D2304, VPOINTER_PAIR);
  _V10_Dpair_D2304.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2304.rest = VEncodePointer(&_V10_Dpair_D2300, VPOINTER_PAIR);
  _V10_Dpair_D2303.first = _V0lambda__rest;
  _V10_Dpair_D2303.rest = VEncodePointer(&_V10_Dpair_D2255, VPOINTER_PAIR);
  _V10_Dpair_D2302.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2302.rest = VEncodePointer(&_V10_Dpair_D2301, VPOINTER_PAIR);
  _V10_Dpair_D2301.first = VEncodePointer(&_V10_Dpair_D2300, VPOINTER_PAIR);
  _V10_Dpair_D2301.rest = VNULL;
  _V10_Dpair_D2300.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2300.rest = VEncodePointer(&_V10_Dpair_D2299, VPOINTER_PAIR);
  _V10_Dpair_D2299.first = VEncodePointer(&_V10_Dpair_D2297, VPOINTER_PAIR);
  _V10_Dpair_D2299.rest = VEncodePointer(&_V10_Dpair_D2298, VPOINTER_PAIR);
  _V10_Dpair_D2298.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2298.rest = VEncodePointer(&_V10_Dpair_D2294, VPOINTER_PAIR);
  _V10_Dpair_D2297.first = _V0expr_D12;
  _V10_Dpair_D2297.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2296.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2296.rest = VEncodePointer(&_V10_Dpair_D2295, VPOINTER_PAIR);
  _V10_Dpair_D2295.first = VEncodePointer(&_V10_Dpair_D2294, VPOINTER_PAIR);
  _V10_Dpair_D2295.rest = VNULL;
  _V10_Dpair_D2294.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2294.rest = VEncodePointer(&_V10_Dpair_D2271, VPOINTER_PAIR);
  _V10_Dpair_D2293.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2293.rest = VEncodePointer(&_V10_Dpair_D2292, VPOINTER_PAIR);
  _V10_Dpair_D2292.first = VEncodePointer(&_V10_Dpair_D2291, VPOINTER_PAIR);
  _V10_Dpair_D2292.rest = VNULL;
  _V10_Dpair_D2291.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2291.rest = VEncodePointer(&_V10_Dpair_D2290, VPOINTER_PAIR);
  _V10_Dpair_D2290.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2290.rest = VEncodePointer(&_V10_Dpair_D2286, VPOINTER_PAIR);
  _V10_Dpair_D2289.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2289.rest = VEncodePointer(&_V10_Dpair_D2287, VPOINTER_PAIR);
  _V10_Dpair_D2288.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2288.rest = VEncodePointer(&_V10_Dpair_D2287, VPOINTER_PAIR);
  _V10_Dpair_D2287.first = VEncodePointer(&_V10_Dpair_D2286, VPOINTER_PAIR);
  _V10_Dpair_D2287.rest = VNULL;
  _V10_Dpair_D2286.first = VEncodePointer(&_V10_Dpair_D2256, VPOINTER_PAIR);
  _V10_Dpair_D2286.rest = VEncodePointer(&_V10_Dpair_D2285, VPOINTER_PAIR);
  _V10_Dpair_D2285.first = VEncodePointer(&_V10_Dpair_D2281, VPOINTER_PAIR);
  _V10_Dpair_D2285.rest = VEncodePointer(&_V10_Dpair_D2284, VPOINTER_PAIR);
  _V10_Dpair_D2284.first = VEncodePointer(&_V10_Dpair_D2282, VPOINTER_PAIR);
  _V10_Dpair_D2284.rest = VEncodePointer(&_V10_Dpair_D2283, VPOINTER_PAIR);
  _V10_Dpair_D2283.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2283.rest = VEncodePointer(&_V10_Dpair_D2277, VPOINTER_PAIR);
  _V10_Dpair_D2282.first = _V0expr_D9;
  _V10_Dpair_D2282.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2281.first = _V0name;
  _V10_Dpair_D2281.rest = VEncodePointer(&_V10_Dpair_D2280, VPOINTER_PAIR);
  _V10_Dpair_D2280.first = _V0expr_D10;
  _V10_Dpair_D2280.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2279.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2279.rest = VEncodePointer(&_V10_Dpair_D2278, VPOINTER_PAIR);
  _V10_Dpair_D2278.first = VEncodePointer(&_V10_Dpair_D2277, VPOINTER_PAIR);
  _V10_Dpair_D2278.rest = VNULL;
  _V10_Dpair_D2277.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2277.rest = VEncodePointer(&_V10_Dpair_D2276, VPOINTER_PAIR);
  _V10_Dpair_D2276.first = VEncodePointer(&_V10_Dpair_D2274, VPOINTER_PAIR);
  _V10_Dpair_D2276.rest = VEncodePointer(&_V10_Dpair_D2275, VPOINTER_PAIR);
  _V10_Dpair_D2275.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2275.rest = VEncodePointer(&_V10_Dpair_D2271, VPOINTER_PAIR);
  _V10_Dpair_D2274.first = _V0expr_D8;
  _V10_Dpair_D2274.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2273.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2273.rest = VEncodePointer(&_V10_Dpair_D2272, VPOINTER_PAIR);
  _V10_Dpair_D2272.first = VEncodePointer(&_V10_Dpair_D2271, VPOINTER_PAIR);
  _V10_Dpair_D2272.rest = VNULL;
  _V10_Dpair_D2271.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2271.rest = VEncodePointer(&_V10_Dpair_D2246, VPOINTER_PAIR);
  _V10_Dpair_D2270.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2270.rest = VEncodePointer(&_V10_Dpair_D2269, VPOINTER_PAIR);
  _V10_Dpair_D2269.first = VEncodePointer(&_V10_Dpair_D2268, VPOINTER_PAIR);
  _V10_Dpair_D2269.rest = VNULL;
  _V10_Dpair_D2268.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2268.rest = VEncodePointer(&_V10_Dpair_D2267, VPOINTER_PAIR);
  _V10_Dpair_D2267.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2267.rest = VEncodePointer(&_V10_Dpair_D2263, VPOINTER_PAIR);
  _V10_Dpair_D2266.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2266.rest = VEncodePointer(&_V10_Dpair_D2264, VPOINTER_PAIR);
  _V10_Dpair_D2265.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2265.rest = VEncodePointer(&_V10_Dpair_D2264, VPOINTER_PAIR);
  _V10_Dpair_D2264.first = VEncodePointer(&_V10_Dpair_D2263, VPOINTER_PAIR);
  _V10_Dpair_D2264.rest = VNULL;
  _V10_Dpair_D2263.first = VEncodePointer(&_V10_Dpair_D2256, VPOINTER_PAIR);
  _V10_Dpair_D2263.rest = VEncodePointer(&_V10_Dpair_D2262, VPOINTER_PAIR);
  _V10_Dpair_D2262.first = VEncodePointer(&_V10_Dpair_D2258, VPOINTER_PAIR);
  _V10_Dpair_D2262.rest = VEncodePointer(&_V10_Dpair_D2261, VPOINTER_PAIR);
  _V10_Dpair_D2261.first = VEncodePointer(&_V10_Dpair_D2259, VPOINTER_PAIR);
  _V10_Dpair_D2261.rest = VEncodePointer(&_V10_Dpair_D2260, VPOINTER_PAIR);
  _V10_Dpair_D2260.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2260.rest = VEncodePointer(&_V10_Dpair_D2252, VPOINTER_PAIR);
  _V10_Dpair_D2259.first = _V0expr_D5;
  _V10_Dpair_D2259.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2258.first = _V0name;
  _V10_Dpair_D2258.rest = VEncodePointer(&_V10_Dpair_D2257, VPOINTER_PAIR);
  _V10_Dpair_D2257.first = _V0expr_D6;
  _V10_Dpair_D2257.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2256.first = _V0static_Q;
  _V10_Dpair_D2256.rest = VEncodePointer(&_V10_Dpair_D2255, VPOINTER_PAIR);
  _V10_Dpair_D2255.first = _V0rest;
  _V10_Dpair_D2255.rest = VNULL;
  _V10_Dpair_D2254.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2254.rest = VEncodePointer(&_V10_Dpair_D2253, VPOINTER_PAIR);
  _V10_Dpair_D2253.first = VEncodePointer(&_V10_Dpair_D2252, VPOINTER_PAIR);
  _V10_Dpair_D2253.rest = VNULL;
  _V10_Dpair_D2252.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2252.rest = VEncodePointer(&_V10_Dpair_D2251, VPOINTER_PAIR);
  _V10_Dpair_D2251.first = VEncodePointer(&_V10_Dpair_D2249, VPOINTER_PAIR);
  _V10_Dpair_D2251.rest = VEncodePointer(&_V10_Dpair_D2250, VPOINTER_PAIR);
  _V10_Dpair_D2250.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2250.rest = VEncodePointer(&_V10_Dpair_D2246, VPOINTER_PAIR);
  _V10_Dpair_D2249.first = _V0expr_D4;
  _V10_Dpair_D2249.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2248.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2248.rest = VEncodePointer(&_V10_Dpair_D2247, VPOINTER_PAIR);
  _V10_Dpair_D2247.first = VEncodePointer(&_V10_Dpair_D2246, VPOINTER_PAIR);
  _V10_Dpair_D2247.rest = VNULL;
  _V10_Dpair_D2246.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2246.rest = VEncodePointer(&_V10_Dpair_D2245, VPOINTER_PAIR);
  _V10_Dpair_D2245.first = VEncodePointer(&_V10_Dpair_D2241, VPOINTER_PAIR);
  _V10_Dpair_D2245.rest = VEncodePointer(&_V10_Dpair_D2237, VPOINTER_PAIR);
  _V10_Dpair_D2244.first = VEncodePointer(&_V10_Dpair_D2243, VPOINTER_PAIR);
  _V10_Dpair_D2244.rest = VEncodePointer(&_V10_Dpair_D2238, VPOINTER_PAIR);
  _V10_Dpair_D2243.first = VEncodeBool(false);
  _V10_Dpair_D2243.rest = VEncodePointer(&_V10_Dpair_D2242, VPOINTER_PAIR);
  _V10_Dpair_D2242.first = VEncodePointer(&_V10_Dpair_D2241, VPOINTER_PAIR);
  _V10_Dpair_D2242.rest = VNULL;
  _V10_Dpair_D2241.first = _V0_Mk;
  _V10_Dpair_D2241.rest = VEncodePointer(&_V10_Dpair_D2240, VPOINTER_PAIR);
  _V10_Dpair_D2240.first = _V0kk_D1;
  _V10_Dpair_D2240.rest = VNULL;
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V10_Dpair_D2239.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2239.rest = VEncodePointer(&_V10_Dpair_D2238, VPOINTER_PAIR);
  _V10_Dpair_D2238.first = VEncodePointer(&_V10_Dpair_D2237, VPOINTER_PAIR);
  _V10_Dpair_D2238.rest = VNULL;
  _V10_Dpair_D2237.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D2237.rest = VEncodePointer(&_V10_Dpair_D2197, VPOINTER_PAIR);
  _V10_Dpair_D2236.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2236.rest = VEncodePointer(&_V10_Dpair_D2235, VPOINTER_PAIR);
  _V10_Dpair_D2235.first = VEncodePointer(&_V10_Dpair_D2234, VPOINTER_PAIR);
  _V10_Dpair_D2235.rest = VNULL;
  _V10_Dpair_D2234.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2234.rest = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2233.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2233.rest = VEncodePointer(&_V10_Dpair_D2232, VPOINTER_PAIR);
  _V10_Dpair_D2232.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2232.rest = VNULL;
  _V10_Dpair_D2231.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2231.rest = VEncodePointer(&_V10_Dpair_D2230, VPOINTER_PAIR);
  _V10_Dpair_D2230.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2230.rest = VEncodePointer(&_V10_Dpair_D2226, VPOINTER_PAIR);
  _V10_Dpair_D2229.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2229.rest = VEncodePointer(&_V10_Dpair_D2227, VPOINTER_PAIR);
  _V10_Dpair_D2228.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2228.rest = VEncodePointer(&_V10_Dpair_D2227, VPOINTER_PAIR);
  _V10_Dpair_D2227.first = VEncodePointer(&_V10_Dpair_D2226, VPOINTER_PAIR);
  _V10_Dpair_D2227.rest = VNULL;
  _V10_Dpair_D2226.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2226.rest = VEncodePointer(&_V10_Dpair_D2225, VPOINTER_PAIR);
  _V10_Dpair_D2225.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2225.rest = VEncodePointer(&_V10_Dpair_D2205, VPOINTER_PAIR);
  _V10_Dpair_D2224.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2224.rest = VEncodePointer(&_V10_Dpair_D2206, VPOINTER_PAIR);
  _V10_Dpair_D2223.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2223.rest = VEncodePointer(&_V10_Dpair_D2222, VPOINTER_PAIR);
  _V10_Dpair_D2222.first = VEncodePointer(&_V10_Dpair_D2221, VPOINTER_PAIR);
  _V10_Dpair_D2222.rest = VNULL;
  _V10_Dpair_D2221.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2221.rest = VEncodePointer(&_V10_Dpair_D2220, VPOINTER_PAIR);
  _V10_Dpair_D2220.first = VEncodePointer(&_V10_Dpair_D2216, VPOINTER_PAIR);
  _V10_Dpair_D2220.rest = VEncodePointer(&_V10_Dpair_D2212, VPOINTER_PAIR);
  _V10_Dpair_D2219.first = VEncodePointer(&_V10_Dpair_D2218, VPOINTER_PAIR);
  _V10_Dpair_D2219.rest = VEncodePointer(&_V10_Dpair_D2213, VPOINTER_PAIR);
  _V10_Dpair_D2218.first = VEncodeBool(false);
  _V10_Dpair_D2218.rest = VEncodePointer(&_V10_Dpair_D2217, VPOINTER_PAIR);
  _V10_Dpair_D2217.first = VEncodePointer(&_V10_Dpair_D2216, VPOINTER_PAIR);
  _V10_Dpair_D2217.rest = VNULL;
  _V10_Dpair_D2216.first = _V0_Mk;
  _V10_Dpair_D2216.rest = VEncodePointer(&_V10_Dpair_D2215, VPOINTER_PAIR);
  _V10_Dpair_D2215.first = _V0x;
  _V10_Dpair_D2215.rest = VNULL;
  _V10_Dpair_D2214.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2214.rest = VEncodePointer(&_V10_Dpair_D2213, VPOINTER_PAIR);
  _V10_Dpair_D2213.first = VEncodePointer(&_V10_Dpair_D2212, VPOINTER_PAIR);
  _V10_Dpair_D2213.rest = VNULL;
  _V10_Dpair_D2212.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2212.rest = VEncodePointer(&_V10_Dpair_D2209, VPOINTER_PAIR);
  _V10_Dpair_D2211.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2211.rest = VEncodePointer(&_V10_Dpair_D2210, VPOINTER_PAIR);
  _V10_Dpair_D2210.first = VEncodePointer(&_V10_Dpair_D2209, VPOINTER_PAIR);
  _V10_Dpair_D2210.rest = VNULL;
  _V10_Dpair_D2209.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2209.rest = VEncodePointer(&_V10_Dpair_D2208, VPOINTER_PAIR);
  _V10_Dpair_D2208.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2208.rest = VEncodePointer(&_V10_Dpair_D2205, VPOINTER_PAIR);
  _V10_Dpair_D2207.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2207.rest = VEncodePointer(&_V10_Dpair_D2206, VPOINTER_PAIR);
  _V10_Dpair_D2206.first = VEncodePointer(&_V10_Dpair_D2205, VPOINTER_PAIR);
  _V10_Dpair_D2206.rest = VNULL;
  _V10_Dpair_D2205.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2205.rest = VEncodePointer(&_V10_Dpair_D2201, VPOINTER_PAIR);
  _V10_Dpair_D2204.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2204.rest = VEncodePointer(&_V10_Dpair_D2202, VPOINTER_PAIR);
  _V10_Dpair_D2203.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2203.rest = VEncodePointer(&_V10_Dpair_D2202, VPOINTER_PAIR);
  _V10_Dpair_D2202.first = VEncodePointer(&_V10_Dpair_D2201, VPOINTER_PAIR);
  _V10_Dpair_D2202.rest = VNULL;
  _V10_Dpair_D2201.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2201.rest = VEncodePointer(&_V10_Dpair_D2200, VPOINTER_PAIR);
  _V10_Dpair_D2200.first = VEncodePointer(&_V10_Dpair_D2192, VPOINTER_PAIR);
  _V10_Dpair_D2200.rest = VEncodePointer(&_V10_Dpair_D2197, VPOINTER_PAIR);
  _V10_Dpair_D2199.first = VEncodePointer(&_V10_Dpair_D2194, VPOINTER_PAIR);
  _V10_Dpair_D2199.rest = VEncodePointer(&_V10_Dpair_D2198, VPOINTER_PAIR);
  _V10_Dpair_D2198.first = VEncodePointer(&_V10_Dpair_D2197, VPOINTER_PAIR);
  _V10_Dpair_D2198.rest = VNULL;
  _V10_Dpair_D2197.first = VEncodePointer(&_V10_Dpair_D2195, VPOINTER_PAIR);
  _V10_Dpair_D2197.rest = VEncodePointer(&_V10_Dpair_D2196, VPOINTER_PAIR);
  _V10_Dpair_D2196.first = VEncodePointer(&_V10_Dpair_D2176, VPOINTER_PAIR);
  _V10_Dpair_D2196.rest = VEncodePointer(&_V10_Dpair_D2181, VPOINTER_PAIR);
  _V10_Dpair_D2195.first = _V0qualify__lambda;
  _V10_Dpair_D2195.rest = VNULL;
  _V10_Dpair_D2194.first = VEncodePointer(&_V10_Dpair_D2189, VPOINTER_PAIR);
  _V10_Dpair_D2194.rest = VEncodePointer(&_V10_Dpair_D2193, VPOINTER_PAIR);
  _V10_Dpair_D2193.first = VEncodePointer(&_V10_Dpair_D2192, VPOINTER_PAIR);
  _V10_Dpair_D2193.rest = VNULL;
  _V10_Dpair_D2192.first = _V0_Mk;
  _V10_Dpair_D2192.rest = VEncodePointer(&_V10_Dpair_D2191, VPOINTER_PAIR);
  _V10_Dpair_D2191.first = _V0lamb;
  _V10_Dpair_D2191.rest = VEncodePointer(&_V10_Dpair_D2190, VPOINTER_PAIR);
  _V10_Dpair_D2190.first = _V0lambda__rest;
  _V10_Dpair_D2190.rest = VNULL;
  _V10_Dpair_D2189.first = _V0vanity;
  _V10_Dpair_D2189.rest = VEncodePointer(&_V10_Dpair_D2188, VPOINTER_PAIR);
  _V10_Dpair_D2188.first = _V0compiler;
  _V10_Dpair_D2188.rest = VEncodePointer(&_V10_Dpair_D2187, VPOINTER_PAIR);
  _V10_Dpair_D2187.first = _V0optimize;
  _V10_Dpair_D2187.rest = VEncodePointer(&_V10_Dpair_D2186, VPOINTER_PAIR);
  _V10_Dpair_D2186.first = _V0scan__bindings;
  _V10_Dpair_D2186.rest = VEncodePointer(&_V10_Dpair_D2185, VPOINTER_PAIR);
  _V10_Dpair_D2185.first = _V10_Dscan__bindings__loop_D342;
  _V10_Dpair_D2185.rest = VEncodePointer(&_V10_Dpair_D2184, VPOINTER_PAIR);
  _V10_Dpair_D2184.first = _V10_Dqualify__lambda_D347;
  _V10_Dpair_D2184.rest = VNULL;
  _V10_Dpair_D2183.first = VEncodePointer(&_V10_Dpair_D2178, VPOINTER_PAIR);
  _V10_Dpair_D2183.rest = VEncodePointer(&_V10_Dpair_D2182, VPOINTER_PAIR);
  _V10_Dpair_D2182.first = VEncodePointer(&_V10_Dpair_D2181, VPOINTER_PAIR);
  _V10_Dpair_D2182.rest = VNULL;
  _V10_Dpair_D2181.first = VEncodePointer(&_V10_Dpair_D2179, VPOINTER_PAIR);
  _V10_Dpair_D2181.rest = VEncodePointer(&_V10_Dpair_D2180, VPOINTER_PAIR);
  _V10_Dpair_D2180.first = VEncodePointer(&_V10_Dpair_D2163, VPOINTER_PAIR);
  _V10_Dpair_D2180.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D2179.first = _V0scan__bindings__loop;
  _V10_Dpair_D2179.rest = VNULL;
  _V10_Dpair_D2178.first = VEncodePointer(&_V10_Dpair_D2171, VPOINTER_PAIR);
  _V10_Dpair_D2178.rest = VEncodePointer(&_V10_Dpair_D2177, VPOINTER_PAIR);
  _V10_Dpair_D2177.first = VEncodePointer(&_V10_Dpair_D2176, VPOINTER_PAIR);
  _V10_Dpair_D2177.rest = VNULL;
  _V10_Dpair_D2176.first = _V0_Mk;
  _V10_Dpair_D2176.rest = VEncodePointer(&_V10_Dpair_D2175, VPOINTER_PAIR);
  _V10_Dpair_D2175.first = _V0qualified__funcs;
  _V10_Dpair_D2175.rest = VEncodePointer(&_V10_Dpair_D2174, VPOINTER_PAIR);
  _V10_Dpair_D2174.first = _V0new__vals;
  _V10_Dpair_D2174.rest = VEncodePointer(&_V10_Dpair_D2173, VPOINTER_PAIR);
  _V10_Dpair_D2173.first = _V0xs;
  _V10_Dpair_D2173.rest = VEncodePointer(&_V10_Dpair_D2172, VPOINTER_PAIR);
  _V10_Dpair_D2172.first = _V0rest__vals;
  _V10_Dpair_D2172.rest = VNULL;
  _V10_Dpair_D2171.first = _V0vanity;
  _V10_Dpair_D2171.rest = VEncodePointer(&_V10_Dpair_D2170, VPOINTER_PAIR);
  _V10_Dpair_D2170.first = _V0compiler;
  _V10_Dpair_D2170.rest = VEncodePointer(&_V10_Dpair_D2169, VPOINTER_PAIR);
  _V10_Dpair_D2169.first = _V0optimize;
  _V10_Dpair_D2169.rest = VEncodePointer(&_V10_Dpair_D2168, VPOINTER_PAIR);
  _V10_Dpair_D2168.first = _V0scan__bindings;
  _V10_Dpair_D2168.rest = VEncodePointer(&_V10_Dpair_D2167, VPOINTER_PAIR);
  _V10_Dpair_D2167.first = _V10_Dscan__bindings__loop_D342;
  _V10_Dpair_D2167.rest = VNULL;
  _V10_Dpair_D2166.first = VEncodePointer(&_V10_Dpair_D2165, VPOINTER_PAIR);
  _V10_Dpair_D2166.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D2165.first = VEncodePointer(&_V10_Dpair_D2156, VPOINTER_PAIR);
  _V10_Dpair_D2165.rest = VEncodePointer(&_V10_Dpair_D2164, VPOINTER_PAIR);
  _V10_Dpair_D2164.first = VEncodePointer(&_V10_Dpair_D2163, VPOINTER_PAIR);
  _V10_Dpair_D2164.rest = VNULL;
  _V10_Dpair_D2163.first = _V0_Mk;
  _V10_Dpair_D2163.rest = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2162.first = _V0current__qualname;
  _V10_Dpair_D2162.rest = VEncodePointer(&_V10_Dpair_D2161, VPOINTER_PAIR);
  _V10_Dpair_D2161.first = _V0qualified__funcs;
  _V10_Dpair_D2161.rest = VEncodePointer(&_V10_Dpair_D2160, VPOINTER_PAIR);
  _V10_Dpair_D2160.first = _V0xs;
  _V10_Dpair_D2160.rest = VEncodePointer(&_V10_Dpair_D2159, VPOINTER_PAIR);
  _V10_Dpair_D2159.first = _V0vals;
  _V10_Dpair_D2159.rest = VEncodePointer(&_V10_Dpair_D2158, VPOINTER_PAIR);
  _V10_Dpair_D2158.first = _V0body;
  _V10_Dpair_D2158.rest = VEncodePointer(&_V10_Dpair_D2157, VPOINTER_PAIR);
  _V10_Dpair_D2157.first = _V0letrec_Q;
  _V10_Dpair_D2157.rest = VNULL;
  _V10_Dpair_D2156.first = _V0vanity;
  _V10_Dpair_D2156.rest = VEncodePointer(&_V10_Dpair_D2155, VPOINTER_PAIR);
  _V10_Dpair_D2155.first = _V0compiler;
  _V10_Dpair_D2155.rest = VEncodePointer(&_V10_Dpair_D2154, VPOINTER_PAIR);
  _V10_Dpair_D2154.first = _V0optimize;
  _V10_Dpair_D2154.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D2153.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2153.rest = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2152.first = VEncodePointer(&_V10_Dpair_D2151, VPOINTER_PAIR);
  _V10_Dpair_D2152.rest = VNULL;
  _V10_Dpair_D2151.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2151.rest = VEncodePointer(&_V10_Dpair_D2147, VPOINTER_PAIR);
  _V10_Dpair_D2150.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2150.rest = VEncodePointer(&_V10_Dpair_D2148, VPOINTER_PAIR);
  _V10_Dpair_D2149.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2149.rest = VEncodePointer(&_V10_Dpair_D2148, VPOINTER_PAIR);
  _V10_Dpair_D2148.first = VEncodePointer(&_V10_Dpair_D2147, VPOINTER_PAIR);
  _V10_Dpair_D2148.rest = VNULL;
  _V10_Dpair_D2147.first = VEncodePointer(&_V10_Dpair_D2140, VPOINTER_PAIR);
  _V10_Dpair_D2147.rest = VEncodePointer(&_V10_Dpair_D2146, VPOINTER_PAIR);
  _V10_Dpair_D2146.first = VEncodePointer(&_V10_Dpair_D2142, VPOINTER_PAIR);
  _V10_Dpair_D2146.rest = VEncodePointer(&_V10_Dpair_D2145, VPOINTER_PAIR);
  _V10_Dpair_D2145.first = VEncodePointer(&_V10_Dpair_D2143, VPOINTER_PAIR);
  _V10_Dpair_D2145.rest = VEncodePointer(&_V10_Dpair_D2144, VPOINTER_PAIR);
  _V10_Dpair_D2144.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2144.rest = VEncodePointer(&_V10_Dpair_D2137, VPOINTER_PAIR);
  _V10_Dpair_D2143.first = _V0expr_D20;
  _V10_Dpair_D2143.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2142.first = _V0f;
  _V10_Dpair_D2142.rest = VEncodePointer(&_V10_Dpair_D2141, VPOINTER_PAIR);
  _V10_Dpair_D2141.first = _V0expr_D21;
  _V10_Dpair_D2141.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2140.first = _V0l;
  _V10_Dpair_D2140.rest = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D2139.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2139.rest = VEncodePointer(&_V10_Dpair_D2138, VPOINTER_PAIR);
  _V10_Dpair_D2138.first = VEncodePointer(&_V10_Dpair_D2137, VPOINTER_PAIR);
  _V10_Dpair_D2138.rest = VNULL;
  _V10_Dpair_D2137.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2137.rest = VEncodePointer(&_V10_Dpair_D2136, VPOINTER_PAIR);
  _V10_Dpair_D2136.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2136.rest = VEncodePointer(&_V10_Dpair_D2133, VPOINTER_PAIR);
  _V10_Dpair_D2135.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2135.rest = VEncodePointer(&_V10_Dpair_D2134, VPOINTER_PAIR);
  _V10_Dpair_D2134.first = VEncodePointer(&_V10_Dpair_D2133, VPOINTER_PAIR);
  _V10_Dpair_D2134.rest = VNULL;
  _V10_Dpair_D2133.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2133.rest = VEncodePointer(&_V10_Dpair_D2122, VPOINTER_PAIR);
  _V10_Dpair_D2132.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2132.rest = VEncodePointer(&_V10_Dpair_D2130, VPOINTER_PAIR);
  _V10_Dpair_D2131.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2131.rest = VEncodePointer(&_V10_Dpair_D2130, VPOINTER_PAIR);
  _V10_Dpair_D2130.first = VEncodePointer(&_V10_Dpair_D2129, VPOINTER_PAIR);
  _V10_Dpair_D2130.rest = VNULL;
  _V10_Dpair_D2129.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2129.rest = VEncodePointer(&_V10_Dpair_D2126, VPOINTER_PAIR);
  _V10_Dpair_D2128.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2128.rest = VEncodePointer(&_V10_Dpair_D2127, VPOINTER_PAIR);
  _V10_Dpair_D2127.first = VEncodePointer(&_V10_Dpair_D2126, VPOINTER_PAIR);
  _V10_Dpair_D2127.rest = VNULL;
  _V10_Dpair_D2126.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2126.rest = VEncodePointer(&_V10_Dpair_D2125, VPOINTER_PAIR);
  _V10_Dpair_D2125.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2125.rest = VEncodePointer(&_V10_Dpair_D2122, VPOINTER_PAIR);
  _V10_Dpair_D2124.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2124.rest = VEncodePointer(&_V10_Dpair_D2123, VPOINTER_PAIR);
  _V10_Dpair_D2123.first = VEncodePointer(&_V10_Dpair_D2122, VPOINTER_PAIR);
  _V10_Dpair_D2123.rest = VNULL;
  _V10_Dpair_D2122.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2122.rest = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2121.first = VEncodePointer(&_V10_Dpair_D2117, VPOINTER_PAIR);
  _V10_Dpair_D2121.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D2120.first = VEncodePointer(&_V10_Dpair_D2119, VPOINTER_PAIR);
  _V10_Dpair_D2120.rest = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D2119.first = VEncodeBool(false);
  _V10_Dpair_D2119.rest = VEncodePointer(&_V10_Dpair_D2118, VPOINTER_PAIR);
  _V10_Dpair_D2118.first = VEncodePointer(&_V10_Dpair_D2117, VPOINTER_PAIR);
  _V10_Dpair_D2118.rest = VNULL;
  _V10_Dpair_D2117.first = _V0_Mk;
  _V10_Dpair_D2117.rest = VEncodePointer(&_V10_Dpair_D2116, VPOINTER_PAIR);
  _V10_Dpair_D2116.first = _V0kk_D16;
  _V10_Dpair_D2116.rest = VNULL;
  _V10_Dpair_D2114.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2114.rest = VEncodePointer(&_V10_Dpair_D2113, VPOINTER_PAIR);
  _V10_Dpair_D2113.first = VEncodePointer(&_V10_Dpair_D2112, VPOINTER_PAIR);
  _V10_Dpair_D2113.rest = VNULL;
  _V10_Dpair_D2112.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2112.rest = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2111.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2111.rest = VEncodePointer(&_V10_Dpair_D2031, VPOINTER_PAIR);
  _V10_Dpair_D2110.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2110.rest = VEncodePointer(&_V10_Dpair_D2109, VPOINTER_PAIR);
  _V10_Dpair_D2109.first = VEncodePointer(&_V10_Dpair_D2108, VPOINTER_PAIR);
  _V10_Dpair_D2109.rest = VNULL;
  _V10_Dpair_D2108.first = VEncodePointer(&_V10_Dpair_D2106, VPOINTER_PAIR);
  _V10_Dpair_D2108.rest = VEncodePointer(&_V10_Dpair_D2107, VPOINTER_PAIR);
  _V10_Dpair_D2107.first = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2107.rest = VEncodePointer(&_V10_Dpair_D2098, VPOINTER_PAIR);
  _V10_Dpair_D2106.first = _V0xs;
  _V10_Dpair_D2106.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D2105.first = VEncodePointer(&_V10_Dpair_D2104, VPOINTER_PAIR);
  _V10_Dpair_D2105.rest = VEncodePointer(&_V10_Dpair_D2099, VPOINTER_PAIR);
  _V10_Dpair_D2104.first = VEncodeBool(false);
  _V10_Dpair_D2104.rest = VEncodePointer(&_V10_Dpair_D2103, VPOINTER_PAIR);
  _V10_Dpair_D2103.first = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2103.rest = VNULL;
  _V10_Dpair_D2102.first = _V0_Mk;
  _V10_Dpair_D2102.rest = VEncodePointer(&_V10_Dpair_D2101, VPOINTER_PAIR);
  _V10_Dpair_D2101.first = _V0kk_D114;
  _V10_Dpair_D2101.rest = VNULL;
  _V10_Dpair_D2100.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2100.rest = VEncodePointer(&_V10_Dpair_D2099, VPOINTER_PAIR);
  _V10_Dpair_D2099.first = VEncodePointer(&_V10_Dpair_D2098, VPOINTER_PAIR);
  _V10_Dpair_D2099.rest = VNULL;
  _V10_Dpair_D2098.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2098.rest = VEncodePointer(&_V10_Dpair_D2095, VPOINTER_PAIR);
  _V10_Dpair_D2097.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2097.rest = VEncodePointer(&_V10_Dpair_D2096, VPOINTER_PAIR);
  _V10_Dpair_D2096.first = VEncodePointer(&_V10_Dpair_D2095, VPOINTER_PAIR);
  _V10_Dpair_D2096.rest = VNULL;
  _V10_Dpair_D2095.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D2095.rest = VEncodePointer(&_V10_Dpair_D2094, VPOINTER_PAIR);
  _V10_Dpair_D2094.first = VEncodePointer(&_V10_Dpair_D2087, VPOINTER_PAIR);
  _V10_Dpair_D2094.rest = VEncodePointer(&_V10_Dpair_D2091, VPOINTER_PAIR);
  _V10_Dpair_D2093.first = VEncodePointer(&_V10_Dpair_D2089, VPOINTER_PAIR);
  _V10_Dpair_D2093.rest = VEncodePointer(&_V10_Dpair_D2092, VPOINTER_PAIR);
  _V10_Dpair_D2092.first = VEncodePointer(&_V10_Dpair_D2091, VPOINTER_PAIR);
  _V10_Dpair_D2092.rest = VNULL;
  _V10_Dpair_D2091.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D2091.rest = VEncodePointer(&_V10_Dpair_D2090, VPOINTER_PAIR);
  _V10_Dpair_D2090.first = VEncodePointer(&_V10_Dpair_D2075, VPOINTER_PAIR);
  _V10_Dpair_D2090.rest = VEncodePointer(&_V10_Dpair_D2039, VPOINTER_PAIR);
  _V10_Dpair_D2089.first = VEncodePointer(&_V10_Dpair_D2084, VPOINTER_PAIR);
  _V10_Dpair_D2089.rest = VEncodePointer(&_V10_Dpair_D2088, VPOINTER_PAIR);
  _V10_Dpair_D2088.first = VEncodePointer(&_V10_Dpair_D2087, VPOINTER_PAIR);
  _V10_Dpair_D2088.rest = VNULL;
  _V10_Dpair_D2087.first = _V0_Mk;
  _V10_Dpair_D2087.rest = VEncodePointer(&_V10_Dpair_D2086, VPOINTER_PAIR);
  _V10_Dpair_D2086.first = _V0expr_D115;
  _V10_Dpair_D2086.rest = VEncodePointer(&_V10_Dpair_D2085, VPOINTER_PAIR);
  _V10_Dpair_D2085.first = _V0xs_D112;
  _V10_Dpair_D2085.rest = VNULL;
  _V10_Dpair_D2084.first = _V0vanity;
  _V10_Dpair_D2084.rest = VEncodePointer(&_V10_Dpair_D2083, VPOINTER_PAIR);
  _V10_Dpair_D2083.first = _V0compiler;
  _V10_Dpair_D2083.rest = VEncodePointer(&_V10_Dpair_D2082, VPOINTER_PAIR);
  _V10_Dpair_D2082.first = _V0optimize;
  _V10_Dpair_D2082.rest = VEncodePointer(&_V10_Dpair_D2081, VPOINTER_PAIR);
  _V10_Dpair_D2081.first = _V0qualify__callsites;
  _V10_Dpair_D2081.rest = VEncodePointer(&_V10_Dpair_D2080, VPOINTER_PAIR);
  _V10_Dpair_D2080.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D2080.rest = VEncodePointer(&_V10_Dpair_D2079, VPOINTER_PAIR);
  _V10_Dpair_D2079.first = _V10_Dloop_D316;
  _V10_Dpair_D2079.rest = VNULL;
  _V10_Dpair_D2078.first = VEncodePointer(&_V10_Dpair_D2077, VPOINTER_PAIR);
  _V10_Dpair_D2078.rest = VEncodePointer(&_V10_Dpair_D2040, VPOINTER_PAIR);
  _V10_Dpair_D2077.first = VEncodeBool(false);
  _V10_Dpair_D2077.rest = VEncodePointer(&_V10_Dpair_D2076, VPOINTER_PAIR);
  _V10_Dpair_D2076.first = VEncodePointer(&_V10_Dpair_D2075, VPOINTER_PAIR);
  _V10_Dpair_D2076.rest = VNULL;
  _V10_Dpair_D2075.first = _V0_Mk;
  _V10_Dpair_D2075.rest = VEncodePointer(&_V10_Dpair_D2074, VPOINTER_PAIR);
  _V10_Dpair_D2074.first = _V0kk_D113;
  _V10_Dpair_D2074.rest = VNULL;
  _V10_Dpair_D2073.first = VEncodePointer(&_V10_Dpair_D2072, VPOINTER_PAIR);
  _V10_Dpair_D2073.rest = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2072.first = VEncodeBool(false);
  _V10_Dpair_D2072.rest = VEncodePointer(&_V10_Dpair_D2071, VPOINTER_PAIR);
  _V10_Dpair_D2071.first = VEncodePointer(&_V10_Dpair_D2070, VPOINTER_PAIR);
  _V10_Dpair_D2071.rest = VNULL;
  _V10_Dpair_D2070.first = _V0_Mk;
  _V10_Dpair_D2070.rest = VEncodePointer(&_V10_Dpair_D2069, VPOINTER_PAIR);
  _V10_Dpair_D2069.first = _V0x_D119;
  _V10_Dpair_D2069.rest = VNULL;
  _V10_Dpair_D2068.first = VEncodePointer(&_V10_Dpair_D2067, VPOINTER_PAIR);
  _V10_Dpair_D2068.rest = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2067.first = VEncodeBool(false);
  _V10_Dpair_D2067.rest = VEncodePointer(&_V10_Dpair_D2066, VPOINTER_PAIR);
  _V10_Dpair_D2066.first = VEncodePointer(&_V10_Dpair_D2065, VPOINTER_PAIR);
  _V10_Dpair_D2066.rest = VNULL;
  _V10_Dpair_D2065.first = _V0_Mk;
  _V10_Dpair_D2065.rest = VEncodePointer(&_V10_Dpair_D2064, VPOINTER_PAIR);
  _V10_Dpair_D2064.first = _V0x_D118;
  _V10_Dpair_D2064.rest = VNULL;
  _V10_Dpair_D2063.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2063.rest = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2062.first = VEncodePointer(&_V10_Dpair_D2061, VPOINTER_PAIR);
  _V10_Dpair_D2062.rest = VNULL;
  _V10_Dpair_D2061.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2061.rest = VEncodePointer(&_V10_Dpair_D2058, VPOINTER_PAIR);
  _V10_Dpair_D2060.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2060.rest = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2059.first = VEncodePointer(&_V10_Dpair_D2058, VPOINTER_PAIR);
  _V10_Dpair_D2059.rest = VNULL;
  _V10_Dpair_D2058.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2058.rest = VEncodePointer(&_V10_Dpair_D2055, VPOINTER_PAIR);
  _V10_Dpair_D2057.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2057.rest = VEncodePointer(&_V10_Dpair_D2056, VPOINTER_PAIR);
  _V10_Dpair_D2056.first = VEncodePointer(&_V10_Dpair_D2055, VPOINTER_PAIR);
  _V10_Dpair_D2056.rest = VNULL;
  _V10_Dpair_D2055.first = VEncodePointer(&_V10_Dpair_D2051, VPOINTER_PAIR);
  _V10_Dpair_D2055.rest = VEncodePointer(&_V10_Dpair_D2048, VPOINTER_PAIR);
  _V10_Dpair_D2054.first = VEncodePointer(&_V10_Dpair_D2053, VPOINTER_PAIR);
  _V10_Dpair_D2054.rest = VEncodePointer(&_V10_Dpair_D2049, VPOINTER_PAIR);
  _V10_Dpair_D2053.first = VEncodeBool(false);
  _V10_Dpair_D2053.rest = VEncodePointer(&_V10_Dpair_D2052, VPOINTER_PAIR);
  _V10_Dpair_D2052.first = VEncodePointer(&_V10_Dpair_D2051, VPOINTER_PAIR);
  _V10_Dpair_D2052.rest = VNULL;
  _V10_Dpair_D2051.first = _V0x_D117;
  _V10_Dpair_D2051.rest = VNULL;
  _V10_Dpair_D2050.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2050.rest = VEncodePointer(&_V10_Dpair_D2049, VPOINTER_PAIR);
  _V10_Dpair_D2049.first = VEncodePointer(&_V10_Dpair_D2048, VPOINTER_PAIR);
  _V10_Dpair_D2049.rest = VNULL;
  _V10_Dpair_D2048.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2048.rest = VEncodePointer(&_V10_Dpair_D2047, VPOINTER_PAIR);
  _V10_Dpair_D2047.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2047.rest = VEncodePointer(&_V10_Dpair_D2043, VPOINTER_PAIR);
  _V10_Dpair_D2046.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2046.rest = VEncodePointer(&_V10_Dpair_D2044, VPOINTER_PAIR);
  _V10_Dpair_D2045.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2045.rest = VEncodePointer(&_V10_Dpair_D2044, VPOINTER_PAIR);
  _V10_Dpair_D2044.first = VEncodePointer(&_V10_Dpair_D2043, VPOINTER_PAIR);
  _V10_Dpair_D2044.rest = VNULL;
  _V10_Dpair_D2043.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2043.rest = VEncodePointer(&_V10_Dpair_D2042, VPOINTER_PAIR);
  _V10_Dpair_D2042.first = VEncodePointer(&_V10_Dpair_D2033, VPOINTER_PAIR);
  _V10_Dpair_D2042.rest = VEncodePointer(&_V10_Dpair_D2039, VPOINTER_PAIR);
  _V10_Dpair_D2041.first = VEncodePointer(&_V10_Dpair_D2035, VPOINTER_PAIR);
  _V10_Dpair_D2041.rest = VEncodePointer(&_V10_Dpair_D2040, VPOINTER_PAIR);
  _V10_Dpair_D2040.first = VEncodePointer(&_V10_Dpair_D2039, VPOINTER_PAIR);
  _V10_Dpair_D2040.rest = VNULL;
  _V10_Dpair_D2039.first = VEncodePointer(&_V10_Dpair_D2037, VPOINTER_PAIR);
  _V10_Dpair_D2039.rest = VEncodePointer(&_V10_Dpair_D2038, VPOINTER_PAIR);
  _V10_Dpair_D2038.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2038.rest = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2037.first = _V0f;
  _V10_Dpair_D2037.rest = VEncodePointer(&_V10_Dpair_D2036, VPOINTER_PAIR);
  _V10_Dpair_D2036.first = _V0expr_D111;
  _V10_Dpair_D2036.rest = VNULL;
  _V10_Dpair_D2035.first = VEncodeBool(false);
  _V10_Dpair_D2035.rest = VEncodePointer(&_V10_Dpair_D2034, VPOINTER_PAIR);
  _V10_Dpair_D2034.first = VEncodePointer(&_V10_Dpair_D2033, VPOINTER_PAIR);
  _V10_Dpair_D2034.rest = VNULL;
  _V10_Dpair_D2033.first = _V0tail__expr;
  _V10_Dpair_D2033.rest = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2032.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2032.rest = VEncodePointer(&_V10_Dpair_D2031, VPOINTER_PAIR);
  _V10_Dpair_D2031.first = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2031.rest = VNULL;
  _V10_Dpair_D2030.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2030.rest = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2029.first = VEncodePointer(&_V10_Dpair_D2028, VPOINTER_PAIR);
  _V10_Dpair_D2029.rest = VEncodePointer(&_V10_Dpair_D2023, VPOINTER_PAIR);
  _V10_Dpair_D2028.first = VEncodeBool(false);
  _V10_Dpair_D2028.rest = VEncodePointer(&_V10_Dpair_D2027, VPOINTER_PAIR);
  _V10_Dpair_D2027.first = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2027.rest = VNULL;
  _V10_Dpair_D2026.first = _V0_Mk;
  _V10_Dpair_D2026.rest = VEncodePointer(&_V10_Dpair_D2025, VPOINTER_PAIR);
  _V10_Dpair_D2025.first = _V0x_D116;
  _V10_Dpair_D2025.rest = VNULL;
  _V10_Dpair_D2024.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2024.rest = VEncodePointer(&_V10_Dpair_D2023, VPOINTER_PAIR);
  _V10_Dpair_D2023.first = VEncodePointer(&_V10_Dpair_D2022, VPOINTER_PAIR);
  _V10_Dpair_D2023.rest = VNULL;
  _V10_Dpair_D2022.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2022.rest = VEncodePointer(&_V10_Dpair_D2018, VPOINTER_PAIR);
  _V10_Dpair_D2021.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2021.rest = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2020.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2020.rest = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2019.first = VEncodePointer(&_V10_Dpair_D2018, VPOINTER_PAIR);
  _V10_Dpair_D2019.rest = VNULL;
  _V10_Dpair_D2018.first = VEncodePointer(&_V10_Dpair_D2014, VPOINTER_PAIR);
  _V10_Dpair_D2018.rest = VEncodePointer(&_V10_Dpair_D2017, VPOINTER_PAIR);
  _V10_Dpair_D2017.first = VEncodePointer(&_V10_Dpair_D2015, VPOINTER_PAIR);
  _V10_Dpair_D2017.rest = VEncodePointer(&_V10_Dpair_D2016, VPOINTER_PAIR);
  _V10_Dpair_D2016.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2016.rest = VEncodePointer(&_V10_Dpair_D2010, VPOINTER_PAIR);
  _V10_Dpair_D2015.first = _V0expr_D109;
  _V10_Dpair_D2015.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2014.first = _V0f;
  _V10_Dpair_D2014.rest = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2013.first = _V0xs;
  _V10_Dpair_D2013.rest = VNULL;
  _V10_Dpair_D2012.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2012.rest = VEncodePointer(&_V10_Dpair_D2011, VPOINTER_PAIR);
  _V10_Dpair_D2011.first = VEncodePointer(&_V10_Dpair_D2010, VPOINTER_PAIR);
  _V10_Dpair_D2011.rest = VNULL;
  _V10_Dpair_D2010.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D2010.rest = VEncodePointer(&_V10_Dpair_D2009, VPOINTER_PAIR);
  _V10_Dpair_D2009.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D2009.rest = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2008.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2008.rest = VEncodePointer(&_V10_Dpair_D2007, VPOINTER_PAIR);
  _V10_Dpair_D2007.first = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2007.rest = VNULL;
  _V10_Dpair_D2006.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2006.rest = VEncodePointer(&_V10_Dpair_D1995, VPOINTER_PAIR);
  _V10_Dpair_D2005.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D2005.rest = VEncodePointer(&_V10_Dpair_D2003, VPOINTER_PAIR);
  _V10_Dpair_D2004.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D2004.rest = VEncodePointer(&_V10_Dpair_D2003, VPOINTER_PAIR);
  _V10_Dpair_D2003.first = VEncodePointer(&_V10_Dpair_D2002, VPOINTER_PAIR);
  _V10_Dpair_D2003.rest = VNULL;
  _V10_Dpair_D2002.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D2002.rest = VEncodePointer(&_V10_Dpair_D1999, VPOINTER_PAIR);
  _V10_Dpair_D2001.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D2001.rest = VEncodePointer(&_V10_Dpair_D2000, VPOINTER_PAIR);
  _V10_Dpair_D2000.first = VEncodePointer(&_V10_Dpair_D1999, VPOINTER_PAIR);
  _V10_Dpair_D2000.rest = VNULL;
  _V10_Dpair_D1999.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1999.rest = VEncodePointer(&_V10_Dpair_D1998, VPOINTER_PAIR);
  _V10_Dpair_D1998.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1998.rest = VEncodePointer(&_V10_Dpair_D1995, VPOINTER_PAIR);
  _V10_Dpair_D1997.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1997.rest = VEncodePointer(&_V10_Dpair_D1996, VPOINTER_PAIR);
  _V10_Dpair_D1996.first = VEncodePointer(&_V10_Dpair_D1995, VPOINTER_PAIR);
  _V10_Dpair_D1996.rest = VNULL;
  _V10_Dpair_D1995.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1995.rest = VEncodePointer(&_V10_Dpair_D1984, VPOINTER_PAIR);
  _V10_Dpair_D1994.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1994.rest = VEncodePointer(&_V10_Dpair_D1992, VPOINTER_PAIR);
  _V10_Dpair_D1993.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1993.rest = VEncodePointer(&_V10_Dpair_D1992, VPOINTER_PAIR);
  _V10_Dpair_D1992.first = VEncodePointer(&_V10_Dpair_D1991, VPOINTER_PAIR);
  _V10_Dpair_D1992.rest = VNULL;
  _V10_Dpair_D1991.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1991.rest = VEncodePointer(&_V10_Dpair_D1988, VPOINTER_PAIR);
  _V10_Dpair_D1990.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1990.rest = VEncodePointer(&_V10_Dpair_D1989, VPOINTER_PAIR);
  _V10_Dpair_D1989.first = VEncodePointer(&_V10_Dpair_D1988, VPOINTER_PAIR);
  _V10_Dpair_D1989.rest = VNULL;
  _V10_Dpair_D1988.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1988.rest = VEncodePointer(&_V10_Dpair_D1987, VPOINTER_PAIR);
  _V10_Dpair_D1987.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1987.rest = VEncodePointer(&_V10_Dpair_D1984, VPOINTER_PAIR);
  _V10_Dpair_D1986.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1986.rest = VEncodePointer(&_V10_Dpair_D1985, VPOINTER_PAIR);
  _V10_Dpair_D1985.first = VEncodePointer(&_V10_Dpair_D1984, VPOINTER_PAIR);
  _V10_Dpair_D1985.rest = VNULL;
  _V10_Dpair_D1984.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1984.rest = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1983.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1983.rest = VEncodePointer(&_V10_Dpair_D1981, VPOINTER_PAIR);
  _V10_Dpair_D1982.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1982.rest = VEncodePointer(&_V10_Dpair_D1981, VPOINTER_PAIR);
  _V10_Dpair_D1981.first = VEncodePointer(&_V10_Dpair_D1980, VPOINTER_PAIR);
  _V10_Dpair_D1981.rest = VNULL;
  _V10_Dpair_D1980.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1980.rest = VEncodePointer(&_V10_Dpair_D1977, VPOINTER_PAIR);
  _V10_Dpair_D1979.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1979.rest = VEncodePointer(&_V10_Dpair_D1978, VPOINTER_PAIR);
  _V10_Dpair_D1978.first = VEncodePointer(&_V10_Dpair_D1977, VPOINTER_PAIR);
  _V10_Dpair_D1978.rest = VNULL;
  _V10_Dpair_D1977.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1977.rest = VEncodePointer(&_V10_Dpair_D1976, VPOINTER_PAIR);
  _V10_Dpair_D1976.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1976.rest = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1975.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1975.rest = VEncodePointer(&_V10_Dpair_D1974, VPOINTER_PAIR);
  _V10_Dpair_D1974.first = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1974.rest = VNULL;
  _V10_Dpair_D1973.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1973.rest = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1972.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1972.rest = VEncodePointer(&_V10_Dpair_D1970, VPOINTER_PAIR);
  _V10_Dpair_D1971.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1971.rest = VEncodePointer(&_V10_Dpair_D1970, VPOINTER_PAIR);
  _V10_Dpair_D1970.first = VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR);
  _V10_Dpair_D1970.rest = VNULL;
  _V10_Dpair_D1969.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1969.rest = VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR);
  _V10_Dpair_D1968.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1968.rest = VEncodePointer(&_V10_Dpair_D1967, VPOINTER_PAIR);
  _V10_Dpair_D1967.first = VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR);
  _V10_Dpair_D1967.rest = VNULL;
  _V10_Dpair_D1966.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1966.rest = VEncodePointer(&_V10_Dpair_D1965, VPOINTER_PAIR);
  _V10_Dpair_D1965.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1965.rest = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1964.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1964.rest = VEncodePointer(&_V10_Dpair_D1963, VPOINTER_PAIR);
  _V10_Dpair_D1963.first = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1963.rest = VNULL;
  _V10_Dpair_D1962.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1962.rest = VEncodePointer(&_V10_Dpair_D1878, VPOINTER_PAIR);
  _V10_Dpair_D1961.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1961.rest = VEncodePointer(&_V10_Dpair_D1960, VPOINTER_PAIR);
  _V10_Dpair_D1960.first = VEncodePointer(&_V10_Dpair_D1959, VPOINTER_PAIR);
  _V10_Dpair_D1960.rest = VNULL;
  _V10_Dpair_D1959.first = VEncodePointer(&_V10_Dpair_D1957, VPOINTER_PAIR);
  _V10_Dpair_D1959.rest = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D1958.first = VEncodePointer(&_V10_Dpair_D1953, VPOINTER_PAIR);
  _V10_Dpair_D1958.rest = VEncodePointer(&_V10_Dpair_D1949, VPOINTER_PAIR);
  _V10_Dpair_D1957.first = _V0xs__vals;
  _V10_Dpair_D1957.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1956.first = VEncodePointer(&_V10_Dpair_D1955, VPOINTER_PAIR);
  _V10_Dpair_D1956.rest = VEncodePointer(&_V10_Dpair_D1950, VPOINTER_PAIR);
  _V10_Dpair_D1955.first = VEncodeBool(false);
  _V10_Dpair_D1955.rest = VEncodePointer(&_V10_Dpair_D1954, VPOINTER_PAIR);
  _V10_Dpair_D1954.first = VEncodePointer(&_V10_Dpair_D1953, VPOINTER_PAIR);
  _V10_Dpair_D1954.rest = VNULL;
  _V10_Dpair_D1953.first = _V0_Mk;
  _V10_Dpair_D1953.rest = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1952.first = _V0kk_D101;
  _V10_Dpair_D1952.rest = VNULL;
  _V10_Dpair_D1951.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1951.rest = VEncodePointer(&_V10_Dpair_D1950, VPOINTER_PAIR);
  _V10_Dpair_D1950.first = VEncodePointer(&_V10_Dpair_D1949, VPOINTER_PAIR);
  _V10_Dpair_D1950.rest = VNULL;
  _V10_Dpair_D1949.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1949.rest = VEncodePointer(&_V10_Dpair_D1946, VPOINTER_PAIR);
  _V10_Dpair_D1948.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1948.rest = VEncodePointer(&_V10_Dpair_D1947, VPOINTER_PAIR);
  _V10_Dpair_D1947.first = VEncodePointer(&_V10_Dpair_D1946, VPOINTER_PAIR);
  _V10_Dpair_D1947.rest = VNULL;
  _V10_Dpair_D1946.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1946.rest = VEncodePointer(&_V10_Dpair_D1945, VPOINTER_PAIR);
  _V10_Dpair_D1945.first = VEncodePointer(&_V10_Dpair_D1938, VPOINTER_PAIR);
  _V10_Dpair_D1945.rest = VEncodePointer(&_V10_Dpair_D1942, VPOINTER_PAIR);
  _V10_Dpair_D1944.first = VEncodePointer(&_V10_Dpair_D1940, VPOINTER_PAIR);
  _V10_Dpair_D1944.rest = VEncodePointer(&_V10_Dpair_D1943, VPOINTER_PAIR);
  _V10_Dpair_D1943.first = VEncodePointer(&_V10_Dpair_D1942, VPOINTER_PAIR);
  _V10_Dpair_D1943.rest = VNULL;
  _V10_Dpair_D1942.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1942.rest = VEncodePointer(&_V10_Dpair_D1941, VPOINTER_PAIR);
  _V10_Dpair_D1941.first = VEncodePointer(&_V10_Dpair_D1926, VPOINTER_PAIR);
  _V10_Dpair_D1941.rest = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1940.first = VEncodePointer(&_V10_Dpair_D1935, VPOINTER_PAIR);
  _V10_Dpair_D1940.rest = VEncodePointer(&_V10_Dpair_D1939, VPOINTER_PAIR);
  _V10_Dpair_D1939.first = VEncodePointer(&_V10_Dpair_D1938, VPOINTER_PAIR);
  _V10_Dpair_D1939.rest = VNULL;
  _V10_Dpair_D1938.first = _V0_Mk;
  _V10_Dpair_D1938.rest = VEncodePointer(&_V10_Dpair_D1937, VPOINTER_PAIR);
  _V10_Dpair_D1937.first = _V0expr_D102;
  _V10_Dpair_D1937.rest = VEncodePointer(&_V10_Dpair_D1936, VPOINTER_PAIR);
  _V10_Dpair_D1936.first = _V0xs__vals_D99;
  _V10_Dpair_D1936.rest = VNULL;
  _V10_Dpair_D1935.first = _V0vanity;
  _V10_Dpair_D1935.rest = VEncodePointer(&_V10_Dpair_D1934, VPOINTER_PAIR);
  _V10_Dpair_D1934.first = _V0compiler;
  _V10_Dpair_D1934.rest = VEncodePointer(&_V10_Dpair_D1933, VPOINTER_PAIR);
  _V10_Dpair_D1933.first = _V0optimize;
  _V10_Dpair_D1933.rest = VEncodePointer(&_V10_Dpair_D1932, VPOINTER_PAIR);
  _V10_Dpair_D1932.first = _V0qualify__callsites;
  _V10_Dpair_D1932.rest = VEncodePointer(&_V10_Dpair_D1931, VPOINTER_PAIR);
  _V10_Dpair_D1931.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1931.rest = VEncodePointer(&_V10_Dpair_D1930, VPOINTER_PAIR);
  _V10_Dpair_D1930.first = _V10_Dloop_D294;
  _V10_Dpair_D1930.rest = VNULL;
  _V10_Dpair_D1929.first = VEncodePointer(&_V10_Dpair_D1928, VPOINTER_PAIR);
  _V10_Dpair_D1929.rest = VEncodePointer(&_V10_Dpair_D1906, VPOINTER_PAIR);
  _V10_Dpair_D1928.first = VEncodeBool(false);
  _V10_Dpair_D1928.rest = VEncodePointer(&_V10_Dpair_D1927, VPOINTER_PAIR);
  _V10_Dpair_D1927.first = VEncodePointer(&_V10_Dpair_D1926, VPOINTER_PAIR);
  _V10_Dpair_D1927.rest = VNULL;
  _V10_Dpair_D1926.first = _V0_Mk;
  _V10_Dpair_D1926.rest = VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR);
  _V10_Dpair_D1925.first = _V0kk_D100;
  _V10_Dpair_D1925.rest = VNULL;
  _V10_Dpair_D1924.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1924.rest = VEncodePointer(&_V10_Dpair_D1923, VPOINTER_PAIR);
  _V10_Dpair_D1923.first = VEncodePointer(&_V10_Dpair_D1922, VPOINTER_PAIR);
  _V10_Dpair_D1923.rest = VNULL;
  _V10_Dpair_D1922.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1922.rest = VEncodePointer(&_V10_Dpair_D1919, VPOINTER_PAIR);
  _V10_Dpair_D1921.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1921.rest = VEncodePointer(&_V10_Dpair_D1920, VPOINTER_PAIR);
  _V10_Dpair_D1920.first = VEncodePointer(&_V10_Dpair_D1919, VPOINTER_PAIR);
  _V10_Dpair_D1920.rest = VNULL;
  _V10_Dpair_D1919.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1919.rest = VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR);
  _V10_Dpair_D1918.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1918.rest = VEncodePointer(&_V10_Dpair_D1917, VPOINTER_PAIR);
  _V10_Dpair_D1917.first = VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR);
  _V10_Dpair_D1917.rest = VNULL;
  _V10_Dpair_D1916.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1916.rest = VEncodePointer(&_V10_Dpair_D1912, VPOINTER_PAIR);
  _V10_Dpair_D1915.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1915.rest = VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR);
  _V10_Dpair_D1914.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1914.rest = VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR);
  _V10_Dpair_D1913.first = VEncodePointer(&_V10_Dpair_D1912, VPOINTER_PAIR);
  _V10_Dpair_D1913.rest = VNULL;
  _V10_Dpair_D1912.first = VEncodePointer(&_V10_Dpair_D1908, VPOINTER_PAIR);
  _V10_Dpair_D1912.rest = VEncodePointer(&_V10_Dpair_D1911, VPOINTER_PAIR);
  _V10_Dpair_D1911.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1911.rest = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D1910.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1910.rest = VEncodePointer(&_V10_Dpair_D1909, VPOINTER_PAIR);
  _V10_Dpair_D1909.first = VEncodePointer(&_V10_Dpair_D1902, VPOINTER_PAIR);
  _V10_Dpair_D1909.rest = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1908.first = _V0appl;
  _V10_Dpair_D1908.rest = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1907.first = VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR);
  _V10_Dpair_D1907.rest = VEncodePointer(&_V10_Dpair_D1906, VPOINTER_PAIR);
  _V10_Dpair_D1906.first = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1906.rest = VNULL;
  _V10_Dpair_D1905.first = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1905.rest = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1904.first = VEncodeBool(false);
  _V10_Dpair_D1904.rest = VEncodePointer(&_V10_Dpair_D1903, VPOINTER_PAIR);
  _V10_Dpair_D1903.first = VEncodePointer(&_V10_Dpair_D1902, VPOINTER_PAIR);
  _V10_Dpair_D1903.rest = VNULL;
  _V10_Dpair_D1902.first = _V0tail__expr;
  _V10_Dpair_D1902.rest = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1901.first = _V0xs__vals;
  _V10_Dpair_D1901.rest = VNULL;
  _V10_Dpair_D1900.first = VEncodePointer(&_V10_Dpair_D1896, VPOINTER_PAIR);
  _V10_Dpair_D1900.rest = VEncodePointer(&_V10_Dpair_D1899, VPOINTER_PAIR);
  _V10_Dpair_D1899.first = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1899.rest = VNULL;
  _V10_Dpair_D1898.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1898.rest = VEncodePointer(&_V10_Dpair_D1897, VPOINTER_PAIR);
  _V10_Dpair_D1897.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1897.rest = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1896.first = VEncodeBool(false);
  _V10_Dpair_D1896.rest = VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR);
  _V10_Dpair_D1895.first = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1895.rest = VNULL;
  _V10_Dpair_D1894.first = _V0head_D96;
  _V10_Dpair_D1894.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1893.first = _V0tail_D97;
  _V10_Dpair_D1893.rest = VNULL;
  _V10_Dpair_D1892.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1892.rest = VEncodePointer(&_V10_Dpair_D1891, VPOINTER_PAIR);
  _V10_Dpair_D1891.first = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1891.rest = VNULL;
  _V10_Dpair_D1890.first = VEncodePointer(&_V10_Dpair_D1886, VPOINTER_PAIR);
  _V10_Dpair_D1890.rest = VEncodePointer(&_V10_Dpair_D1889, VPOINTER_PAIR);
  _V10_Dpair_D1889.first = VEncodePointer(&_V10_Dpair_D1887, VPOINTER_PAIR);
  _V10_Dpair_D1889.rest = VEncodePointer(&_V10_Dpair_D1888, VPOINTER_PAIR);
  _V10_Dpair_D1888.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1888.rest = VEncodePointer(&_V10_Dpair_D1882, VPOINTER_PAIR);
  _V10_Dpair_D1887.first = _V0expr_D94;
  _V10_Dpair_D1887.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1886.first = _V0cost;
  _V10_Dpair_D1886.rest = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1885.first = _V0expr_D95;
  _V10_Dpair_D1885.rest = VNULL;
  _V10_Dpair_D1884.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1884.rest = VEncodePointer(&_V10_Dpair_D1883, VPOINTER_PAIR);
  _V10_Dpair_D1883.first = VEncodePointer(&_V10_Dpair_D1882, VPOINTER_PAIR);
  _V10_Dpair_D1883.rest = VNULL;
  _V10_Dpair_D1882.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1882.rest = VEncodePointer(&_V10_Dpair_D1881, VPOINTER_PAIR);
  _V10_Dpair_D1881.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1881.rest = VEncodePointer(&_V10_Dpair_D1878, VPOINTER_PAIR);
  _V10_Dpair_D1880.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1880.rest = VEncodePointer(&_V10_Dpair_D1879, VPOINTER_PAIR);
  _V10_Dpair_D1879.first = VEncodePointer(&_V10_Dpair_D1878, VPOINTER_PAIR);
  _V10_Dpair_D1879.rest = VNULL;
  _V10_Dpair_D1878.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1878.rest = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1877.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1877.rest = VEncodePointer(&_V10_Dpair_D1876, VPOINTER_PAIR);
  _V10_Dpair_D1876.first = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1876.rest = VNULL;
  _V10_Dpair_D1875.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1875.rest = VEncodePointer(&_V10_Dpair_D1871, VPOINTER_PAIR);
  _V10_Dpair_D1874.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1874.rest = VEncodePointer(&_V10_Dpair_D1872, VPOINTER_PAIR);
  _V10_Dpair_D1873.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1873.rest = VEncodePointer(&_V10_Dpair_D1872, VPOINTER_PAIR);
  _V10_Dpair_D1872.first = VEncodePointer(&_V10_Dpair_D1871, VPOINTER_PAIR);
  _V10_Dpair_D1872.rest = VNULL;
  _V10_Dpair_D1871.first = VEncodePointer(&_V10_Dpair_D1869, VPOINTER_PAIR);
  _V10_Dpair_D1871.rest = VEncodePointer(&_V10_Dpair_D1870, VPOINTER_PAIR);
  _V10_Dpair_D1870.first = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1870.rest = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1869.first = _V0expr_D90;
  _V10_Dpair_D1869.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1868.first = VEncodePointer(&_V10_Dpair_D1867, VPOINTER_PAIR);
  _V10_Dpair_D1868.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1867.first = VEncodeBool(false);
  _V10_Dpair_D1867.rest = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1866.first = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1866.rest = VNULL;
  _V10_Dpair_D1865.first = _V0_Mk;
  _V10_Dpair_D1865.rest = VEncodePointer(&_V10_Dpair_D1864, VPOINTER_PAIR);
  _V10_Dpair_D1864.first = _V0kk_D88;
  _V10_Dpair_D1864.rest = VNULL;
  _V10_Dpair_D1863.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1863.rest = VEncodePointer(&_V10_Dpair_D1862, VPOINTER_PAIR);
  _V10_Dpair_D1862.first = VEncodePointer(&_V10_Dpair_D1861, VPOINTER_PAIR);
  _V10_Dpair_D1862.rest = VNULL;
  _V10_Dpair_D1861.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1861.rest = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1860.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1860.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1859.first = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1859.rest = VNULL;
  _V10_Dpair_D1858.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1858.rest = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1857.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1857.rest = VEncodePointer(&_V10_Dpair_D1856, VPOINTER_PAIR);
  _V10_Dpair_D1856.first = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1856.rest = VNULL;
  _V10_Dpair_D1855.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1855.rest = VEncodePointer(&_V10_Dpair_D1854, VPOINTER_PAIR);
  _V10_Dpair_D1854.first = VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR);
  _V10_Dpair_D1854.rest = VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR);
  _V10_Dpair_D1853.first = VEncodePointer(&_V10_Dpair_D1849, VPOINTER_PAIR);
  _V10_Dpair_D1853.rest = VEncodePointer(&_V10_Dpair_D1852, VPOINTER_PAIR);
  _V10_Dpair_D1852.first = VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR);
  _V10_Dpair_D1852.rest = VNULL;
  _V10_Dpair_D1851.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1851.rest = VEncodePointer(&_V10_Dpair_D1850, VPOINTER_PAIR);
  _V10_Dpair_D1850.first = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1850.rest = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1849.first = VEncodePointer(&_V10_Dpair_D1843, VPOINTER_PAIR);
  _V10_Dpair_D1849.rest = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1848.first = VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR);
  _V10_Dpair_D1848.rest = VNULL;
  _V10_Dpair_D1847.first = _V0_Mk;
  _V10_Dpair_D1847.rest = VEncodePointer(&_V10_Dpair_D1846, VPOINTER_PAIR);
  _V10_Dpair_D1846.first = _V0expr_D89;
  _V10_Dpair_D1846.rest = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1845.first = _V0xs_D85;
  _V10_Dpair_D1845.rest = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1844.first = _V0vals_D86;
  _V10_Dpair_D1844.rest = VNULL;
  _V10_Dpair_D1843.first = _V0vanity;
  _V10_Dpair_D1843.rest = VEncodePointer(&_V10_Dpair_D1842, VPOINTER_PAIR);
  _V10_Dpair_D1842.first = _V0compiler;
  _V10_Dpair_D1842.rest = VEncodePointer(&_V10_Dpair_D1841, VPOINTER_PAIR);
  _V10_Dpair_D1841.first = _V0optimize;
  _V10_Dpair_D1841.rest = VEncodePointer(&_V10_Dpair_D1840, VPOINTER_PAIR);
  _V10_Dpair_D1840.first = _V0qualify__callsites;
  _V10_Dpair_D1840.rest = VEncodePointer(&_V10_Dpair_D1839, VPOINTER_PAIR);
  _V10_Dpair_D1839.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1839.rest = VEncodePointer(&_V10_Dpair_D1838, VPOINTER_PAIR);
  _V10_Dpair_D1838.first = _V10_Dloop_D268;
  _V10_Dpair_D1838.rest = VNULL;
  _V10_Dpair_D1837.first = VEncodePointer(&_V10_Dpair_D1836, VPOINTER_PAIR);
  _V10_Dpair_D1837.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1836.first = VEncodeBool(false);
  _V10_Dpair_D1836.rest = VEncodePointer(&_V10_Dpair_D1835, VPOINTER_PAIR);
  _V10_Dpair_D1835.first = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1835.rest = VNULL;
  _V10_Dpair_D1834.first = _V0_Mk;
  _V10_Dpair_D1834.rest = VEncodePointer(&_V10_Dpair_D1833, VPOINTER_PAIR);
  _V10_Dpair_D1833.first = _V0kk_D87;
  _V10_Dpair_D1833.rest = VNULL;
  _V10_Dpair_D1832.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1832.rest = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1831.first = VEncodePointer(&_V10_Dpair_D1830, VPOINTER_PAIR);
  _V10_Dpair_D1831.rest = VNULL;
  _V10_Dpair_D1830.first = VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR);
  _V10_Dpair_D1830.rest = VEncodePointer(&_V10_Dpair_D1823, VPOINTER_PAIR);
  _V10_Dpair_D1829.first = VEncodePointer(&_V10_Dpair_D1744, VPOINTER_PAIR);
  _V10_Dpair_D1829.rest = VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR);
  _V10_Dpair_D1828.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1828.rest = VEncodePointer(&_V10_Dpair_D1827, VPOINTER_PAIR);
  _V10_Dpair_D1827.first = VEncodePointer(&_V10_Dpair_D1826, VPOINTER_PAIR);
  _V10_Dpair_D1827.rest = VNULL;
  _V10_Dpair_D1826.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1826.rest = VEncodePointer(&_V10_Dpair_D1823, VPOINTER_PAIR);
  _V10_Dpair_D1825.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1825.rest = VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR);
  _V10_Dpair_D1824.first = VEncodePointer(&_V10_Dpair_D1823, VPOINTER_PAIR);
  _V10_Dpair_D1824.rest = VNULL;
  _V10_Dpair_D1823.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1823.rest = VEncodePointer(&_V10_Dpair_D1819, VPOINTER_PAIR);
  _V10_Dpair_D1822.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1822.rest = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1821.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1821.rest = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1820.first = VEncodePointer(&_V10_Dpair_D1819, VPOINTER_PAIR);
  _V10_Dpair_D1820.rest = VNULL;
  _V10_Dpair_D1819.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1819.rest = VEncodePointer(&_V10_Dpair_D1815, VPOINTER_PAIR);
  _V10_Dpair_D1818.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1818.rest = VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR);
  _V10_Dpair_D1817.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1817.rest = VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR);
  _V10_Dpair_D1816.first = VEncodePointer(&_V10_Dpair_D1815, VPOINTER_PAIR);
  _V10_Dpair_D1816.rest = VNULL;
  _V10_Dpair_D1815.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1815.rest = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1814.first = VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR);
  _V10_Dpair_D1814.rest = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1813.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1813.rest = VEncodePointer(&_V10_Dpair_D1812, VPOINTER_PAIR);
  _V10_Dpair_D1812.first = VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR);
  _V10_Dpair_D1812.rest = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1811.first = _V0expr_D92;
  _V10_Dpair_D1811.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1810.first = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1810.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1809.first = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1809.rest = VNULL;
  _V10_Dpair_D1808.first = VEncodePointer(&_V10_Dpair_D1801, VPOINTER_PAIR);
  _V10_Dpair_D1808.rest = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1807.first = VEncodePointer(&_V10_Dpair_D1803, VPOINTER_PAIR);
  _V10_Dpair_D1807.rest = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1806.first = VEncodePointer(&_V10_Dpair_D1804, VPOINTER_PAIR);
  _V10_Dpair_D1806.rest = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1805.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1805.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1804.first = _V0expr_D82;
  _V10_Dpair_D1804.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1803.first = _V0path;
  _V10_Dpair_D1803.rest = VEncodePointer(&_V10_Dpair_D1802, VPOINTER_PAIR);
  _V10_Dpair_D1802.first = _V0expr_D83;
  _V10_Dpair_D1802.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1801.first = _V0expr_D84;
  _V10_Dpair_D1801.rest = VNULL;
  _V10_Dpair_D1800.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1800.rest = VEncodePointer(&_V10_Dpair_D1799, VPOINTER_PAIR);
  _V10_Dpair_D1799.first = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1799.rest = VNULL;
  _V10_Dpair_D1798.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1798.rest = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1797.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1797.rest = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1796.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1796.rest = VEncodePointer(&_V10_Dpair_D1795, VPOINTER_PAIR);
  _V10_Dpair_D1795.first = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1795.rest = VNULL;
  _V10_Dpair_D1794.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1794.rest = VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR);
  _V10_Dpair_D1793.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1793.rest = VEncodePointer(&_V10_Dpair_D1792, VPOINTER_PAIR);
  _V10_Dpair_D1792.first = VEncodePointer(&_V10_Dpair_D1791, VPOINTER_PAIR);
  _V10_Dpair_D1792.rest = VNULL;
  _V10_Dpair_D1791.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1791.rest = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1790.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1790.rest = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1789.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1789.rest = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1788.first = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1788.rest = VNULL;
  _V10_Dpair_D1787.first = VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR);
  _V10_Dpair_D1787.rest = VEncodePointer(&_V10_Dpair_D1786, VPOINTER_PAIR);
  _V10_Dpair_D1786.first = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1786.rest = VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR);
  _V10_Dpair_D1785.first = _V0expr_D78;
  _V10_Dpair_D1785.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1784.first = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1784.rest = VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR);
  _V10_Dpair_D1783.first = VEncodeBool(false);
  _V10_Dpair_D1783.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1782.first = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1782.rest = VNULL;
  _V10_Dpair_D1781.first = _V0_Mk;
  _V10_Dpair_D1781.rest = VEncodePointer(&_V10_Dpair_D1780, VPOINTER_PAIR);
  _V10_Dpair_D1780.first = _V0kk_D76;
  _V10_Dpair_D1780.rest = VNULL;
  _V10_Dpair_D1779.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1779.rest = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1778.first = VEncodePointer(&_V10_Dpair_D1777, VPOINTER_PAIR);
  _V10_Dpair_D1778.rest = VNULL;
  _V10_Dpair_D1777.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1777.rest = VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR);
  _V10_Dpair_D1776.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1776.rest = VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR);
  _V10_Dpair_D1775.first = VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR);
  _V10_Dpair_D1775.rest = VNULL;
  _V10_Dpair_D1774.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1774.rest = VEncodePointer(&_V10_Dpair_D1771, VPOINTER_PAIR);
  _V10_Dpair_D1773.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1773.rest = VEncodePointer(&_V10_Dpair_D1772, VPOINTER_PAIR);
  _V10_Dpair_D1772.first = VEncodePointer(&_V10_Dpair_D1771, VPOINTER_PAIR);
  _V10_Dpair_D1772.rest = VNULL;
  _V10_Dpair_D1771.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1771.rest = VEncodePointer(&_V10_Dpair_D1770, VPOINTER_PAIR);
  _V10_Dpair_D1770.first = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1770.rest = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1769.first = VEncodePointer(&_V10_Dpair_D1765, VPOINTER_PAIR);
  _V10_Dpair_D1769.rest = VEncodePointer(&_V10_Dpair_D1768, VPOINTER_PAIR);
  _V10_Dpair_D1768.first = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1768.rest = VNULL;
  _V10_Dpair_D1767.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1767.rest = VEncodePointer(&_V10_Dpair_D1766, VPOINTER_PAIR);
  _V10_Dpair_D1766.first = VEncodePointer(&_V10_Dpair_D1750, VPOINTER_PAIR);
  _V10_Dpair_D1766.rest = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1765.first = VEncodePointer(&_V10_Dpair_D1759, VPOINTER_PAIR);
  _V10_Dpair_D1765.rest = VEncodePointer(&_V10_Dpair_D1764, VPOINTER_PAIR);
  _V10_Dpair_D1764.first = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1764.rest = VNULL;
  _V10_Dpair_D1763.first = _V0_Mk;
  _V10_Dpair_D1763.rest = VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR);
  _V10_Dpair_D1762.first = _V0expr_D77;
  _V10_Dpair_D1762.rest = VEncodePointer(&_V10_Dpair_D1761, VPOINTER_PAIR);
  _V10_Dpair_D1761.first = _V0xs_D73;
  _V10_Dpair_D1761.rest = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1760.first = _V0vals_D74;
  _V10_Dpair_D1760.rest = VNULL;
  _V10_Dpair_D1759.first = _V0vanity;
  _V10_Dpair_D1759.rest = VEncodePointer(&_V10_Dpair_D1758, VPOINTER_PAIR);
  _V10_Dpair_D1758.first = _V0compiler;
  _V10_Dpair_D1758.rest = VEncodePointer(&_V10_Dpair_D1757, VPOINTER_PAIR);
  _V10_Dpair_D1757.first = _V0optimize;
  _V10_Dpair_D1757.rest = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1756.first = _V0qualify__callsites;
  _V10_Dpair_D1756.rest = VEncodePointer(&_V10_Dpair_D1755, VPOINTER_PAIR);
  _V10_Dpair_D1755.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1755.rest = VEncodePointer(&_V10_Dpair_D1754, VPOINTER_PAIR);
  _V10_Dpair_D1754.first = _V10_Dloop_D244;
  _V10_Dpair_D1754.rest = VNULL;
  _V10_Dpair_D1753.first = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1753.rest = VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR);
  _V10_Dpair_D1752.first = VEncodeBool(false);
  _V10_Dpair_D1752.rest = VEncodePointer(&_V10_Dpair_D1751, VPOINTER_PAIR);
  _V10_Dpair_D1751.first = VEncodePointer(&_V10_Dpair_D1750, VPOINTER_PAIR);
  _V10_Dpair_D1751.rest = VNULL;
  _V10_Dpair_D1750.first = _V0_Mk;
  _V10_Dpair_D1750.rest = VEncodePointer(&_V10_Dpair_D1749, VPOINTER_PAIR);
  _V10_Dpair_D1749.first = _V0kk_D75;
  _V10_Dpair_D1749.rest = VNULL;
  _V10_Dpair_D1748.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1748.rest = VEncodePointer(&_V10_Dpair_D1747, VPOINTER_PAIR);
  _V10_Dpair_D1747.first = VEncodePointer(&_V10_Dpair_D1746, VPOINTER_PAIR);
  _V10_Dpair_D1747.rest = VNULL;
  _V10_Dpair_D1746.first = VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR);
  _V10_Dpair_D1746.rest = VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR);
  _V10_Dpair_D1745.first = VEncodePointer(&_V10_Dpair_D1744, VPOINTER_PAIR);
  _V10_Dpair_D1745.rest = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1744.first = VEncodeBool(false);
  _V10_Dpair_D1744.rest = VEncodePointer(&_V10_Dpair_D1743, VPOINTER_PAIR);
  _V10_Dpair_D1743.first = VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR);
  _V10_Dpair_D1743.rest = VNULL;
  _V10_Dpair_D1742.first = _V0_Mk;
  _V10_Dpair_D1742.rest = VEncodePointer(&_V10_Dpair_D1741, VPOINTER_PAIR);
  _V10_Dpair_D1741.first = _V0x;
  _V10_Dpair_D1741.rest = VEncodePointer(&_V10_Dpair_D1740, VPOINTER_PAIR);
  _V10_Dpair_D1740.first = _V0val;
  _V10_Dpair_D1740.rest = VNULL;
  _V10_Dpair_D1739.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1739.rest = VEncodePointer(&_V10_Dpair_D1738, VPOINTER_PAIR);
  _V10_Dpair_D1738.first = VEncodePointer(&_V10_Dpair_D1737, VPOINTER_PAIR);
  _V10_Dpair_D1738.rest = VNULL;
  _V10_Dpair_D1737.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1737.rest = VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR);
  _V10_Dpair_D1736.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1736.rest = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1735.first = VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR);
  _V10_Dpair_D1735.rest = VNULL;
  _V10_Dpair_D1734.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1734.rest = VEncodePointer(&_V10_Dpair_D1730, VPOINTER_PAIR);
  _V10_Dpair_D1733.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1733.rest = VEncodePointer(&_V10_Dpair_D1731, VPOINTER_PAIR);
  _V10_Dpair_D1732.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1732.rest = VEncodePointer(&_V10_Dpair_D1731, VPOINTER_PAIR);
  _V10_Dpair_D1731.first = VEncodePointer(&_V10_Dpair_D1730, VPOINTER_PAIR);
  _V10_Dpair_D1731.rest = VNULL;
  _V10_Dpair_D1730.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1730.rest = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1729.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1729.rest = VEncodePointer(&_V10_Dpair_D1727, VPOINTER_PAIR);
  _V10_Dpair_D1728.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1728.rest = VEncodePointer(&_V10_Dpair_D1727, VPOINTER_PAIR);
  _V10_Dpair_D1727.first = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1727.rest = VNULL;
  _V10_Dpair_D1726.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1726.rest = VEncodePointer(&_V10_Dpair_D1725, VPOINTER_PAIR);
  _V10_Dpair_D1725.first = VEncodePointer(&_V10_Dpair_D1722, VPOINTER_PAIR);
  _V10_Dpair_D1725.rest = VEncodePointer(&_V10_Dpair_D1724, VPOINTER_PAIR);
  _V10_Dpair_D1724.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1724.rest = VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR);
  _V10_Dpair_D1723.first = VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR);
  _V10_Dpair_D1723.rest = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1722.first = _V0expr_D80;
  _V10_Dpair_D1722.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1721.first = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1721.rest = VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR);
  _V10_Dpair_D1720.first = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1720.rest = VNULL;
  _V10_Dpair_D1719.first = VEncodePointer(&_V10_Dpair_D1715, VPOINTER_PAIR);
  _V10_Dpair_D1719.rest = VEncodePointer(&_V10_Dpair_D1718, VPOINTER_PAIR);
  _V10_Dpair_D1718.first = VEncodePointer(&_V10_Dpair_D1716, VPOINTER_PAIR);
  _V10_Dpair_D1718.rest = VEncodePointer(&_V10_Dpair_D1717, VPOINTER_PAIR);
  _V10_Dpair_D1717.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1717.rest = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1716.first = _V0expr_D71;
  _V10_Dpair_D1716.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1715.first = _V0expr_D72;
  _V10_Dpair_D1715.rest = VNULL;
  _V10_Dpair_D1714.first = VEncodeBool(false);
  _V10_Dpair_D1714.rest = VEncodePointer(&_V10_Dpair_D1713, VPOINTER_PAIR);
  _V10_Dpair_D1713.first = VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR);
  _V10_Dpair_D1713.rest = VNULL;
  _V10_Dpair_D1712.first = _V0tail__expr;
  _V10_Dpair_D1712.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D1711.first = _V0xs;
  _V10_Dpair_D1711.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1710.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1710.rest = VEncodePointer(&_V10_Dpair_D1709, VPOINTER_PAIR);
  _V10_Dpair_D1709.first = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1709.rest = VNULL;
  _V10_Dpair_D1708.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1708.rest = VEncodePointer(&_V10_Dpair_D1707, VPOINTER_PAIR);
  _V10_Dpair_D1707.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1707.rest = VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR);
  _V10_Dpair_D1706.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1706.rest = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1705.first = VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR);
  _V10_Dpair_D1705.rest = VNULL;
  _V10_Dpair_D1704.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1704.rest = VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR);
  _V10_Dpair_D1703.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1703.rest = VEncodePointer(&_V10_Dpair_D1702, VPOINTER_PAIR);
  _V10_Dpair_D1702.first = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1702.rest = VNULL;
  _V10_Dpair_D1701.first = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1701.rest = VEncodePointer(&_V10_Dpair_D1700, VPOINTER_PAIR);
  _V10_Dpair_D1700.first = VEncodePointer(&_V10_Dpair_D1696, VPOINTER_PAIR);
  _V10_Dpair_D1700.rest = VEncodePointer(&_V10_Dpair_D1692, VPOINTER_PAIR);
  _V10_Dpair_D1699.first = VEncodePointer(&_V10_Dpair_D1698, VPOINTER_PAIR);
  _V10_Dpair_D1699.rest = VEncodePointer(&_V10_Dpair_D1693, VPOINTER_PAIR);
  _V10_Dpair_D1698.first = VEncodeBool(false);
  _V10_Dpair_D1698.rest = VEncodePointer(&_V10_Dpair_D1697, VPOINTER_PAIR);
  _V10_Dpair_D1697.first = VEncodePointer(&_V10_Dpair_D1696, VPOINTER_PAIR);
  _V10_Dpair_D1697.rest = VNULL;
  _V10_Dpair_D1696.first = _V0_Mk;
  _V10_Dpair_D1696.rest = VEncodePointer(&_V10_Dpair_D1695, VPOINTER_PAIR);
  _V10_Dpair_D1695.first = _V0kk_D68;
  _V10_Dpair_D1695.rest = VNULL;
  _V10_Dpair_D1694.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1694.rest = VEncodePointer(&_V10_Dpair_D1693, VPOINTER_PAIR);
  _V10_Dpair_D1693.first = VEncodePointer(&_V10_Dpair_D1692, VPOINTER_PAIR);
  _V10_Dpair_D1693.rest = VNULL;
  _V10_Dpair_D1692.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1692.rest = VEncodePointer(&_V10_Dpair_D1689, VPOINTER_PAIR);
  _V10_Dpair_D1691.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1691.rest = VEncodePointer(&_V10_Dpair_D1690, VPOINTER_PAIR);
  _V10_Dpair_D1690.first = VEncodePointer(&_V10_Dpair_D1689, VPOINTER_PAIR);
  _V10_Dpair_D1690.rest = VNULL;
  _V10_Dpair_D1689.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1689.rest = VEncodePointer(&_V10_Dpair_D1688, VPOINTER_PAIR);
  _V10_Dpair_D1688.first = VEncodePointer(&_V10_Dpair_D1681, VPOINTER_PAIR);
  _V10_Dpair_D1688.rest = VEncodePointer(&_V10_Dpair_D1685, VPOINTER_PAIR);
  _V10_Dpair_D1687.first = VEncodePointer(&_V10_Dpair_D1683, VPOINTER_PAIR);
  _V10_Dpair_D1687.rest = VEncodePointer(&_V10_Dpair_D1686, VPOINTER_PAIR);
  _V10_Dpair_D1686.first = VEncodePointer(&_V10_Dpair_D1685, VPOINTER_PAIR);
  _V10_Dpair_D1686.rest = VNULL;
  _V10_Dpair_D1685.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1685.rest = VEncodePointer(&_V10_Dpair_D1684, VPOINTER_PAIR);
  _V10_Dpair_D1684.first = VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR);
  _V10_Dpair_D1684.rest = VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR);
  _V10_Dpair_D1683.first = VEncodePointer(&_V10_Dpair_D1678, VPOINTER_PAIR);
  _V10_Dpair_D1683.rest = VEncodePointer(&_V10_Dpair_D1682, VPOINTER_PAIR);
  _V10_Dpair_D1682.first = VEncodePointer(&_V10_Dpair_D1681, VPOINTER_PAIR);
  _V10_Dpair_D1682.rest = VNULL;
  _V10_Dpair_D1681.first = _V0_Mk;
  _V10_Dpair_D1681.rest = VEncodePointer(&_V10_Dpair_D1680, VPOINTER_PAIR);
  _V10_Dpair_D1680.first = _V0expr_D69;
  _V10_Dpair_D1680.rest = VEncodePointer(&_V10_Dpair_D1679, VPOINTER_PAIR);
  _V10_Dpair_D1679.first = _V0vals_D66;
  _V10_Dpair_D1679.rest = VNULL;
  _V10_Dpair_D1678.first = _V0vanity;
  _V10_Dpair_D1678.rest = VEncodePointer(&_V10_Dpair_D1677, VPOINTER_PAIR);
  _V10_Dpair_D1677.first = _V0compiler;
  _V10_Dpair_D1677.rest = VEncodePointer(&_V10_Dpair_D1676, VPOINTER_PAIR);
  _V10_Dpair_D1676.first = _V0optimize;
  _V10_Dpair_D1676.rest = VEncodePointer(&_V10_Dpair_D1675, VPOINTER_PAIR);
  _V10_Dpair_D1675.first = _V0qualify__callsites;
  _V10_Dpair_D1675.rest = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1674.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1674.rest = VEncodePointer(&_V10_Dpair_D1673, VPOINTER_PAIR);
  _V10_Dpair_D1673.first = _V10_Dloop_D231;
  _V10_Dpair_D1673.rest = VNULL;
  _V10_Dpair_D1672.first = VEncodePointer(&_V10_Dpair_D1671, VPOINTER_PAIR);
  _V10_Dpair_D1672.rest = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1671.first = VEncodeBool(false);
  _V10_Dpair_D1671.rest = VEncodePointer(&_V10_Dpair_D1670, VPOINTER_PAIR);
  _V10_Dpair_D1670.first = VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR);
  _V10_Dpair_D1670.rest = VNULL;
  _V10_Dpair_D1669.first = _V0_Mk;
  _V10_Dpair_D1669.rest = VEncodePointer(&_V10_Dpair_D1668, VPOINTER_PAIR);
  _V10_Dpair_D1668.first = _V0kk_D67;
  _V10_Dpair_D1668.rest = VNULL;
  _V10_Dpair_D1667.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1667.rest = VEncodePointer(&_V10_Dpair_D1666, VPOINTER_PAIR);
  _V10_Dpair_D1666.first = VEncodePointer(&_V10_Dpair_D1665, VPOINTER_PAIR);
  _V10_Dpair_D1666.rest = VNULL;
  _V10_Dpair_D1665.first = VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR);
  _V10_Dpair_D1665.rest = VEncodePointer(&_V10_Dpair_D1664, VPOINTER_PAIR);
  _V10_Dpair_D1664.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1664.rest = VEncodePointer(&_V10_Dpair_D1659, VPOINTER_PAIR);
  _V10_Dpair_D1663.first = _V0_Mx;
  _V10_Dpair_D1663.rest = VEncodePointer(&_V10_Dpair_D1662, VPOINTER_PAIR);
  _V10_Dpair_D1662.first = _V0_Mx;
  _V10_Dpair_D1662.rest = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1661.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1661.rest = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1660.first = VEncodePointer(&_V10_Dpair_D1659, VPOINTER_PAIR);
  _V10_Dpair_D1660.rest = VNULL;
  _V10_Dpair_D1659.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1659.rest = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1658.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1658.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1657.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1657.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1656.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1656.rest = VNULL;
  _V10_Dpair_D1655.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1655.rest = VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR);
  _V10_Dpair_D1654.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1654.rest = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1653.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1653.rest = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1652.first = VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR);
  _V10_Dpair_D1652.rest = VNULL;
  _V10_Dpair_D1651.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1651.rest = VEncodePointer(&_V10_Dpair_D1650, VPOINTER_PAIR);
  _V10_Dpair_D1650.first = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1650.rest = VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR);
  _V10_Dpair_D1649.first = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1649.rest = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1648.first = VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR);
  _V10_Dpair_D1648.rest = VNULL;
  _V10_Dpair_D1647.first = VEncodePointer(&_V10_Dpair_D1633, VPOINTER_PAIR);
  _V10_Dpair_D1647.rest = VEncodePointer(&_V10_Dpair_D1646, VPOINTER_PAIR);
  _V10_Dpair_D1646.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1646.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1645.first = VEncodePointer(&_V10_Dpair_D1635, VPOINTER_PAIR);
  _V10_Dpair_D1645.rest = VEncodePointer(&_V10_Dpair_D1644, VPOINTER_PAIR);
  _V10_Dpair_D1644.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1644.rest = VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR);
  _V10_Dpair_D1643.first = VEncodePointer(&_V10_Dpair_D1639, VPOINTER_PAIR);
  _V10_Dpair_D1643.rest = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1642.first = VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR);
  _V10_Dpair_D1642.rest = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1641.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1641.rest = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1640.first = _V0expr_D61;
  _V10_Dpair_D1640.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1639.first = _V0name;
  _V10_Dpair_D1639.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1638.first = _V0expr_D62;
  _V10_Dpair_D1638.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1637.first = _V0static_Q;
  _V10_Dpair_D1637.rest = VEncodePointer(&_V10_Dpair_D1636, VPOINTER_PAIR);
  _V10_Dpair_D1636.first = _V0expr_D63;
  _V10_Dpair_D1636.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1635.first = _V0xs;
  _V10_Dpair_D1635.rest = VEncodePointer(&_V10_Dpair_D1634, VPOINTER_PAIR);
  _V10_Dpair_D1634.first = _V0expr_D64;
  _V10_Dpair_D1634.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1633.first = _V0expr_D65;
  _V10_Dpair_D1633.rest = VNULL;
  _V10_Dpair_D1632.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1632.rest = VEncodePointer(&_V10_Dpair_D1631, VPOINTER_PAIR);
  _V10_Dpair_D1631.first = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1631.rest = VNULL;
  _V10_Dpair_D1630.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1630.rest = VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR);
  _V10_Dpair_D1629.first = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1629.rest = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D1628.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1628.rest = VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR);
  _V10_Dpair_D1627.first = _V0expr_D60;
  _V10_Dpair_D1627.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1626.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1626.rest = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D1625.first = VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR);
  _V10_Dpair_D1625.rest = VNULL;
  _V10_Dpair_D1624.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1624.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1623.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1623.rest = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1622.first = VEncodePointer(&_V10_Dpair_D1621, VPOINTER_PAIR);
  _V10_Dpair_D1622.rest = VNULL;
  _V10_Dpair_D1621.first = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1621.rest = VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR);
  _V10_Dpair_D1620.first = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1620.rest = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1619.first = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1619.rest = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1618.first = VEncodeBool(false);
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1617.rest = VNULL;
  _V10_Dpair_D1616.first = _V0_Mk;
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = _V0kk_D57;
  _V10_Dpair_D1615.rest = VNULL;
  _V10_Dpair_D1614.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1613.first = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1613.rest = VNULL;
  _V10_Dpair_D1612.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1612.rest = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1611.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1611.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1610.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1610.rest = VNULL;
  _V10_Dpair_D1609.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR);
  _V10_Dpair_D1608.first = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1607.rest = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1606.first = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1606.rest = VNULL;
  _V10_Dpair_D1605.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1605.rest = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1604.first = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1604.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1603.first = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1603.rest = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1602.first = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1602.rest = VNULL;
  _V10_Dpair_D1601.first = _V0_Mk;
  _V10_Dpair_D1601.rest = VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR);
  _V10_Dpair_D1600.first = _V0expr_D58;
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = _V0vals_D55;
  _V10_Dpair_D1599.rest = VNULL;
  _V10_Dpair_D1598.first = _V0vanity;
  _V10_Dpair_D1598.rest = VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR);
  _V10_Dpair_D1597.first = _V0compiler;
  _V10_Dpair_D1597.rest = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1596.first = _V0optimize;
  _V10_Dpair_D1596.rest = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1595.first = _V0qualify__callsites;
  _V10_Dpair_D1595.rest = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1594.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1593, VPOINTER_PAIR);
  _V10_Dpair_D1593.first = _V10_Dloop_D210;
  _V10_Dpair_D1593.rest = VNULL;
  _V10_Dpair_D1592.first = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1592.rest = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1591.first = VEncodeBool(false);
  _V10_Dpair_D1591.rest = VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR);
  _V10_Dpair_D1590.first = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1590.rest = VNULL;
  _V10_Dpair_D1589.first = _V0_Mk;
  _V10_Dpair_D1589.rest = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1588.first = _V0kk_D56;
  _V10_Dpair_D1588.rest = VNULL;
  _V10_Dpair_D1587.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1587.rest = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1586.first = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1586.rest = VNULL;
  _V10_Dpair_D1585.first = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1585.rest = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1584.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1584.rest = VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR);
  _V10_Dpair_D1583.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1583.rest = VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR);
  _V10_Dpair_D1582.first = VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR);
  _V10_Dpair_D1582.rest = VNULL;
  _V10_Dpair_D1581.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1581.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1580.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1580.rest = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1579.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1579.rest = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1578.first = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1578.rest = VNULL;
  _V10_Dpair_D1577.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1577.rest = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D1576.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1575.rest = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1574.first = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D1574.rest = VNULL;
  _V10_Dpair_D1573.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1573.rest = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1572.first = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1572.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1571.first = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1571.rest = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1570.first = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1570.rest = VNULL;
  _V10_Dpair_D1569.first = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1569.rest = VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR);
  _V10_Dpair_D1568.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1568.rest = VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR);
  _V10_Dpair_D1567.first = VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR);
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1566.rest = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1565.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1565.rest = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1564.first = _V0expr_D52;
  _V10_Dpair_D1564.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1563.first = _V0xs;
  _V10_Dpair_D1563.rest = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1562.first = _V0expr_D53;
  _V10_Dpair_D1562.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1561.first = _V0expr_D54;
  _V10_Dpair_D1561.rest = VNULL;
  _V10_Dpair_D1560.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1560.rest = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1559.first = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1559.rest = VNULL;
  _V10_Dpair_D1558.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1558.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1557.first = VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR);
  _V10_Dpair_D1557.rest = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1556.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1556.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1555.first = _V0expr_D51;
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1554.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1554.rest = VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR);
  _V10_Dpair_D1553.first = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1553.rest = VNULL;
  _V10_Dpair_D1552.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1552.rest = VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR);
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR);
  _V10_Dpair_D1550.rest = VNULL;
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1548.first = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1548.rest = VEncodePointer(&_V10_Dpair_D1539, VPOINTER_PAIR);
  _V10_Dpair_D1547.first = _V0vals;
  _V10_Dpair_D1547.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1546.first = VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR);
  _V10_Dpair_D1546.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1545.first = VEncodeBool(false);
  _V10_Dpair_D1545.rest = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1544.first = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1544.rest = VNULL;
  _V10_Dpair_D1543.first = _V0_Mk;
  _V10_Dpair_D1543.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1542.first = _V0kk_D48;
  _V10_Dpair_D1542.rest = VNULL;
  _V10_Dpair_D1541.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = VEncodePointer(&_V10_Dpair_D1539, VPOINTER_PAIR);
  _V10_Dpair_D1540.rest = VNULL;
  _V10_Dpair_D1539.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1539.rest = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1538.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VNULL;
  _V10_Dpair_D1536.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1536.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1535.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1535.rest = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1534.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1534.rest = VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1533.rest = VNULL;
  _V10_Dpair_D1532.first = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1532.rest = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1531.first = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1531.rest = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1530.first = _V0loop;
  _V10_Dpair_D1530.rest = VNULL;
  _V10_Dpair_D1529.first = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1529.rest = VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR);
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VNULL;
  _V10_Dpair_D1527.first = _V0_Mk;
  _V10_Dpair_D1527.rest = VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR);
  _V10_Dpair_D1526.first = _V0expr_D49;
  _V10_Dpair_D1526.rest = VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR);
  _V10_Dpair_D1525.first = _V0vals_D46;
  _V10_Dpair_D1525.rest = VNULL;
  _V10_Dpair_D1524.first = _V0vanity;
  _V10_Dpair_D1524.rest = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1523.first = _V0compiler;
  _V10_Dpair_D1523.rest = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1522.first = _V0optimize;
  _V10_Dpair_D1522.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1521.first = _V0qualify__callsites;
  _V10_Dpair_D1521.rest = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1520.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = _V10_Dloop_D193;
  _V10_Dpair_D1519.rest = VNULL;
  _V10_Dpair_D1518.first = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1518.rest = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1517.first = VEncodeBool(false);
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1516.rest = VNULL;
  _V10_Dpair_D1515.first = _V0_Mk;
  _V10_Dpair_D1515.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1514.first = _V0kk_D47;
  _V10_Dpair_D1514.rest = VNULL;
  _V10_Dpair_D1513.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1513.rest = VEncodePointer(&_V10_Dpair_D1512, VPOINTER_PAIR);
  _V10_Dpair_D1512.first = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1512.rest = VNULL;
  _V10_Dpair_D1511.first = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1511.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1510.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1510.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1509.first = _V0_Mx;
  _V10_Dpair_D1509.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1508.first = _V0_Mx;
  _V10_Dpair_D1508.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1507.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1506.rest = VNULL;
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR);
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1503.first = VEncodeBool(false);
  _V10_Dpair_D1503.rest = VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1502.rest = VNULL;
  _V10_Dpair_D1501.first = _V0_Mk;
  _V10_Dpair_D1501.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1500.first = _V0new__vals;
  _V10_Dpair_D1500.rest = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1499.first = _V0new__qualified__funcs;
  _V10_Dpair_D1499.rest = VNULL;
  _V10_Dpair_D1498.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1498.rest = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1497.first = VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR);
  _V10_Dpair_D1497.rest = VNULL;
  _V10_Dpair_D1496.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1494.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1494.rest = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1493.first = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1493.rest = VNULL;
  _V10_Dpair_D1492.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1492.rest = VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR);
  _V10_Dpair_D1491.first = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1491.rest = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1490.first = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1490.rest = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1489.first = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1489.rest = VNULL;
  _V10_Dpair_D1488.first = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1488.rest = VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR);
  _V10_Dpair_D1487.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR);
  _V10_Dpair_D1486.rest = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1485.first = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1484, VPOINTER_PAIR);
  _V10_Dpair_D1484.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1484.rest = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1483.first = _V0expr_D43;
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = _V0xs;
  _V10_Dpair_D1482.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1481.first = _V0expr_D44;
  _V10_Dpair_D1481.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1480.first = _V0expr_D45;
  _V10_Dpair_D1480.rest = VNULL;
  _V10_Dpair_D1479.first = VEncodeBool(false);
  _V10_Dpair_D1479.rest = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1478.first = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1478.rest = VNULL;
  _V10_Dpair_D1477.first = _V0tail__expr;
  _V10_Dpair_D1477.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = _V0vals;
  _V10_Dpair_D1476.rest = VNULL;
  _V10_Dpair_D1475.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1474.rest = VNULL;
  _V10_Dpair_D1473.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1473.rest = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1472.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR);
  _V10_Dpair_D1470.first = _V0expr_D42;
  _V10_Dpair_D1470.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1469.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1469.rest = VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR);
  _V10_Dpair_D1468.first = VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR);
  _V10_Dpair_D1468.rest = VNULL;
  _V10_Dpair_D1467.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1467.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1466.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1466.rest = VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VNULL;
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VNULL;
  _V10_Dpair_D1460.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = _V0expr_D40;
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1455.rest = VNULL;
  _V10_Dpair_D1454.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1454.rest = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1453.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1453.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VNULL;
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1448.rest = VNULL;
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1446.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1444.first = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1444.rest = VNULL;
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1441.first = VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR);
  _V10_Dpair_D1441.rest = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1440.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1440.rest = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1439.first = _V0expr_D37;
  _V10_Dpair_D1439.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1438.first = _V0xs;
  _V10_Dpair_D1438.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1437.first = _V0expr_D38;
  _V10_Dpair_D1437.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VNULL;
  _V10_Dpair_D1434.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1432.rest = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VNULL;
  _V10_Dpair_D1430.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1428.first = VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR);
  _V10_Dpair_D1428.rest = VNULL;
  _V10_Dpair_D1427.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1427.rest = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VNULL;
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VNULL;
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VNULL;
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1414.rest = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1411.first = _V0expr_D34;
  _V10_Dpair_D1411.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1410.first = _V0name;
  _V10_Dpair_D1410.rest = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1409.first = _V0expr_D35;
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = _V0static_Q;
  _V10_Dpair_D1408.rest = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1407.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1407.rest = VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR);
  _V10_Dpair_D1406.first = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1406.rest = VNULL;
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1403.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1403.rest = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VNULL;
  _V10_Dpair_D1401.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1401.rest = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR);
  _V10_Dpair_D1399.first = VEncodePointer(&_V10_Dpair_D1398, VPOINTER_PAIR);
  _V10_Dpair_D1399.rest = VNULL;
  _V10_Dpair_D1398.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1398.rest = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VNULL;
  _V10_Dpair_D1395.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1395.rest = VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR);
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR);
  _V10_Dpair_D1393.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1393.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1392.first = VEncodeBool(false);
  _V10_Dpair_D1392.rest = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1391.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1391.rest = VNULL;
  _V10_Dpair_D1390.first = _V0_Mk;
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1389.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1388.first = VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR);
  _V10_Dpair_D1388.rest = VNULL;
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1386.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1386.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1384.first = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1384.rest = VNULL;
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1382.rest = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1381.first = _V0cases;
  _V10_Dpair_D1381.rest = VNULL;
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1379.first = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1379.rest = VNULL;
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1377.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1377.rest = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1376.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1376.rest = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1375.first = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1375.rest = VNULL;
  _V10_Dpair_D1374.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1374.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1373.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1373.rest = VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR);
  _V10_Dpair_D1372.first = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1372.rest = VNULL;
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1370.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1370.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VNULL;
  _V10_Dpair_D1367.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1367.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1366.first = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1366.rest = VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR);
  _V10_Dpair_D1365.first = VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR);
  _V10_Dpair_D1365.rest = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1364.first = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1364.rest = VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR);
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VEncodePointer(&_V10_Dpair_D1362, VPOINTER_PAIR);
  _V10_Dpair_D1362.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1362.rest = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1361.first = _V0expr_D28;
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = _V0name;
  _V10_Dpair_D1360.rest = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1359.first = _V0expr_D29;
  _V10_Dpair_D1359.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1358.first = _V0static_Q;
  _V10_Dpair_D1358.rest = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1357.first = _V0expr_D30;
  _V10_Dpair_D1357.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1356.first = _V0xs;
  _V10_Dpair_D1356.rest = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1355.first = _V0expr_D31;
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1354.rest = VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR);
  _V10_Dpair_D1353.first = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1353.rest = VNULL;
  _V10_Dpair_D1352.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1352.rest = VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR);
  _V10_Dpair_D1351.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1351.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1349.first = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1349.rest = VNULL;
  _V10_Dpair_D1348.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1348.rest = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1347.first = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1347.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1346.first = VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR);
  _V10_Dpair_D1346.rest = VNULL;
  _V10_Dpair_D1345.first = _V0unquote;
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = _V0unmangled__env;
  _V10_Dpair_D1344.rest = VNULL;
  _V10_Dpair_D1343.first = VEncodeBool(false);
  _V10_Dpair_D1343.rest = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1342.first = _V0_U;
  _V10_Dpair_D1342.rest = VNULL;
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VNULL;
  _V10_Dpair_D1339.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1338.rest = VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR);
  _V10_Dpair_D1337.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1337.rest = VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR);
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VNULL;
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1334.first = VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR);
  _V10_Dpair_D1334.rest = VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR);
  _V10_Dpair_D1333.first = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1332.rest = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1331.first = _V0expr_D25;
  _V10_Dpair_D1331.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1330.first = _V0xs;
  _V10_Dpair_D1330.rest = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1329.first = _V0expr_D26;
  _V10_Dpair_D1329.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1328.first = _V0body;
  _V10_Dpair_D1328.rest = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1327.first = _V0_Mx;
  _V10_Dpair_D1327.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VNULL;
  _V10_Dpair_D1324.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1323.rest = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1322.first = VEncodeBool(false);
  _V10_Dpair_D1322.rest = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1321.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1321.rest = VNULL;
  _V10_Dpair_D1320.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1320.rest = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1319.first = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1319.rest = VNULL;
  _V10_Dpair_D1318.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1318.rest = VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR);
  _V10_Dpair_D1317.first = VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR);
  _V10_Dpair_D1317.rest = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1316.first = _V0_Mp;
  _V10_Dpair_D1316.rest = VNULL;
  _V10_Dpair_D1315.first = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1315.rest = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VNULL;
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1312.first = VEncodeBool(false);
  _V10_Dpair_D1312.rest = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1311.first = VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR);
  _V10_Dpair_D1311.rest = VNULL;
  _V10_Dpair_D1310.first = _V0_Mk;
  _V10_Dpair_D1310.rest = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1309.first = _V0kk_D22;
  _V10_Dpair_D1309.rest = VNULL;
  _V10_Dpair_D1308.first = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1308.rest = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1307.first = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1307.rest = VNULL;
  _V10_Dpair_D1306.first = VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR);
  _V10_Dpair_D1306.rest = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1305.first = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1305.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1304.first = _V0qualify__iter;
  _V10_Dpair_D1304.rest = VNULL;
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1302.first = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1302.rest = VNULL;
  _V10_Dpair_D1301.first = _V0_Mk;
  _V10_Dpair_D1301.rest = VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR);
  _V10_Dpair_D1300.first = _V0current__qualname;
  _V10_Dpair_D1300.rest = VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = _V0qualified__funcs;
  _V10_Dpair_D1299.rest = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1298.first = _V0vanity;
  _V10_Dpair_D1298.rest = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1297.first = _V0compiler;
  _V10_Dpair_D1297.rest = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1296.first = _V0optimize;
  _V10_Dpair_D1296.rest = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1295.first = _V0qualify__callsites;
  _V10_Dpair_D1295.rest = VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR);
  _V10_Dpair_D1294.first = _V10_Dqualify__iter_D147;
  _V10_Dpair_D1294.rest = VNULL;
  _V10_Dpair_D1293.first = VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR);
  _V10_Dpair_D1293.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1292.first = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1292.rest = VNULL;
  _V10_Dpair_D1291.first = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1291.rest = VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR);
  _V10_Dpair_D1290.first = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1290.rest = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1289.first = _V0qualify__callsites;
  _V10_Dpair_D1289.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1288.first = _V0scan__bindings;
  _V10_Dpair_D1288.rest = VNULL;
  _V10_Dpair_D1287.first = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1287.rest = VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR);
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VNULL;
  _V10_Dpair_D1285.first = _V0_Mk;
  _V10_Dpair_D1285.rest = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1284.first = _V0expr;
  _V10_Dpair_D1284.rest = VNULL;
  _V10_Dpair_D1283.first = _V0vanity;
  _V10_Dpair_D1283.rest = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1282.first = _V0compiler;
  _V10_Dpair_D1282.rest = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1281.first = _V0optimize;
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = _V0qualify__callsites;
  _V10_Dpair_D1280.rest = VNULL;
  _V10_Dpair_D1279.first = VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR);
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1278.rest = VNULL;
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1276.first = VEncodeBool(false);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VNULL;
  _V10_Dpair_D1274.first = _V0equal_Q;
  _V10_Dpair_D1274.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1273.first = _V0num__pairs;
  _V10_Dpair_D1273.rest = VEncodePointer(&_V10_Dpair_D1272, VPOINTER_PAIR);
  _V10_Dpair_D1272.first = _V0list;
  _V10_Dpair_D1272.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1271.first = _V0append;
  _V10_Dpair_D1271.rest = VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR);
  _V10_Dpair_D1270.first = _V0split__at__right;
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = _V0assv;
  _V10_Dpair_D1269.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1268.first = _V0cadr;
  _V10_Dpair_D1268.rest = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1267.first = _V0caddr;
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = _V0map;
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = _V0reverse;
  _V10_Dpair_D1265.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1264.first = _V0compiler__error;
  _V10_Dpair_D1264.rest = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1263.first = _V0variable__pure_Q;
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = _V0any_Q;
  _V10_Dpair_D1262.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1261.first = _V0fold;
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR);
  _V10_Dpair_D1260.first = _V0values;
  _V10_Dpair_D1260.rest = VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR);
  _V10_Dpair_D1259.first = _V0error;
  _V10_Dpair_D1259.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D1258.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1258.rest = VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR);
  _V10_Dpair_D1257.first = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1257.rest = VNULL;
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VNULL;
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VNULL;
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VNULL;
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VNULL;
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VNULL;
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VNULL;
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VNULL;
  _V10_Dpair_D1235.first = VEncodeBool(false);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VNULL;
  _V10_Dpair_D1233.first = _V0_Mx;
  _V10_Dpair_D1233.rest = VNULL;
  _V10_Dpair_D1232.first = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = VNULL;
  _V10_Dpair_D1231.rest = VNULL;
  _V10_Dpair_D1230.first = VEncodeBool(false);
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VNULL;
  _V10_Dpair_D1228.first = _V0_Mk;
  _V10_Dpair_D1228.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11, VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12, VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4, VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10, VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9, VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16, VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17, VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5, VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15, VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14, VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21, VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22, VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24, VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23, VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7, VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6, VEncodePointer(&_V10_Dpair_D1386, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20, VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19, VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28, VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29, VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31, VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30, VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9, VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8, VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27, VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26, VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35, VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36, VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10, VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34, VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33, VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40, VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41, VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11, VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39, VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38, VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45, VEncodePointer(&_V10_Dpair_D1494, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14, VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47, VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46, VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15, VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13, VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12, VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49, VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52, VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18, VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, VEncodePointer(&_V10_Dpair_D1534, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16, VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44, VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43, VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56, VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21, VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58, VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57, VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22, VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20, VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19, VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60, VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59, VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63, VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25, VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24, VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23, VEncodePointer(&_V10_Dpair_D1592, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55, VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54, VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67, VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28, VEncodePointer(&_V10_Dpair_D1657, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69, VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68, VEncodePointer(&_V10_Dpair_D1661, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29, VEncodePointer(&_V10_Dpair_D1658, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27, VEncodePointer(&_V10_Dpair_D1654, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26, VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71, VEncodePointer(&_V10_Dpair_D1694, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70, VEncodePointer(&_V10_Dpair_D1691, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74, VEncodePointer(&_V10_Dpair_D1703, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32, VEncodePointer(&_V10_Dpair_D1699, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31, VEncodePointer(&_V10_Dpair_D1691, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, VEncodePointer(&_V10_Dpair_D1687, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30, VEncodePointer(&_V10_Dpair_D1672, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66, VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65, VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78, VEncodePointer(&_V10_Dpair_D1728, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35, VEncodePointer(&_V10_Dpair_D1732, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80, VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79, VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81, VEncodePointer(&_V10_Dpair_D1748, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37, VEncodePointer(&_V10_Dpair_D1745, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36, VEncodePointer(&_V10_Dpair_D1733, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34, VEncodePointer(&_V10_Dpair_D1729, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33, VEncodePointer(&_V10_Dpair_D1721, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84, VEncodePointer(&_V10_Dpair_D1779, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83, VEncodePointer(&_V10_Dpair_D1776, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82, VEncodePointer(&_V10_Dpair_D1773, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86, VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89, VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88, VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40, VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39, VEncodePointer(&_V10_Dpair_D1773, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, VEncodePointer(&_V10_Dpair_D1769, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38, VEncodePointer(&_V10_Dpair_D1753, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77, VEncodePointer(&_V10_Dpair_D1710, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76, VEncodePointer(&_V10_Dpair_D1706, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93, VEncodePointer(&_V10_Dpair_D1817, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43, VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95, VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94, VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96, VEncodePointer(&_V10_Dpair_D1832, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45, VEncodePointer(&_V10_Dpair_D1829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44, VEncodePointer(&_V10_Dpair_D1822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42, VEncodePointer(&_V10_Dpair_D1818, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41, VEncodePointer(&_V10_Dpair_D1810, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99, VEncodePointer(&_V10_Dpair_D1863, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98, VEncodePointer(&_V10_Dpair_D1860, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97, VEncodePointer(&_V10_Dpair_D1857, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101, VEncodePointer(&_V10_Dpair_D1873, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104, VEncodePointer(&_V10_Dpair_D1877, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103, VEncodePointer(&_V10_Dpair_D1874, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48, VEncodePointer(&_V10_Dpair_D1868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47, VEncodePointer(&_V10_Dpair_D1857, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, VEncodePointer(&_V10_Dpair_D1853, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46, VEncodePointer(&_V10_Dpair_D1837, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92, VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91, VEncodePointer(&_V10_Dpair_D1796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109, VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112, VEncodePointer(&_V10_Dpair_D1924, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111, VEncodePointer(&_V10_Dpair_D1921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110, VEncodePointer(&_V10_Dpair_D1918, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51, VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50, VEncodePointer(&_V10_Dpair_D1907, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114, VEncodePointer(&_V10_Dpair_D1951, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113, VEncodePointer(&_V10_Dpair_D1948, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117, VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54, VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53, VEncodePointer(&_V10_Dpair_D1948, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, VEncodePointer(&_V10_Dpair_D1944, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52, VEncodePointer(&_V10_Dpair_D1929, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49, VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108, VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107, VEncodePointer(&_V10_Dpair_D1884, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106, VEncodePointer(&_V10_Dpair_D1880, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121, VEncodePointer(&_V10_Dpair_D1971, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55, VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120, VEncodePointer(&_V10_Dpair_D1968, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119, VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125, VEncodePointer(&_V10_Dpair_D1982, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56, VEncodePointer(&_V10_Dpair_D1983, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124, VEncodePointer(&_V10_Dpair_D1979, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123, VEncodePointer(&_V10_Dpair_D1975, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129, VEncodePointer(&_V10_Dpair_D1993, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57, VEncodePointer(&_V10_Dpair_D1994, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128, VEncodePointer(&_V10_Dpair_D1990, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127, VEncodePointer(&_V10_Dpair_D1986, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133, VEncodePointer(&_V10_Dpair_D2004, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58, VEncodePointer(&_V10_Dpair_D2005, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132, VEncodePointer(&_V10_Dpair_D2001, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131, VEncodePointer(&_V10_Dpair_D1997, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137, VEncodePointer(&_V10_Dpair_D2020, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138, VEncodePointer(&_V10_Dpair_D2024, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60, VEncodePointer(&_V10_Dpair_D2029, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59, VEncodePointer(&_V10_Dpair_D2021, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136, VEncodePointer(&_V10_Dpair_D2012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135, VEncodePointer(&_V10_Dpair_D2008, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141, VEncodePointer(&_V10_Dpair_D2045, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142, VEncodePointer(&_V10_Dpair_D2050, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146, VEncodePointer(&_V10_Dpair_D2063, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63, VEncodePointer(&_V10_Dpair_D2068, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145, VEncodePointer(&_V10_Dpair_D2060, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144, VEncodePointer(&_V10_Dpair_D2057, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148, VEncodePointer(&_V10_Dpair_D2060, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64, VEncodePointer(&_V10_Dpair_D2073, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147, VEncodePointer(&_V10_Dpair_D2057, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143, VEncodePointer(&_V10_Dpair_D2054, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62, VEncodePointer(&_V10_Dpair_D2046, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61, VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150, VEncodePointer(&_V10_Dpair_D2100, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149, VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153, VEncodePointer(&_V10_Dpair_D2110, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67, VEncodePointer(&_V10_Dpair_D2105, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66, VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, VEncodePointer(&_V10_Dpair_D2093, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65, VEncodePointer(&_V10_Dpair_D2078, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140, VEncodePointer(&_V10_Dpair_D2032, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68, VEncodePointer(&_V10_Dpair_D2114, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155, VEncodePointer(&_V10_Dpair_D2111, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69, VEncodePointer(&_V10_Dpair_D2032, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3, VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159, VEncodePointer(&_V10_Dpair_D2131, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71, VEncodePointer(&_V10_Dpair_D2132, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158, VEncodePointer(&_V10_Dpair_D2128, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157, VEncodePointer(&_V10_Dpair_D2124, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163, VEncodePointer(&_V10_Dpair_D2149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164, VEncodePointer(&_V10_Dpair_D2153, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72, VEncodePointer(&_V10_Dpair_D2150, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162, VEncodePointer(&_V10_Dpair_D2139, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161, VEncodePointer(&_V10_Dpair_D2135, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, VEncodePointer(&_V10_Dpair_D2135, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70, VEncodePointer(&_V10_Dpair_D2120, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166, VEncodePointer(&_V10_Dpair_D2203, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170, VEncodePointer(&_V10_Dpair_D2214, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171, VEncodePointer(&_V10_Dpair_D2223, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74, VEncodePointer(&_V10_Dpair_D2219, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169, VEncodePointer(&_V10_Dpair_D2211, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168, VEncodePointer(&_V10_Dpair_D2207, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173, VEncodePointer(&_V10_Dpair_D2228, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176, VEncodePointer(&_V10_Dpair_D2236, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175, VEncodePointer(&_V10_Dpair_D2233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174, VEncodePointer(&_V10_Dpair_D2229, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172, VEncodePointer(&_V10_Dpair_D2224, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167, VEncodePointer(&_V10_Dpair_D2204, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, VEncodePointer(&_V10_Dpair_D2199, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177, VEncodePointer(&_V10_Dpair_D2239, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180, VEncodePointer(&_V10_Dpair_D2265, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181, VEncodePointer(&_V10_Dpair_D2270, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76, VEncodePointer(&_V10_Dpair_D2266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179, VEncodePointer(&_V10_Dpair_D2254, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178, VEncodePointer(&_V10_Dpair_D2248, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185, VEncodePointer(&_V10_Dpair_D2288, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186, VEncodePointer(&_V10_Dpair_D2293, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77, VEncodePointer(&_V10_Dpair_D2289, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184, VEncodePointer(&_V10_Dpair_D2279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183, VEncodePointer(&_V10_Dpair_D2273, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190, VEncodePointer(&_V10_Dpair_D2307, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193, VEncodePointer(&_V10_Dpair_D2321, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192, VEncodePointer(&_V10_Dpair_D2318, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191, VEncodePointer(&_V10_Dpair_D2314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78, VEncodePointer(&_V10_Dpair_D2308, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189, VEncodePointer(&_V10_Dpair_D2302, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188, VEncodePointer(&_V10_Dpair_D2296, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197, VEncodePointer(&_V10_Dpair_D2334, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200, VEncodePointer(&_V10_Dpair_D2345, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199, VEncodePointer(&_V10_Dpair_D2342, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198, VEncodePointer(&_V10_Dpair_D2338, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79, VEncodePointer(&_V10_Dpair_D2335, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196, VEncodePointer(&_V10_Dpair_D2330, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195, VEncodePointer(&_V10_Dpair_D2324, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203, VEncodePointer(&_V10_Dpair_D2351, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80, VEncodePointer(&_V10_Dpair_D2352, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202, VEncodePointer(&_V10_Dpair_D2348, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205, VEncodePointer(&_V10_Dpair_D2353, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207, VEncodePointer(&_V10_Dpair_D2351, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81, VEncodePointer(&_V10_Dpair_D2348, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75, VEncodePointer(&_V10_Dpair_D2244, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, VEncodePointer(&_V10_Dpair_D2183, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, VEncodePointer(&_V10_Dpair_D2166, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k8, VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k7, VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k6, VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k5, VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k4, VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k3, VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k2, VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k1, VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR));
}
