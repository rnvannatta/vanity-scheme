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

VEnv * _V60_V0vanity_V0compiler_V0bytecode;

VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static VPair _V10_Dpair_D2544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D2540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "print-bytecode: unknown atom" };
static VPair _V10_Dpair_D2539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
static VPair _V10_Dpair_D2538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D21;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.21" };
static VPair _V10_Dpair_D2528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D19;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D19 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.19" };
static VPair _V10_Dpair_D2511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static VPair _V10_Dpair_D2504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D17;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.17" };
static VPair _V10_Dpair_D2494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static VPair _V10_Dpair_D2487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D15;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D15 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.15" };
static VPair _V10_Dpair_D2480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D11;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D11 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.11" };
static VPair _V10_Dpair_D2464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.12" };
static VPair _V10_Dpair_D2462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D13;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D13 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.13" };
static VPair _V10_Dpair_D2460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D8;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.8" };
static VPair _V10_Dpair_D2439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D9;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D9 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.9" };
static VPair _V10_Dpair_D2437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static VPair _V10_Dpair_D2429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D6;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D6 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.6" };
static VPair _V10_Dpair_D2422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D2414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.4" };
static VPair _V10_Dpair_D2407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D1;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.1" };
static VPair _V10_Dpair_D2394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D49;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D49 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.49" };
static VPair _V10_Dpair_D2356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0xs_D47;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D47 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.47" };
VWEAK VWORD _V0expr_D50;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D50 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.50" };
static VPair _V10_Dpair_D2340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D352;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D352 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.352" };
static VPair _V10_Dpair_D2335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D48;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.48" };
static VPair _V10_Dpair_D2328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D46;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.46" };
static VPair _V10_Dpair_D2322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static VPair _V10_Dpair_D2319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
static VPair _V10_Dpair_D2311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D42;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.42" };
static VPair _V10_Dpair_D2302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D43;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D43 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.43" };
static VPair _V10_Dpair_D2300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D44;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.44" };
static VPair _V10_Dpair_D2298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2291 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "print-bytecode: set must set a symbol" };
static VPair _V10_Dpair_D2290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V10vcore_Dset__global_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dset__global_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.set-global!" };
static VPair _V10_Dpair_D2282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static VPair _V10_Dpair_D2281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
static VPair _V10_Dpair_D2277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
static VPair _V10_Dpair_D2273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D54;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D54 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.54" };
static VPair _V10_Dpair_D2264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D55;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.55" };
static VPair _V10_Dpair_D2262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D56;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.56" };
VWEAK VWORD _V0up;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0up = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "up" };
static VPair _V10_Dpair_D2260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0right;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "right" };
static VPair _V10_Dpair_D2259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D51;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D51 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.51" };
static VPair _V10_Dpair_D2244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.38" };
static VPair _V10_Dpair_D2235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D39;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D39 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.39" };
static VPair _V10_Dpair_D2233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D40;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D40 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.40" };
VWEAK VWORD _V0y;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0y = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "y" };
static VPair _V10_Dpair_D2231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D2230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
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
VWEAK VWORD _V0expr_D33;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.33" };
static VPair _V10_Dpair_D2202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D34;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.34" };
VWEAK VWORD _V0path;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "path" };
static VPair _V10_Dpair_D2200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D35;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D35 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.35" };
static VPair _V10_Dpair_D2198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D36;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.36" };
static VPair _V10_Dpair_D2196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D2189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
static VPair _V10_Dpair_D2185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static VPair _V10_Dpair_D2181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D29;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.29" };
static VPair _V10_Dpair_D2172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D30;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D30 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.30" };
VWEAK VWORD _V0n;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0n = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "n" };
static VPair _V10_Dpair_D2170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D31;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D31 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.31" };
VWEAK VWORD _V0xs;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0xs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "xs" };
static VPair _V10_Dpair_D2168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "L" };
static VPair _V10_Dpair_D2160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0app;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0app = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "app" };
static VPair _V10_Dpair_D2154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
static VPair _V10_Dpair_D2150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2134 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D25;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.25" };
static VPair _V10_Dpair_D2132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D26;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D26 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.26" };
VWEAK VWORD _V0p;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0p = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "p" };
static VPair _V10_Dpair_D2130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D27;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D27 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.27" };
VWEAK VWORD _V0a;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0a = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "a" };
static VPair _V10_Dpair_D2128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0b;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0b = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "b" };
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
static VPair _V10_Dpair_D2115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D22;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D22 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.22" };
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
VWEAK VWORD _V0variadic_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0variadic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "variadic\?" };
static VPair _V10_Dpair_D2086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2081 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "case" };
static VPair _V10_Dpair_D2080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D2071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "case-error" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "process-case-lambda" };
static VPair _V10_Dpair_D2069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D2050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D76;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D76 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.76" };
static VPair _V10_Dpair_D2046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D77;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D77 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.77" };
static VPair _V10_Dpair_D2045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D78;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D78 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.78" };
static VPair _V10_Dpair_D2043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D2024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D74;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D74 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.74" };
static VPair _V10_Dpair_D2020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D71;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D71 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.71" };
static VPair _V10_Dpair_D2011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D72;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D72 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.72" };
static VPair _V10_Dpair_D2010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D73;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D73 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.73" };
static VPair _V10_Dpair_D2008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0input_D69;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0input_D69 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "input.69" };
static VPair _V10_Dpair_D2003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D68;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D68 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.68" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "process-case-lambda-tail" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "--expected ~A\n" };
static VPair _V10_Dpair_D1996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D65;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D65 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.65" };
static VPair _V10_Dpair_D1985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D66;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D66 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.66" };
static VPair _V10_Dpair_D1984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D67;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D67 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.67" };
static VPair _V10_Dpair_D1982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1979 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "--expected ~A or more\n" };
static VPair _V10_Dpair_D1978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D63;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D63 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.63" };
static VPair _V10_Dpair_D1970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D60;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D60 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.60" };
static VPair _V10_Dpair_D1961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D61;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D61 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.61" };
static VPair _V10_Dpair_D1960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D62;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D62 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.62" };
static VPair _V10_Dpair_D1958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D57;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D57 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.57" };
static VPair _V10_Dpair_D1947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1942 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static VPair _V10_Dpair_D1941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1938 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1937 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1936 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1935 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rest;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0rest = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "rest" };
static VPair _V10_Dpair_D1923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D252;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D252 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.252" };
static VPair _V10_Dpair_D1918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0error__label;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0error__label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "error-label" };
static VPair _V10_Dpair_D1912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1908 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1907 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cases;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cases = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cases" };
static VPair _V10_Dpair_D1897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static VPair _V10_Dpair_D1877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D93;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D93 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.93" };
static VPair _V10_Dpair_D1869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D88;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D88 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.88" };
static VPair _V10_Dpair_D1858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D89;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D89 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.89" };
static VPair _V10_Dpair_D1856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D90;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D90 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.90" };
static VPair _V10_Dpair_D1854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D91;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D91 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.91" };
static VPair _V10_Dpair_D1853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D92;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D92 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.92" };
static VPair _V10_Dpair_D1851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D82;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D82 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.82" };
static VPair _V10_Dpair_D1835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D83;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D83 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.83" };
VWEAK VWORD _V0check__args_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0check__args_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "check-args\?" };
static VPair _V10_Dpair_D1833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D84;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D84 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.84" };
VWEAK VWORD _V0debug__info;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0debug__info = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "debug-info" };
static VPair _V10_Dpair_D1831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D85;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D85 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.85" };
static VPair _V10_Dpair_D1830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D86;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D86 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.86" };
VWEAK VWORD _V0num;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0num = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "num" };
static VPair _V10_Dpair_D1828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0body;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0body = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "body" };
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
VWEAK VWORD _V0kk_D79;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D79 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.79" };
static VPair _V10_Dpair_D1816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0fun;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0fun = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "fun" };
static VPair _V10_Dpair_D1811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static VPair _V10_Dpair_D1807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0arg;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0arg = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "arg" };
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
static VPair _V10_Dpair_D1784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
static VPair _V10_Dpair_D1775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
static VPair _V10_Dpair_D1770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D104;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D104 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.104" };
static VPair _V10_Dpair_D1765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args_D102;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0args_D102 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "args.102" };
VWEAK VWORD _V0expr_D105;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D105 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.105" };
static VPair _V10_Dpair_D1749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D211;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D211 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.211" };
static VPair _V10_Dpair_D1744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D103;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D103 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.103" };
static VPair _V10_Dpair_D1737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D97;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D97 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.97" };
static VPair _V10_Dpair_D1728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D98;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D98 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.98" };
VWEAK VWORD _V0lang;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lang = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lang" };
static VPair _V10_Dpair_D1726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D99;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D99 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.99" };
VWEAK VWORD _V0decl;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0decl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "decl" };
static VPair _V10_Dpair_D1724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D100;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D100 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.100" };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D1722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D101;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D101 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.101" };
VWEAK VWORD _V0name;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "name" };
static VPair _V10_Dpair_D1720 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1719 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1718 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1717 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1716 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D94;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D94 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.94" };
static VPair _V10_Dpair_D1706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
static VPair _V10_Dpair_D1699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D111;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D111 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.111" };
static VPair _V10_Dpair_D1691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D112;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D112 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.112" };
VWEAK VWORD _V0f;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0f = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "f" };
static VPair _V10_Dpair_D1689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0v;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0v = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "v" };
static VPair _V10_Dpair_D1688 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1687 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1686 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static VPair _V10_Dpair_D1681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D109;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0expr_D109 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "expr.109" };
static VPair _V10_Dpair_D1674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0d;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0d = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "d" };
static VPair _V10_Dpair_D1673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1668 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1667 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1666 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1665 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1664 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1663 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1662 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1661 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1660 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1659 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D106;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0kk_D106 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "kk.106" };
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
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static VPair _V10_Dpair_D1640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D1635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V10_Dloop_D183;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D183 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.183" };
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0segments;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0segments = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "segments" };
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
static VPair _V10_Dpair_D1598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0line;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "line" };
static VPair _V10_Dpair_D1584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1580 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1579 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static VPair _V10_Dpair_D1578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
static VPair _V10_Dpair_D1572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D1571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D1567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D179;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D179 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.179" };
static VPair _V10_Dpair_D1562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "logic error: bytecode shouldn't have a literal table" };
static VPair _V10_Dpair_D1538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "shared library has toplevel expressions" };
static VPair _V10_Dpair_D1533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "bytecode shared libraries not supported yet" };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0print__main_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0print__main_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "print-main\?" };
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
static VPair _V10_Dpair_D1498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0process__atom;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0process__atom = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "process-atom" };
VWEAK VWORD _V0process__combination;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0process__combination = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "process-combination" };
VWEAK VWORD _V0process__application;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0process__application = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "process-application" };
VWEAK VWORD _V0process__fun__single;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0process__fun__single = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "process-fun-single" };
VWEAK VWORD _V0process__fun__case;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0process__fun__case = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "process-fun-case" };
VWEAK VWORD _V0process__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0process__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "process-function" };
VWEAK VWORD _V0process__foreign__function;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0process__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "process-foreign-function" };
VWEAK VWORD _V0process__declare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0process__declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "process-declare" };
VWEAK VWORD _V0process__toplevel;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0process__toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "process-toplevel" };
VWEAK VWORD _V0glue__bytecode;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0glue__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "glue-bytecode" };
VWEAK VWORD _V0write__bytecode__line;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0write__bytecode__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "write-bytecode-line" };
VWEAK VWORD _V0write__bytecode;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0write__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "write-bytecode" };
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0toplevels;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0toplevels = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "toplevels" };
VWEAK VWORD _V0declares;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0declares = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "declares" };
VWEAK VWORD _V0qualified__functions;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0qualified__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "qualified-functions" };
VWEAK VWORD _V0functions;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "functions" };
VWEAK VWORD _V0intrinsics;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0intrinsics = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "intrinsics" };
VWEAK VWORD _V0foreign__functions;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0foreign__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "foreign-functions" };
VWEAK VWORD _V0literal__table;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0literal__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "literal-table" };
VWEAK VWORD _V0static__environments;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0static__environments = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "static-environments" };
VWEAK VWORD _V0shared_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0shared_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "shared\?" };
VWEAK VWORD _V0debug_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0debug_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "debug\?" };
static VPair _V10_Dpair_D1477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0to__bytecode;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0to__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "to-bytecode" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0writeln;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0writeln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "writeln" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
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
static VPair _V10_Dpair_D1410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D1406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__declare, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10);
static void _V0vanity_V0compiler_V0bytecode_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.397 9 0) (##string ##.string.1437) (bruijn ##.%x.398 0 0) 'map 'append 'compiler-error 'reverse 'displayln 'writeln 'display 'memv 'error 'equal? 'get-foreign-decoder 'get-foreign-encoder 'mangle-foreign-function 'sprintf 'string-append 'fold 'caadr 'gensym 'iota 'length 'cdddr 'cadr 'mangle-library 'lookup-intrinsic-name)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1437.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0append,
      _V0compiler__error,
      _V0reverse,
      _V0displayln,
      _V0writeln,
      _V0display,
      _V0memv,
      _V0error,
      _V0equal_Q,
      _V0get__foreign__decoder,
      _V0get__foreign__encoder,
      _V0mangle__foreign__function,
      _V0sprintf,
      _V0string__append,
      _V0fold,
      _V0caadr,
      _V0gensym,
      _V0iota,
      _V0length,
      _V0cdddr,
      _V0cadr,
      _V0mangle__library,
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0bytecode_V20_V0k9) (bruijn ##.%x.399 7 0) (bruijn ##.%x.400 6 0) (bruijn ##.%x.401 5 0) (bruijn ##.%x.402 4 0) (bruijn ##.%x.403 3 0) (bruijn ##.%x.404 2 0) (bruijn ##.%x.405 1 0) (bruijn ##.%x.406 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k9, self)))),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k8) (##string ##.string.1438))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D1438.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k7) (##string ##.string.1439))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1439.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k6) (##string ##.string.1440))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1440.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k5) (##string ##.string.1441))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1441.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k4) (##string ##.string.1442))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k3) (##string ##.string.1443))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1443.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k2) (##string ##.string.1444))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1444.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k1) (##string ##.string.1445))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.166 3 2) ((bruijn ##.compiler-error.115 5 3) (bruijn ##.%k.423 0 0) (##string ##.string.1520)) ((bruijn ##.%k.423 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1520.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.166 3 2) ((bruijn ##.%k.422 0 0) (bruijn ##.print-main?.931 2 1)) ((bruijn ##.%k.422 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.420 1 0) ((bruijn ##.compiler-error.115 6 3) (bruijn ##.%k.421 0 0) (##string ##.string.1534)) ((bruijn ##.%k.421 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1534.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.933 1 1) ((bruijn ##.compiler-error.115 7 3) (bruijn ##.%k.418 0 0) (##string ##.string.1539) (bruijn ##.literal-table.168 5 4)) ((bruijn ##.%k.418 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1539.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 4));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.print-main?.931 7 1) ((bruijn ##.map.113 10 1) (bruijn ##.%k.416 0 0) (bruijn ##.process-toplevel.156 9 4) (bruijn ##.toplevels.174 8 10)) ((bruijn ##.%k.416 0 0) '()))
if(VDecodeBool(
VGetArg(statics, 7-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      _var0,
      VGetArg(statics, 9-1, 4),
      VGetArg(statics, 8-1, 10));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode glue-bytecode) #t (bruijn ##.glue-bytecode.155 10 3) (bruijn ##.%k.408 9 0) (bruijn ##.%x.411 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.114 10 2) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24) (bruijn ##.%x.412 3 0) (bruijn ##.%x.413 2 0) (bruijn ##.%x.414 1 0) (bruijn ##.%x.415 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.113 8 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21) (bruijn ##.process-foreign-function.158 7 6) (bruijn ##.foreign-functions.169 6 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21, self)))),
      VGetArg(statics, 7-1, 6),
      VGetArg(statics, 6-1, 5));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.113 7 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20) (bruijn ##.process-function.159 6 7) (bruijn ##.functions.410 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20, self)))),
      VGetArg(statics, 6-1, 7),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.113 6 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19) (bruijn ##.process-declare.157 5 5) (bruijn ##.declares.173 4 9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19, self)))),
      VGetArg(statics, 5-1, 5),
      statics->up->up->up->vars[9]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.932 ##.%p.933) ((##vcore.null? (bruijn ##.literal-table.168 4 4)) (##vcore.not (bruijn ##.%x.932 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->up->vars[4]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  // (basic-block 2 2 (##.%x.930 ##.print-main?.931) ((##vcore.null? (bruijn ##.toplevels.174 1 10)) (##vcore.not (bruijn ##.%x.930 0 0))) ((bruijn ##.reverse.116 3 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10) (bruijn ##.functions.171 1 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[10]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10, self)))),
      statics->vars[7]);
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.937) ((##vcore.+ (bruijn ##.i.180 3 1) 1)) (##qualified-call (vanity compiler bytecode write-bytecode ##.loop.179) #f (bruijn ##.loop.179 4 0) (bruijn ##.%k.426 3 0) (bruijn ##.%x.937 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.935) ((##vcore.< (bruijn ##.i.180 1 1) (bruijn ##.len.934 3 0))) (if (bruijn ##.%p.935 0 0) (basic-block 1 1 (##.%x.936) ((##vcore.vector-ref (bruijn ##.bytecode.177 5 1) (bruijn ##.i.180 2 1))) (##qualified-call (vanity compiler bytecode write-bytecode-line) #t (bruijn ##.write-bytecode-line.154 6 2) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179_V0k26) (bruijn ##.%x.936 0 0))) ((bruijn ##.%k.426 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179_V0k26, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.displayln.117 4 5) (bruijn ##.%k.425 2 0) (##string ##.string.1579))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1579.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.len.934) ((##vcore.vector-length (bruijn ##.bytecode.177 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179")) (##qualified-call (vanity compiler bytecode write-bytecode ##.loop.179) #f (bruijn ##.loop.179 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.displayln.117 2 5) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25) (##string ##.string.1580))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25, self)))),
      VEncodePointer(&_V10_Dstring_D1580.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.939 1 0) ((bruijn ##.display.119 6 7) (bruijn ##.%k.432 0 0) #\tab) ((bruijn ##.%k.432 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 2,
      _var0,
      VEncodeChar('\t'));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.writeln.118 5 6) (bruijn ##.%k.430 3 0) (bruijn ##.line.181 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 6)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.939) ((##vcore.not (bruijn ##.%x.433 1 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.938) ((##vcore.car (bruijn ##.line.181 1 1))) ((bruijn ##.memv.120 3 8) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28) (bruijn ##.%x.938 0 0) '(##pair ##.pair.1605)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.114 7 2) (bruijn ##.%k.437 3 0) (bruijn ##.%x.941 1 0) (bruijn ##.%x.440 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.940) ((##vcore.null? (bruijn ##.segments.184 1 1))) (if (bruijn ##.%p.940 0 0) ((bruijn ##.%k.437 1 0) '()) (basic-block 2 2 (##.%x.941 ##.%x.942) ((##vcore.car (bruijn ##.segments.184 2 1)) (##vcore.cdr (bruijn ##.segments.184 2 1))) (##qualified-call (vanity compiler bytecode glue-bytecode ##.loop.183) #f (bruijn ##.loop.183 3 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31) (bruijn ##.%x.942 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.%k.435 2 0) (bruijn ##.%x.436 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183")) (##qualified-call (vanity compiler bytecode glue-bytecode ##.loop.183) #f (bruijn ##.loop.183 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32) (bruijn ##.segments.182 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.949) ((##vcore.cons '(##pair ##.pair.1649) (bruijn ##.%x.443 1 0))) ((bruijn ##.%k.442 3 0) (bruijn ##.%r.949 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 6 6 (##.%x.943 ##.%x.944 ##.%x.945 ##.%x.946 ##.%x.947 ##.%x.948) ((##vcore.cons '0 '()) (##vcore.cons '0 (bruijn ##.%x.943 0 0)) (##vcore.cons 'k (bruijn ##.%x.944 0 1)) (##vcore.cons 'bruijn (bruijn ##.%x.945 0 2)) (##vcore.cons (bruijn ##.%x.946 0 3) '()) (##vcore.cons (bruijn ##.expr.185 1 1) (bruijn ##.%x.947 0 4))) (##qualified-call (vanity compiler bytecode process-combination) #t (bruijn ##.process-combination.163 2 11) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33) (bruijn ##.%x.948 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0k,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn,
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[4]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33, self))));
    VWORD _arg1 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.470 0 0) (bruijn ##.%k.466 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.471 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.467 0 0) (basic-block 2 2 (##.expr.109.966 ##.%p.967) ((##vcore.cdr (bruijn ##.declare.186 6 1)) (##vcore.pair? (bruijn ##.expr.109.966 0 0))) (if (bruijn ##.%p.967 0 1) (basic-block 3 3 (##.d.968 ##.%x.969 ##.%p.970) ((##vcore.car (bruijn ##.expr.109.966 1 0)) (##vcore.cdr (bruijn ##.expr.109.966 1 0)) (##vcore.null? (bruijn ##.%x.969 0 1))) (if (bruijn ##.%p.970 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5) (bruijn ##.kk.106.187 6 1)) ((bruijn ##.%k.466 4 0) #f))) ((bruijn ##.%k.466 3 0) #f))) ((bruijn ##.%k.466 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.950 1 0) (basic-block 1 1 (##.%x.965) ((##vcore.car (bruijn ##.declare.186 4 1))) ((bruijn ##.equal?.122 6 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35) '##foreign.declare (bruijn ##.%x.965 0 0))) ((bruijn ##.%k.466 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.458 0 0) (bruijn ##.%k.453 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.961 ##.%x.962 ##.%x.963 ##.%r.964) ((##vcore.cons (bruijn ##.v.958 2 0) '()) (##vcore.cons (bruijn ##.f.955 3 0) (bruijn ##.%x.961 0 0)) (##vcore.cons 'declare (bruijn ##.%x.962 0 1)) (##vcore.cons (bruijn ##.%x.963 0 2) '())) ((bruijn ##.%k.459 1 0) (bruijn ##.%r.964 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0declare,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.454 0 0) (basic-block 2 2 (##.expr.111.953 ##.%p.954) ((##vcore.cdr (bruijn ##.declare.186 7 1)) (##vcore.pair? (bruijn ##.expr.111.953 0 0))) (if (bruijn ##.%p.954 0 1) (basic-block 3 3 (##.f.955 ##.expr.112.956 ##.%p.957) ((##vcore.car (bruijn ##.expr.111.953 1 0)) (##vcore.cdr (bruijn ##.expr.111.953 1 0)) (##vcore.pair? (bruijn ##.expr.112.956 0 1))) (if (bruijn ##.%p.957 0 2) (basic-block 3 3 (##.v.958 ##.%x.959 ##.%p.960) ((##vcore.car (bruijn ##.expr.112.956 1 1)) (##vcore.cdr (bruijn ##.expr.112.956 1 1)) (##vcore.null? (bruijn ##.%x.959 0 1))) (if (bruijn ##.%p.960 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6) (bruijn ##.kk.106.187 8 1)) ((bruijn ##.%k.453 5 0) #f))) ((bruijn ##.%k.453 4 0) #f))) ((bruijn ##.%k.453 3 0) #f))) ((bruijn ##.%k.453 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6, self)))),
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.951 1 0) (basic-block 1 1 (##.%x.952) ((##vcore.car (bruijn ##.declare.186 5 1))) ((bruijn ##.equal?.122 7 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39) '##vcore.declare (bruijn ##.%x.952 0 0))) ((bruijn ##.%k.453 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.121 5 9) (bruijn ##.%k.451 2 0) (##string ##.string.1700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.951) ((##vcore.pair? (bruijn ##.declare.186 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.950) ((##vcore.pair? (bruijn ##.declare.186 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.450 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.103.210 5 1) (bruijn ##.%k.492 1 0) (bruijn ##.expr.105.212 3 1) (bruijn ##.%x.493 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.987 1 1) ((bruijn ##.reverse.116 18 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45) (bruijn ##.args.102.213 2 2)) ((bruijn ##.%k.492 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.103.210 7 1) (bruijn ##.%k.487 2 0) (bruijn ##.expr.105.212 5 1) (bruijn ##.%x.488 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k47(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.116 20 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48) (bruijn ##.args.102.213 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.988 ##.%x.989 ##.%x.990) ((##vcore.car (bruijn ##.expr.105.212 4 1)) (##vcore.cdr (bruijn ##.expr.105.212 4 1)) (##vcore.cons (bruijn ##.args.988 0 0) (bruijn ##.args.102.213 4 2))) ((bruijn ##.kk.104.214 1 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k47) (bruijn ##.%x.989 0 1) (bruijn ##.%x.990 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k47, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.486 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.485 1 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10) (bruijn ##.loop.211 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.986 ##.%p.987) ((##vcore.pair? (bruijn ##.expr.105.212 1 1)) (##vcore.not (bruijn ##.%x.986 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k46)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k46, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211")) (##qualified-call (vanity compiler bytecode process-foreign-function ##.loop.211) #f (bruijn ##.loop.211 0 0) (bruijn ##.%k.484 1 0) (bruijn ##.expr.101.985 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.483 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.497 0 0) (bruijn ##.%k.495 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.993 ##.%x.994 ##.%x.995 ##.%x.996 ##.%x.997 ##.%x.998 ##.%x.999 ##.%r.1000) ((##vcore.cons (bruijn ##.name.984 9 0) (bruijn ##.%x.508 1 0)) (##vcore.cons (bruijn ##.%x.992 2 0) (bruijn ##.%x.993 0 0)) (##vcore.cons (bruijn ##.lang.975 12 0) (bruijn ##.%x.994 0 1)) (##vcore.cons 'declare-foreign (bruijn ##.%x.995 0 2)) (##vcore.cons (bruijn ##.%x.996 0 3) '()) (##vcore.cons (bruijn ##.%x.501 4 0) (bruijn ##.%x.997 0 4)) (##vcore.cons 'label (bruijn ##.%x.998 0 5)) (##vcore.cons (bruijn ##.%x.999 0 6) '())) ((bruijn ##.%k.498 6 0) (bruijn ##.%r.1000 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0declare__foreign,
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1001) ((##vcore.car (bruijn ##.%x.510 1 0))) ((bruijn ##.%k.509 2 0) (bruijn ##.%r.1001 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-foreign-decoder.123 20 11) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54) (bruijn ##.arg.218 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.992) ((##vcore.car (bruijn ##.%x.511 1 0))) ((bruijn ##.map.113 19 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14) (bruijn ##.args.217 6 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14, self)))),
      VGetArg(statics, 6-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.124 17 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52) (bruijn ##.ret.981 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51) (bruijn ##.%x.512 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign-function.125 15 13) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50) (bruijn ##.name.984 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.991) ((##vcore.null? (bruijn ##.tail-expr.216 1 1))) (if (bruijn ##.%p.991 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13) (bruijn ##.kk.94.198 11 1)) ((bruijn ##.%k.495 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.478 0 0) (basic-block 2 2 (##.expr.97.973 ##.%p.974) ((##vcore.cdr (bruijn ##.expr.197 6 1)) (##vcore.pair? (bruijn ##.expr.97.973 0 0))) (if (bruijn ##.%p.974 0 1) (basic-block 3 3 (##.lang.975 ##.expr.98.976 ##.%p.977) ((##vcore.car (bruijn ##.expr.97.973 1 0)) (##vcore.cdr (bruijn ##.expr.97.973 1 0)) (##vcore.pair? (bruijn ##.expr.98.976 0 1))) (if (bruijn ##.%p.977 0 2) (basic-block 3 3 (##.decl.978 ##.expr.99.979 ##.%p.980) ((##vcore.car (bruijn ##.expr.98.976 1 1)) (##vcore.cdr (bruijn ##.expr.98.976 1 1)) (##vcore.pair? (bruijn ##.expr.99.979 0 1))) (if (bruijn ##.%p.980 0 2) (basic-block 3 3 (##.ret.981 ##.expr.100.982 ##.%p.983) ((##vcore.car (bruijn ##.expr.99.979 1 1)) (##vcore.cdr (bruijn ##.expr.99.979 1 1)) (##vcore.pair? (bruijn ##.expr.100.982 0 1))) (if (bruijn ##.%p.983 0 2) (basic-block 2 2 (##.name.984 ##.expr.101.985) ((##vcore.car (bruijn ##.expr.100.982 1 1)) (##vcore.cdr (bruijn ##.expr.100.982 1 1))) (##vcore.call-with-values (bruijn ##.%k.477 7 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12))) ((bruijn ##.%k.477 6 0) #f))) ((bruijn ##.%k.477 5 0) #f))) ((bruijn ##.%k.477 4 0) #f))) ((bruijn ##.%k.477 3 0) #f))) ((bruijn ##.%k.477 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12, self)))));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.971 1 0) (basic-block 1 1 (##.%x.972) ((##vcore.car (bruijn ##.expr.197 4 1))) ((bruijn ##.equal?.122 6 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43) '##foreign.function (bruijn ##.%x.972 0 0))) ((bruijn ##.%k.477 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.121 4 9) (bruijn ##.%k.475 1 0) (##string ##.string.1700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.971) ((##vcore.pair? (bruijn ##.expr.197 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.474 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.542 0 0) (bruijn ##.%k.534 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-single) #t (bruijn ##.process-fun-single.161 12 9) (bruijn ##.%k.543 0 0) (bruijn ##.name.1026 7 0) (bruijn ##.check-args?.1029 6 0) (bruijn ##.num.1037 3 0) #f (bruijn ##.body.1040 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg3 = 
      statics->up->up->vars[0];
    VWORD _arg4 = 
      VEncodeBool(false);
    VWORD _arg5 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1002 1 0) (basic-block 3 3 (##.name.1026 ##.expr.82.1027 ##.%p.1028) ((##vcore.car (bruijn ##.fun.219 4 1)) (##vcore.cdr (bruijn ##.fun.219 4 1)) (##vcore.pair? (bruijn ##.expr.82.1027 0 1))) (if (bruijn ##.%p.1028 0 2) (basic-block 3 3 (##.check-args?.1029 ##.expr.83.1030 ##.%p.1031) ((##vcore.car (bruijn ##.expr.82.1027 1 1)) (##vcore.cdr (bruijn ##.expr.82.1027 1 1)) (##vcore.pair? (bruijn ##.expr.83.1030 0 1))) (if (bruijn ##.%p.1031 0 2) (basic-block 3 3 (##.debug-info.1032 ##.expr.84.1033 ##.%p.1034) ((##vcore.car (bruijn ##.expr.83.1030 1 1)) (##vcore.cdr (bruijn ##.expr.83.1030 1 1)) (##vcore.pair? (bruijn ##.expr.84.1033 0 1))) (if (bruijn ##.%p.1034 0 2) (basic-block 2 2 (##.expr.85.1035 ##.%p.1036) ((##vcore.car (bruijn ##.expr.84.1033 1 1)) (##vcore.pair? (bruijn ##.expr.85.1035 0 0))) (if (bruijn ##.%p.1036 0 1) (basic-block 3 3 (##.num.1037 ##.expr.86.1038 ##.%p.1039) ((##vcore.car (bruijn ##.expr.85.1035 1 0)) (##vcore.cdr (bruijn ##.expr.85.1035 1 0)) (##vcore.pair? (bruijn ##.expr.86.1038 0 1))) (if (bruijn ##.%p.1039 0 2) (basic-block 3 3 (##.body.1040 ##.%x.1041 ##.%p.1042) ((##vcore.car (bruijn ##.expr.86.1038 1 1)) (##vcore.cdr (bruijn ##.expr.86.1038 1 1)) (##vcore.null? (bruijn ##.%x.1041 0 1))) (if (bruijn ##.%p.1042 0 2) (basic-block 2 2 (##.%x.1043 ##.%p.1044) ((##vcore.cdr (bruijn ##.expr.84.1033 4 1)) (##vcore.null? (bruijn ##.%x.1043 0 0))) (if (bruijn ##.%p.1044 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16) (bruijn ##.kk.79.220 9 1)) ((bruijn ##.%k.534 7 0) #f))) ((bruijn ##.%k.534 6 0) #f))) ((bruijn ##.%k.534 5 0) #f))) ((bruijn ##.%k.534 4 0) #f))) ((bruijn ##.%k.534 3 0) #f))) ((bruijn ##.%k.534 2 0) #f))) ((bruijn ##.%k.534 1 0) #f))) ((bruijn ##.%k.534 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.528 0 0) (bruijn ##.%k.518 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-single) #t (bruijn ##.process-fun-single.161 16 9) (bruijn ##.%k.529 0 0) (bruijn ##.name.1004 10 0) (bruijn ##.check-args?.1007 9 0) (bruijn ##.num.1015 6 0) #t (bruijn ##.body.1021 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.524 0 0) (basic-block 2 2 (##.expr.93.1019 ##.%p.1020) ((##vcore.cdr (bruijn ##.expr.92.1016 3 1)) (##vcore.pair? (bruijn ##.expr.93.1019 0 0))) (if (bruijn ##.%p.1020 0 1) (basic-block 3 3 (##.body.1021 ##.%x.1022 ##.%p.1023) ((##vcore.car (bruijn ##.expr.93.1019 1 0)) (##vcore.cdr (bruijn ##.expr.93.1019 1 0)) (##vcore.null? (bruijn ##.%x.1022 0 1))) (if (bruijn ##.%p.1023 0 2) (basic-block 2 2 (##.%x.1024 ##.%p.1025) ((##vcore.cdr (bruijn ##.expr.90.1011 7 1)) (##vcore.null? (bruijn ##.%x.1024 0 0))) (if (bruijn ##.%p.1025 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17) (bruijn ##.kk.79.220 13 1)) ((bruijn ##.%k.518 10 0) #f))) ((bruijn ##.%k.518 9 0) #f))) ((bruijn ##.%k.518 8 0) #f))) ((bruijn ##.%k.518 7 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1003 1 0) (basic-block 3 3 (##.name.1004 ##.expr.88.1005 ##.%p.1006) ((##vcore.car (bruijn ##.fun.219 5 1)) (##vcore.cdr (bruijn ##.fun.219 5 1)) (##vcore.pair? (bruijn ##.expr.88.1005 0 1))) (if (bruijn ##.%p.1006 0 2) (basic-block 3 3 (##.check-args?.1007 ##.expr.89.1008 ##.%p.1009) ((##vcore.car (bruijn ##.expr.88.1005 1 1)) (##vcore.cdr (bruijn ##.expr.88.1005 1 1)) (##vcore.pair? (bruijn ##.expr.89.1008 0 1))) (if (bruijn ##.%p.1009 0 2) (basic-block 3 3 (##.debug-info.1010 ##.expr.90.1011 ##.%p.1012) ((##vcore.car (bruijn ##.expr.89.1008 1 1)) (##vcore.cdr (bruijn ##.expr.89.1008 1 1)) (##vcore.pair? (bruijn ##.expr.90.1011 0 1))) (if (bruijn ##.%p.1012 0 2) (basic-block 2 2 (##.expr.91.1013 ##.%p.1014) ((##vcore.car (bruijn ##.expr.90.1011 1 1)) (##vcore.pair? (bruijn ##.expr.91.1013 0 0))) (if (bruijn ##.%p.1014 0 1) (basic-block 3 3 (##.num.1015 ##.expr.92.1016 ##.%p.1017) ((##vcore.car (bruijn ##.expr.91.1013 1 0)) (##vcore.cdr (bruijn ##.expr.91.1013 1 0)) (##vcore.pair? (bruijn ##.expr.92.1016 0 1))) (if (bruijn ##.%p.1017 0 2) (basic-block 1 1 (##.%x.1018) ((##vcore.car (bruijn ##.expr.92.1016 1 1))) ((bruijn ##.equal?.122 12 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60) '+ (bruijn ##.%x.1018 0 0))) ((bruijn ##.%k.518 5 0) #f))) ((bruijn ##.%k.518 4 0) #f))) ((bruijn ##.%k.518 3 0) #f))) ((bruijn ##.%k.518 2 0) #f))) ((bruijn ##.%k.518 1 0) #f))) ((bruijn ##.%k.518 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60, self)))),
      _V0_P,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-case) #t (bruijn ##.process-fun-case.160 5 8) (bruijn ##.%k.516 0 0) (bruijn ##.fun.219 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.515 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18) (bruijn ##.kk.79.220 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1003) ((##vcore.pair? (bruijn ##.fun.219 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k62, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1002) ((##vcore.pair? (bruijn ##.fun.219 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k58, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__function" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.514 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1046 1 1) (##vcore.string->symbol (bruijn ##.%k.651 0 0) (bruijn ##.name.1045 1 0)) ((bruijn ##.%k.651 0 0) (bruijn ##.name.1045 1 0)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1048 ##.%x.1049 ##.%x.1050 ##.%x.1051 ##.%x.1052 ##.%x.1053 ##.%r.1054) ((##vcore.cons (bruijn ##.%x.555 1 0) '()) (##vcore.cons (bruijn ##.name.247 13 0) (bruijn ##.%x.1048 0 0)) (##vcore.cons 'case-lambda-error (bruijn ##.%x.1049 0 1)) (##vcore.cons (bruijn ##.%x.1050 0 2) '()) (##vcore.cons (bruijn ##.error-label.251 7 0) (bruijn ##.%x.1051 0 3)) (##vcore.cons 'label (bruijn ##.%x.1052 0 4)) (##vcore.cons (bruijn ##.%x.1053 0 5) '())) ((bruijn ##.%k.547 5 0) (bruijn ##.%r.1054 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda__error,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.128 15 16) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73) (bruijn ##.string-append.127 15 15) (##string ##.string.1942) (bruijn ##.%x.556 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73, self)))),
      VGetArg(statics, 15-1, 15),
      VEncodePointer(&_V10_Dstring_D1942.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.580 0 0) (bruijn ##.%k.572 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.126 27 14) (bruijn ##.%k.581 0 0) (##string ##.string.1979) (bruijn ##.num.1075 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1979.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.576 0 0) (basic-block 2 2 (##.expr.63.1079 ##.%p.1080) ((##vcore.cdr (bruijn ##.expr.62.1076 3 1)) (##vcore.pair? (bruijn ##.expr.63.1079 0 0))) (if (bruijn ##.%p.1080 0 1) (basic-block 3 3 (##.body.1081 ##.%x.1082 ##.%p.1083) ((##vcore.car (bruijn ##.expr.63.1079 1 0)) (##vcore.cdr (bruijn ##.expr.63.1079 1 0)) (##vcore.null? (bruijn ##.%x.1082 0 1))) (if (bruijn ##.%p.1083 0 2) (basic-block 2 2 (##.%x.1084 ##.%p.1085) ((##vcore.cdr (bruijn ##.expr.60.1071 7 1)) (##vcore.null? (bruijn ##.%x.1084 0 0))) (if (bruijn ##.%p.1085 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21) (bruijn ##.kk.57.255 10 1)) ((bruijn ##.%k.572 8 0) #f))) ((bruijn ##.%k.572 7 0) #f))) ((bruijn ##.%k.572 6 0) #f))) ((bruijn ##.%k.572 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1055 1 0) (basic-block 3 3 (##.name.1070 ##.expr.60.1071 ##.%p.1072) ((##vcore.car (bruijn ##.e.254 4 1)) (##vcore.cdr (bruijn ##.e.254 4 1)) (##vcore.pair? (bruijn ##.expr.60.1071 0 1))) (if (bruijn ##.%p.1072 0 2) (basic-block 2 2 (##.expr.61.1073 ##.%p.1074) ((##vcore.car (bruijn ##.expr.60.1071 1 1)) (##vcore.pair? (bruijn ##.expr.61.1073 0 0))) (if (bruijn ##.%p.1074 0 1) (basic-block 3 3 (##.num.1075 ##.expr.62.1076 ##.%p.1077) ((##vcore.car (bruijn ##.expr.61.1073 1 0)) (##vcore.cdr (bruijn ##.expr.61.1073 1 0)) (##vcore.pair? (bruijn ##.expr.62.1076 0 1))) (if (bruijn ##.%p.1077 0 2) (basic-block 1 1 (##.%x.1078) ((##vcore.car (bruijn ##.expr.62.1076 1 1))) ((bruijn ##.equal?.122 22 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75) '+ (bruijn ##.%x.1078 0 0))) ((bruijn ##.%k.572 3 0) #f))) ((bruijn ##.%k.572 2 0) #f))) ((bruijn ##.%k.572 1 0) #f))) ((bruijn ##.%k.572 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75, self)))),
      _V0_P,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.567 0 0) (bruijn ##.%k.561 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.126 25 14) (bruijn ##.%k.568 0 0) (##string ##.string.1997) (bruijn ##.num.1062 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1997.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1056 1 0) (basic-block 3 3 (##.name.1057 ##.expr.65.1058 ##.%p.1059) ((##vcore.car (bruijn ##.e.254 5 1)) (##vcore.cdr (bruijn ##.e.254 5 1)) (##vcore.pair? (bruijn ##.expr.65.1058 0 1))) (if (bruijn ##.%p.1059 0 2) (basic-block 2 2 (##.expr.66.1060 ##.%p.1061) ((##vcore.car (bruijn ##.expr.65.1058 1 1)) (##vcore.pair? (bruijn ##.expr.66.1060 0 0))) (if (bruijn ##.%p.1061 0 1) (basic-block 3 3 (##.num.1062 ##.expr.67.1063 ##.%p.1064) ((##vcore.car (bruijn ##.expr.66.1060 1 0)) (##vcore.cdr (bruijn ##.expr.66.1060 1 0)) (##vcore.pair? (bruijn ##.expr.67.1063 0 1))) (if (bruijn ##.%p.1064 0 2) (basic-block 3 3 (##.body.1065 ##.%x.1066 ##.%p.1067) ((##vcore.car (bruijn ##.expr.67.1063 1 1)) (##vcore.cdr (bruijn ##.expr.67.1063 1 1)) (##vcore.null? (bruijn ##.%x.1066 0 1))) (if (bruijn ##.%p.1067 0 2) (basic-block 2 2 (##.%x.1068 ##.%p.1069) ((##vcore.cdr (bruijn ##.expr.65.1058 4 1)) (##vcore.null? (bruijn ##.%x.1068 0 0))) (if (bruijn ##.%p.1069 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22) (bruijn ##.kk.57.255 8 1)) ((bruijn ##.%k.561 5 0) #f))) ((bruijn ##.%k.561 4 0) #f))) ((bruijn ##.%k.561 3 0) #f))) ((bruijn ##.%k.561 2 0) #f))) ((bruijn ##.%k.561 1 0) #f))) ((bruijn ##.%k.561 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.121 19 9) (bruijn ##.%k.559 0 0) (##string ##.string.1998) (bruijn ##.e.254 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1998.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.558 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23) (bruijn ##.kk.57.255 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1056) ((##vcore.pair? (bruijn ##.e.254 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k80, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1055) ((##vcore.pair? (bruijn ##.e.254 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k77, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.557 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.113 14 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19) (bruijn ##.%x.585 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.114 16 2) (bruijn ##.%k.547 4 0) (bruijn ##.%x.586 2 0) (bruijn ##.%x.587 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1086) ((##vcore.cdr (bruijn ##.rest.253 3 1))) (##qualified-call (vanity compiler bytecode process-fun-case ##.loop.252) #f (bruijn ##.loop.252 4 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82) (bruijn ##.%x.1086 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.625 0 0) (bruijn ##.%k.617 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1141 ##.%x.1142 ##.%r.1143) ((##vcore.cons (bruijn ##.%x.638 1 0) '()) (##vcore.cons (bruijn ##.num.1121 10 0) (bruijn ##.%x.1141 0 0)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.1142 0 1))) ((bruijn ##.%k.633 2 0) (bruijn ##.%r.1143 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1133 1 1) (basic-block 3 3 (##.%x.1138 ##.%x.1139 ##.%r.1140) ((##vcore.cons (bruijn ##.error-label.251 18 0) '()) (##vcore.cons (bruijn ##.num.1121 9 0) (bruijn ##.%x.1138 0 0)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.1139 0 1))) ((bruijn ##.%k.633 1 0) (bruijn ##.%r.1140 0 2))) ((bruijn ##.caadr.129 27 17) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87) (bruijn ##.rest.253 15 1)))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87, self)))),
      VGetArg(statics, 15-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1137) ((##vcore.cons (bruijn ##.%x.1136 2 2) (bruijn ##.%x.628 1 0))) ((bruijn ##.%k.626 5 0) (bruijn ##.%r.1137 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1134 ##.%x.1135 ##.%x.1136) ((##vcore.cons (bruijn ##.%x.631 1 0) '()) (##vcore.cons (bruijn ##.name.1116 11 0) (bruijn ##.%x.1134 0 0)) (##vcore.cons 'label (bruijn ##.%x.1135 0 1))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 27 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89) (bruijn ##.body.1127 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1132 ##.%p.1133) ((##vcore.cdr (bruijn ##.rest.253 14 1)) (##vcore.null? (bruijn ##.%x.1132 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.621 0 0) (basic-block 2 2 (##.expr.74.1125 ##.%p.1126) ((##vcore.cdr (bruijn ##.expr.73.1122 3 1)) (##vcore.pair? (bruijn ##.expr.74.1125 0 0))) (if (bruijn ##.%p.1126 0 1) (basic-block 3 3 (##.body.1127 ##.%x.1128 ##.%p.1129) ((##vcore.car (bruijn ##.expr.74.1125 1 0)) (##vcore.cdr (bruijn ##.expr.74.1125 1 0)) (##vcore.null? (bruijn ##.%x.1128 0 1))) (if (bruijn ##.%p.1129 0 2) (basic-block 2 2 (##.%x.1130 ##.%p.1131) ((##vcore.cdr (bruijn ##.expr.71.1117 7 1)) (##vcore.null? (bruijn ##.%x.1130 0 0))) (if (bruijn ##.%p.1131 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25) (bruijn ##.kk.68.272 10 1)) ((bruijn ##.%k.617 8 0) #f))) ((bruijn ##.%k.617 7 0) #f))) ((bruijn ##.%k.617 6 0) #f))) ((bruijn ##.%k.617 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1088 1 1) (basic-block 3 3 (##.name.1116 ##.expr.71.1117 ##.%p.1118) ((##vcore.car (bruijn ##.input.69.1087 2 0)) (##vcore.cdr (bruijn ##.input.69.1087 2 0)) (##vcore.pair? (bruijn ##.expr.71.1117 0 1))) (if (bruijn ##.%p.1118 0 2) (basic-block 2 2 (##.expr.72.1119 ##.%p.1120) ((##vcore.car (bruijn ##.expr.71.1117 1 1)) (##vcore.pair? (bruijn ##.expr.72.1119 0 0))) (if (bruijn ##.%p.1120 0 1) (basic-block 3 3 (##.num.1121 ##.expr.73.1122 ##.%p.1123) ((##vcore.car (bruijn ##.expr.72.1119 1 0)) (##vcore.cdr (bruijn ##.expr.72.1119 1 0)) (##vcore.pair? (bruijn ##.expr.73.1122 0 1))) (if (bruijn ##.%p.1123 0 2) (basic-block 1 1 (##.%x.1124) ((##vcore.car (bruijn ##.expr.73.1122 1 1))) ((bruijn ##.equal?.122 20 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84) '+ (bruijn ##.%x.1124 0 0))) ((bruijn ##.%k.617 3 0) #f))) ((bruijn ##.%k.617 2 0) #f))) ((bruijn ##.%k.617 1 0) #f))) ((bruijn ##.%k.617 0 0) #f))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84, self)))),
      _V0_P,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.599 0 0) (bruijn ##.%k.593 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1113 ##.%x.1114 ##.%r.1115) ((##vcore.cons (bruijn ##.%x.612 1 0) '()) (##vcore.cons (bruijn ##.num.1096 7 0) (bruijn ##.%x.1113 0 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.1114 0 1))) ((bruijn ##.%k.607 2 0) (bruijn ##.%r.1115 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1105 1 1) (basic-block 3 3 (##.%x.1110 ##.%x.1111 ##.%r.1112) ((##vcore.cons (bruijn ##.error-label.251 16 0) '()) (##vcore.cons (bruijn ##.num.1096 6 0) (bruijn ##.%x.1110 0 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.1111 0 1))) ((bruijn ##.%k.607 1 0) (bruijn ##.%r.1112 0 2))) ((bruijn ##.caadr.129 25 17) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94) (bruijn ##.rest.253 13 1)))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 16-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94, self)))),
      VGetArg(statics, 13-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1109) ((##vcore.cons (bruijn ##.%x.1108 2 2) (bruijn ##.%x.602 1 0))) ((bruijn ##.%k.600 5 0) (bruijn ##.%r.1109 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1106 ##.%x.1107 ##.%x.1108) ((##vcore.cons (bruijn ##.%x.605 1 0) '()) (##vcore.cons (bruijn ##.name.1091 8 0) (bruijn ##.%x.1106 0 0)) (##vcore.cons 'label (bruijn ##.%x.1107 0 1))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 25 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96) (bruijn ##.body.1099 5 0)))
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
      _V0label,
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1104 ##.%p.1105) ((##vcore.cdr (bruijn ##.rest.253 12 1)) (##vcore.null? (bruijn ##.%x.1104 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1089 1 0) (basic-block 3 3 (##.name.1091 ##.expr.76.1092 ##.%p.1093) ((##vcore.car (bruijn ##.input.69.1087 3 0)) (##vcore.cdr (bruijn ##.input.69.1087 3 0)) (##vcore.pair? (bruijn ##.expr.76.1092 0 1))) (if (bruijn ##.%p.1093 0 2) (basic-block 2 2 (##.expr.77.1094 ##.%p.1095) ((##vcore.car (bruijn ##.expr.76.1092 1 1)) (##vcore.pair? (bruijn ##.expr.77.1094 0 0))) (if (bruijn ##.%p.1095 0 1) (basic-block 3 3 (##.num.1096 ##.expr.78.1097 ##.%p.1098) ((##vcore.car (bruijn ##.expr.77.1094 1 0)) (##vcore.cdr (bruijn ##.expr.77.1094 1 0)) (##vcore.pair? (bruijn ##.expr.78.1097 0 1))) (if (bruijn ##.%p.1098 0 2) (basic-block 3 3 (##.body.1099 ##.%x.1100 ##.%p.1101) ((##vcore.car (bruijn ##.expr.78.1097 1 1)) (##vcore.cdr (bruijn ##.expr.78.1097 1 1)) (##vcore.null? (bruijn ##.%x.1100 0 1))) (if (bruijn ##.%p.1101 0 2) (basic-block 2 2 (##.%x.1102 ##.%p.1103) ((##vcore.cdr (bruijn ##.expr.76.1092 4 1)) (##vcore.null? (bruijn ##.%x.1102 0 0))) (if (bruijn ##.%p.1103 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26) (bruijn ##.kk.68.272 8 1)) ((bruijn ##.%k.593 5 0) #f))) ((bruijn ##.%k.593 4 0) #f))) ((bruijn ##.%k.593 3 0) #f))) ((bruijn ##.%k.593 2 0) #f))) ((bruijn ##.%k.593 1 0) #f))) ((bruijn ##.%k.593 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1090) ((##vcore.car (bruijn ##.rest.253 6 1))) ((bruijn ##.error.121 18 9) (bruijn ##.%k.590 1 0) (##string ##.string.2070) (bruijn ##.%x.1090 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2070.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k97(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.589 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27) (bruijn ##.kk.68.272 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1089) ((##vcore.pair? (bruijn ##.input.69.1087 1 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k97)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k97, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.69.1087 ##.%p.1088) ((##vcore.car (bruijn ##.rest.253 3 1)) (##vcore.pair? (bruijn ##.input.69.1087 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k90, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1047) ((##vcore.null? (bruijn ##.rest.253 1 1))) (if (bruijn ##.%p.1047 0 0) ((bruijn ##.reverse.116 13 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71) (bruijn ##.cases.250 4 0)) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71, self)))),
      statics->up->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252")) (##qualified-call (vanity compiler bytecode process-fun-case ##.loop.252) #f (bruijn ##.loop.252 0 0) (bruijn ##.%k.546 9 0) (bruijn ##.cases.250 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.130 9 18) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70) (##string ##.string.2071))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70, self)))),
      VEncodePointer(&_V10_Dstring_D2071.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1144 1 0) ((bruijn ##.%k.647 0 0) (bruijn ##.name.247 7 0)) ((bruijn ##.gensym.130 11 18) (bruijn ##.%k.647 0 0) (##string ##.string.2081)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 18)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2081.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1145 ##.%r.1146) ((##vcore.cons (bruijn ##.e.290 3 2) '()) (##vcore.cons (bruijn ##.%x.644 1 0) (bruijn ##.%x.1145 0 0))) ((bruijn ##.%k.643 3 0) (bruijn ##.%r.1146 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1144) ((##vcore.= (bruijn ##.i.289 1 1) 0)) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.113 8 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28) (bruijn ##.%x.648 0 0) (bruijn ##.cases.249 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28, self)))),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iota.131 7 19) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68) (bruijn ##.%x.649 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.132 6 20) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67) (bruijn ##.cases.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.133 5 21) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66) (bruijn ##.fun.245 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.134 4 22) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65) (bruijn ##.fun.245 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[22]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.name.1045 ##.%p.1046) ((##vcore.car (bruijn ##.fun.245 1 1)) (##vcore.string? (bruijn ##.name.1045 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1147 1 0) (##vcore.string->symbol (bruijn ##.%k.663 0 0) (bruijn ##.name.291 2 1)) ((bruijn ##.%k.663 0 0) (bruijn ##.name.291 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      _var0,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.294 3 4) ((bruijn ##.%k.661 0 0) 'lambda+) ((bruijn ##.%k.661 0 0) 'lambda))
if(VDecodeBool(
statics->up->up->vars[4])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0lambda_P);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0lambda);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1153) ((##vcore.cons (bruijn ##.%x.1152 2 4) (bruijn ##.%x.654 1 0))) ((bruijn ##.%k.652 6 0) (bruijn ##.%r.1153 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1148 ##.%x.1149 ##.%x.1150 ##.%x.1151 ##.%x.1152) ((##vcore.cons (bruijn ##.num.293 4 3) '()) (##vcore.cons (bruijn ##.%x.659 1 0) (bruijn ##.%x.1148 0 0)) (##vcore.cons (bruijn ##.%x.1149 0 1) '()) (##vcore.cons (bruijn ##.%x.656 2 0) (bruijn ##.%x.1150 0 2)) (##vcore.cons 'label (bruijn ##.%x.1151 0 3))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 5 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104) (bruijn ##.body.295 4 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[3],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, got ~D~N"
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
  // (basic-block 1 1 (##.%p.1147) ((##vcore.string? (bruijn ##.name.291 1 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.805 0 0) (bruijn ##.%k.799 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.1295 ##.%x.1296 ##.%x.1297 ##.%x.1298 ##.%x.1299 ##.%x.1300) ((##vcore.car (bruijn ##.app.307 1 0)) (##vcore.cons (bruijn ##.%x.1295 0 0) '()) (##vcore.cons (bruijn ##.label.306 5 0) (bruijn ##.%x.1296 0 1)) (##vcore.cons 'label (bruijn ##.%x.1297 0 2)) (##vcore.cdr (bruijn ##.app.307 1 0)) (##vcore.cons (bruijn ##.%x.1298 0 3) (bruijn ##.%x.1299 0 4))) ((bruijn ##.append.114 18 2) (bruijn ##.%k.806 6 0) (bruijn ##.%x.1294 3 3) (bruijn ##.%x.808 2 0) (bruijn ##.%x.1300 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[2]);
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 4,
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[3],
      statics->up->vars[0],
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 15 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111) (bruijn ##.b.1288 5 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1291 ##.%x.1292 ##.%x.1293 ##.%x.1294) ((##vcore.cons (bruijn ##.label.306 2 0) '()) (##vcore.cons 'bf (bruijn ##.%x.1291 0 0)) (##vcore.cons (bruijn ##.%x.1292 0 1) '()) (##vcore.cons (bruijn ##.%x.815 1 0) (bruijn ##.%x.1293 0 2))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 14 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110) (bruijn ##.a.1285 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0bf,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 12 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109) (bruijn ##.p.1282 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.130 12 18) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108) (##string ##.string.2161))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108, self)))),
      VEncodePointer(&_V10_Dstring_D2161.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.800 0 0) (basic-block 2 2 (##.expr.25.1280 ##.%p.1281) ((##vcore.cdr (bruijn ##.expr.296 6 1)) (##vcore.pair? (bruijn ##.expr.25.1280 0 0))) (if (bruijn ##.%p.1281 0 1) (basic-block 3 3 (##.p.1282 ##.expr.26.1283 ##.%p.1284) ((##vcore.car (bruijn ##.expr.25.1280 1 0)) (##vcore.cdr (bruijn ##.expr.25.1280 1 0)) (##vcore.pair? (bruijn ##.expr.26.1283 0 1))) (if (bruijn ##.%p.1284 0 2) (basic-block 3 3 (##.a.1285 ##.expr.27.1286 ##.%p.1287) ((##vcore.car (bruijn ##.expr.26.1283 1 1)) (##vcore.cdr (bruijn ##.expr.26.1283 1 1)) (##vcore.pair? (bruijn ##.expr.27.1286 0 1))) (if (bruijn ##.%p.1287 0 2) (basic-block 3 3 (##.b.1288 ##.%x.1289 ##.%p.1290) ((##vcore.car (bruijn ##.expr.27.1286 1 1)) (##vcore.cdr (bruijn ##.expr.27.1286 1 1)) (##vcore.null? (bruijn ##.%x.1289 0 1))) (if (bruijn ##.%p.1290 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30) (bruijn ##.kk.22.297 8 1)) ((bruijn ##.%k.799 6 0) #f))) ((bruijn ##.%k.799 5 0) #f))) ((bruijn ##.%k.799 4 0) #f))) ((bruijn ##.%k.799 3 0) #f))) ((bruijn ##.%k.799 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1154 1 0) (basic-block 1 1 (##.%x.1279) ((##vcore.car (bruijn ##.expr.296 4 1))) ((bruijn ##.equal?.122 6 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106) 'if (bruijn ##.%x.1279 0 0))) ((bruijn ##.%k.799 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.787 0 0) (bruijn ##.%k.781 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.114 17 2) (bruijn ##.%k.788 4 0) (bruijn ##.%x.1276 3 2) (bruijn ##.%x.790 2 0) (bruijn ##.%x.1278 1 1) (bruijn ##.%x.792 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[2],
      statics->up->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1277 ##.%x.1278) ((##vcore.cons 'letrec-end '()) (##vcore.cons (bruijn ##.%x.1277 0 0) '())) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 15 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117) (bruijn ##.body.1271 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__end,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1274 ##.%x.1275 ##.%x.1276) ((##vcore.cons (bruijn ##.n.1265 4 0) '()) (##vcore.cons 'letrec-begin (bruijn ##.%x.1274 0 0)) (##vcore.cons (bruijn ##.%x.1275 0 1) '())) ((bruijn ##.map.113 14 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116) (bruijn ##.process-atom.164 13 12) (bruijn ##.xs.1268 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__begin,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116, self)))),
      VGetArg(statics, 13-1, 12),
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.782 0 0) (basic-block 2 2 (##.expr.29.1263 ##.%p.1264) ((##vcore.cdr (bruijn ##.expr.296 7 1)) (##vcore.pair? (bruijn ##.expr.29.1263 0 0))) (if (bruijn ##.%p.1264 0 1) (basic-block 3 3 (##.n.1265 ##.expr.30.1266 ##.%p.1267) ((##vcore.car (bruijn ##.expr.29.1263 1 0)) (##vcore.cdr (bruijn ##.expr.29.1263 1 0)) (##vcore.pair? (bruijn ##.expr.30.1266 0 1))) (if (bruijn ##.%p.1267 0 2) (basic-block 3 3 (##.xs.1268 ##.expr.31.1269 ##.%p.1270) ((##vcore.car (bruijn ##.expr.30.1266 1 1)) (##vcore.cdr (bruijn ##.expr.30.1266 1 1)) (##vcore.pair? (bruijn ##.expr.31.1269 0 1))) (if (bruijn ##.%p.1270 0 2) (basic-block 3 3 (##.body.1271 ##.%x.1272 ##.%p.1273) ((##vcore.car (bruijn ##.expr.31.1269 1 1)) (##vcore.cdr (bruijn ##.expr.31.1269 1 1)) (##vcore.null? (bruijn ##.%x.1272 0 1))) (if (bruijn ##.%p.1273 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31) (bruijn ##.kk.22.297 9 1)) ((bruijn ##.%k.781 6 0) #f))) ((bruijn ##.%k.781 5 0) #f))) ((bruijn ##.%k.781 4 0) #f))) ((bruijn ##.%k.781 3 0) #f))) ((bruijn ##.%k.781 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1155 1 0) (basic-block 1 1 (##.%x.1262) ((##vcore.car (bruijn ##.expr.296 5 1))) ((bruijn ##.equal?.122 7 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114) 'letrec (bruijn ##.%x.1262 0 0))) ((bruijn ##.%k.781 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.767 0 0) (bruijn ##.%k.760 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.114 20 2) (bruijn ##.%k.768 5 0) (bruijn ##.%x.1259 3 3) (bruijn ##.%x.770 2 0) (bruijn ##.%x.1261 1 1) (bruijn ##.%x.772 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 5,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[3],
      statics->up->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1260 ##.%x.1261) ((##vcore.cons 'letrec-end '()) (##vcore.cons (bruijn ##.%x.1260 0 0) '())) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.162 18 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124) (bruijn ##.body.1253 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__end,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1256 ##.%x.1257 ##.%x.1258 ##.%x.1259) ((##vcore.cons (bruijn ##.%x.777 1 0) '()) (##vcore.cons (bruijn ##.n.1247 5 0) (bruijn ##.%x.1256 0 0)) (##vcore.cons 'letrec-begin (bruijn ##.%x.1257 0 1)) (##vcore.cons (bruijn ##.%x.1258 0 2) '())) ((bruijn ##.map.113 17 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123) (bruijn ##.process-atom.164 16 12) (bruijn ##.xs.1250 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__begin,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123, self)))),
      VGetArg(statics, 16-1, 12),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-library.135 15 23) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122) (bruijn ##.path.1244 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.761 0 0) (basic-block 2 2 (##.expr.33.1242 ##.%p.1243) ((##vcore.cdr (bruijn ##.expr.296 8 1)) (##vcore.pair? (bruijn ##.expr.33.1242 0 0))) (if (bruijn ##.%p.1243 0 1) (basic-block 3 3 (##.path.1244 ##.expr.34.1245 ##.%p.1246) ((##vcore.car (bruijn ##.expr.33.1242 1 0)) (##vcore.cdr (bruijn ##.expr.33.1242 1 0)) (##vcore.pair? (bruijn ##.expr.34.1245 0 1))) (if (bruijn ##.%p.1246 0 2) (basic-block 3 3 (##.n.1247 ##.expr.35.1248 ##.%p.1249) ((##vcore.car (bruijn ##.expr.34.1245 1 1)) (##vcore.cdr (bruijn ##.expr.34.1245 1 1)) (##vcore.pair? (bruijn ##.expr.35.1248 0 1))) (if (bruijn ##.%p.1249 0 2) (basic-block 3 3 (##.xs.1250 ##.expr.36.1251 ##.%p.1252) ((##vcore.car (bruijn ##.expr.35.1248 1 1)) (##vcore.cdr (bruijn ##.expr.35.1248 1 1)) (##vcore.pair? (bruijn ##.expr.36.1251 0 1))) (if (bruijn ##.%p.1252 0 2) (basic-block 3 3 (##.body.1253 ##.%x.1254 ##.%p.1255) ((##vcore.car (bruijn ##.expr.36.1251 1 1)) (##vcore.cdr (bruijn ##.expr.36.1251 1 1)) (##vcore.null? (bruijn ##.%x.1254 0 1))) (if (bruijn ##.%p.1255 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32) (bruijn ##.kk.22.297 11 1)) ((bruijn ##.%k.760 7 0) #f))) ((bruijn ##.%k.760 6 0) #f))) ((bruijn ##.%k.760 5 0) #f))) ((bruijn ##.%k.760 4 0) #f))) ((bruijn ##.%k.760 3 0) #f))) ((bruijn ##.%k.760 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1156 1 0) (basic-block 1 1 (##.%x.1241) ((##vcore.car (bruijn ##.expr.296 6 1))) ((bruijn ##.equal?.122 8 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120) '##letrec (bruijn ##.%x.1241 0 0))) ((bruijn ##.%k.760 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.714 0 0) (bruijn ##.%k.708 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.739 0 0) (bruijn ##.%k.733 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.1233 ##.%x.1234 ##.%x.1235 ##.%x.1236 ##.%x.1237 ##.%x.1238 ##.%x.1239 ##.%r.1240) ((##vcore.cons '5 '()) (##vcore.cons 'call (bruijn ##.%x.1233 0 0)) (##vcore.cons (bruijn ##.%x.1234 0 1) '()) (##vcore.cons (bruijn ##.%x.749 1 0) (bruijn ##.%x.1235 0 2)) (##vcore.cons (bruijn ##.%x.1232 2 3) (bruijn ##.%x.1236 0 3)) (##vcore.cons (bruijn ##.%x.1230 2 1) (bruijn ##.%x.1237 0 4)) (##vcore.cons (bruijn ##.%x.743 3 0) (bruijn ##.%x.1238 0 5)) (##vcore.cons (bruijn ##.%x.1228 4 0) (bruijn ##.%x.1239 0 6))) ((bruijn ##.%k.740 5 0) (bruijn ##.%r.1240 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(5l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1229 ##.%x.1230 ##.%x.1231 ##.%x.1232) ((##vcore.cons (bruijn ##.up.1222 5 0) '()) (##vcore.cons 'push (bruijn ##.%x.1229 0 0)) (##vcore.cons (bruijn ##.right.1225 4 0) '()) (##vcore.cons 'push (bruijn ##.%x.1231 0 2))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 27 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133) (bruijn ##.x.1200 14 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1228) ((##vcore.cons 'push-set! '())) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 25 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132) (bruijn ##.k.1194 14 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0push__set_B,
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.734 0 0) (basic-block 2 2 (##.expr.54.1217 ##.%p.1218) ((##vcore.cdr (bruijn ##.y.1197 8 0)) (##vcore.pair? (bruijn ##.expr.54.1217 0 0))) (if (bruijn ##.%p.1218 0 1) (basic-block 3 3 (##.name.1219 ##.expr.55.1220 ##.%p.1221) ((##vcore.car (bruijn ##.expr.54.1217 1 0)) (##vcore.cdr (bruijn ##.expr.54.1217 1 0)) (##vcore.pair? (bruijn ##.expr.55.1220 0 1))) (if (bruijn ##.%p.1221 0 2) (basic-block 3 3 (##.up.1222 ##.expr.56.1223 ##.%p.1224) ((##vcore.car (bruijn ##.expr.55.1220 1 1)) (##vcore.cdr (bruijn ##.expr.55.1220 1 1)) (##vcore.pair? (bruijn ##.expr.56.1223 0 1))) (if (bruijn ##.%p.1224 0 2) (basic-block 3 3 (##.right.1225 ##.%x.1226 ##.%p.1227) ((##vcore.car (bruijn ##.expr.56.1223 1 1)) (##vcore.cdr (bruijn ##.expr.56.1223 1 1)) (##vcore.null? (bruijn ##.%x.1226 0 1))) (if (bruijn ##.%p.1227 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35) (bruijn ##.kk.51.331 8 1)) ((bruijn ##.%k.733 6 0) #f))) ((bruijn ##.%k.733 5 0) #f))) ((bruijn ##.%k.733 4 0) #f))) ((bruijn ##.%k.733 3 0) #f))) ((bruijn ##.%k.733 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1203 1 0) (basic-block 1 1 (##.%x.1216) ((##vcore.car (bruijn ##.y.1197 6 0))) ((bruijn ##.equal?.122 19 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130) 'bruijn (bruijn ##.%x.1216 0 0))) ((bruijn ##.%k.733 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.121 18 9) (bruijn ##.%k.716 2 0) (##string ##.string.1700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.717 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1209 ##.%x.1210 ##.%x.1211 ##.%x.1212 ##.%x.1213 ##.%x.1214 ##.%r.1215) ((##vcore.cons '4 '()) (##vcore.cons 'call (bruijn ##.%x.1209 0 0)) (##vcore.cons (bruijn ##.%x.1210 0 1) '()) (##vcore.cons (bruijn ##.%x.726 1 0) (bruijn ##.%x.1211 0 2)) (##vcore.cons (bruijn ##.%x.1208 2 1) (bruijn ##.%x.1212 0 3)) (##vcore.cons (bruijn ##.%x.722 3 0) (bruijn ##.%x.1213 0 4)) (##vcore.cons (bruijn ##.%x.1206 4 1) (bruijn ##.%x.1214 0 5))) ((bruijn ##.%k.718 6 0) (bruijn ##.%r.1215 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(4l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1207 ##.%x.1208) ((##vcore.cons (bruijn ##.y.1197 9 0) '()) (##vcore.cons 'push (bruijn ##.%x.1207 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 21 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138) (bruijn ##.x.1200 8 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1204) ((##vcore.symbol? (bruijn ##.y.1197 6 0))) (if (bruijn ##.%p.1204 0 0) (basic-block 2 2 (##.%x.1205 ##.%x.1206) ((##vcore.cons '##vcore.set-global! '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1205 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 19 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137) (bruijn ##.k.1194 8 0))) ((bruijn ##.error.121 19 9) (bruijn ##.%k.718 1 0) (##string ##.string.2291))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dset__global_B,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2291.sym, VPOINTER_OTHER));
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36) (bruijn ##.kk.51.331 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1203) ((##vcore.pair? (bruijn ##.y.1197 4 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.715 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.709 0 0) (basic-block 2 2 (##.expr.38.1192 ##.%p.1193) ((##vcore.cdr (bruijn ##.expr.296 9 1)) (##vcore.pair? (bruijn ##.expr.38.1192 0 0))) (if (bruijn ##.%p.1193 0 1) (basic-block 3 3 (##.k.1194 ##.expr.39.1195 ##.%p.1196) ((##vcore.car (bruijn ##.expr.38.1192 1 0)) (##vcore.cdr (bruijn ##.expr.38.1192 1 0)) (##vcore.pair? (bruijn ##.expr.39.1195 0 1))) (if (bruijn ##.%p.1196 0 2) (basic-block 3 3 (##.y.1197 ##.expr.40.1198 ##.%p.1199) ((##vcore.car (bruijn ##.expr.39.1195 1 1)) (##vcore.cdr (bruijn ##.expr.39.1195 1 1)) (##vcore.pair? (bruijn ##.expr.40.1198 0 1))) (if (bruijn ##.%p.1199 0 2) (basic-block 3 3 (##.x.1200 ##.%x.1201 ##.%p.1202) ((##vcore.car (bruijn ##.expr.40.1198 1 1)) (##vcore.cdr (bruijn ##.expr.40.1198 1 1)) (##vcore.null? (bruijn ##.%x.1201 0 1))) (if (bruijn ##.%p.1202 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33) (bruijn ##.kk.22.297 11 1)) ((bruijn ##.%k.708 6 0) #f))) ((bruijn ##.%k.708 5 0) #f))) ((bruijn ##.%k.708 4 0) #f))) ((bruijn ##.%k.708 3 0) #f))) ((bruijn ##.%k.708 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1157 1 0) (basic-block 1 1 (##.%x.1191) ((##vcore.car (bruijn ##.expr.296 7 1))) ((bruijn ##.equal?.122 9 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127) 'set! (bruijn ##.%x.1191 0 0))) ((bruijn ##.%k.708 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.691 0 0) (bruijn ##.%k.685 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1184 ##.%x.1185 ##.%x.1186 ##.%x.1187 ##.%x.1188 ##.%x.1189 ##.%r.1190) ((##vcore.cons '4 '()) (##vcore.cons 'call (bruijn ##.%x.1184 0 0)) (##vcore.cons (bruijn ##.%x.1185 0 1) '()) (##vcore.cons (bruijn ##.%x.699 1 0) (bruijn ##.%x.1186 0 2)) (##vcore.cons (bruijn ##.%x.1183 2 1) (bruijn ##.%x.1187 0 3)) (##vcore.cons (bruijn ##.%x.695 3 0) (bruijn ##.%x.1188 0 4)) (##vcore.cons (bruijn ##.%x.1181 4 1) (bruijn ##.%x.1189 0 5))) ((bruijn ##.%k.692 5 0) (bruijn ##.%r.1190 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(4l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1182 ##.%x.1183) ((##vcore.cons (bruijn ##.y.1174 5 0) '()) (##vcore.cons 'push (bruijn ##.%x.1182 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 18 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144) (bruijn ##.x.1177 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1180 ##.%x.1181) ((##vcore.cons '##vcore.define '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1180 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.164 16 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143) (bruijn ##.k.1171 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddefine,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.686 0 0) (basic-block 2 2 (##.expr.42.1169 ##.%p.1170) ((##vcore.cdr (bruijn ##.expr.296 10 1)) (##vcore.pair? (bruijn ##.expr.42.1169 0 0))) (if (bruijn ##.%p.1170 0 1) (basic-block 3 3 (##.k.1171 ##.expr.43.1172 ##.%p.1173) ((##vcore.car (bruijn ##.expr.42.1169 1 0)) (##vcore.cdr (bruijn ##.expr.42.1169 1 0)) (##vcore.pair? (bruijn ##.expr.43.1172 0 1))) (if (bruijn ##.%p.1173 0 2) (basic-block 3 3 (##.y.1174 ##.expr.44.1175 ##.%p.1176) ((##vcore.car (bruijn ##.expr.43.1172 1 1)) (##vcore.cdr (bruijn ##.expr.43.1172 1 1)) (##vcore.pair? (bruijn ##.expr.44.1175 0 1))) (if (bruijn ##.%p.1176 0 2) (basic-block 3 3 (##.x.1177 ##.%x.1178 ##.%p.1179) ((##vcore.car (bruijn ##.expr.44.1175 1 1)) (##vcore.cdr (bruijn ##.expr.44.1175 1 1)) (##vcore.null? (bruijn ##.%x.1178 0 1))) (if (bruijn ##.%p.1179 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37) (bruijn ##.kk.22.297 12 1)) ((bruijn ##.%k.685 6 0) #f))) ((bruijn ##.%k.685 5 0) #f))) ((bruijn ##.%k.685 4 0) #f))) ((bruijn ##.%k.685 3 0) #f))) ((bruijn ##.%k.685 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1158 1 0) (basic-block 1 1 (##.%x.1168) ((##vcore.car (bruijn ##.expr.296 8 1))) ((bruijn ##.equal?.122 10 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141) 'define (bruijn ##.%x.1168 0 0))) ((bruijn ##.%k.685 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.48.351 5 1) (bruijn ##.%k.677 1 0) (bruijn ##.expr.50.353 3 1) (bruijn ##.%x.678 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1163 1 1) ((bruijn ##.reverse.116 17 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148) (bruijn ##.xs.47.354 2 2)) ((bruijn ##.%k.677 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.48.351 7 1) (bruijn ##.%k.672 2 0) (bruijn ##.expr.50.353 5 1) (bruijn ##.%x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.116 19 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151) (bruijn ##.xs.47.354 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.1164 ##.%x.1165 ##.%x.1166) ((##vcore.car (bruijn ##.expr.50.353 4 1)) (##vcore.cdr (bruijn ##.expr.50.353 4 1)) (##vcore.cons (bruijn ##.xs.1164 0 0) (bruijn ##.xs.47.354 4 2))) ((bruijn ##.kk.49.355 1 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k150) (bruijn ##.%x.1165 0 1) (bruijn ##.%x.1166 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k150, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.671 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.670 1 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40) (bruijn ##.loop.352 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1162 ##.%p.1163) ((##vcore.pair? (bruijn ##.expr.50.353 1 1)) (##vcore.not (bruijn ##.%x.1162 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k149)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k149, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352")) (##qualified-call (vanity compiler bytecode process-application ##.loop.352) #f (bruijn ##.loop.352 0 0) (bruijn ##.%k.669 1 0) (bruijn ##.expr.46.1161 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.668 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.682 0 0) (bruijn ##.%k.680 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-combination) #t (bruijn ##.process-combination.163 13 11) (bruijn ##.%k.683 0 0) (bruijn ##.expr.296 12 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1167) ((##vcore.null? (bruijn ##.tail-expr.357 1 1))) (if (bruijn ##.%p.1167 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43) (bruijn ##.kk.22.297 10 1)) ((bruijn ##.%k.680 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1159 1 0) (basic-block 2 2 (##.f.1160 ##.expr.46.1161) ((##vcore.car (bruijn ##.expr.296 9 1)) (##vcore.cdr (bruijn ##.expr.296 9 1))) (##vcore.call-with-values (bruijn ##.%k.667 1 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42))) ((bruijn ##.%k.667 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.121 9 9) (bruijn ##.%k.665 6 0) (##string ##.string.1700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1159) ((##vcore.pair? (bruijn ##.expr.296 7 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1158) ((##vcore.pair? (bruijn ##.expr.296 6 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1157) ((##vcore.pair? (bruijn ##.expr.296 5 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1156) ((##vcore.pair? (bruijn ##.expr.296 4 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k112(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1155) ((##vcore.pair? (bruijn ##.expr.296 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k118, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1154) ((##vcore.pair? (bruijn ##.expr.296 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k112)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k112, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__application" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.664 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1301 ##.%x.1302 ##.%x.1303) ((##vcore.cons (bruijn ##.len.360 2 0) '()) (##vcore.cons 'call (bruijn ##.%x.1301 0 0)) (##vcore.cons (bruijn ##.%x.1302 0 1) '())) ((bruijn ##.append.114 5 2) (bruijn ##.%k.821 3 0) (bruijn ##.%x.822 1 0) (bruijn ##.%x.1303 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.113 3 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155) (bruijn ##.process-atom.164 2 12) (bruijn ##.expr.359 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155, self)))),
      statics->up->vars[12],
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__combination" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.length.132 2 20) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154) (bruijn ##.expr.359 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.922 0 0) (bruijn ##.%k.918 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1394 ##.%r.1395) ((##vcore.cons (bruijn ##.x.1391 2 0) '()) (##vcore.cons 'push (bruijn ##.%x.1394 0 0))) ((bruijn ##.%k.923 1 0) (bruijn ##.%r.1395 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.919 0 0) (basic-block 2 2 (##.expr.4.1389 ##.%p.1390) ((##vcore.cdr (bruijn ##.expr.361 6 1)) (##vcore.pair? (bruijn ##.expr.4.1389 0 0))) (if (bruijn ##.%p.1390 0 1) (basic-block 3 3 (##.x.1391 ##.%x.1392 ##.%p.1393) ((##vcore.car (bruijn ##.expr.4.1389 1 0)) (##vcore.cdr (bruijn ##.expr.4.1389 1 0)) (##vcore.null? (bruijn ##.%x.1392 0 1))) (if (bruijn ##.%p.1393 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45) (bruijn ##.kk.1.362 6 1)) ((bruijn ##.%k.918 4 0) #f))) ((bruijn ##.%k.918 3 0) #f))) ((bruijn ##.%k.918 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1304 1 0) (basic-block 1 1 (##.%x.1388) ((##vcore.car (bruijn ##.expr.361 4 1))) ((bruijn ##.equal?.122 6 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157) 'quote (bruijn ##.%x.1388 0 0))) ((bruijn ##.%k.918 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.912 0 0) (bruijn ##.%k.908 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1386 ##.%r.1387) ((##vcore.cons (bruijn ##.fun.1383 2 0) '()) (##vcore.cons 'close (bruijn ##.%x.1386 0 0))) ((bruijn ##.%k.913 1 0) (bruijn ##.%r.1387 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.909 0 0) (basic-block 2 2 (##.expr.6.1381 ##.%p.1382) ((##vcore.cdr (bruijn ##.expr.361 7 1)) (##vcore.pair? (bruijn ##.expr.6.1381 0 0))) (if (bruijn ##.%p.1382 0 1) (basic-block 3 3 (##.fun.1383 ##.%x.1384 ##.%p.1385) ((##vcore.car (bruijn ##.expr.6.1381 1 0)) (##vcore.cdr (bruijn ##.expr.6.1381 1 0)) (##vcore.null? (bruijn ##.%x.1384 0 1))) (if (bruijn ##.%p.1385 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46) (bruijn ##.kk.1.362 7 1)) ((bruijn ##.%k.908 4 0) #f))) ((bruijn ##.%k.908 3 0) #f))) ((bruijn ##.%k.908 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1305 1 0) (basic-block 1 1 (##.%x.1380) ((##vcore.car (bruijn ##.expr.361 5 1))) ((bruijn ##.equal?.122 7 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161) 'close (bruijn ##.%x.1380 0 0))) ((bruijn ##.%k.908 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.899 0 0) (bruijn ##.%k.894 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1377 ##.%x.1378 ##.%r.1379) ((##vcore.cons (bruijn ##.%x.904 1 0) '()) (##vcore.cons (bruijn ##.%x.902 2 0) (bruijn ##.%x.1377 0 0)) (##vcore.cons 'close (bruijn ##.%x.1378 0 1))) ((bruijn ##.%k.900 3 0) (bruijn ##.%r.1379 0 2)))
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
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-library.135 14 23) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168) (bruijn ##.name.1374 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167) (bruijn ##.fun.1371 2 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.895 0 0) (basic-block 2 2 (##.expr.8.1369 ##.%p.1370) ((##vcore.cdr (bruijn ##.expr.361 8 1)) (##vcore.pair? (bruijn ##.expr.8.1369 0 0))) (if (bruijn ##.%p.1370 0 1) (basic-block 3 3 (##.fun.1371 ##.expr.9.1372 ##.%p.1373) ((##vcore.car (bruijn ##.expr.8.1369 1 0)) (##vcore.cdr (bruijn ##.expr.8.1369 1 0)) (##vcore.pair? (bruijn ##.expr.9.1372 0 1))) (if (bruijn ##.%p.1373 0 2) (basic-block 3 3 (##.name.1374 ##.%x.1375 ##.%p.1376) ((##vcore.car (bruijn ##.expr.9.1372 1 1)) (##vcore.cdr (bruijn ##.expr.9.1372 1 1)) (##vcore.null? (bruijn ##.%x.1375 0 1))) (if (bruijn ##.%p.1376 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47) (bruijn ##.kk.1.362 9 1)) ((bruijn ##.%k.894 5 0) #f))) ((bruijn ##.%k.894 4 0) #f))) ((bruijn ##.%k.894 3 0) #f))) ((bruijn ##.%k.894 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1306 1 0) (basic-block 1 1 (##.%x.1368) ((##vcore.car (bruijn ##.expr.361 6 1))) ((bruijn ##.equal?.122 8 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165) 'close (bruijn ##.%x.1368 0 0))) ((bruijn ##.%k.894 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.887 0 0) (bruijn ##.%k.881 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1365 ##.%x.1366 ##.%r.1367) ((##vcore.cons (bruijn ##.right.1362 2 0) '()) (##vcore.cons (bruijn ##.up.1359 3 0) (bruijn ##.%x.1365 0 0)) (##vcore.cons 'bruijn (bruijn ##.%x.1366 0 1))) ((bruijn ##.%k.888 1 0) (bruijn ##.%r.1367 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.882 0 0) (basic-block 2 2 (##.expr.11.1354 ##.%p.1355) ((##vcore.cdr (bruijn ##.expr.361 9 1)) (##vcore.pair? (bruijn ##.expr.11.1354 0 0))) (if (bruijn ##.%p.1355 0 1) (basic-block 3 3 (##.name.1356 ##.expr.12.1357 ##.%p.1358) ((##vcore.car (bruijn ##.expr.11.1354 1 0)) (##vcore.cdr (bruijn ##.expr.11.1354 1 0)) (##vcore.pair? (bruijn ##.expr.12.1357 0 1))) (if (bruijn ##.%p.1358 0 2) (basic-block 3 3 (##.up.1359 ##.expr.13.1360 ##.%p.1361) ((##vcore.car (bruijn ##.expr.12.1357 1 1)) (##vcore.cdr (bruijn ##.expr.12.1357 1 1)) (##vcore.pair? (bruijn ##.expr.13.1360 0 1))) (if (bruijn ##.%p.1361 0 2) (basic-block 3 3 (##.right.1362 ##.%x.1363 ##.%p.1364) ((##vcore.car (bruijn ##.expr.13.1360 1 1)) (##vcore.cdr (bruijn ##.expr.13.1360 1 1)) (##vcore.null? (bruijn ##.%x.1363 0 1))) (if (bruijn ##.%p.1364 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48) (bruijn ##.kk.1.362 11 1)) ((bruijn ##.%k.881 6 0) #f))) ((bruijn ##.%k.881 5 0) #f))) ((bruijn ##.%k.881 4 0) #f))) ((bruijn ##.%k.881 3 0) #f))) ((bruijn ##.%k.881 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1307 1 0) (basic-block 1 1 (##.%x.1353) ((##vcore.car (bruijn ##.expr.361 7 1))) ((bruijn ##.equal?.122 9 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171) 'bruijn (bruijn ##.%x.1353 0 0))) ((bruijn ##.%k.881 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.875 0 0) (bruijn ##.%k.871 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1351 ##.%r.1352) ((##vcore.cons (bruijn ##.x.1348 2 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1351 0 0))) ((bruijn ##.%k.876 1 0) (bruijn ##.%r.1352 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.872 0 0) (basic-block 2 2 (##.expr.15.1346 ##.%p.1347) ((##vcore.cdr (bruijn ##.expr.361 10 1)) (##vcore.pair? (bruijn ##.expr.15.1346 0 0))) (if (bruijn ##.%p.1347 0 1) (basic-block 3 3 (##.x.1348 ##.%x.1349 ##.%p.1350) ((##vcore.car (bruijn ##.expr.15.1346 1 0)) (##vcore.cdr (bruijn ##.expr.15.1346 1 0)) (##vcore.null? (bruijn ##.%x.1349 0 1))) (if (bruijn ##.%p.1350 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49) (bruijn ##.kk.1.362 10 1)) ((bruijn ##.%k.871 4 0) #f))) ((bruijn ##.%k.871 3 0) #f))) ((bruijn ##.%k.871 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1308 1 0) (basic-block 1 1 (##.%x.1345) ((##vcore.car (bruijn ##.expr.361 8 1))) ((bruijn ##.equal?.122 10 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175) '##intrinsic (bruijn ##.%x.1345 0 0))) ((bruijn ##.%k.871 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.864 0 0) (bruijn ##.%k.860 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1343 ##.%r.1344) ((##vcore.cons (bruijn ##.%x.867 1 0) '()) (##vcore.cons 'foreign-function (bruijn ##.%x.1343 0 0))) ((bruijn ##.%k.865 2 0) (bruijn ##.%r.1344 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0foreign__function,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181) (bruijn ##.x.1340 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.861 0 0) (basic-block 2 2 (##.expr.17.1338 ##.%p.1339) ((##vcore.cdr (bruijn ##.expr.361 11 1)) (##vcore.pair? (bruijn ##.expr.17.1338 0 0))) (if (bruijn ##.%p.1339 0 1) (basic-block 3 3 (##.x.1340 ##.%x.1341 ##.%p.1342) ((##vcore.car (bruijn ##.expr.17.1338 1 0)) (##vcore.cdr (bruijn ##.expr.17.1338 1 0)) (##vcore.null? (bruijn ##.%x.1341 0 1))) (if (bruijn ##.%p.1342 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50) (bruijn ##.kk.1.362 11 1)) ((bruijn ##.%k.860 4 0) #f))) ((bruijn ##.%k.860 3 0) #f))) ((bruijn ##.%k.860 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50, self)))),
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1309 1 0) (basic-block 1 1 (##.%x.1337) ((##vcore.car (bruijn ##.expr.361 9 1))) ((bruijn ##.equal?.122 11 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179) '##foreign.function (bruijn ##.%x.1337 0 0))) ((bruijn ##.%k.860 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.853 0 0) (bruijn ##.%k.849 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1335 ##.%r.1336) ((##vcore.cons (bruijn ##.%x.856 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1335 0 0))) ((bruijn ##.%k.854 2 0) (bruijn ##.%r.1336 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186) (bruijn ##.x.1332 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.850 0 0) (basic-block 2 2 (##.expr.19.1330 ##.%p.1331) ((##vcore.cdr (bruijn ##.expr.361 12 1)) (##vcore.pair? (bruijn ##.expr.19.1330 0 0))) (if (bruijn ##.%p.1331 0 1) (basic-block 3 3 (##.x.1332 ##.%x.1333 ##.%p.1334) ((##vcore.car (bruijn ##.expr.19.1330 1 0)) (##vcore.cdr (bruijn ##.expr.19.1330 1 0)) (##vcore.null? (bruijn ##.%x.1333 0 1))) (if (bruijn ##.%p.1334 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51) (bruijn ##.kk.1.362 12 1)) ((bruijn ##.%k.849 4 0) #f))) ((bruijn ##.%k.849 3 0) #f))) ((bruijn ##.%k.849 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1310 1 0) (basic-block 1 1 (##.%x.1329) ((##vcore.car (bruijn ##.expr.361 10 1))) ((bruijn ##.equal?.122 12 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184) '##intrinsic (bruijn ##.%x.1329 0 0))) ((bruijn ##.%k.849 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.842 0 0) (bruijn ##.%k.838 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1327 ##.%r.1328) ((##vcore.cons (bruijn ##.%x.845 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1327 0 0))) ((bruijn ##.%k.843 2 0) (bruijn ##.%r.1328 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191) (bruijn ##.x.1324 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.839 0 0) (basic-block 2 2 (##.expr.21.1322 ##.%p.1323) ((##vcore.cdr (bruijn ##.expr.361 13 1)) (##vcore.pair? (bruijn ##.expr.21.1322 0 0))) (if (bruijn ##.%p.1323 0 1) (basic-block 3 3 (##.x.1324 ##.%x.1325 ##.%p.1326) ((##vcore.car (bruijn ##.expr.21.1322 1 0)) (##vcore.cdr (bruijn ##.expr.21.1322 1 0)) (##vcore.null? (bruijn ##.%x.1325 0 1))) (if (bruijn ##.%p.1326 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52) (bruijn ##.kk.1.362 13 1)) ((bruijn ##.%k.838 4 0) #f))) ((bruijn ##.%k.838 3 0) #f))) ((bruijn ##.%k.838 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1311 1 0) (basic-block 1 1 (##.%x.1321) ((##vcore.car (bruijn ##.expr.361 11 1))) ((bruijn ##.equal?.122 13 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189) '##basic-intrinsic (bruijn ##.%x.1321 0 0))) ((bruijn ##.%k.838 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.121 12 9) (bruijn ##.%k.827 9 0) (##string ##.string.1700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.828 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.833 0 0) (basic-block 2 2 (##.%x.1317 ##.%r.1318) ((##vcore.cons (bruijn ##.expr.361 14 1) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1317 0 0))) ((bruijn ##.%k.829 4 0) (bruijn ##.%r.1318 0 1))) (basic-block 2 2 (##.%x.1319 ##.%r.1320) ((##vcore.cons (bruijn ##.expr.361 14 1) '()) (##vcore.cons 'lookup (bruijn ##.%x.1319 0 0))) ((bruijn ##.%k.829 4 0) (bruijn ##.%r.1320 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lookup,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1312) ((##vcore.pair? (bruijn ##.expr.361 11 1))) (if (bruijn ##.%p.1312 0 0) ((bruijn ##.compiler-error.115 13 3) (bruijn ##.%k.829 1 0) (##string ##.string.2540) (bruijn ##.expr.361 11 1)) (basic-block 2 2 (##.%x.1313 ##.%p.1314) ((##vcore.symbol? (bruijn ##.expr.361 12 1)) (##vcore.not (bruijn ##.%x.1313 0 0))) (if (bruijn ##.%p.1314 0 1) (basic-block 2 2 (##.%x.1315 ##.%r.1316) ((##vcore.cons (bruijn ##.expr.361 13 1) '()) (##vcore.cons 'push (bruijn ##.%x.1315 0 0))) ((bruijn ##.%k.829 3 0) (bruijn ##.%r.1316 0 1))) ((bruijn ##.lookup-intrinsic-name.136 14 24) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195) (bruijn ##.expr.361 12 1))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2540.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195, self)))),
      VGetArg(statics, 12-1, 1));
}
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53) (bruijn ##.kk.1.362 8 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53, self)))),
      VGetArg(statics, 8-1, 1));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1311) ((##vcore.pair? (bruijn ##.expr.361 9 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1310) ((##vcore.pair? (bruijn ##.expr.361 8 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1309) ((##vcore.pair? (bruijn ##.expr.361 7 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k173(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1308) ((##vcore.pair? (bruijn ##.expr.361 6 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1307) ((##vcore.pair? (bruijn ##.expr.361 5 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k173)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k173, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1306) ((##vcore.pair? (bruijn ##.expr.361 4 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k169)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k169, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1305) ((##vcore.pair? (bruijn ##.expr.361 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k163)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k163, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1304) ((##vcore.pair? (bruijn ##.expr.361 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k159)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k159, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.826 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44, self)))));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0lambda3, got ~D~N"
  "-- expected 25~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[25]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 25, 25, statics);
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
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  self->vars[19] = _var19;
  self->vars[20] = _var20;
  self->vars[21] = _var21;
  self->vars[22] = _var22;
  self->vars[23] = _var23;
  self->vars[24] = _var24;
  // (##letrec (vanity compiler bytecode) 13 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__function" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__application" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__combination" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom" (vanity compiler bytecode))) (basic-block 4 4 (##.%x.1396 ##.%x.1397 ##.%x.1398 ##.%r.1399) ((##vcore.cons 'write-bytecode (bruijn ##.write-bytecode.153 1 1)) (##vcore.cons 'to-bytecode (bruijn ##.to-bytecode.152 1 0)) (##vcore.cons (bruijn ##.%x.1397 0 1) '()) (##vcore.cons (bruijn ##.%x.1396 0 0) (bruijn ##.%x.1398 0 2))) ((bruijn ##.%k.407 2 0) (bruijn ##.%r.1399 0 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0bytecode = self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0bytecode_V20", &_V60_V0vanity_V0compiler_V0bytecode);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0write__bytecode,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0to__bytecode,
      statics->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[3]);
    }
    }
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.396 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_V0lambda2) (close _V0vanity_V0compiler_V0bytecode_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0bytecode_V20 = (VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V0expr_D21 = VEncodePointer(VInternSymbol(1780795813, &_VW_V0expr_D21.sym), VPOINTER_OTHER);
  _V0expr_D19 = VEncodePointer(VInternSymbol(-1944829827, &_VW_V0expr_D19.sym), VPOINTER_OTHER);
  _V0foreign__function = VEncodePointer(VInternSymbol(1036213076, &_VW_V0foreign__function.sym), VPOINTER_OTHER);
  _V0expr_D17 = VEncodePointer(VInternSymbol(880016266, &_VW_V0expr_D17.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0expr_D15 = VEncodePointer(VInternSymbol(629565450, &_VW_V0expr_D15.sym), VPOINTER_OTHER);
  _V0expr_D11 = VEncodePointer(VInternSymbol(-2011557135, &_VW_V0expr_D11.sym), VPOINTER_OTHER);
  _V0expr_D12 = VEncodePointer(VInternSymbol(-345568046, &_VW_V0expr_D12.sym), VPOINTER_OTHER);
  _V0expr_D13 = VEncodePointer(VInternSymbol(-1093425169, &_VW_V0expr_D13.sym), VPOINTER_OTHER);
  _V0expr_D8 = VEncodePointer(VInternSymbol(1024544539, &_VW_V0expr_D8.sym), VPOINTER_OTHER);
  _V0expr_D9 = VEncodePointer(VInternSymbol(388943303, &_VW_V0expr_D9.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0expr_D6 = VEncodePointer(VInternSymbol(1616899195, &_VW_V0expr_D6.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0expr_D4 = VEncodePointer(VInternSymbol(1998170004, &_VW_V0expr_D4.sym), VPOINTER_OTHER);
  _V0kk_D1 = VEncodePointer(VInternSymbol(-1164357159, &_VW_V0kk_D1.sym), VPOINTER_OTHER);
  _V0kk_D49 = VEncodePointer(VInternSymbol(1780451660, &_VW_V0kk_D49.sym), VPOINTER_OTHER);
  _V0xs_D47 = VEncodePointer(VInternSymbol(-1277883436, &_VW_V0xs_D47.sym), VPOINTER_OTHER);
  _V0expr_D50 = VEncodePointer(VInternSymbol(-194324068, &_VW_V0expr_D50.sym), VPOINTER_OTHER);
  _V10_Dloop_D352 = VEncodePointer(VInternSymbol(1581789751, &_VW_V10_Dloop_D352.sym), VPOINTER_OTHER);
  _V0kk_D48 = VEncodePointer(VInternSymbol(-1497092583, &_VW_V0kk_D48.sym), VPOINTER_OTHER);
  _V0expr_D46 = VEncodePointer(VInternSymbol(1480209784, &_VW_V0expr_D46.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VInternSymbol(-65267310, &_VW_V10vcore_Ddefine.sym), VPOINTER_OTHER);
  _V0expr_D42 = VEncodePointer(VInternSymbol(-1983730220, &_VW_V0expr_D42.sym), VPOINTER_OTHER);
  _V0expr_D43 = VEncodePointer(VInternSymbol(-858196652, &_VW_V0expr_D43.sym), VPOINTER_OTHER);
  _V0expr_D44 = VEncodePointer(VInternSymbol(166717540, &_VW_V0expr_D44.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VInternSymbol(1953518893, &_VW_V0intrinsic.sym), VPOINTER_OTHER);
  _V10vcore_Dset__global_B = VEncodePointer(VInternSymbol(-121985904, &_VW_V10vcore_Dset__global_B.sym), VPOINTER_OTHER);
  _V0call = VEncodePointer(VInternSymbol(-822823338, &_VW_V0call.sym), VPOINTER_OTHER);
  _V0push = VEncodePointer(VInternSymbol(-1491894077, &_VW_V0push.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V0expr_D54 = VEncodePointer(VInternSymbol(-428344651, &_VW_V0expr_D54.sym), VPOINTER_OTHER);
  _V0expr_D55 = VEncodePointer(VInternSymbol(-1199215862, &_VW_V0expr_D55.sym), VPOINTER_OTHER);
  _V0expr_D56 = VEncodePointer(VInternSymbol(1019579625, &_VW_V0expr_D56.sym), VPOINTER_OTHER);
  _V0up = VEncodePointer(VInternSymbol(2064092815, &_VW_V0up.sym), VPOINTER_OTHER);
  _V0right = VEncodePointer(VInternSymbol(-1095549294, &_VW_V0right.sym), VPOINTER_OTHER);
  _V0kk_D51 = VEncodePointer(VInternSymbol(-1519634114, &_VW_V0kk_D51.sym), VPOINTER_OTHER);
  _V0expr_D38 = VEncodePointer(VInternSymbol(1190420271, &_VW_V0expr_D38.sym), VPOINTER_OTHER);
  _V0expr_D39 = VEncodePointer(VInternSymbol(-1813819538, &_VW_V0expr_D39.sym), VPOINTER_OTHER);
  _V0expr_D40 = VEncodePointer(VInternSymbol(-1817317687, &_VW_V0expr_D40.sym), VPOINTER_OTHER);
  _V0y = VEncodePointer(VInternSymbol(-1581629518, &_VW_V0y.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0expr_D33 = VEncodePointer(VInternSymbol(-1255757878, &_VW_V0expr_D33.sym), VPOINTER_OTHER);
  _V0expr_D34 = VEncodePointer(VInternSymbol(2072463023, &_VW_V0expr_D34.sym), VPOINTER_OTHER);
  _V0path = VEncodePointer(VInternSymbol(-1450499945, &_VW_V0path.sym), VPOINTER_OTHER);
  _V0expr_D35 = VEncodePointer(VInternSymbol(-913066290, &_VW_V0expr_D35.sym), VPOINTER_OTHER);
  _V0expr_D36 = VEncodePointer(VInternSymbol(1003530614, &_VW_V0expr_D36.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0expr_D29 = VEncodePointer(VInternSymbol(-206703007, &_VW_V0expr_D29.sym), VPOINTER_OTHER);
  _V0expr_D30 = VEncodePointer(VInternSymbol(-177645212, &_VW_V0expr_D30.sym), VPOINTER_OTHER);
  _V0n = VEncodePointer(VInternSymbol(645313662, &_VW_V0n.sym), VPOINTER_OTHER);
  _V0expr_D31 = VEncodePointer(VInternSymbol(-307722423, &_VW_V0expr_D31.sym), VPOINTER_OTHER);
  _V0xs = VEncodePointer(VInternSymbol(-55341891, &_VW_V0xs.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0app = VEncodePointer(VInternSymbol(792359344, &_VW_V0app.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0expr_D25 = VEncodePointer(VInternSymbol(733883527, &_VW_V0expr_D25.sym), VPOINTER_OTHER);
  _V0expr_D26 = VEncodePointer(VInternSymbol(-555246409, &_VW_V0expr_D26.sym), VPOINTER_OTHER);
  _V0p = VEncodePointer(VInternSymbol(-1603972369, &_VW_V0p.sym), VPOINTER_OTHER);
  _V0expr_D27 = VEncodePointer(VInternSymbol(-164017570, &_VW_V0expr_D27.sym), VPOINTER_OTHER);
  _V0a = VEncodePointer(VInternSymbol(-1450414501, &_VW_V0a.sym), VPOINTER_OTHER);
  _V0b = VEncodePointer(VInternSymbol(452173723, &_VW_V0b.sym), VPOINTER_OTHER);
  _V0kk_D22 = VEncodePointer(VInternSymbol(919253667, &_VW_V0kk_D22.sym), VPOINTER_OTHER);
  _V0variadic_Q = VEncodePointer(VInternSymbol(1481104825, &_VW_V0variadic_Q.sym), VPOINTER_OTHER);
  _V0expr_D76 = VEncodePointer(VInternSymbol(666880124, &_VW_V0expr_D76.sym), VPOINTER_OTHER);
  _V0expr_D77 = VEncodePointer(VInternSymbol(-287251822, &_VW_V0expr_D77.sym), VPOINTER_OTHER);
  _V0expr_D78 = VEncodePointer(VInternSymbol(1660169941, &_VW_V0expr_D78.sym), VPOINTER_OTHER);
  _V0expr_D74 = VEncodePointer(VInternSymbol(1132723928, &_VW_V0expr_D74.sym), VPOINTER_OTHER);
  _V0expr_D71 = VEncodePointer(VInternSymbol(1414926221, &_VW_V0expr_D71.sym), VPOINTER_OTHER);
  _V0expr_D72 = VEncodePointer(VInternSymbol(2103944736, &_VW_V0expr_D72.sym), VPOINTER_OTHER);
  _V0expr_D73 = VEncodePointer(VInternSymbol(-1532934380, &_VW_V0expr_D73.sym), VPOINTER_OTHER);
  _V0input_D69 = VEncodePointer(VInternSymbol(-1224173220, &_VW_V0input_D69.sym), VPOINTER_OTHER);
  _V0kk_D68 = VEncodePointer(VInternSymbol(-818337501, &_VW_V0kk_D68.sym), VPOINTER_OTHER);
  _V0expr_D65 = VEncodePointer(VInternSymbol(1920185625, &_VW_V0expr_D65.sym), VPOINTER_OTHER);
  _V0expr_D66 = VEncodePointer(VInternSymbol(-1242073231, &_VW_V0expr_D66.sym), VPOINTER_OTHER);
  _V0expr_D67 = VEncodePointer(VInternSymbol(17250141, &_VW_V0expr_D67.sym), VPOINTER_OTHER);
  _V0expr_D63 = VEncodePointer(VInternSymbol(211345152, &_VW_V0expr_D63.sym), VPOINTER_OTHER);
  _V0expr_D60 = VEncodePointer(VInternSymbol(-1030397400, &_VW_V0expr_D60.sym), VPOINTER_OTHER);
  _V0expr_D61 = VEncodePointer(VInternSymbol(-362582969, &_VW_V0expr_D61.sym), VPOINTER_OTHER);
  _V0expr_D62 = VEncodePointer(VInternSymbol(-278647127, &_VW_V0expr_D62.sym), VPOINTER_OTHER);
  _V0kk_D57 = VEncodePointer(VInternSymbol(-29894160, &_VW_V0kk_D57.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0case__lambda__error = VEncodePointer(VInternSymbol(-197562183, &_VW_V0case__lambda__error.sym), VPOINTER_OTHER);
  _V0rest = VEncodePointer(VInternSymbol(1577985677, &_VW_V0rest.sym), VPOINTER_OTHER);
  _V10_Dloop_D252 = VEncodePointer(VInternSymbol(-1222267485, &_VW_V10_Dloop_D252.sym), VPOINTER_OTHER);
  _V0error__label = VEncodePointer(VInternSymbol(-1139584833, &_VW_V0error__label.sym), VPOINTER_OTHER);
  _V0cases = VEncodePointer(VInternSymbol(1333321918, &_VW_V0cases.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0expr_D93 = VEncodePointer(VInternSymbol(-1215280483, &_VW_V0expr_D93.sym), VPOINTER_OTHER);
  _V0expr_D88 = VEncodePointer(VInternSymbol(147813739, &_VW_V0expr_D88.sym), VPOINTER_OTHER);
  _V0expr_D89 = VEncodePointer(VInternSymbol(1057569076, &_VW_V0expr_D89.sym), VPOINTER_OTHER);
  _V0expr_D90 = VEncodePointer(VInternSymbol(-94624484, &_VW_V0expr_D90.sym), VPOINTER_OTHER);
  _V0expr_D91 = VEncodePointer(VInternSymbol(-622354989, &_VW_V0expr_D91.sym), VPOINTER_OTHER);
  _V0expr_D92 = VEncodePointer(VInternSymbol(2041379585, &_VW_V0expr_D92.sym), VPOINTER_OTHER);
  _V0expr_D82 = VEncodePointer(VInternSymbol(-2113310566, &_VW_V0expr_D82.sym), VPOINTER_OTHER);
  _V0expr_D83 = VEncodePointer(VInternSymbol(-1768393229, &_VW_V0expr_D83.sym), VPOINTER_OTHER);
  _V0check__args_Q = VEncodePointer(VInternSymbol(-694149244, &_VW_V0check__args_Q.sym), VPOINTER_OTHER);
  _V0expr_D84 = VEncodePointer(VInternSymbol(-1144831374, &_VW_V0expr_D84.sym), VPOINTER_OTHER);
  _V0debug__info = VEncodePointer(VInternSymbol(1970104082, &_VW_V0debug__info.sym), VPOINTER_OTHER);
  _V0expr_D85 = VEncodePointer(VInternSymbol(1837265867, &_VW_V0expr_D85.sym), VPOINTER_OTHER);
  _V0expr_D86 = VEncodePointer(VInternSymbol(28714502, &_VW_V0expr_D86.sym), VPOINTER_OTHER);
  _V0num = VEncodePointer(VInternSymbol(-197035711, &_VW_V0num.sym), VPOINTER_OTHER);
  _V0body = VEncodePointer(VInternSymbol(826092815, &_VW_V0body.sym), VPOINTER_OTHER);
  _V0kk_D79 = VEncodePointer(VInternSymbol(533331302, &_VW_V0kk_D79.sym), VPOINTER_OTHER);
  _V0fun = VEncodePointer(VInternSymbol(338902772, &_VW_V0fun.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0arg = VEncodePointer(VInternSymbol(167277433, &_VW_V0arg.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0kk_D104 = VEncodePointer(VInternSymbol(-910968916, &_VW_V0kk_D104.sym), VPOINTER_OTHER);
  _V0args_D102 = VEncodePointer(VInternSymbol(-741726419, &_VW_V0args_D102.sym), VPOINTER_OTHER);
  _V0expr_D105 = VEncodePointer(VInternSymbol(-449469174, &_VW_V0expr_D105.sym), VPOINTER_OTHER);
  _V10_Dloop_D211 = VEncodePointer(VInternSymbol(-456346009, &_VW_V10_Dloop_D211.sym), VPOINTER_OTHER);
  _V0kk_D103 = VEncodePointer(VInternSymbol(1215108289, &_VW_V0kk_D103.sym), VPOINTER_OTHER);
  _V0expr_D97 = VEncodePointer(VInternSymbol(1118549489, &_VW_V0expr_D97.sym), VPOINTER_OTHER);
  _V0expr_D98 = VEncodePointer(VInternSymbol(-818085077, &_VW_V0expr_D98.sym), VPOINTER_OTHER);
  _V0lang = VEncodePointer(VInternSymbol(1420709583, &_VW_V0lang.sym), VPOINTER_OTHER);
  _V0expr_D99 = VEncodePointer(VInternSymbol(-1262256965, &_VW_V0expr_D99.sym), VPOINTER_OTHER);
  _V0decl = VEncodePointer(VInternSymbol(-1406125107, &_VW_V0decl.sym), VPOINTER_OTHER);
  _V0expr_D100 = VEncodePointer(VInternSymbol(-1832344294, &_VW_V0expr_D100.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0expr_D101 = VEncodePointer(VInternSymbol(-489664993, &_VW_V0expr_D101.sym), VPOINTER_OTHER);
  _V0name = VEncodePointer(VInternSymbol(1249508717, &_VW_V0name.sym), VPOINTER_OTHER);
  _V0kk_D94 = VEncodePointer(VInternSymbol(882222952, &_VW_V0kk_D94.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V0expr_D111 = VEncodePointer(VInternSymbol(-957716762, &_VW_V0expr_D111.sym), VPOINTER_OTHER);
  _V0expr_D112 = VEncodePointer(VInternSymbol(-396738663, &_VW_V0expr_D112.sym), VPOINTER_OTHER);
  _V0f = VEncodePointer(VInternSymbol(-265621939, &_VW_V0f.sym), VPOINTER_OTHER);
  _V0v = VEncodePointer(VInternSymbol(1106345665, &_VW_V0v.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V0expr_D109 = VEncodePointer(VInternSymbol(918856657, &_VW_V0expr_D109.sym), VPOINTER_OTHER);
  _V0d = VEncodePointer(VInternSymbol(-1870850844, &_VW_V0d.sym), VPOINTER_OTHER);
  _V0kk_D106 = VEncodePointer(VInternSymbol(-1400499607, &_VW_V0kk_D106.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0k = VEncodePointer(VInternSymbol(-989127837, &_VW_V0k.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V10_Dloop_D183 = VEncodePointer(VInternSymbol(1730771542, &_VW_V10_Dloop_D183.sym), VPOINTER_OTHER);
  _V0segments = VEncodePointer(VInternSymbol(1197740227, &_VW_V0segments.sym), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VInternSymbol(-1354590835, &_VW_V0declare__foreign.sym), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VInternSymbol(1810290051, &_VW_V0declare.sym), VPOINTER_OTHER);
  _V0case__lambda_P = VEncodePointer(VInternSymbol(-1941514912, &_VW_V0case__lambda_P.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0lambda_P = VEncodePointer(VInternSymbol(1006106366, &_VW_V0lambda_P.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
  _V0line = VEncodePointer(VInternSymbol(-290571189, &_VW_V0line.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D179 = VEncodePointer(VInternSymbol(1364534745, &_VW_V10_Dloop_D179.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0print__main_Q = VEncodePointer(VInternSymbol(-1559754873, &_VW_V0print__main_Q.sym), VPOINTER_OTHER);
  _V0process__atom = VEncodePointer(VInternSymbol(-1231872109, &_VW_V0process__atom.sym), VPOINTER_OTHER);
  _V0process__combination = VEncodePointer(VInternSymbol(-606627142, &_VW_V0process__combination.sym), VPOINTER_OTHER);
  _V0process__application = VEncodePointer(VInternSymbol(-260141423, &_VW_V0process__application.sym), VPOINTER_OTHER);
  _V0process__fun__single = VEncodePointer(VInternSymbol(940536734, &_VW_V0process__fun__single.sym), VPOINTER_OTHER);
  _V0process__fun__case = VEncodePointer(VInternSymbol(-1208787566, &_VW_V0process__fun__case.sym), VPOINTER_OTHER);
  _V0process__function = VEncodePointer(VInternSymbol(1749660542, &_VW_V0process__function.sym), VPOINTER_OTHER);
  _V0process__foreign__function = VEncodePointer(VInternSymbol(1831373180, &_VW_V0process__foreign__function.sym), VPOINTER_OTHER);
  _V0process__declare = VEncodePointer(VInternSymbol(931200207, &_VW_V0process__declare.sym), VPOINTER_OTHER);
  _V0process__toplevel = VEncodePointer(VInternSymbol(-672231096, &_VW_V0process__toplevel.sym), VPOINTER_OTHER);
  _V0glue__bytecode = VEncodePointer(VInternSymbol(-2119038536, &_VW_V0glue__bytecode.sym), VPOINTER_OTHER);
  _V0write__bytecode__line = VEncodePointer(VInternSymbol(747089421, &_VW_V0write__bytecode__line.sym), VPOINTER_OTHER);
  _V0write__bytecode = VEncodePointer(VInternSymbol(1276840091, &_VW_V0write__bytecode.sym), VPOINTER_OTHER);
  _V0toplevels = VEncodePointer(VInternSymbol(-2020900255, &_VW_V0toplevels.sym), VPOINTER_OTHER);
  _V0declares = VEncodePointer(VInternSymbol(647674809, &_VW_V0declares.sym), VPOINTER_OTHER);
  _V0qualified__functions = VEncodePointer(VInternSymbol(-664770072, &_VW_V0qualified__functions.sym), VPOINTER_OTHER);
  _V0functions = VEncodePointer(VInternSymbol(1373742718, &_VW_V0functions.sym), VPOINTER_OTHER);
  _V0intrinsics = VEncodePointer(VInternSymbol(-1100999328, &_VW_V0intrinsics.sym), VPOINTER_OTHER);
  _V0foreign__functions = VEncodePointer(VInternSymbol(-1197292630, &_VW_V0foreign__functions.sym), VPOINTER_OTHER);
  _V0literal__table = VEncodePointer(VInternSymbol(-1316101446, &_VW_V0literal__table.sym), VPOINTER_OTHER);
  _V0static__environments = VEncodePointer(VInternSymbol(-62795272, &_VW_V0static__environments.sym), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VInternSymbol(987641392, &_VW_V0shared_Q.sym), VPOINTER_OTHER);
  _V0debug_Q = VEncodePointer(VInternSymbol(1412315114, &_VW_V0debug_Q.sym), VPOINTER_OTHER);
  _V0to__bytecode = VEncodePointer(VInternSymbol(205421467, &_VW_V0to__bytecode.sym), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VInternSymbol(610863972, &_VW_V0bytecode.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VInternSymbol(471189069, &_VW_V0mangle__library.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VInternSymbol(1112754322, &_VW_V0caadr.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VInternSymbol(-536693803, &_VW_V0mangle__foreign__function.sym), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VInternSymbol(968618603, &_VW_V0get__foreign__encoder.sym), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VInternSymbol(1753899344, &_VW_V0get__foreign__decoder.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0writeln = VEncodePointer(VInternSymbol(-1249249869, &_VW_V0writeln.sym), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VInternSymbol(-298314537, &_VW_V0displayln.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D2544.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2544.rest = VEncodePointer(&_V10_Dpair_D2543, VPOINTER_PAIR);
  _V10_Dpair_D2543.first = VEncodePointer(&_V10_Dpair_D2542, VPOINTER_PAIR);
  _V10_Dpair_D2543.rest = VNULL;
  _V10_Dpair_D2542.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2542.rest = VEncodePointer(&_V10_Dpair_D2541, VPOINTER_PAIR);
  _V10_Dpair_D2541.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2541.rest = VEncodePointer(&_V10_Dpair_D2525, VPOINTER_PAIR);
  _V10_Dpair_D2539.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2539.rest = VEncodePointer(&_V10_Dpair_D2523, VPOINTER_PAIR);
  _V10_Dpair_D2538.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2538.rest = VEncodePointer(&_V10_Dpair_D2537, VPOINTER_PAIR);
  _V10_Dpair_D2537.first = VEncodePointer(&_V10_Dpair_D2536, VPOINTER_PAIR);
  _V10_Dpair_D2537.rest = VNULL;
  _V10_Dpair_D2536.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2536.rest = VEncodePointer(&_V10_Dpair_D2532, VPOINTER_PAIR);
  _V10_Dpair_D2535.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2535.rest = VEncodePointer(&_V10_Dpair_D2533, VPOINTER_PAIR);
  _V10_Dpair_D2534.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2534.rest = VEncodePointer(&_V10_Dpair_D2533, VPOINTER_PAIR);
  _V10_Dpair_D2533.first = VEncodePointer(&_V10_Dpair_D2532, VPOINTER_PAIR);
  _V10_Dpair_D2533.rest = VNULL;
  _V10_Dpair_D2532.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2532.rest = VEncodePointer(&_V10_Dpair_D2531, VPOINTER_PAIR);
  _V10_Dpair_D2531.first = VEncodePointer(&_V10_Dpair_D2529, VPOINTER_PAIR);
  _V10_Dpair_D2531.rest = VEncodePointer(&_V10_Dpair_D2530, VPOINTER_PAIR);
  _V10_Dpair_D2530.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2530.rest = VEncodePointer(&_V10_Dpair_D2526, VPOINTER_PAIR);
  _V10_Dpair_D2529.first = _V0expr_D21;
  _V10_Dpair_D2529.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2528.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2528.rest = VEncodePointer(&_V10_Dpair_D2527, VPOINTER_PAIR);
  _V10_Dpair_D2527.first = VEncodePointer(&_V10_Dpair_D2526, VPOINTER_PAIR);
  _V10_Dpair_D2527.rest = VNULL;
  _V10_Dpair_D2526.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2526.rest = VEncodePointer(&_V10_Dpair_D2525, VPOINTER_PAIR);
  _V10_Dpair_D2525.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2525.rest = VEncodePointer(&_V10_Dpair_D2522, VPOINTER_PAIR);
  _V10_Dpair_D2524.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2524.rest = VEncodePointer(&_V10_Dpair_D2523, VPOINTER_PAIR);
  _V10_Dpair_D2523.first = VEncodePointer(&_V10_Dpair_D2522, VPOINTER_PAIR);
  _V10_Dpair_D2523.rest = VNULL;
  _V10_Dpair_D2522.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2522.rest = VEncodePointer(&_V10_Dpair_D2505, VPOINTER_PAIR);
  _V10_Dpair_D2521.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2521.rest = VEncodePointer(&_V10_Dpair_D2520, VPOINTER_PAIR);
  _V10_Dpair_D2520.first = VEncodePointer(&_V10_Dpair_D2519, VPOINTER_PAIR);
  _V10_Dpair_D2520.rest = VNULL;
  _V10_Dpair_D2519.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2519.rest = VEncodePointer(&_V10_Dpair_D2515, VPOINTER_PAIR);
  _V10_Dpair_D2518.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2518.rest = VEncodePointer(&_V10_Dpair_D2516, VPOINTER_PAIR);
  _V10_Dpair_D2517.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2517.rest = VEncodePointer(&_V10_Dpair_D2516, VPOINTER_PAIR);
  _V10_Dpair_D2516.first = VEncodePointer(&_V10_Dpair_D2515, VPOINTER_PAIR);
  _V10_Dpair_D2516.rest = VNULL;
  _V10_Dpair_D2515.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2515.rest = VEncodePointer(&_V10_Dpair_D2514, VPOINTER_PAIR);
  _V10_Dpair_D2514.first = VEncodePointer(&_V10_Dpair_D2512, VPOINTER_PAIR);
  _V10_Dpair_D2514.rest = VEncodePointer(&_V10_Dpair_D2513, VPOINTER_PAIR);
  _V10_Dpair_D2513.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2513.rest = VEncodePointer(&_V10_Dpair_D2509, VPOINTER_PAIR);
  _V10_Dpair_D2512.first = _V0expr_D19;
  _V10_Dpair_D2512.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2511.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2511.rest = VEncodePointer(&_V10_Dpair_D2510, VPOINTER_PAIR);
  _V10_Dpair_D2510.first = VEncodePointer(&_V10_Dpair_D2509, VPOINTER_PAIR);
  _V10_Dpair_D2510.rest = VNULL;
  _V10_Dpair_D2509.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2509.rest = VEncodePointer(&_V10_Dpair_D2508, VPOINTER_PAIR);
  _V10_Dpair_D2508.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2508.rest = VEncodePointer(&_V10_Dpair_D2505, VPOINTER_PAIR);
  _V10_Dpair_D2507.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2507.rest = VEncodePointer(&_V10_Dpair_D2506, VPOINTER_PAIR);
  _V10_Dpair_D2506.first = VEncodePointer(&_V10_Dpair_D2505, VPOINTER_PAIR);
  _V10_Dpair_D2506.rest = VNULL;
  _V10_Dpair_D2505.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2505.rest = VEncodePointer(&_V10_Dpair_D2488, VPOINTER_PAIR);
  _V10_Dpair_D2504.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2504.rest = VEncodePointer(&_V10_Dpair_D2503, VPOINTER_PAIR);
  _V10_Dpair_D2503.first = VEncodePointer(&_V10_Dpair_D2502, VPOINTER_PAIR);
  _V10_Dpair_D2503.rest = VNULL;
  _V10_Dpair_D2502.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2502.rest = VEncodePointer(&_V10_Dpair_D2498, VPOINTER_PAIR);
  _V10_Dpair_D2501.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2501.rest = VEncodePointer(&_V10_Dpair_D2499, VPOINTER_PAIR);
  _V10_Dpair_D2500.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2500.rest = VEncodePointer(&_V10_Dpair_D2499, VPOINTER_PAIR);
  _V10_Dpair_D2499.first = VEncodePointer(&_V10_Dpair_D2498, VPOINTER_PAIR);
  _V10_Dpair_D2499.rest = VNULL;
  _V10_Dpair_D2498.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2498.rest = VEncodePointer(&_V10_Dpair_D2497, VPOINTER_PAIR);
  _V10_Dpair_D2497.first = VEncodePointer(&_V10_Dpair_D2495, VPOINTER_PAIR);
  _V10_Dpair_D2497.rest = VEncodePointer(&_V10_Dpair_D2496, VPOINTER_PAIR);
  _V10_Dpair_D2496.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2496.rest = VEncodePointer(&_V10_Dpair_D2492, VPOINTER_PAIR);
  _V10_Dpair_D2495.first = _V0expr_D17;
  _V10_Dpair_D2495.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2494.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2494.rest = VEncodePointer(&_V10_Dpair_D2493, VPOINTER_PAIR);
  _V10_Dpair_D2493.first = VEncodePointer(&_V10_Dpair_D2492, VPOINTER_PAIR);
  _V10_Dpair_D2493.rest = VNULL;
  _V10_Dpair_D2492.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2492.rest = VEncodePointer(&_V10_Dpair_D2491, VPOINTER_PAIR);
  _V10_Dpair_D2491.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2491.rest = VEncodePointer(&_V10_Dpair_D2488, VPOINTER_PAIR);
  _V10_Dpair_D2490.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2490.rest = VEncodePointer(&_V10_Dpair_D2489, VPOINTER_PAIR);
  _V10_Dpair_D2489.first = VEncodePointer(&_V10_Dpair_D2488, VPOINTER_PAIR);
  _V10_Dpair_D2489.rest = VNULL;
  _V10_Dpair_D2488.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2488.rest = VEncodePointer(&_V10_Dpair_D2474, VPOINTER_PAIR);
  _V10_Dpair_D2487.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2487.rest = VEncodePointer(&_V10_Dpair_D2485, VPOINTER_PAIR);
  _V10_Dpair_D2486.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2486.rest = VEncodePointer(&_V10_Dpair_D2485, VPOINTER_PAIR);
  _V10_Dpair_D2485.first = VEncodePointer(&_V10_Dpair_D2484, VPOINTER_PAIR);
  _V10_Dpair_D2485.rest = VNULL;
  _V10_Dpair_D2484.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2484.rest = VEncodePointer(&_V10_Dpair_D2483, VPOINTER_PAIR);
  _V10_Dpair_D2483.first = VEncodePointer(&_V10_Dpair_D2481, VPOINTER_PAIR);
  _V10_Dpair_D2483.rest = VEncodePointer(&_V10_Dpair_D2482, VPOINTER_PAIR);
  _V10_Dpair_D2482.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2482.rest = VEncodePointer(&_V10_Dpair_D2478, VPOINTER_PAIR);
  _V10_Dpair_D2481.first = _V0expr_D15;
  _V10_Dpair_D2481.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2480.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2480.rest = VEncodePointer(&_V10_Dpair_D2479, VPOINTER_PAIR);
  _V10_Dpair_D2479.first = VEncodePointer(&_V10_Dpair_D2478, VPOINTER_PAIR);
  _V10_Dpair_D2479.rest = VNULL;
  _V10_Dpair_D2478.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2478.rest = VEncodePointer(&_V10_Dpair_D2477, VPOINTER_PAIR);
  _V10_Dpair_D2477.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2477.rest = VEncodePointer(&_V10_Dpair_D2474, VPOINTER_PAIR);
  _V10_Dpair_D2476.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2476.rest = VEncodePointer(&_V10_Dpair_D2475, VPOINTER_PAIR);
  _V10_Dpair_D2475.first = VEncodePointer(&_V10_Dpair_D2474, VPOINTER_PAIR);
  _V10_Dpair_D2475.rest = VNULL;
  _V10_Dpair_D2474.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2474.rest = VEncodePointer(&_V10_Dpair_D2454, VPOINTER_PAIR);
  _V10_Dpair_D2473.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2473.rest = VEncodePointer(&_V10_Dpair_D2471, VPOINTER_PAIR);
  _V10_Dpair_D2472.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2472.rest = VEncodePointer(&_V10_Dpair_D2471, VPOINTER_PAIR);
  _V10_Dpair_D2471.first = VEncodePointer(&_V10_Dpair_D2470, VPOINTER_PAIR);
  _V10_Dpair_D2471.rest = VNULL;
  _V10_Dpair_D2470.first = VEncodePointer(&_V10_Dpair_D2260, VPOINTER_PAIR);
  _V10_Dpair_D2470.rest = VEncodePointer(&_V10_Dpair_D2469, VPOINTER_PAIR);
  _V10_Dpair_D2469.first = VEncodePointer(&_V10_Dpair_D2462, VPOINTER_PAIR);
  _V10_Dpair_D2469.rest = VEncodePointer(&_V10_Dpair_D2468, VPOINTER_PAIR);
  _V10_Dpair_D2468.first = VEncodePointer(&_V10_Dpair_D2464, VPOINTER_PAIR);
  _V10_Dpair_D2468.rest = VEncodePointer(&_V10_Dpair_D2467, VPOINTER_PAIR);
  _V10_Dpair_D2467.first = VEncodePointer(&_V10_Dpair_D2465, VPOINTER_PAIR);
  _V10_Dpair_D2467.rest = VEncodePointer(&_V10_Dpair_D2466, VPOINTER_PAIR);
  _V10_Dpair_D2466.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2466.rest = VEncodePointer(&_V10_Dpair_D2458, VPOINTER_PAIR);
  _V10_Dpair_D2465.first = _V0expr_D11;
  _V10_Dpair_D2465.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2464.first = _V0name;
  _V10_Dpair_D2464.rest = VEncodePointer(&_V10_Dpair_D2463, VPOINTER_PAIR);
  _V10_Dpair_D2463.first = _V0expr_D12;
  _V10_Dpair_D2463.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2462.first = _V0up;
  _V10_Dpair_D2462.rest = VEncodePointer(&_V10_Dpair_D2461, VPOINTER_PAIR);
  _V10_Dpair_D2461.first = _V0expr_D13;
  _V10_Dpair_D2461.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2460.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2460.rest = VEncodePointer(&_V10_Dpair_D2459, VPOINTER_PAIR);
  _V10_Dpair_D2459.first = VEncodePointer(&_V10_Dpair_D2458, VPOINTER_PAIR);
  _V10_Dpair_D2459.rest = VNULL;
  _V10_Dpair_D2458.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2458.rest = VEncodePointer(&_V10_Dpair_D2457, VPOINTER_PAIR);
  _V10_Dpair_D2457.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2457.rest = VEncodePointer(&_V10_Dpair_D2454, VPOINTER_PAIR);
  _V10_Dpair_D2456.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2456.rest = VEncodePointer(&_V10_Dpair_D2455, VPOINTER_PAIR);
  _V10_Dpair_D2455.first = VEncodePointer(&_V10_Dpair_D2454, VPOINTER_PAIR);
  _V10_Dpair_D2455.rest = VNULL;
  _V10_Dpair_D2454.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2454.rest = VEncodePointer(&_V10_Dpair_D2430, VPOINTER_PAIR);
  _V10_Dpair_D2453.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2453.rest = VEncodePointer(&_V10_Dpair_D2452, VPOINTER_PAIR);
  _V10_Dpair_D2452.first = VEncodePointer(&_V10_Dpair_D2451, VPOINTER_PAIR);
  _V10_Dpair_D2452.rest = VNULL;
  _V10_Dpair_D2451.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2451.rest = VEncodePointer(&_V10_Dpair_D2448, VPOINTER_PAIR);
  _V10_Dpair_D2450.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2450.rest = VEncodePointer(&_V10_Dpair_D2449, VPOINTER_PAIR);
  _V10_Dpair_D2449.first = VEncodePointer(&_V10_Dpair_D2448, VPOINTER_PAIR);
  _V10_Dpair_D2449.rest = VNULL;
  _V10_Dpair_D2448.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2448.rest = VEncodePointer(&_V10_Dpair_D2444, VPOINTER_PAIR);
  _V10_Dpair_D2447.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2447.rest = VEncodePointer(&_V10_Dpair_D2445, VPOINTER_PAIR);
  _V10_Dpair_D2446.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2446.rest = VEncodePointer(&_V10_Dpair_D2445, VPOINTER_PAIR);
  _V10_Dpair_D2445.first = VEncodePointer(&_V10_Dpair_D2444, VPOINTER_PAIR);
  _V10_Dpair_D2445.rest = VNULL;
  _V10_Dpair_D2444.first = VEncodePointer(&_V10_Dpair_D2437, VPOINTER_PAIR);
  _V10_Dpair_D2444.rest = VEncodePointer(&_V10_Dpair_D2443, VPOINTER_PAIR);
  _V10_Dpair_D2443.first = VEncodePointer(&_V10_Dpair_D2439, VPOINTER_PAIR);
  _V10_Dpair_D2443.rest = VEncodePointer(&_V10_Dpair_D2442, VPOINTER_PAIR);
  _V10_Dpair_D2442.first = VEncodePointer(&_V10_Dpair_D2440, VPOINTER_PAIR);
  _V10_Dpair_D2442.rest = VEncodePointer(&_V10_Dpair_D2441, VPOINTER_PAIR);
  _V10_Dpair_D2441.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2441.rest = VEncodePointer(&_V10_Dpair_D2434, VPOINTER_PAIR);
  _V10_Dpair_D2440.first = _V0expr_D8;
  _V10_Dpair_D2440.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2439.first = _V0fun;
  _V10_Dpair_D2439.rest = VEncodePointer(&_V10_Dpair_D2438, VPOINTER_PAIR);
  _V10_Dpair_D2438.first = _V0expr_D9;
  _V10_Dpair_D2438.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2437.first = _V0name;
  _V10_Dpair_D2437.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2436.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2436.rest = VEncodePointer(&_V10_Dpair_D2435, VPOINTER_PAIR);
  _V10_Dpair_D2435.first = VEncodePointer(&_V10_Dpair_D2434, VPOINTER_PAIR);
  _V10_Dpair_D2435.rest = VNULL;
  _V10_Dpair_D2434.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2434.rest = VEncodePointer(&_V10_Dpair_D2433, VPOINTER_PAIR);
  _V10_Dpair_D2433.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2433.rest = VEncodePointer(&_V10_Dpair_D2430, VPOINTER_PAIR);
  _V10_Dpair_D2432.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2432.rest = VEncodePointer(&_V10_Dpair_D2431, VPOINTER_PAIR);
  _V10_Dpair_D2431.first = VEncodePointer(&_V10_Dpair_D2430, VPOINTER_PAIR);
  _V10_Dpair_D2431.rest = VNULL;
  _V10_Dpair_D2430.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2430.rest = VEncodePointer(&_V10_Dpair_D2415, VPOINTER_PAIR);
  _V10_Dpair_D2429.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2429.rest = VEncodePointer(&_V10_Dpair_D2427, VPOINTER_PAIR);
  _V10_Dpair_D2428.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2428.rest = VEncodePointer(&_V10_Dpair_D2427, VPOINTER_PAIR);
  _V10_Dpair_D2427.first = VEncodePointer(&_V10_Dpair_D2426, VPOINTER_PAIR);
  _V10_Dpair_D2427.rest = VNULL;
  _V10_Dpair_D2426.first = VEncodePointer(&_V10_Dpair_D2422, VPOINTER_PAIR);
  _V10_Dpair_D2426.rest = VEncodePointer(&_V10_Dpair_D2425, VPOINTER_PAIR);
  _V10_Dpair_D2425.first = VEncodePointer(&_V10_Dpair_D2423, VPOINTER_PAIR);
  _V10_Dpair_D2425.rest = VEncodePointer(&_V10_Dpair_D2424, VPOINTER_PAIR);
  _V10_Dpair_D2424.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2424.rest = VEncodePointer(&_V10_Dpair_D2419, VPOINTER_PAIR);
  _V10_Dpair_D2423.first = _V0expr_D6;
  _V10_Dpair_D2423.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2422.first = _V0fun;
  _V10_Dpair_D2422.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2421.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2421.rest = VEncodePointer(&_V10_Dpair_D2420, VPOINTER_PAIR);
  _V10_Dpair_D2420.first = VEncodePointer(&_V10_Dpair_D2419, VPOINTER_PAIR);
  _V10_Dpair_D2420.rest = VNULL;
  _V10_Dpair_D2419.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2419.rest = VEncodePointer(&_V10_Dpair_D2418, VPOINTER_PAIR);
  _V10_Dpair_D2418.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2418.rest = VEncodePointer(&_V10_Dpair_D2415, VPOINTER_PAIR);
  _V10_Dpair_D2417.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2417.rest = VEncodePointer(&_V10_Dpair_D2416, VPOINTER_PAIR);
  _V10_Dpair_D2416.first = VEncodePointer(&_V10_Dpair_D2415, VPOINTER_PAIR);
  _V10_Dpair_D2416.rest = VNULL;
  _V10_Dpair_D2415.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2415.rest = VEncodePointer(&_V10_Dpair_D2401, VPOINTER_PAIR);
  _V10_Dpair_D2414.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2414.rest = VEncodePointer(&_V10_Dpair_D2412, VPOINTER_PAIR);
  _V10_Dpair_D2413.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2413.rest = VEncodePointer(&_V10_Dpair_D2412, VPOINTER_PAIR);
  _V10_Dpair_D2412.first = VEncodePointer(&_V10_Dpair_D2411, VPOINTER_PAIR);
  _V10_Dpair_D2412.rest = VNULL;
  _V10_Dpair_D2411.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2411.rest = VEncodePointer(&_V10_Dpair_D2410, VPOINTER_PAIR);
  _V10_Dpair_D2410.first = VEncodePointer(&_V10_Dpair_D2408, VPOINTER_PAIR);
  _V10_Dpair_D2410.rest = VEncodePointer(&_V10_Dpair_D2409, VPOINTER_PAIR);
  _V10_Dpair_D2409.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2409.rest = VEncodePointer(&_V10_Dpair_D2405, VPOINTER_PAIR);
  _V10_Dpair_D2408.first = _V0expr_D4;
  _V10_Dpair_D2408.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2407.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2407.rest = VEncodePointer(&_V10_Dpair_D2406, VPOINTER_PAIR);
  _V10_Dpair_D2406.first = VEncodePointer(&_V10_Dpair_D2405, VPOINTER_PAIR);
  _V10_Dpair_D2406.rest = VNULL;
  _V10_Dpair_D2405.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2405.rest = VEncodePointer(&_V10_Dpair_D2404, VPOINTER_PAIR);
  _V10_Dpair_D2404.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2404.rest = VEncodePointer(&_V10_Dpair_D2401, VPOINTER_PAIR);
  _V10_Dpair_D2403.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2403.rest = VEncodePointer(&_V10_Dpair_D2402, VPOINTER_PAIR);
  _V10_Dpair_D2402.first = VEncodePointer(&_V10_Dpair_D2401, VPOINTER_PAIR);
  _V10_Dpair_D2402.rest = VNULL;
  _V10_Dpair_D2401.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2401.rest = VEncodePointer(&_V10_Dpair_D2400, VPOINTER_PAIR);
  _V10_Dpair_D2400.first = VEncodePointer(&_V10_Dpair_D2396, VPOINTER_PAIR);
  _V10_Dpair_D2400.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D2399.first = VEncodePointer(&_V10_Dpair_D2398, VPOINTER_PAIR);
  _V10_Dpair_D2399.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D2398.first = VEncodeBool(false);
  _V10_Dpair_D2398.rest = VEncodePointer(&_V10_Dpair_D2397, VPOINTER_PAIR);
  _V10_Dpair_D2397.first = VEncodePointer(&_V10_Dpair_D2396, VPOINTER_PAIR);
  _V10_Dpair_D2397.rest = VNULL;
  _V10_Dpair_D2396.first = _V0_Mk;
  _V10_Dpair_D2396.rest = VEncodePointer(&_V10_Dpair_D2395, VPOINTER_PAIR);
  _V10_Dpair_D2395.first = _V0kk_D1;
  _V10_Dpair_D2395.rest = VNULL;
  _V10_Dpair_D2394.first = VEncodePointer(&_V10_Dpair_D2393, VPOINTER_PAIR);
  _V10_Dpair_D2394.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D2393.first = VEncodePointer(&_V10_Dpair_D2392, VPOINTER_PAIR);
  _V10_Dpair_D2393.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D2392.first = _V0vanity;
  _V10_Dpair_D2392.rest = VEncodePointer(&_V10_Dpair_D2391, VPOINTER_PAIR);
  _V10_Dpair_D2391.first = _V0compiler;
  _V10_Dpair_D2391.rest = VEncodePointer(&_V10_Dpair_D2390, VPOINTER_PAIR);
  _V10_Dpair_D2390.first = _V0bytecode;
  _V10_Dpair_D2390.rest = VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR);
  _V10_Dpair_D2389.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2389.rest = VEncodePointer(&_V10_Dpair_D2388, VPOINTER_PAIR);
  _V10_Dpair_D2388.first = VEncodePointer(&_V10_Dpair_D2387, VPOINTER_PAIR);
  _V10_Dpair_D2388.rest = VNULL;
  _V10_Dpair_D2387.first = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D2387.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D2386.first = VEncodePointer(&_V10_Dpair_D2385, VPOINTER_PAIR);
  _V10_Dpair_D2386.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D2385.first = VEncodeBool(false);
  _V10_Dpair_D2385.rest = VEncodePointer(&_V10_Dpair_D2384, VPOINTER_PAIR);
  _V10_Dpair_D2384.first = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D2384.rest = VNULL;
  _V10_Dpair_D2383.first = VEncodePointer(&_V10_Dpair_D2382, VPOINTER_PAIR);
  _V10_Dpair_D2383.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D2382.first = VEncodePointer(&_V10_Dpair_D2381, VPOINTER_PAIR);
  _V10_Dpair_D2382.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D2381.first = _V0vanity;
  _V10_Dpair_D2381.rest = VEncodePointer(&_V10_Dpair_D2380, VPOINTER_PAIR);
  _V10_Dpair_D2380.first = _V0compiler;
  _V10_Dpair_D2380.rest = VEncodePointer(&_V10_Dpair_D2379, VPOINTER_PAIR);
  _V10_Dpair_D2379.first = _V0bytecode;
  _V10_Dpair_D2379.rest = VEncodePointer(&_V10_Dpair_D2378, VPOINTER_PAIR);
  _V10_Dpair_D2378.first = _V0process__combination;
  _V10_Dpair_D2378.rest = VNULL;
  _V10_Dpair_D2377.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2377.rest = VEncodePointer(&_V10_Dpair_D2375, VPOINTER_PAIR);
  _V10_Dpair_D2376.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2376.rest = VEncodePointer(&_V10_Dpair_D2375, VPOINTER_PAIR);
  _V10_Dpair_D2375.first = VEncodePointer(&_V10_Dpair_D2374, VPOINTER_PAIR);
  _V10_Dpair_D2375.rest = VNULL;
  _V10_Dpair_D2374.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2374.rest = VEncodePointer(&_V10_Dpair_D2373, VPOINTER_PAIR);
  _V10_Dpair_D2373.first = VEncodePointer(&_V10_Dpair_D2369, VPOINTER_PAIR);
  _V10_Dpair_D2373.rest = VEncodePointer(&_V10_Dpair_D2326, VPOINTER_PAIR);
  _V10_Dpair_D2372.first = VEncodePointer(&_V10_Dpair_D2371, VPOINTER_PAIR);
  _V10_Dpair_D2372.rest = VEncodePointer(&_V10_Dpair_D2327, VPOINTER_PAIR);
  _V10_Dpair_D2371.first = VEncodeBool(false);
  _V10_Dpair_D2371.rest = VEncodePointer(&_V10_Dpair_D2370, VPOINTER_PAIR);
  _V10_Dpair_D2370.first = VEncodePointer(&_V10_Dpair_D2369, VPOINTER_PAIR);
  _V10_Dpair_D2370.rest = VNULL;
  _V10_Dpair_D2369.first = _V0_Mk;
  _V10_Dpair_D2369.rest = VEncodePointer(&_V10_Dpair_D2368, VPOINTER_PAIR);
  _V10_Dpair_D2368.first = _V0tail__expr;
  _V10_Dpair_D2368.rest = VEncodePointer(&_V10_Dpair_D2367, VPOINTER_PAIR);
  _V10_Dpair_D2367.first = _V0xs;
  _V10_Dpair_D2367.rest = VNULL;
  _V10_Dpair_D2366.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2366.rest = VEncodePointer(&_V10_Dpair_D2365, VPOINTER_PAIR);
  _V10_Dpair_D2365.first = VEncodePointer(&_V10_Dpair_D2364, VPOINTER_PAIR);
  _V10_Dpair_D2365.rest = VNULL;
  _V10_Dpair_D2364.first = VEncodePointer(&_V10_Dpair_D2362, VPOINTER_PAIR);
  _V10_Dpair_D2364.rest = VEncodePointer(&_V10_Dpair_D2363, VPOINTER_PAIR);
  _V10_Dpair_D2363.first = VEncodePointer(&_V10_Dpair_D2358, VPOINTER_PAIR);
  _V10_Dpair_D2363.rest = VEncodePointer(&_V10_Dpair_D2354, VPOINTER_PAIR);
  _V10_Dpair_D2362.first = _V0xs;
  _V10_Dpair_D2362.rest = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2361.first = VEncodePointer(&_V10_Dpair_D2360, VPOINTER_PAIR);
  _V10_Dpair_D2361.rest = VEncodePointer(&_V10_Dpair_D2355, VPOINTER_PAIR);
  _V10_Dpair_D2360.first = VEncodeBool(false);
  _V10_Dpair_D2360.rest = VEncodePointer(&_V10_Dpair_D2359, VPOINTER_PAIR);
  _V10_Dpair_D2359.first = VEncodePointer(&_V10_Dpair_D2358, VPOINTER_PAIR);
  _V10_Dpair_D2359.rest = VNULL;
  _V10_Dpair_D2358.first = _V0_Mk;
  _V10_Dpair_D2358.rest = VEncodePointer(&_V10_Dpair_D2357, VPOINTER_PAIR);
  _V10_Dpair_D2357.first = _V0kk_D49;
  _V10_Dpair_D2357.rest = VNULL;
  _V10_Dpair_D2356.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2356.rest = VEncodePointer(&_V10_Dpair_D2355, VPOINTER_PAIR);
  _V10_Dpair_D2355.first = VEncodePointer(&_V10_Dpair_D2354, VPOINTER_PAIR);
  _V10_Dpair_D2355.rest = VNULL;
  _V10_Dpair_D2354.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2354.rest = VEncodePointer(&_V10_Dpair_D2351, VPOINTER_PAIR);
  _V10_Dpair_D2353.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2353.rest = VEncodePointer(&_V10_Dpair_D2352, VPOINTER_PAIR);
  _V10_Dpair_D2352.first = VEncodePointer(&_V10_Dpair_D2351, VPOINTER_PAIR);
  _V10_Dpair_D2352.rest = VNULL;
  _V10_Dpair_D2351.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2351.rest = VEncodePointer(&_V10_Dpair_D2350, VPOINTER_PAIR);
  _V10_Dpair_D2350.first = VEncodePointer(&_V10_Dpair_D2343, VPOINTER_PAIR);
  _V10_Dpair_D2350.rest = VEncodePointer(&_V10_Dpair_D2347, VPOINTER_PAIR);
  _V10_Dpair_D2349.first = VEncodePointer(&_V10_Dpair_D2345, VPOINTER_PAIR);
  _V10_Dpair_D2349.rest = VEncodePointer(&_V10_Dpair_D2348, VPOINTER_PAIR);
  _V10_Dpair_D2348.first = VEncodePointer(&_V10_Dpair_D2347, VPOINTER_PAIR);
  _V10_Dpair_D2348.rest = VNULL;
  _V10_Dpair_D2347.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D2347.rest = VEncodePointer(&_V10_Dpair_D2346, VPOINTER_PAIR);
  _V10_Dpair_D2346.first = VEncodePointer(&_V10_Dpair_D2330, VPOINTER_PAIR);
  _V10_Dpair_D2346.rest = VEncodePointer(&_V10_Dpair_D2333, VPOINTER_PAIR);
  _V10_Dpair_D2345.first = VEncodePointer(&_V10_Dpair_D2340, VPOINTER_PAIR);
  _V10_Dpair_D2345.rest = VEncodePointer(&_V10_Dpair_D2344, VPOINTER_PAIR);
  _V10_Dpair_D2344.first = VEncodePointer(&_V10_Dpair_D2343, VPOINTER_PAIR);
  _V10_Dpair_D2344.rest = VNULL;
  _V10_Dpair_D2343.first = _V0_Mk;
  _V10_Dpair_D2343.rest = VEncodePointer(&_V10_Dpair_D2342, VPOINTER_PAIR);
  _V10_Dpair_D2342.first = _V0expr_D50;
  _V10_Dpair_D2342.rest = VEncodePointer(&_V10_Dpair_D2341, VPOINTER_PAIR);
  _V10_Dpair_D2341.first = _V0xs_D47;
  _V10_Dpair_D2341.rest = VNULL;
  _V10_Dpair_D2340.first = _V0vanity;
  _V10_Dpair_D2340.rest = VEncodePointer(&_V10_Dpair_D2339, VPOINTER_PAIR);
  _V10_Dpair_D2339.first = _V0compiler;
  _V10_Dpair_D2339.rest = VEncodePointer(&_V10_Dpair_D2338, VPOINTER_PAIR);
  _V10_Dpair_D2338.first = _V0bytecode;
  _V10_Dpair_D2338.rest = VEncodePointer(&_V10_Dpair_D2337, VPOINTER_PAIR);
  _V10_Dpair_D2337.first = _V0process__application;
  _V10_Dpair_D2337.rest = VEncodePointer(&_V10_Dpair_D2336, VPOINTER_PAIR);
  _V10_Dpair_D2336.first = _V10_Dloop_D352;
  _V10_Dpair_D2336.rest = VNULL;
  _V10_Dpair_D2335.first = VEncodePointer(&_V10_Dpair_D2332, VPOINTER_PAIR);
  _V10_Dpair_D2335.rest = VEncodePointer(&_V10_Dpair_D2334, VPOINTER_PAIR);
  _V10_Dpair_D2334.first = VEncodePointer(&_V10_Dpair_D2333, VPOINTER_PAIR);
  _V10_Dpair_D2334.rest = VNULL;
  _V10_Dpair_D2333.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2333.rest = VEncodePointer(&_V10_Dpair_D2326, VPOINTER_PAIR);
  _V10_Dpair_D2332.first = VEncodeBool(false);
  _V10_Dpair_D2332.rest = VEncodePointer(&_V10_Dpair_D2331, VPOINTER_PAIR);
  _V10_Dpair_D2331.first = VEncodePointer(&_V10_Dpair_D2330, VPOINTER_PAIR);
  _V10_Dpair_D2331.rest = VNULL;
  _V10_Dpair_D2330.first = _V0_Mk;
  _V10_Dpair_D2330.rest = VEncodePointer(&_V10_Dpair_D2329, VPOINTER_PAIR);
  _V10_Dpair_D2329.first = _V0kk_D48;
  _V10_Dpair_D2329.rest = VNULL;
  _V10_Dpair_D2328.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2328.rest = VEncodePointer(&_V10_Dpair_D2327, VPOINTER_PAIR);
  _V10_Dpair_D2327.first = VEncodePointer(&_V10_Dpair_D2326, VPOINTER_PAIR);
  _V10_Dpair_D2327.rest = VNULL;
  _V10_Dpair_D2326.first = VEncodePointer(&_V10_Dpair_D2324, VPOINTER_PAIR);
  _V10_Dpair_D2326.rest = VEncodePointer(&_V10_Dpair_D2325, VPOINTER_PAIR);
  _V10_Dpair_D2325.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2325.rest = VEncodePointer(&_V10_Dpair_D2320, VPOINTER_PAIR);
  _V10_Dpair_D2324.first = _V0f;
  _V10_Dpair_D2324.rest = VEncodePointer(&_V10_Dpair_D2323, VPOINTER_PAIR);
  _V10_Dpair_D2323.first = _V0expr_D46;
  _V10_Dpair_D2323.rest = VNULL;
  _V10_Dpair_D2322.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2322.rest = VEncodePointer(&_V10_Dpair_D2321, VPOINTER_PAIR);
  _V10_Dpair_D2321.first = VEncodePointer(&_V10_Dpair_D2320, VPOINTER_PAIR);
  _V10_Dpair_D2321.rest = VNULL;
  _V10_Dpair_D2320.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2320.rest = VEncodePointer(&_V10_Dpair_D2292, VPOINTER_PAIR);
  _V10_Dpair_D2319.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2319.rest = VEncodePointer(&_V10_Dpair_D2318, VPOINTER_PAIR);
  _V10_Dpair_D2318.first = VEncodePointer(&_V10_Dpair_D2317, VPOINTER_PAIR);
  _V10_Dpair_D2318.rest = VNULL;
  _V10_Dpair_D2317.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2317.rest = VEncodePointer(&_V10_Dpair_D2316, VPOINTER_PAIR);
  _V10_Dpair_D2316.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2316.rest = VEncodePointer(&_V10_Dpair_D2313, VPOINTER_PAIR);
  _V10_Dpair_D2315.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2315.rest = VEncodePointer(&_V10_Dpair_D2314, VPOINTER_PAIR);
  _V10_Dpair_D2314.first = VEncodePointer(&_V10_Dpair_D2313, VPOINTER_PAIR);
  _V10_Dpair_D2314.rest = VNULL;
  _V10_Dpair_D2313.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2313.rest = VEncodePointer(&_V10_Dpair_D2312, VPOINTER_PAIR);
  _V10_Dpair_D2312.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2312.rest = VEncodePointer(&_V10_Dpair_D2308, VPOINTER_PAIR);
  _V10_Dpair_D2311.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2311.rest = VEncodePointer(&_V10_Dpair_D2309, VPOINTER_PAIR);
  _V10_Dpair_D2310.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2310.rest = VEncodePointer(&_V10_Dpair_D2309, VPOINTER_PAIR);
  _V10_Dpair_D2309.first = VEncodePointer(&_V10_Dpair_D2308, VPOINTER_PAIR);
  _V10_Dpair_D2309.rest = VNULL;
  _V10_Dpair_D2308.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2308.rest = VEncodePointer(&_V10_Dpair_D2307, VPOINTER_PAIR);
  _V10_Dpair_D2307.first = VEncodePointer(&_V10_Dpair_D2300, VPOINTER_PAIR);
  _V10_Dpair_D2307.rest = VEncodePointer(&_V10_Dpair_D2306, VPOINTER_PAIR);
  _V10_Dpair_D2306.first = VEncodePointer(&_V10_Dpair_D2302, VPOINTER_PAIR);
  _V10_Dpair_D2306.rest = VEncodePointer(&_V10_Dpair_D2305, VPOINTER_PAIR);
  _V10_Dpair_D2305.first = VEncodePointer(&_V10_Dpair_D2303, VPOINTER_PAIR);
  _V10_Dpair_D2305.rest = VEncodePointer(&_V10_Dpair_D2304, VPOINTER_PAIR);
  _V10_Dpair_D2304.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2304.rest = VEncodePointer(&_V10_Dpair_D2296, VPOINTER_PAIR);
  _V10_Dpair_D2303.first = _V0expr_D42;
  _V10_Dpair_D2303.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2302.first = _V0k;
  _V10_Dpair_D2302.rest = VEncodePointer(&_V10_Dpair_D2301, VPOINTER_PAIR);
  _V10_Dpair_D2301.first = _V0expr_D43;
  _V10_Dpair_D2301.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2300.first = _V0y;
  _V10_Dpair_D2300.rest = VEncodePointer(&_V10_Dpair_D2299, VPOINTER_PAIR);
  _V10_Dpair_D2299.first = _V0expr_D44;
  _V10_Dpair_D2299.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2298.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2298.rest = VEncodePointer(&_V10_Dpair_D2297, VPOINTER_PAIR);
  _V10_Dpair_D2297.first = VEncodePointer(&_V10_Dpair_D2296, VPOINTER_PAIR);
  _V10_Dpair_D2297.rest = VNULL;
  _V10_Dpair_D2296.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2296.rest = VEncodePointer(&_V10_Dpair_D2295, VPOINTER_PAIR);
  _V10_Dpair_D2295.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2295.rest = VEncodePointer(&_V10_Dpair_D2292, VPOINTER_PAIR);
  _V10_Dpair_D2294.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2294.rest = VEncodePointer(&_V10_Dpair_D2293, VPOINTER_PAIR);
  _V10_Dpair_D2293.first = VEncodePointer(&_V10_Dpair_D2292, VPOINTER_PAIR);
  _V10_Dpair_D2293.rest = VNULL;
  _V10_Dpair_D2292.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2292.rest = VEncodePointer(&_V10_Dpair_D2224, VPOINTER_PAIR);
  _V10_Dpair_D2290.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2290.rest = VEncodePointer(&_V10_Dpair_D2289, VPOINTER_PAIR);
  _V10_Dpair_D2289.first = VEncodePointer(&_V10_Dpair_D2288, VPOINTER_PAIR);
  _V10_Dpair_D2289.rest = VNULL;
  _V10_Dpair_D2288.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2288.rest = VEncodePointer(&_V10_Dpair_D2287, VPOINTER_PAIR);
  _V10_Dpair_D2287.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2287.rest = VEncodePointer(&_V10_Dpair_D2284, VPOINTER_PAIR);
  _V10_Dpair_D2286.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2286.rest = VEncodePointer(&_V10_Dpair_D2285, VPOINTER_PAIR);
  _V10_Dpair_D2285.first = VEncodePointer(&_V10_Dpair_D2284, VPOINTER_PAIR);
  _V10_Dpair_D2285.rest = VNULL;
  _V10_Dpair_D2284.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2284.rest = VEncodePointer(&_V10_Dpair_D2283, VPOINTER_PAIR);
  _V10_Dpair_D2283.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2283.rest = VEncodePointer(&_V10_Dpair_D2256, VPOINTER_PAIR);
  _V10_Dpair_D2282.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2282.rest = VEncodePointer(&_V10_Dpair_D2254, VPOINTER_PAIR);
  _V10_Dpair_D2281.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2281.rest = VEncodePointer(&_V10_Dpair_D2280, VPOINTER_PAIR);
  _V10_Dpair_D2280.first = VEncodePointer(&_V10_Dpair_D2279, VPOINTER_PAIR);
  _V10_Dpair_D2280.rest = VNULL;
  _V10_Dpair_D2279.first = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D2279.rest = VEncodePointer(&_V10_Dpair_D2278, VPOINTER_PAIR);
  _V10_Dpair_D2278.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2278.rest = VEncodePointer(&_V10_Dpair_D2275, VPOINTER_PAIR);
  _V10_Dpair_D2277.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2277.rest = VEncodePointer(&_V10_Dpair_D2276, VPOINTER_PAIR);
  _V10_Dpair_D2276.first = VEncodePointer(&_V10_Dpair_D2275, VPOINTER_PAIR);
  _V10_Dpair_D2276.rest = VNULL;
  _V10_Dpair_D2275.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2275.rest = VEncodePointer(&_V10_Dpair_D2274, VPOINTER_PAIR);
  _V10_Dpair_D2274.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2274.rest = VEncodePointer(&_V10_Dpair_D2270, VPOINTER_PAIR);
  _V10_Dpair_D2273.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2273.rest = VEncodePointer(&_V10_Dpair_D2271, VPOINTER_PAIR);
  _V10_Dpair_D2272.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2272.rest = VEncodePointer(&_V10_Dpair_D2271, VPOINTER_PAIR);
  _V10_Dpair_D2271.first = VEncodePointer(&_V10_Dpair_D2270, VPOINTER_PAIR);
  _V10_Dpair_D2271.rest = VNULL;
  _V10_Dpair_D2270.first = VEncodePointer(&_V10_Dpair_D2260, VPOINTER_PAIR);
  _V10_Dpair_D2270.rest = VEncodePointer(&_V10_Dpair_D2269, VPOINTER_PAIR);
  _V10_Dpair_D2269.first = VEncodePointer(&_V10_Dpair_D2262, VPOINTER_PAIR);
  _V10_Dpair_D2269.rest = VEncodePointer(&_V10_Dpair_D2268, VPOINTER_PAIR);
  _V10_Dpair_D2268.first = VEncodePointer(&_V10_Dpair_D2264, VPOINTER_PAIR);
  _V10_Dpair_D2268.rest = VEncodePointer(&_V10_Dpair_D2267, VPOINTER_PAIR);
  _V10_Dpair_D2267.first = VEncodePointer(&_V10_Dpair_D2265, VPOINTER_PAIR);
  _V10_Dpair_D2267.rest = VEncodePointer(&_V10_Dpair_D2266, VPOINTER_PAIR);
  _V10_Dpair_D2266.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2266.rest = VEncodePointer(&_V10_Dpair_D2257, VPOINTER_PAIR);
  _V10_Dpair_D2265.first = _V0expr_D54;
  _V10_Dpair_D2265.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2264.first = _V0name;
  _V10_Dpair_D2264.rest = VEncodePointer(&_V10_Dpair_D2263, VPOINTER_PAIR);
  _V10_Dpair_D2263.first = _V0expr_D55;
  _V10_Dpair_D2263.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2262.first = _V0up;
  _V10_Dpair_D2262.rest = VEncodePointer(&_V10_Dpair_D2261, VPOINTER_PAIR);
  _V10_Dpair_D2261.first = _V0expr_D56;
  _V10_Dpair_D2261.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2260.first = _V0right;
  _V10_Dpair_D2260.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2259.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2259.rest = VEncodePointer(&_V10_Dpair_D2258, VPOINTER_PAIR);
  _V10_Dpair_D2258.first = VEncodePointer(&_V10_Dpair_D2257, VPOINTER_PAIR);
  _V10_Dpair_D2258.rest = VNULL;
  _V10_Dpair_D2257.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2257.rest = VEncodePointer(&_V10_Dpair_D2256, VPOINTER_PAIR);
  _V10_Dpair_D2256.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2256.rest = VEncodePointer(&_V10_Dpair_D2253, VPOINTER_PAIR);
  _V10_Dpair_D2255.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2255.rest = VEncodePointer(&_V10_Dpair_D2254, VPOINTER_PAIR);
  _V10_Dpair_D2254.first = VEncodePointer(&_V10_Dpair_D2253, VPOINTER_PAIR);
  _V10_Dpair_D2254.rest = VNULL;
  _V10_Dpair_D2253.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2253.rest = VEncodePointer(&_V10_Dpair_D2252, VPOINTER_PAIR);
  _V10_Dpair_D2252.first = VEncodePointer(&_V10_Dpair_D2246, VPOINTER_PAIR);
  _V10_Dpair_D2252.rest = VEncodePointer(&_V10_Dpair_D2249, VPOINTER_PAIR);
  _V10_Dpair_D2251.first = VEncodePointer(&_V10_Dpair_D2248, VPOINTER_PAIR);
  _V10_Dpair_D2251.rest = VEncodePointer(&_V10_Dpair_D2250, VPOINTER_PAIR);
  _V10_Dpair_D2250.first = VEncodePointer(&_V10_Dpair_D2249, VPOINTER_PAIR);
  _V10_Dpair_D2250.rest = VNULL;
  _V10_Dpair_D2249.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2249.rest = VEncodePointer(&_V10_Dpair_D2241, VPOINTER_PAIR);
  _V10_Dpair_D2248.first = VEncodeBool(false);
  _V10_Dpair_D2248.rest = VEncodePointer(&_V10_Dpair_D2247, VPOINTER_PAIR);
  _V10_Dpair_D2247.first = VEncodePointer(&_V10_Dpair_D2246, VPOINTER_PAIR);
  _V10_Dpair_D2247.rest = VNULL;
  _V10_Dpair_D2246.first = _V0_Mk;
  _V10_Dpair_D2246.rest = VEncodePointer(&_V10_Dpair_D2245, VPOINTER_PAIR);
  _V10_Dpair_D2245.first = _V0kk_D51;
  _V10_Dpair_D2245.rest = VNULL;
  _V10_Dpair_D2244.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2244.rest = VEncodePointer(&_V10_Dpair_D2242, VPOINTER_PAIR);
  _V10_Dpair_D2243.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2243.rest = VEncodePointer(&_V10_Dpair_D2242, VPOINTER_PAIR);
  _V10_Dpair_D2242.first = VEncodePointer(&_V10_Dpair_D2241, VPOINTER_PAIR);
  _V10_Dpair_D2242.rest = VNULL;
  _V10_Dpair_D2241.first = VEncodePointer(&_V10_Dpair_D2231, VPOINTER_PAIR);
  _V10_Dpair_D2241.rest = VEncodePointer(&_V10_Dpair_D2240, VPOINTER_PAIR);
  _V10_Dpair_D2240.first = VEncodePointer(&_V10_Dpair_D2233, VPOINTER_PAIR);
  _V10_Dpair_D2240.rest = VEncodePointer(&_V10_Dpair_D2239, VPOINTER_PAIR);
  _V10_Dpair_D2239.first = VEncodePointer(&_V10_Dpair_D2235, VPOINTER_PAIR);
  _V10_Dpair_D2239.rest = VEncodePointer(&_V10_Dpair_D2238, VPOINTER_PAIR);
  _V10_Dpair_D2238.first = VEncodePointer(&_V10_Dpair_D2236, VPOINTER_PAIR);
  _V10_Dpair_D2238.rest = VEncodePointer(&_V10_Dpair_D2237, VPOINTER_PAIR);
  _V10_Dpair_D2237.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2237.rest = VEncodePointer(&_V10_Dpair_D2228, VPOINTER_PAIR);
  _V10_Dpair_D2236.first = _V0expr_D38;
  _V10_Dpair_D2236.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2235.first = _V0k;
  _V10_Dpair_D2235.rest = VEncodePointer(&_V10_Dpair_D2234, VPOINTER_PAIR);
  _V10_Dpair_D2234.first = _V0expr_D39;
  _V10_Dpair_D2234.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2233.first = _V0y;
  _V10_Dpair_D2233.rest = VEncodePointer(&_V10_Dpair_D2232, VPOINTER_PAIR);
  _V10_Dpair_D2232.first = _V0expr_D40;
  _V10_Dpair_D2232.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2231.first = _V0x;
  _V10_Dpair_D2231.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2230.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2230.rest = VEncodePointer(&_V10_Dpair_D2229, VPOINTER_PAIR);
  _V10_Dpair_D2229.first = VEncodePointer(&_V10_Dpair_D2228, VPOINTER_PAIR);
  _V10_Dpair_D2229.rest = VNULL;
  _V10_Dpair_D2228.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2228.rest = VEncodePointer(&_V10_Dpair_D2227, VPOINTER_PAIR);
  _V10_Dpair_D2227.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2227.rest = VEncodePointer(&_V10_Dpair_D2224, VPOINTER_PAIR);
  _V10_Dpair_D2226.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2226.rest = VEncodePointer(&_V10_Dpair_D2225, VPOINTER_PAIR);
  _V10_Dpair_D2225.first = VEncodePointer(&_V10_Dpair_D2224, VPOINTER_PAIR);
  _V10_Dpair_D2225.rest = VNULL;
  _V10_Dpair_D2224.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2224.rest = VEncodePointer(&_V10_Dpair_D2190, VPOINTER_PAIR);
  _V10_Dpair_D2223.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2223.rest = VEncodePointer(&_V10_Dpair_D2222, VPOINTER_PAIR);
  _V10_Dpair_D2222.first = VEncodePointer(&_V10_Dpair_D2221, VPOINTER_PAIR);
  _V10_Dpair_D2222.rest = VNULL;
  _V10_Dpair_D2221.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2221.rest = VEncodePointer(&_V10_Dpair_D2220, VPOINTER_PAIR);
  _V10_Dpair_D2220.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2220.rest = VEncodePointer(&_V10_Dpair_D2217, VPOINTER_PAIR);
  _V10_Dpair_D2219.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2219.rest = VEncodePointer(&_V10_Dpair_D2218, VPOINTER_PAIR);
  _V10_Dpair_D2218.first = VEncodePointer(&_V10_Dpair_D2217, VPOINTER_PAIR);
  _V10_Dpair_D2218.rest = VNULL;
  _V10_Dpair_D2217.first = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D2217.rest = VEncodePointer(&_V10_Dpair_D2216, VPOINTER_PAIR);
  _V10_Dpair_D2216.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2216.rest = VEncodePointer(&_V10_Dpair_D2213, VPOINTER_PAIR);
  _V10_Dpair_D2215.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2215.rest = VEncodePointer(&_V10_Dpair_D2214, VPOINTER_PAIR);
  _V10_Dpair_D2214.first = VEncodePointer(&_V10_Dpair_D2213, VPOINTER_PAIR);
  _V10_Dpair_D2214.rest = VNULL;
  _V10_Dpair_D2213.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2213.rest = VEncodePointer(&_V10_Dpair_D2209, VPOINTER_PAIR);
  _V10_Dpair_D2212.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2212.rest = VEncodePointer(&_V10_Dpair_D2210, VPOINTER_PAIR);
  _V10_Dpair_D2211.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2211.rest = VEncodePointer(&_V10_Dpair_D2210, VPOINTER_PAIR);
  _V10_Dpair_D2210.first = VEncodePointer(&_V10_Dpair_D2209, VPOINTER_PAIR);
  _V10_Dpair_D2210.rest = VNULL;
  _V10_Dpair_D2209.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D2209.rest = VEncodePointer(&_V10_Dpair_D2208, VPOINTER_PAIR);
  _V10_Dpair_D2208.first = VEncodePointer(&_V10_Dpair_D2198, VPOINTER_PAIR);
  _V10_Dpair_D2208.rest = VEncodePointer(&_V10_Dpair_D2207, VPOINTER_PAIR);
  _V10_Dpair_D2207.first = VEncodePointer(&_V10_Dpair_D2200, VPOINTER_PAIR);
  _V10_Dpair_D2207.rest = VEncodePointer(&_V10_Dpair_D2206, VPOINTER_PAIR);
  _V10_Dpair_D2206.first = VEncodePointer(&_V10_Dpair_D2202, VPOINTER_PAIR);
  _V10_Dpair_D2206.rest = VEncodePointer(&_V10_Dpair_D2205, VPOINTER_PAIR);
  _V10_Dpair_D2205.first = VEncodePointer(&_V10_Dpair_D2203, VPOINTER_PAIR);
  _V10_Dpair_D2205.rest = VEncodePointer(&_V10_Dpair_D2204, VPOINTER_PAIR);
  _V10_Dpair_D2204.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2204.rest = VEncodePointer(&_V10_Dpair_D2194, VPOINTER_PAIR);
  _V10_Dpair_D2203.first = _V0expr_D33;
  _V10_Dpair_D2203.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2202.first = _V0path;
  _V10_Dpair_D2202.rest = VEncodePointer(&_V10_Dpair_D2201, VPOINTER_PAIR);
  _V10_Dpair_D2201.first = _V0expr_D34;
  _V10_Dpair_D2201.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2200.first = _V0n;
  _V10_Dpair_D2200.rest = VEncodePointer(&_V10_Dpair_D2199, VPOINTER_PAIR);
  _V10_Dpair_D2199.first = _V0expr_D35;
  _V10_Dpair_D2199.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2198.first = _V0xs;
  _V10_Dpair_D2198.rest = VEncodePointer(&_V10_Dpair_D2197, VPOINTER_PAIR);
  _V10_Dpair_D2197.first = _V0expr_D36;
  _V10_Dpair_D2197.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2196.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2196.rest = VEncodePointer(&_V10_Dpair_D2195, VPOINTER_PAIR);
  _V10_Dpair_D2195.first = VEncodePointer(&_V10_Dpair_D2194, VPOINTER_PAIR);
  _V10_Dpair_D2195.rest = VNULL;
  _V10_Dpair_D2194.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2194.rest = VEncodePointer(&_V10_Dpair_D2193, VPOINTER_PAIR);
  _V10_Dpair_D2193.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2193.rest = VEncodePointer(&_V10_Dpair_D2190, VPOINTER_PAIR);
  _V10_Dpair_D2192.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2192.rest = VEncodePointer(&_V10_Dpair_D2191, VPOINTER_PAIR);
  _V10_Dpair_D2191.first = VEncodePointer(&_V10_Dpair_D2190, VPOINTER_PAIR);
  _V10_Dpair_D2191.rest = VNULL;
  _V10_Dpair_D2190.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2190.rest = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2189.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2189.rest = VEncodePointer(&_V10_Dpair_D2188, VPOINTER_PAIR);
  _V10_Dpair_D2188.first = VEncodePointer(&_V10_Dpair_D2187, VPOINTER_PAIR);
  _V10_Dpair_D2188.rest = VNULL;
  _V10_Dpair_D2187.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D2187.rest = VEncodePointer(&_V10_Dpair_D2186, VPOINTER_PAIR);
  _V10_Dpair_D2186.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2186.rest = VEncodePointer(&_V10_Dpair_D2183, VPOINTER_PAIR);
  _V10_Dpair_D2185.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2185.rest = VEncodePointer(&_V10_Dpair_D2184, VPOINTER_PAIR);
  _V10_Dpair_D2184.first = VEncodePointer(&_V10_Dpair_D2183, VPOINTER_PAIR);
  _V10_Dpair_D2184.rest = VNULL;
  _V10_Dpair_D2183.first = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D2183.rest = VEncodePointer(&_V10_Dpair_D2182, VPOINTER_PAIR);
  _V10_Dpair_D2182.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2182.rest = VEncodePointer(&_V10_Dpair_D2178, VPOINTER_PAIR);
  _V10_Dpair_D2181.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2181.rest = VEncodePointer(&_V10_Dpair_D2179, VPOINTER_PAIR);
  _V10_Dpair_D2180.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2180.rest = VEncodePointer(&_V10_Dpair_D2179, VPOINTER_PAIR);
  _V10_Dpair_D2179.first = VEncodePointer(&_V10_Dpair_D2178, VPOINTER_PAIR);
  _V10_Dpair_D2179.rest = VNULL;
  _V10_Dpair_D2178.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D2178.rest = VEncodePointer(&_V10_Dpair_D2177, VPOINTER_PAIR);
  _V10_Dpair_D2177.first = VEncodePointer(&_V10_Dpair_D2170, VPOINTER_PAIR);
  _V10_Dpair_D2177.rest = VEncodePointer(&_V10_Dpair_D2176, VPOINTER_PAIR);
  _V10_Dpair_D2176.first = VEncodePointer(&_V10_Dpair_D2172, VPOINTER_PAIR);
  _V10_Dpair_D2176.rest = VEncodePointer(&_V10_Dpair_D2175, VPOINTER_PAIR);
  _V10_Dpair_D2175.first = VEncodePointer(&_V10_Dpair_D2173, VPOINTER_PAIR);
  _V10_Dpair_D2175.rest = VEncodePointer(&_V10_Dpair_D2174, VPOINTER_PAIR);
  _V10_Dpair_D2174.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2174.rest = VEncodePointer(&_V10_Dpair_D2166, VPOINTER_PAIR);
  _V10_Dpair_D2173.first = _V0expr_D29;
  _V10_Dpair_D2173.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2172.first = _V0n;
  _V10_Dpair_D2172.rest = VEncodePointer(&_V10_Dpair_D2171, VPOINTER_PAIR);
  _V10_Dpair_D2171.first = _V0expr_D30;
  _V10_Dpair_D2171.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2170.first = _V0xs;
  _V10_Dpair_D2170.rest = VEncodePointer(&_V10_Dpair_D2169, VPOINTER_PAIR);
  _V10_Dpair_D2169.first = _V0expr_D31;
  _V10_Dpair_D2169.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2168.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2168.rest = VEncodePointer(&_V10_Dpair_D2167, VPOINTER_PAIR);
  _V10_Dpair_D2167.first = VEncodePointer(&_V10_Dpair_D2166, VPOINTER_PAIR);
  _V10_Dpair_D2167.rest = VNULL;
  _V10_Dpair_D2166.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2166.rest = VEncodePointer(&_V10_Dpair_D2165, VPOINTER_PAIR);
  _V10_Dpair_D2165.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2165.rest = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2164.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2164.rest = VEncodePointer(&_V10_Dpair_D2163, VPOINTER_PAIR);
  _V10_Dpair_D2163.first = VEncodePointer(&_V10_Dpair_D2162, VPOINTER_PAIR);
  _V10_Dpair_D2163.rest = VNULL;
  _V10_Dpair_D2162.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2162.rest = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2160.first = VEncodePointer(&_V10_Dpair_D2157, VPOINTER_PAIR);
  _V10_Dpair_D2160.rest = VEncodePointer(&_V10_Dpair_D2159, VPOINTER_PAIR);
  _V10_Dpair_D2159.first = VEncodePointer(&_V10_Dpair_D2158, VPOINTER_PAIR);
  _V10_Dpair_D2159.rest = VNULL;
  _V10_Dpair_D2158.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2158.rest = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2157.first = VEncodeBool(false);
  _V10_Dpair_D2157.rest = VEncodePointer(&_V10_Dpair_D2156, VPOINTER_PAIR);
  _V10_Dpair_D2156.first = VEncodePointer(&_V10_Dpair_D2155, VPOINTER_PAIR);
  _V10_Dpair_D2156.rest = VNULL;
  _V10_Dpair_D2155.first = _V0app;
  _V10_Dpair_D2155.rest = VNULL;
  _V10_Dpair_D2154.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2154.rest = VEncodePointer(&_V10_Dpair_D2153, VPOINTER_PAIR);
  _V10_Dpair_D2153.first = VEncodePointer(&_V10_Dpair_D2152, VPOINTER_PAIR);
  _V10_Dpair_D2153.rest = VNULL;
  _V10_Dpair_D2152.first = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D2152.rest = VEncodePointer(&_V10_Dpair_D2151, VPOINTER_PAIR);
  _V10_Dpair_D2151.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2151.rest = VEncodePointer(&_V10_Dpair_D2148, VPOINTER_PAIR);
  _V10_Dpair_D2150.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2150.rest = VEncodePointer(&_V10_Dpair_D2149, VPOINTER_PAIR);
  _V10_Dpair_D2149.first = VEncodePointer(&_V10_Dpair_D2148, VPOINTER_PAIR);
  _V10_Dpair_D2149.rest = VNULL;
  _V10_Dpair_D2148.first = VEncodePointer(&_V10_Dpair_D2142, VPOINTER_PAIR);
  _V10_Dpair_D2148.rest = VEncodePointer(&_V10_Dpair_D2145, VPOINTER_PAIR);
  _V10_Dpair_D2147.first = VEncodePointer(&_V10_Dpair_D2144, VPOINTER_PAIR);
  _V10_Dpair_D2147.rest = VEncodePointer(&_V10_Dpair_D2146, VPOINTER_PAIR);
  _V10_Dpair_D2146.first = VEncodePointer(&_V10_Dpair_D2145, VPOINTER_PAIR);
  _V10_Dpair_D2146.rest = VNULL;
  _V10_Dpair_D2145.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2145.rest = VEncodePointer(&_V10_Dpair_D2138, VPOINTER_PAIR);
  _V10_Dpair_D2144.first = VEncodeBool(false);
  _V10_Dpair_D2144.rest = VEncodePointer(&_V10_Dpair_D2143, VPOINTER_PAIR);
  _V10_Dpair_D2143.first = VEncodePointer(&_V10_Dpair_D2142, VPOINTER_PAIR);
  _V10_Dpair_D2143.rest = VNULL;
  _V10_Dpair_D2142.first = _V0label;
  _V10_Dpair_D2142.rest = VNULL;
  _V10_Dpair_D2141.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2141.rest = VEncodePointer(&_V10_Dpair_D2139, VPOINTER_PAIR);
  _V10_Dpair_D2140.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2140.rest = VEncodePointer(&_V10_Dpair_D2139, VPOINTER_PAIR);
  _V10_Dpair_D2139.first = VEncodePointer(&_V10_Dpair_D2138, VPOINTER_PAIR);
  _V10_Dpair_D2139.rest = VNULL;
  _V10_Dpair_D2138.first = VEncodePointer(&_V10_Dpair_D2128, VPOINTER_PAIR);
  _V10_Dpair_D2138.rest = VEncodePointer(&_V10_Dpair_D2137, VPOINTER_PAIR);
  _V10_Dpair_D2137.first = VEncodePointer(&_V10_Dpair_D2130, VPOINTER_PAIR);
  _V10_Dpair_D2137.rest = VEncodePointer(&_V10_Dpair_D2136, VPOINTER_PAIR);
  _V10_Dpair_D2136.first = VEncodePointer(&_V10_Dpair_D2132, VPOINTER_PAIR);
  _V10_Dpair_D2136.rest = VEncodePointer(&_V10_Dpair_D2135, VPOINTER_PAIR);
  _V10_Dpair_D2135.first = VEncodePointer(&_V10_Dpair_D2133, VPOINTER_PAIR);
  _V10_Dpair_D2135.rest = VEncodePointer(&_V10_Dpair_D2134, VPOINTER_PAIR);
  _V10_Dpair_D2134.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2134.rest = VEncodePointer(&_V10_Dpair_D2125, VPOINTER_PAIR);
  _V10_Dpair_D2133.first = _V0expr_D25;
  _V10_Dpair_D2133.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2132.first = _V0p;
  _V10_Dpair_D2132.rest = VEncodePointer(&_V10_Dpair_D2131, VPOINTER_PAIR);
  _V10_Dpair_D2131.first = _V0expr_D26;
  _V10_Dpair_D2131.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2130.first = _V0a;
  _V10_Dpair_D2130.rest = VEncodePointer(&_V10_Dpair_D2129, VPOINTER_PAIR);
  _V10_Dpair_D2129.first = _V0expr_D27;
  _V10_Dpair_D2129.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2128.first = _V0b;
  _V10_Dpair_D2128.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2127.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2127.rest = VEncodePointer(&_V10_Dpair_D2126, VPOINTER_PAIR);
  _V10_Dpair_D2126.first = VEncodePointer(&_V10_Dpair_D2125, VPOINTER_PAIR);
  _V10_Dpair_D2126.rest = VNULL;
  _V10_Dpair_D2125.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2125.rest = VEncodePointer(&_V10_Dpair_D2124, VPOINTER_PAIR);
  _V10_Dpair_D2124.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2124.rest = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2123.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2123.rest = VEncodePointer(&_V10_Dpair_D2122, VPOINTER_PAIR);
  _V10_Dpair_D2122.first = VEncodePointer(&_V10_Dpair_D2121, VPOINTER_PAIR);
  _V10_Dpair_D2122.rest = VNULL;
  _V10_Dpair_D2121.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2121.rest = VEncodePointer(&_V10_Dpair_D2120, VPOINTER_PAIR);
  _V10_Dpair_D2120.first = VEncodePointer(&_V10_Dpair_D2116, VPOINTER_PAIR);
  _V10_Dpair_D2120.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D2119.first = VEncodePointer(&_V10_Dpair_D2118, VPOINTER_PAIR);
  _V10_Dpair_D2119.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D2118.first = VEncodeBool(false);
  _V10_Dpair_D2118.rest = VEncodePointer(&_V10_Dpair_D2117, VPOINTER_PAIR);
  _V10_Dpair_D2117.first = VEncodePointer(&_V10_Dpair_D2116, VPOINTER_PAIR);
  _V10_Dpair_D2117.rest = VNULL;
  _V10_Dpair_D2116.first = _V0_Mk;
  _V10_Dpair_D2116.rest = VEncodePointer(&_V10_Dpair_D2115, VPOINTER_PAIR);
  _V10_Dpair_D2115.first = _V0kk_D22;
  _V10_Dpair_D2115.rest = VNULL;
  _V10_Dpair_D2114.first = VEncodePointer(&_V10_Dpair_D2113, VPOINTER_PAIR);
  _V10_Dpair_D2114.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D2113.first = VEncodePointer(&_V10_Dpair_D2112, VPOINTER_PAIR);
  _V10_Dpair_D2113.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D2112.first = _V0vanity;
  _V10_Dpair_D2112.rest = VEncodePointer(&_V10_Dpair_D2111, VPOINTER_PAIR);
  _V10_Dpair_D2111.first = _V0compiler;
  _V10_Dpair_D2111.rest = VEncodePointer(&_V10_Dpair_D2110, VPOINTER_PAIR);
  _V10_Dpair_D2110.first = _V0bytecode;
  _V10_Dpair_D2110.rest = VEncodePointer(&_V10_Dpair_D2109, VPOINTER_PAIR);
  _V10_Dpair_D2109.first = _V0process__application;
  _V10_Dpair_D2109.rest = VNULL;
  _V10_Dpair_D2108.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2108.rest = VEncodePointer(&_V10_Dpair_D2107, VPOINTER_PAIR);
  _V10_Dpair_D2107.first = VEncodePointer(&_V10_Dpair_D2106, VPOINTER_PAIR);
  _V10_Dpair_D2107.rest = VNULL;
  _V10_Dpair_D2106.first = VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR);
  _V10_Dpair_D2106.rest = VEncodePointer(&_V10_Dpair_D2105, VPOINTER_PAIR);
  _V10_Dpair_D2105.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2105.rest = VEncodePointer(&_V10_Dpair_D2101, VPOINTER_PAIR);
  _V10_Dpair_D2104.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2104.rest = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2103.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2103.rest = VEncodePointer(&_V10_Dpair_D2102, VPOINTER_PAIR);
  _V10_Dpair_D2102.first = VEncodePointer(&_V10_Dpair_D2101, VPOINTER_PAIR);
  _V10_Dpair_D2102.rest = VNULL;
  _V10_Dpair_D2101.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2101.rest = VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR);
  _V10_Dpair_D2100.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2100.rest = VEncodePointer(&_V10_Dpair_D2098, VPOINTER_PAIR);
  _V10_Dpair_D2099.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2099.rest = VEncodePointer(&_V10_Dpair_D2098, VPOINTER_PAIR);
  _V10_Dpair_D2098.first = VEncodePointer(&_V10_Dpair_D2097, VPOINTER_PAIR);
  _V10_Dpair_D2098.rest = VNULL;
  _V10_Dpair_D2097.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2097.rest = VEncodePointer(&_V10_Dpair_D2096, VPOINTER_PAIR);
  _V10_Dpair_D2096.first = VEncodePointer(&_V10_Dpair_D2092, VPOINTER_PAIR);
  _V10_Dpair_D2096.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D2095.first = VEncodePointer(&_V10_Dpair_D2094, VPOINTER_PAIR);
  _V10_Dpair_D2095.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D2094.first = VEncodePointer(&_V10_Dpair_D2086, VPOINTER_PAIR);
  _V10_Dpair_D2094.rest = VEncodePointer(&_V10_Dpair_D2093, VPOINTER_PAIR);
  _V10_Dpair_D2093.first = VEncodePointer(&_V10_Dpair_D2092, VPOINTER_PAIR);
  _V10_Dpair_D2093.rest = VNULL;
  _V10_Dpair_D2092.first = _V0_Mk;
  _V10_Dpair_D2092.rest = VEncodePointer(&_V10_Dpair_D2091, VPOINTER_PAIR);
  _V10_Dpair_D2091.first = _V0name;
  _V10_Dpair_D2091.rest = VEncodePointer(&_V10_Dpair_D2090, VPOINTER_PAIR);
  _V10_Dpair_D2090.first = _V0check__args_Q;
  _V10_Dpair_D2090.rest = VEncodePointer(&_V10_Dpair_D2089, VPOINTER_PAIR);
  _V10_Dpair_D2089.first = _V0num;
  _V10_Dpair_D2089.rest = VEncodePointer(&_V10_Dpair_D2088, VPOINTER_PAIR);
  _V10_Dpair_D2088.first = _V0variadic_Q;
  _V10_Dpair_D2088.rest = VEncodePointer(&_V10_Dpair_D2087, VPOINTER_PAIR);
  _V10_Dpair_D2087.first = _V0body;
  _V10_Dpair_D2087.rest = VNULL;
  _V10_Dpair_D2086.first = _V0vanity;
  _V10_Dpair_D2086.rest = VEncodePointer(&_V10_Dpair_D2085, VPOINTER_PAIR);
  _V10_Dpair_D2085.first = _V0compiler;
  _V10_Dpair_D2085.rest = VEncodePointer(&_V10_Dpair_D2084, VPOINTER_PAIR);
  _V10_Dpair_D2084.first = _V0bytecode;
  _V10_Dpair_D2084.rest = VEncodePointer(&_V10_Dpair_D2083, VPOINTER_PAIR);
  _V10_Dpair_D2083.first = _V0process__fun__single;
  _V10_Dpair_D2083.rest = VNULL;
  _V10_Dpair_D2082.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2082.rest = VEncodePointer(&_V10_Dpair_D2079, VPOINTER_PAIR);
  _V10_Dpair_D2080.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2080.rest = VEncodePointer(&_V10_Dpair_D2079, VPOINTER_PAIR);
  _V10_Dpair_D2079.first = VEncodePointer(&_V10_Dpair_D2078, VPOINTER_PAIR);
  _V10_Dpair_D2079.rest = VNULL;
  _V10_Dpair_D2078.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2078.rest = VEncodePointer(&_V10_Dpair_D2077, VPOINTER_PAIR);
  _V10_Dpair_D2077.first = VEncodePointer(&_V10_Dpair_D2073, VPOINTER_PAIR);
  _V10_Dpair_D2077.rest = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D2076.first = VEncodePointer(&_V10_Dpair_D2075, VPOINTER_PAIR);
  _V10_Dpair_D2076.rest = VEncodePointer(&_V10_Dpair_D1911, VPOINTER_PAIR);
  _V10_Dpair_D2075.first = VEncodeBool(false);
  _V10_Dpair_D2075.rest = VEncodePointer(&_V10_Dpair_D2074, VPOINTER_PAIR);
  _V10_Dpair_D2074.first = VEncodePointer(&_V10_Dpair_D2073, VPOINTER_PAIR);
  _V10_Dpair_D2074.rest = VNULL;
  _V10_Dpair_D2073.first = _V0_Mk;
  _V10_Dpair_D2073.rest = VEncodePointer(&_V10_Dpair_D2072, VPOINTER_PAIR);
  _V10_Dpair_D2072.first = _V0i;
  _V10_Dpair_D2072.rest = VEncodePointer(&_V10_Dpair_D1943, VPOINTER_PAIR);
  _V10_Dpair_D2069.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2069.rest = VEncodePointer(&_V10_Dpair_D2068, VPOINTER_PAIR);
  _V10_Dpair_D2068.first = VEncodePointer(&_V10_Dpair_D2067, VPOINTER_PAIR);
  _V10_Dpair_D2068.rest = VNULL;
  _V10_Dpair_D2067.first = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D2067.rest = VEncodePointer(&_V10_Dpair_D2066, VPOINTER_PAIR);
  _V10_Dpair_D2066.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2066.rest = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2065.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2065.rest = VEncodePointer(&_V10_Dpair_D2060, VPOINTER_PAIR);
  _V10_Dpair_D2064.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2064.rest = VEncodePointer(&_V10_Dpair_D2063, VPOINTER_PAIR);
  _V10_Dpair_D2063.first = VEncodePointer(&_V10_Dpair_D2062, VPOINTER_PAIR);
  _V10_Dpair_D2063.rest = VNULL;
  _V10_Dpair_D2062.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2062.rest = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2061.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2061.rest = VEncodePointer(&_V10_Dpair_D2060, VPOINTER_PAIR);
  _V10_Dpair_D2060.first = VEncodePointer(&_V10_Dpair_D2059, VPOINTER_PAIR);
  _V10_Dpair_D2060.rest = VNULL;
  _V10_Dpair_D2059.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2059.rest = VEncodePointer(&_V10_Dpair_D2058, VPOINTER_PAIR);
  _V10_Dpair_D2058.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2058.rest = VEncodePointer(&_V10_Dpair_D2054, VPOINTER_PAIR);
  _V10_Dpair_D2057.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2057.rest = VEncodePointer(&_V10_Dpair_D2055, VPOINTER_PAIR);
  _V10_Dpair_D2056.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2056.rest = VEncodePointer(&_V10_Dpair_D2055, VPOINTER_PAIR);
  _V10_Dpair_D2055.first = VEncodePointer(&_V10_Dpair_D2054, VPOINTER_PAIR);
  _V10_Dpair_D2055.rest = VNULL;
  _V10_Dpair_D2054.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2054.rest = VEncodePointer(&_V10_Dpair_D2053, VPOINTER_PAIR);
  _V10_Dpair_D2053.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D2053.rest = VEncodePointer(&_V10_Dpair_D2052, VPOINTER_PAIR);
  _V10_Dpair_D2052.first = VEncodePointer(&_V10_Dpair_D2045, VPOINTER_PAIR);
  _V10_Dpair_D2052.rest = VEncodePointer(&_V10_Dpair_D2051, VPOINTER_PAIR);
  _V10_Dpair_D2051.first = VEncodePointer(&_V10_Dpair_D2046, VPOINTER_PAIR);
  _V10_Dpair_D2051.rest = VEncodePointer(&_V10_Dpair_D2050, VPOINTER_PAIR);
  _V10_Dpair_D2050.first = VEncodePointer(&_V10_Dpair_D2048, VPOINTER_PAIR);
  _V10_Dpair_D2050.rest = VEncodePointer(&_V10_Dpair_D2049, VPOINTER_PAIR);
  _V10_Dpair_D2049.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2049.rest = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2048.first = _V0name;
  _V10_Dpair_D2048.rest = VEncodePointer(&_V10_Dpair_D2047, VPOINTER_PAIR);
  _V10_Dpair_D2047.first = _V0expr_D76;
  _V10_Dpair_D2047.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2046.first = _V0expr_D77;
  _V10_Dpair_D2046.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2045.first = _V0num;
  _V10_Dpair_D2045.rest = VEncodePointer(&_V10_Dpair_D2044, VPOINTER_PAIR);
  _V10_Dpair_D2044.first = _V0expr_D78;
  _V10_Dpair_D2044.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2043.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2043.rest = VEncodePointer(&_V10_Dpair_D2042, VPOINTER_PAIR);
  _V10_Dpair_D2042.first = VEncodePointer(&_V10_Dpair_D2041, VPOINTER_PAIR);
  _V10_Dpair_D2042.rest = VNULL;
  _V10_Dpair_D2041.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2041.rest = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2040.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2040.rest = VEncodePointer(&_V10_Dpair_D2039, VPOINTER_PAIR);
  _V10_Dpair_D2039.first = VEncodePointer(&_V10_Dpair_D2038, VPOINTER_PAIR);
  _V10_Dpair_D2039.rest = VNULL;
  _V10_Dpair_D2038.first = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D2038.rest = VEncodePointer(&_V10_Dpair_D2037, VPOINTER_PAIR);
  _V10_Dpair_D2037.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2037.rest = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2036.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2036.rest = VEncodePointer(&_V10_Dpair_D2031, VPOINTER_PAIR);
  _V10_Dpair_D2035.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2035.rest = VEncodePointer(&_V10_Dpair_D2034, VPOINTER_PAIR);
  _V10_Dpair_D2034.first = VEncodePointer(&_V10_Dpair_D2033, VPOINTER_PAIR);
  _V10_Dpair_D2034.rest = VNULL;
  _V10_Dpair_D2033.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2033.rest = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2032.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2032.rest = VEncodePointer(&_V10_Dpair_D2031, VPOINTER_PAIR);
  _V10_Dpair_D2031.first = VEncodePointer(&_V10_Dpair_D2030, VPOINTER_PAIR);
  _V10_Dpair_D2031.rest = VNULL;
  _V10_Dpair_D2030.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2030.rest = VEncodePointer(&_V10_Dpair_D2029, VPOINTER_PAIR);
  _V10_Dpair_D2029.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2029.rest = VEncodePointer(&_V10_Dpair_D2025, VPOINTER_PAIR);
  _V10_Dpair_D2028.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2028.rest = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2027.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D2027.rest = VEncodePointer(&_V10_Dpair_D2026, VPOINTER_PAIR);
  _V10_Dpair_D2026.first = VEncodePointer(&_V10_Dpair_D2025, VPOINTER_PAIR);
  _V10_Dpair_D2026.rest = VNULL;
  _V10_Dpair_D2025.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D2025.rest = VEncodePointer(&_V10_Dpair_D2024, VPOINTER_PAIR);
  _V10_Dpair_D2024.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D2024.rest = VEncodePointer(&_V10_Dpair_D2023, VPOINTER_PAIR);
  _V10_Dpair_D2023.first = VEncodePointer(&_V10_Dpair_D2021, VPOINTER_PAIR);
  _V10_Dpair_D2023.rest = VEncodePointer(&_V10_Dpair_D2022, VPOINTER_PAIR);
  _V10_Dpair_D2022.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2022.rest = VEncodePointer(&_V10_Dpair_D2018, VPOINTER_PAIR);
  _V10_Dpair_D2021.first = _V0expr_D74;
  _V10_Dpair_D2021.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2020.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D2020.rest = VEncodePointer(&_V10_Dpair_D2019, VPOINTER_PAIR);
  _V10_Dpair_D2019.first = VEncodePointer(&_V10_Dpair_D2018, VPOINTER_PAIR);
  _V10_Dpair_D2019.rest = VNULL;
  _V10_Dpair_D2018.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D2018.rest = VEncodePointer(&_V10_Dpair_D2017, VPOINTER_PAIR);
  _V10_Dpair_D2017.first = VEncodePointer(&_V10_Dpair_D2010, VPOINTER_PAIR);
  _V10_Dpair_D2017.rest = VEncodePointer(&_V10_Dpair_D2016, VPOINTER_PAIR);
  _V10_Dpair_D2016.first = VEncodePointer(&_V10_Dpair_D2011, VPOINTER_PAIR);
  _V10_Dpair_D2016.rest = VEncodePointer(&_V10_Dpair_D2015, VPOINTER_PAIR);
  _V10_Dpair_D2015.first = VEncodePointer(&_V10_Dpair_D2013, VPOINTER_PAIR);
  _V10_Dpair_D2015.rest = VEncodePointer(&_V10_Dpair_D2014, VPOINTER_PAIR);
  _V10_Dpair_D2014.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D2014.rest = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2013.first = _V0name;
  _V10_Dpair_D2013.rest = VEncodePointer(&_V10_Dpair_D2012, VPOINTER_PAIR);
  _V10_Dpair_D2012.first = _V0expr_D71;
  _V10_Dpair_D2012.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2011.first = _V0expr_D72;
  _V10_Dpair_D2011.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2010.first = _V0num;
  _V10_Dpair_D2010.rest = VEncodePointer(&_V10_Dpair_D2009, VPOINTER_PAIR);
  _V10_Dpair_D2009.first = _V0expr_D73;
  _V10_Dpair_D2009.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2008.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D2008.rest = VEncodePointer(&_V10_Dpair_D2007, VPOINTER_PAIR);
  _V10_Dpair_D2007.first = VEncodePointer(&_V10_Dpair_D2006, VPOINTER_PAIR);
  _V10_Dpair_D2007.rest = VNULL;
  _V10_Dpair_D2006.first = VEncodePointer(&_V10_Dpair_D2004, VPOINTER_PAIR);
  _V10_Dpair_D2006.rest = VEncodePointer(&_V10_Dpair_D2005, VPOINTER_PAIR);
  _V10_Dpair_D2005.first = VEncodePointer(&_V10_Dpair_D2000, VPOINTER_PAIR);
  _V10_Dpair_D2005.rest = VEncodePointer(&_V10_Dpair_D1933, VPOINTER_PAIR);
  _V10_Dpair_D2004.first = _V0input_D69;
  _V10_Dpair_D2004.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D2003.first = VEncodePointer(&_V10_Dpair_D2002, VPOINTER_PAIR);
  _V10_Dpair_D2003.rest = VEncodePointer(&_V10_Dpair_D1934, VPOINTER_PAIR);
  _V10_Dpair_D2002.first = VEncodeBool(false);
  _V10_Dpair_D2002.rest = VEncodePointer(&_V10_Dpair_D2001, VPOINTER_PAIR);
  _V10_Dpair_D2001.first = VEncodePointer(&_V10_Dpair_D2000, VPOINTER_PAIR);
  _V10_Dpair_D2001.rest = VNULL;
  _V10_Dpair_D2000.first = _V0_Mk;
  _V10_Dpair_D2000.rest = VEncodePointer(&_V10_Dpair_D1999, VPOINTER_PAIR);
  _V10_Dpair_D1999.first = _V0kk_D68;
  _V10_Dpair_D1999.rest = VNULL;
  _V10_Dpair_D1996.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1996.rest = VEncodePointer(&_V10_Dpair_D1994, VPOINTER_PAIR);
  _V10_Dpair_D1995.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1995.rest = VEncodePointer(&_V10_Dpair_D1994, VPOINTER_PAIR);
  _V10_Dpair_D1994.first = VEncodePointer(&_V10_Dpair_D1993, VPOINTER_PAIR);
  _V10_Dpair_D1994.rest = VNULL;
  _V10_Dpair_D1993.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1993.rest = VEncodePointer(&_V10_Dpair_D1992, VPOINTER_PAIR);
  _V10_Dpair_D1992.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1992.rest = VEncodePointer(&_V10_Dpair_D1991, VPOINTER_PAIR);
  _V10_Dpair_D1991.first = VEncodePointer(&_V10_Dpair_D1984, VPOINTER_PAIR);
  _V10_Dpair_D1991.rest = VEncodePointer(&_V10_Dpair_D1990, VPOINTER_PAIR);
  _V10_Dpair_D1990.first = VEncodePointer(&_V10_Dpair_D1985, VPOINTER_PAIR);
  _V10_Dpair_D1990.rest = VEncodePointer(&_V10_Dpair_D1989, VPOINTER_PAIR);
  _V10_Dpair_D1989.first = VEncodePointer(&_V10_Dpair_D1987, VPOINTER_PAIR);
  _V10_Dpair_D1989.rest = VEncodePointer(&_V10_Dpair_D1988, VPOINTER_PAIR);
  _V10_Dpair_D1988.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1988.rest = VEncodePointer(&_V10_Dpair_D1980, VPOINTER_PAIR);
  _V10_Dpair_D1987.first = _V0name;
  _V10_Dpair_D1987.rest = VEncodePointer(&_V10_Dpair_D1986, VPOINTER_PAIR);
  _V10_Dpair_D1986.first = _V0expr_D65;
  _V10_Dpair_D1986.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1985.first = _V0expr_D66;
  _V10_Dpair_D1985.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1984.first = _V0num;
  _V10_Dpair_D1984.rest = VEncodePointer(&_V10_Dpair_D1983, VPOINTER_PAIR);
  _V10_Dpair_D1983.first = _V0expr_D67;
  _V10_Dpair_D1983.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1982.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1982.rest = VEncodePointer(&_V10_Dpair_D1981, VPOINTER_PAIR);
  _V10_Dpair_D1981.first = VEncodePointer(&_V10_Dpair_D1980, VPOINTER_PAIR);
  _V10_Dpair_D1981.rest = VNULL;
  _V10_Dpair_D1980.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1980.rest = VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR);
  _V10_Dpair_D1978.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1978.rest = VEncodePointer(&_V10_Dpair_D1976, VPOINTER_PAIR);
  _V10_Dpair_D1977.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1977.rest = VEncodePointer(&_V10_Dpair_D1976, VPOINTER_PAIR);
  _V10_Dpair_D1976.first = VEncodePointer(&_V10_Dpair_D1975, VPOINTER_PAIR);
  _V10_Dpair_D1976.rest = VNULL;
  _V10_Dpair_D1975.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1975.rest = VEncodePointer(&_V10_Dpair_D1974, VPOINTER_PAIR);
  _V10_Dpair_D1974.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1974.rest = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1973.first = VEncodePointer(&_V10_Dpair_D1971, VPOINTER_PAIR);
  _V10_Dpair_D1973.rest = VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR);
  _V10_Dpair_D1972.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1972.rest = VEncodePointer(&_V10_Dpair_D1968, VPOINTER_PAIR);
  _V10_Dpair_D1971.first = _V0expr_D63;
  _V10_Dpair_D1971.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1970.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1970.rest = VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR);
  _V10_Dpair_D1969.first = VEncodePointer(&_V10_Dpair_D1968, VPOINTER_PAIR);
  _V10_Dpair_D1969.rest = VNULL;
  _V10_Dpair_D1968.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1968.rest = VEncodePointer(&_V10_Dpair_D1967, VPOINTER_PAIR);
  _V10_Dpair_D1967.first = VEncodePointer(&_V10_Dpair_D1960, VPOINTER_PAIR);
  _V10_Dpair_D1967.rest = VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR);
  _V10_Dpair_D1966.first = VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR);
  _V10_Dpair_D1966.rest = VEncodePointer(&_V10_Dpair_D1965, VPOINTER_PAIR);
  _V10_Dpair_D1965.first = VEncodePointer(&_V10_Dpair_D1963, VPOINTER_PAIR);
  _V10_Dpair_D1965.rest = VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR);
  _V10_Dpair_D1964.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1964.rest = VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR);
  _V10_Dpair_D1963.first = _V0name;
  _V10_Dpair_D1963.rest = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1962.first = _V0expr_D60;
  _V10_Dpair_D1962.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1961.first = _V0expr_D61;
  _V10_Dpair_D1961.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1960.first = _V0num;
  _V10_Dpair_D1960.rest = VEncodePointer(&_V10_Dpair_D1959, VPOINTER_PAIR);
  _V10_Dpair_D1959.first = _V0expr_D62;
  _V10_Dpair_D1959.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1958.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1958.rest = VEncodePointer(&_V10_Dpair_D1957, VPOINTER_PAIR);
  _V10_Dpair_D1957.first = VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR);
  _V10_Dpair_D1957.rest = VNULL;
  _V10_Dpair_D1956.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1956.rest = VEncodePointer(&_V10_Dpair_D1955, VPOINTER_PAIR);
  _V10_Dpair_D1955.first = VEncodePointer(&_V10_Dpair_D1949, VPOINTER_PAIR);
  _V10_Dpair_D1955.rest = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1954.first = VEncodePointer(&_V10_Dpair_D1951, VPOINTER_PAIR);
  _V10_Dpair_D1954.rest = VEncodePointer(&_V10_Dpair_D1953, VPOINTER_PAIR);
  _V10_Dpair_D1953.first = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1953.rest = VNULL;
  _V10_Dpair_D1952.first = VEncodePointer(&_V10_Dpair_D1944, VPOINTER_PAIR);
  _V10_Dpair_D1952.rest = VEncodePointer(&_V10_Dpair_D1936, VPOINTER_PAIR);
  _V10_Dpair_D1951.first = VEncodeBool(false);
  _V10_Dpair_D1951.rest = VEncodePointer(&_V10_Dpair_D1950, VPOINTER_PAIR);
  _V10_Dpair_D1950.first = VEncodePointer(&_V10_Dpair_D1949, VPOINTER_PAIR);
  _V10_Dpair_D1950.rest = VNULL;
  _V10_Dpair_D1949.first = _V0_Mk;
  _V10_Dpair_D1949.rest = VEncodePointer(&_V10_Dpair_D1948, VPOINTER_PAIR);
  _V10_Dpair_D1948.first = _V0kk_D57;
  _V10_Dpair_D1948.rest = VNULL;
  _V10_Dpair_D1947.first = VEncodePointer(&_V10_Dpair_D1946, VPOINTER_PAIR);
  _V10_Dpair_D1947.rest = VEncodePointer(&_V10_Dpair_D1937, VPOINTER_PAIR);
  _V10_Dpair_D1946.first = VEncodeBool(false);
  _V10_Dpair_D1946.rest = VEncodePointer(&_V10_Dpair_D1945, VPOINTER_PAIR);
  _V10_Dpair_D1945.first = VEncodePointer(&_V10_Dpair_D1944, VPOINTER_PAIR);
  _V10_Dpair_D1945.rest = VNULL;
  _V10_Dpair_D1944.first = _V0_Mk;
  _V10_Dpair_D1944.rest = VEncodePointer(&_V10_Dpair_D1943, VPOINTER_PAIR);
  _V10_Dpair_D1943.first = _V0e;
  _V10_Dpair_D1943.rest = VNULL;
  _V10_Dpair_D1941.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1941.rest = VEncodePointer(&_V10_Dpair_D1940, VPOINTER_PAIR);
  _V10_Dpair_D1940.first = VEncodePointer(&_V10_Dpair_D1939, VPOINTER_PAIR);
  _V10_Dpair_D1940.rest = VNULL;
  _V10_Dpair_D1939.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1939.rest = VEncodePointer(&_V10_Dpair_D1936, VPOINTER_PAIR);
  _V10_Dpair_D1938.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1938.rest = VEncodePointer(&_V10_Dpair_D1937, VPOINTER_PAIR);
  _V10_Dpair_D1937.first = VEncodePointer(&_V10_Dpair_D1936, VPOINTER_PAIR);
  _V10_Dpair_D1937.rest = VNULL;
  _V10_Dpair_D1936.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1936.rest = VEncodePointer(&_V10_Dpair_D1933, VPOINTER_PAIR);
  _V10_Dpair_D1935.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1935.rest = VEncodePointer(&_V10_Dpair_D1934, VPOINTER_PAIR);
  _V10_Dpair_D1934.first = VEncodePointer(&_V10_Dpair_D1933, VPOINTER_PAIR);
  _V10_Dpair_D1934.rest = VNULL;
  _V10_Dpair_D1933.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1933.rest = VEncodePointer(&_V10_Dpair_D1932, VPOINTER_PAIR);
  _V10_Dpair_D1932.first = VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR);
  _V10_Dpair_D1932.rest = VEncodePointer(&_V10_Dpair_D1929, VPOINTER_PAIR);
  _V10_Dpair_D1931.first = VEncodePointer(&_V10_Dpair_D1927, VPOINTER_PAIR);
  _V10_Dpair_D1931.rest = VEncodePointer(&_V10_Dpair_D1930, VPOINTER_PAIR);
  _V10_Dpair_D1930.first = VEncodePointer(&_V10_Dpair_D1929, VPOINTER_PAIR);
  _V10_Dpair_D1930.rest = VNULL;
  _V10_Dpair_D1929.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1929.rest = VEncodePointer(&_V10_Dpair_D1928, VPOINTER_PAIR);
  _V10_Dpair_D1928.first = VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR);
  _V10_Dpair_D1928.rest = VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR);
  _V10_Dpair_D1927.first = VEncodePointer(&_V10_Dpair_D1923, VPOINTER_PAIR);
  _V10_Dpair_D1927.rest = VEncodePointer(&_V10_Dpair_D1926, VPOINTER_PAIR);
  _V10_Dpair_D1926.first = VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR);
  _V10_Dpair_D1926.rest = VNULL;
  _V10_Dpair_D1925.first = _V0_Mk;
  _V10_Dpair_D1925.rest = VEncodePointer(&_V10_Dpair_D1924, VPOINTER_PAIR);
  _V10_Dpair_D1924.first = _V0rest;
  _V10_Dpair_D1924.rest = VNULL;
  _V10_Dpair_D1923.first = _V0vanity;
  _V10_Dpair_D1923.rest = VEncodePointer(&_V10_Dpair_D1922, VPOINTER_PAIR);
  _V10_Dpair_D1922.first = _V0compiler;
  _V10_Dpair_D1922.rest = VEncodePointer(&_V10_Dpair_D1921, VPOINTER_PAIR);
  _V10_Dpair_D1921.first = _V0bytecode;
  _V10_Dpair_D1921.rest = VEncodePointer(&_V10_Dpair_D1920, VPOINTER_PAIR);
  _V10_Dpair_D1920.first = _V0process__fun__case;
  _V10_Dpair_D1920.rest = VEncodePointer(&_V10_Dpair_D1919, VPOINTER_PAIR);
  _V10_Dpair_D1919.first = _V10_Dloop_D252;
  _V10_Dpair_D1919.rest = VNULL;
  _V10_Dpair_D1918.first = VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR);
  _V10_Dpair_D1918.rest = VEncodePointer(&_V10_Dpair_D1917, VPOINTER_PAIR);
  _V10_Dpair_D1917.first = VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR);
  _V10_Dpair_D1917.rest = VNULL;
  _V10_Dpair_D1916.first = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1916.rest = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D1915.first = VEncodeBool(false);
  _V10_Dpair_D1915.rest = VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR);
  _V10_Dpair_D1914.first = VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR);
  _V10_Dpair_D1914.rest = VNULL;
  _V10_Dpair_D1913.first = _V0error__label;
  _V10_Dpair_D1913.rest = VNULL;
  _V10_Dpair_D1912.first = VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR);
  _V10_Dpair_D1912.rest = VEncodePointer(&_V10_Dpair_D1911, VPOINTER_PAIR);
  _V10_Dpair_D1911.first = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D1911.rest = VNULL;
  _V10_Dpair_D1910.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1910.rest = VEncodePointer(&_V10_Dpair_D1907, VPOINTER_PAIR);
  _V10_Dpair_D1909.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1909.rest = VEncodePointer(&_V10_Dpair_D1908, VPOINTER_PAIR);
  _V10_Dpair_D1908.first = VEncodePointer(&_V10_Dpair_D1907, VPOINTER_PAIR);
  _V10_Dpair_D1908.rest = VNULL;
  _V10_Dpair_D1907.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1907.rest = VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR);
  _V10_Dpair_D1906.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1906.rest = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1905.first = VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR);
  _V10_Dpair_D1905.rest = VNULL;
  _V10_Dpair_D1904.first = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1904.rest = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1903.first = VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR);
  _V10_Dpair_D1903.rest = VEncodePointer(&_V10_Dpair_D1902, VPOINTER_PAIR);
  _V10_Dpair_D1902.first = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1902.rest = VNULL;
  _V10_Dpair_D1901.first = VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR);
  _V10_Dpair_D1901.rest = VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR);
  _V10_Dpair_D1900.first = VEncodeBool(false);
  _V10_Dpair_D1900.rest = VEncodePointer(&_V10_Dpair_D1899, VPOINTER_PAIR);
  _V10_Dpair_D1899.first = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1899.rest = VNULL;
  _V10_Dpair_D1898.first = _V0cases;
  _V10_Dpair_D1898.rest = VNULL;
  _V10_Dpair_D1897.first = VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR);
  _V10_Dpair_D1897.rest = VEncodePointer(&_V10_Dpair_D1896, VPOINTER_PAIR);
  _V10_Dpair_D1896.first = VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR);
  _V10_Dpair_D1896.rest = VNULL;
  _V10_Dpair_D1895.first = VEncodePointer(&_V10_Dpair_D1888, VPOINTER_PAIR);
  _V10_Dpair_D1895.rest = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1894.first = VEncodeBool(false);
  _V10_Dpair_D1894.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1893.first = VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR);
  _V10_Dpair_D1893.rest = VNULL;
  _V10_Dpair_D1892.first = _V0debug__info;
  _V10_Dpair_D1892.rest = VNULL;
  _V10_Dpair_D1891.first = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1891.rest = VEncodePointer(&_V10_Dpair_D1886, VPOINTER_PAIR);
  _V10_Dpair_D1890.first = VEncodeBool(false);
  _V10_Dpair_D1890.rest = VEncodePointer(&_V10_Dpair_D1889, VPOINTER_PAIR);
  _V10_Dpair_D1889.first = VEncodePointer(&_V10_Dpair_D1888, VPOINTER_PAIR);
  _V10_Dpair_D1889.rest = VNULL;
  _V10_Dpair_D1888.first = _V0name;
  _V10_Dpair_D1888.rest = VNULL;
  _V10_Dpair_D1887.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1887.rest = VEncodePointer(&_V10_Dpair_D1886, VPOINTER_PAIR);
  _V10_Dpair_D1886.first = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1886.rest = VNULL;
  _V10_Dpair_D1885.first = VEncodePointer(&_V10_Dpair_D1884, VPOINTER_PAIR);
  _V10_Dpair_D1885.rest = VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR);
  _V10_Dpair_D1884.first = _V0name;
  _V10_Dpair_D1884.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1883.first = VEncodePointer(&_V10_Dpair_D1882, VPOINTER_PAIR);
  _V10_Dpair_D1883.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1882.first = VEncodePointer(&_V10_Dpair_D1881, VPOINTER_PAIR);
  _V10_Dpair_D1882.rest = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1881.first = _V0vanity;
  _V10_Dpair_D1881.rest = VEncodePointer(&_V10_Dpair_D1880, VPOINTER_PAIR);
  _V10_Dpair_D1880.first = _V0compiler;
  _V10_Dpair_D1880.rest = VEncodePointer(&_V10_Dpair_D1879, VPOINTER_PAIR);
  _V10_Dpair_D1879.first = _V0bytecode;
  _V10_Dpair_D1879.rest = VEncodePointer(&_V10_Dpair_D1878, VPOINTER_PAIR);
  _V10_Dpair_D1878.first = _V0process__fun__case;
  _V10_Dpair_D1878.rest = VNULL;
  _V10_Dpair_D1877.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1877.rest = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1876.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1876.rest = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1875.first = VEncodePointer(&_V10_Dpair_D1874, VPOINTER_PAIR);
  _V10_Dpair_D1875.rest = VNULL;
  _V10_Dpair_D1874.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1874.rest = VEncodePointer(&_V10_Dpair_D1873, VPOINTER_PAIR);
  _V10_Dpair_D1873.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1873.rest = VEncodePointer(&_V10_Dpair_D1872, VPOINTER_PAIR);
  _V10_Dpair_D1872.first = VEncodePointer(&_V10_Dpair_D1870, VPOINTER_PAIR);
  _V10_Dpair_D1872.rest = VEncodePointer(&_V10_Dpair_D1871, VPOINTER_PAIR);
  _V10_Dpair_D1871.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1871.rest = VEncodePointer(&_V10_Dpair_D1867, VPOINTER_PAIR);
  _V10_Dpair_D1870.first = _V0expr_D93;
  _V10_Dpair_D1870.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1869.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1869.rest = VEncodePointer(&_V10_Dpair_D1868, VPOINTER_PAIR);
  _V10_Dpair_D1868.first = VEncodePointer(&_V10_Dpair_D1867, VPOINTER_PAIR);
  _V10_Dpair_D1868.rest = VNULL;
  _V10_Dpair_D1867.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1867.rest = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1866.first = VEncodePointer(&_V10_Dpair_D1853, VPOINTER_PAIR);
  _V10_Dpair_D1866.rest = VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR);
  _V10_Dpair_D1865.first = VEncodePointer(&_V10_Dpair_D1854, VPOINTER_PAIR);
  _V10_Dpair_D1865.rest = VEncodePointer(&_V10_Dpair_D1864, VPOINTER_PAIR);
  _V10_Dpair_D1864.first = VEncodePointer(&_V10_Dpair_D1856, VPOINTER_PAIR);
  _V10_Dpair_D1864.rest = VEncodePointer(&_V10_Dpair_D1863, VPOINTER_PAIR);
  _V10_Dpair_D1863.first = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1863.rest = VEncodePointer(&_V10_Dpair_D1862, VPOINTER_PAIR);
  _V10_Dpair_D1862.first = VEncodePointer(&_V10_Dpair_D1860, VPOINTER_PAIR);
  _V10_Dpair_D1862.rest = VEncodePointer(&_V10_Dpair_D1861, VPOINTER_PAIR);
  _V10_Dpair_D1861.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1861.rest = VEncodePointer(&_V10_Dpair_D1849, VPOINTER_PAIR);
  _V10_Dpair_D1860.first = _V0name;
  _V10_Dpair_D1860.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1859.first = _V0expr_D88;
  _V10_Dpair_D1859.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1858.first = _V0check__args_Q;
  _V10_Dpair_D1858.rest = VEncodePointer(&_V10_Dpair_D1857, VPOINTER_PAIR);
  _V10_Dpair_D1857.first = _V0expr_D89;
  _V10_Dpair_D1857.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1856.first = _V0debug__info;
  _V10_Dpair_D1856.rest = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1855.first = _V0expr_D90;
  _V10_Dpair_D1855.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1854.first = _V0expr_D91;
  _V10_Dpair_D1854.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1853.first = _V0num;
  _V10_Dpair_D1853.rest = VEncodePointer(&_V10_Dpair_D1852, VPOINTER_PAIR);
  _V10_Dpair_D1852.first = _V0expr_D92;
  _V10_Dpair_D1852.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1851.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1851.rest = VEncodePointer(&_V10_Dpair_D1850, VPOINTER_PAIR);
  _V10_Dpair_D1850.first = VEncodePointer(&_V10_Dpair_D1849, VPOINTER_PAIR);
  _V10_Dpair_D1850.rest = VNULL;
  _V10_Dpair_D1849.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1849.rest = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1848.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1848.rest = VEncodePointer(&_V10_Dpair_D1846, VPOINTER_PAIR);
  _V10_Dpair_D1847.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1847.rest = VEncodePointer(&_V10_Dpair_D1846, VPOINTER_PAIR);
  _V10_Dpair_D1846.first = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1846.rest = VNULL;
  _V10_Dpair_D1845.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1845.rest = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1844.first = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1844.rest = VEncodePointer(&_V10_Dpair_D1843, VPOINTER_PAIR);
  _V10_Dpair_D1843.first = VEncodePointer(&_V10_Dpair_D1830, VPOINTER_PAIR);
  _V10_Dpair_D1843.rest = VEncodePointer(&_V10_Dpair_D1842, VPOINTER_PAIR);
  _V10_Dpair_D1842.first = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1842.rest = VEncodePointer(&_V10_Dpair_D1841, VPOINTER_PAIR);
  _V10_Dpair_D1841.first = VEncodePointer(&_V10_Dpair_D1833, VPOINTER_PAIR);
  _V10_Dpair_D1841.rest = VEncodePointer(&_V10_Dpair_D1840, VPOINTER_PAIR);
  _V10_Dpair_D1840.first = VEncodePointer(&_V10_Dpair_D1835, VPOINTER_PAIR);
  _V10_Dpair_D1840.rest = VEncodePointer(&_V10_Dpair_D1839, VPOINTER_PAIR);
  _V10_Dpair_D1839.first = VEncodePointer(&_V10_Dpair_D1837, VPOINTER_PAIR);
  _V10_Dpair_D1839.rest = VEncodePointer(&_V10_Dpair_D1838, VPOINTER_PAIR);
  _V10_Dpair_D1838.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1838.rest = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1837.first = _V0name;
  _V10_Dpair_D1837.rest = VEncodePointer(&_V10_Dpair_D1836, VPOINTER_PAIR);
  _V10_Dpair_D1836.first = _V0expr_D82;
  _V10_Dpair_D1836.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1835.first = _V0check__args_Q;
  _V10_Dpair_D1835.rest = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1834.first = _V0expr_D83;
  _V10_Dpair_D1834.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1833.first = _V0debug__info;
  _V10_Dpair_D1833.rest = VEncodePointer(&_V10_Dpair_D1832, VPOINTER_PAIR);
  _V10_Dpair_D1832.first = _V0expr_D84;
  _V10_Dpair_D1832.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1831.first = _V0expr_D85;
  _V10_Dpair_D1831.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1830.first = _V0num;
  _V10_Dpair_D1830.rest = VEncodePointer(&_V10_Dpair_D1829, VPOINTER_PAIR);
  _V10_Dpair_D1829.first = _V0expr_D86;
  _V10_Dpair_D1829.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1828.first = _V0body;
  _V10_Dpair_D1828.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1827.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1827.rest = VEncodePointer(&_V10_Dpair_D1826, VPOINTER_PAIR);
  _V10_Dpair_D1826.first = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1826.rest = VNULL;
  _V10_Dpair_D1825.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1825.rest = VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR);
  _V10_Dpair_D1824.first = VEncodePointer(&_V10_Dpair_D1818, VPOINTER_PAIR);
  _V10_Dpair_D1824.rest = VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR);
  _V10_Dpair_D1823.first = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1823.rest = VEncodePointer(&_V10_Dpair_D1822, VPOINTER_PAIR);
  _V10_Dpair_D1822.first = VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR);
  _V10_Dpair_D1822.rest = VNULL;
  _V10_Dpair_D1821.first = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1821.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1820.first = VEncodeBool(false);
  _V10_Dpair_D1820.rest = VEncodePointer(&_V10_Dpair_D1819, VPOINTER_PAIR);
  _V10_Dpair_D1819.first = VEncodePointer(&_V10_Dpair_D1818, VPOINTER_PAIR);
  _V10_Dpair_D1819.rest = VNULL;
  _V10_Dpair_D1818.first = _V0_Mk;
  _V10_Dpair_D1818.rest = VEncodePointer(&_V10_Dpair_D1817, VPOINTER_PAIR);
  _V10_Dpair_D1817.first = _V0kk_D79;
  _V10_Dpair_D1817.rest = VNULL;
  _V10_Dpair_D1816.first = VEncodePointer(&_V10_Dpair_D1815, VPOINTER_PAIR);
  _V10_Dpair_D1816.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1815.first = VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR);
  _V10_Dpair_D1815.rest = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1814.first = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1814.rest = VNULL;
  _V10_Dpair_D1813.first = _V0_Mk;
  _V10_Dpair_D1813.rest = VEncodePointer(&_V10_Dpair_D1812, VPOINTER_PAIR);
  _V10_Dpair_D1812.first = _V0fun;
  _V10_Dpair_D1812.rest = VNULL;
  _V10_Dpair_D1811.first = _V0vanity;
  _V10_Dpair_D1811.rest = VEncodePointer(&_V10_Dpair_D1810, VPOINTER_PAIR);
  _V10_Dpair_D1810.first = _V0compiler;
  _V10_Dpair_D1810.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1809.first = _V0bytecode;
  _V10_Dpair_D1809.rest = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1808.first = _V0process__function;
  _V10_Dpair_D1808.rest = VNULL;
  _V10_Dpair_D1807.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1807.rest = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1806.first = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1806.rest = VNULL;
  _V10_Dpair_D1805.first = VEncodePointer(&_V10_Dpair_D1801, VPOINTER_PAIR);
  _V10_Dpair_D1805.rest = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1804.first = VEncodePointer(&_V10_Dpair_D1803, VPOINTER_PAIR);
  _V10_Dpair_D1804.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1803.first = VEncodeBool(false);
  _V10_Dpair_D1803.rest = VEncodePointer(&_V10_Dpair_D1802, VPOINTER_PAIR);
  _V10_Dpair_D1802.first = VEncodePointer(&_V10_Dpair_D1801, VPOINTER_PAIR);
  _V10_Dpair_D1802.rest = VNULL;
  _V10_Dpair_D1801.first = _V0_Mk;
  _V10_Dpair_D1801.rest = VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR);
  _V10_Dpair_D1800.first = _V0arg;
  _V10_Dpair_D1800.rest = VNULL;
  _V10_Dpair_D1799.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1799.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1798.first = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1798.rest = VNULL;
  _V10_Dpair_D1797.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1797.rest = VEncodePointer(&_V10_Dpair_D1796, VPOINTER_PAIR);
  _V10_Dpair_D1796.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1796.rest = VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR);
  _V10_Dpair_D1795.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1795.rest = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1794.first = VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR);
  _V10_Dpair_D1794.rest = VNULL;
  _V10_Dpair_D1793.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1793.rest = VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR);
  _V10_Dpair_D1792.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1792.rest = VEncodePointer(&_V10_Dpair_D1791, VPOINTER_PAIR);
  _V10_Dpair_D1791.first = VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR);
  _V10_Dpair_D1791.rest = VNULL;
  _V10_Dpair_D1790.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1790.rest = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1789.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1789.rest = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1788.first = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1788.rest = VNULL;
  _V10_Dpair_D1787.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1787.rest = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1786.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1786.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1785.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1785.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1784.first = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1784.rest = VNULL;
  _V10_Dpair_D1783.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1783.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1782.first = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1782.rest = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1781.first = VEncodePointer(&_V10_Dpair_D1780, VPOINTER_PAIR);
  _V10_Dpair_D1781.rest = VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR);
  _V10_Dpair_D1780.first = VEncodeBool(false);
  _V10_Dpair_D1780.rest = VEncodePointer(&_V10_Dpair_D1779, VPOINTER_PAIR);
  _V10_Dpair_D1779.first = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1779.rest = VNULL;
  _V10_Dpair_D1778.first = _V0_Mk;
  _V10_Dpair_D1778.rest = VEncodePointer(&_V10_Dpair_D1777, VPOINTER_PAIR);
  _V10_Dpair_D1777.first = _V0tail__expr;
  _V10_Dpair_D1777.rest = VEncodePointer(&_V10_Dpair_D1776, VPOINTER_PAIR);
  _V10_Dpair_D1776.first = _V0args;
  _V10_Dpair_D1776.rest = VNULL;
  _V10_Dpair_D1775.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1775.rest = VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR);
  _V10_Dpair_D1774.first = VEncodePointer(&_V10_Dpair_D1773, VPOINTER_PAIR);
  _V10_Dpair_D1774.rest = VNULL;
  _V10_Dpair_D1773.first = VEncodePointer(&_V10_Dpair_D1771, VPOINTER_PAIR);
  _V10_Dpair_D1773.rest = VEncodePointer(&_V10_Dpair_D1772, VPOINTER_PAIR);
  _V10_Dpair_D1772.first = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1772.rest = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1771.first = _V0args;
  _V10_Dpair_D1771.rest = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D1770.first = VEncodePointer(&_V10_Dpair_D1769, VPOINTER_PAIR);
  _V10_Dpair_D1770.rest = VEncodePointer(&_V10_Dpair_D1764, VPOINTER_PAIR);
  _V10_Dpair_D1769.first = VEncodeBool(false);
  _V10_Dpair_D1769.rest = VEncodePointer(&_V10_Dpair_D1768, VPOINTER_PAIR);
  _V10_Dpair_D1768.first = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1768.rest = VNULL;
  _V10_Dpair_D1767.first = _V0_Mk;
  _V10_Dpair_D1767.rest = VEncodePointer(&_V10_Dpair_D1766, VPOINTER_PAIR);
  _V10_Dpair_D1766.first = _V0kk_D104;
  _V10_Dpair_D1766.rest = VNULL;
  _V10_Dpair_D1765.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1765.rest = VEncodePointer(&_V10_Dpair_D1764, VPOINTER_PAIR);
  _V10_Dpair_D1764.first = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1764.rest = VNULL;
  _V10_Dpair_D1763.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1763.rest = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1762.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1762.rest = VEncodePointer(&_V10_Dpair_D1761, VPOINTER_PAIR);
  _V10_Dpair_D1761.first = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1761.rest = VNULL;
  _V10_Dpair_D1760.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1760.rest = VEncodePointer(&_V10_Dpair_D1759, VPOINTER_PAIR);
  _V10_Dpair_D1759.first = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1759.rest = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1758.first = VEncodePointer(&_V10_Dpair_D1754, VPOINTER_PAIR);
  _V10_Dpair_D1758.rest = VEncodePointer(&_V10_Dpair_D1757, VPOINTER_PAIR);
  _V10_Dpair_D1757.first = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1757.rest = VNULL;
  _V10_Dpair_D1756.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1756.rest = VEncodePointer(&_V10_Dpair_D1755, VPOINTER_PAIR);
  _V10_Dpair_D1755.first = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1755.rest = VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR);
  _V10_Dpair_D1754.first = VEncodePointer(&_V10_Dpair_D1749, VPOINTER_PAIR);
  _V10_Dpair_D1754.rest = VEncodePointer(&_V10_Dpair_D1753, VPOINTER_PAIR);
  _V10_Dpair_D1753.first = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1753.rest = VNULL;
  _V10_Dpair_D1752.first = _V0_Mk;
  _V10_Dpair_D1752.rest = VEncodePointer(&_V10_Dpair_D1751, VPOINTER_PAIR);
  _V10_Dpair_D1751.first = _V0expr_D105;
  _V10_Dpair_D1751.rest = VEncodePointer(&_V10_Dpair_D1750, VPOINTER_PAIR);
  _V10_Dpair_D1750.first = _V0args_D102;
  _V10_Dpair_D1750.rest = VNULL;
  _V10_Dpair_D1749.first = _V0vanity;
  _V10_Dpair_D1749.rest = VEncodePointer(&_V10_Dpair_D1748, VPOINTER_PAIR);
  _V10_Dpair_D1748.first = _V0compiler;
  _V10_Dpair_D1748.rest = VEncodePointer(&_V10_Dpair_D1747, VPOINTER_PAIR);
  _V10_Dpair_D1747.first = _V0bytecode;
  _V10_Dpair_D1747.rest = VEncodePointer(&_V10_Dpair_D1746, VPOINTER_PAIR);
  _V10_Dpair_D1746.first = _V0process__foreign__function;
  _V10_Dpair_D1746.rest = VEncodePointer(&_V10_Dpair_D1745, VPOINTER_PAIR);
  _V10_Dpair_D1745.first = _V10_Dloop_D211;
  _V10_Dpair_D1745.rest = VNULL;
  _V10_Dpair_D1744.first = VEncodePointer(&_V10_Dpair_D1741, VPOINTER_PAIR);
  _V10_Dpair_D1744.rest = VEncodePointer(&_V10_Dpair_D1743, VPOINTER_PAIR);
  _V10_Dpair_D1743.first = VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR);
  _V10_Dpair_D1743.rest = VNULL;
  _V10_Dpair_D1742.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1742.rest = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1741.first = VEncodeBool(false);
  _V10_Dpair_D1741.rest = VEncodePointer(&_V10_Dpair_D1740, VPOINTER_PAIR);
  _V10_Dpair_D1740.first = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1740.rest = VNULL;
  _V10_Dpair_D1739.first = _V0_Mk;
  _V10_Dpair_D1739.rest = VEncodePointer(&_V10_Dpair_D1738, VPOINTER_PAIR);
  _V10_Dpair_D1738.first = _V0kk_D103;
  _V10_Dpair_D1738.rest = VNULL;
  _V10_Dpair_D1737.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1737.rest = VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR);
  _V10_Dpair_D1736.first = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1736.rest = VNULL;
  _V10_Dpair_D1735.first = VEncodePointer(&_V10_Dpair_D1722, VPOINTER_PAIR);
  _V10_Dpair_D1735.rest = VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR);
  _V10_Dpair_D1734.first = VEncodePointer(&_V10_Dpair_D1724, VPOINTER_PAIR);
  _V10_Dpair_D1734.rest = VEncodePointer(&_V10_Dpair_D1733, VPOINTER_PAIR);
  _V10_Dpair_D1733.first = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1733.rest = VEncodePointer(&_V10_Dpair_D1732, VPOINTER_PAIR);
  _V10_Dpair_D1732.first = VEncodePointer(&_V10_Dpair_D1728, VPOINTER_PAIR);
  _V10_Dpair_D1732.rest = VEncodePointer(&_V10_Dpair_D1731, VPOINTER_PAIR);
  _V10_Dpair_D1731.first = VEncodePointer(&_V10_Dpair_D1729, VPOINTER_PAIR);
  _V10_Dpair_D1731.rest = VEncodePointer(&_V10_Dpair_D1730, VPOINTER_PAIR);
  _V10_Dpair_D1730.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1730.rest = VEncodePointer(&_V10_Dpair_D1718, VPOINTER_PAIR);
  _V10_Dpair_D1729.first = _V0expr_D97;
  _V10_Dpair_D1729.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1728.first = _V0lang;
  _V10_Dpair_D1728.rest = VEncodePointer(&_V10_Dpair_D1727, VPOINTER_PAIR);
  _V10_Dpair_D1727.first = _V0expr_D98;
  _V10_Dpair_D1727.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1726.first = _V0decl;
  _V10_Dpair_D1726.rest = VEncodePointer(&_V10_Dpair_D1725, VPOINTER_PAIR);
  _V10_Dpair_D1725.first = _V0expr_D99;
  _V10_Dpair_D1725.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1724.first = _V0ret;
  _V10_Dpair_D1724.rest = VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR);
  _V10_Dpair_D1723.first = _V0expr_D100;
  _V10_Dpair_D1723.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1722.first = _V0name;
  _V10_Dpair_D1722.rest = VEncodePointer(&_V10_Dpair_D1721, VPOINTER_PAIR);
  _V10_Dpair_D1721.first = _V0expr_D101;
  _V10_Dpair_D1721.rest = VNULL;
  _V10_Dpair_D1720.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1720.rest = VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR);
  _V10_Dpair_D1719.first = VEncodePointer(&_V10_Dpair_D1718, VPOINTER_PAIR);
  _V10_Dpair_D1719.rest = VNULL;
  _V10_Dpair_D1718.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1718.rest = VEncodePointer(&_V10_Dpair_D1717, VPOINTER_PAIR);
  _V10_Dpair_D1717.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1717.rest = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1716.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1716.rest = VEncodePointer(&_V10_Dpair_D1715, VPOINTER_PAIR);
  _V10_Dpair_D1715.first = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1715.rest = VNULL;
  _V10_Dpair_D1714.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1714.rest = VEncodePointer(&_V10_Dpair_D1713, VPOINTER_PAIR);
  _V10_Dpair_D1713.first = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1713.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1712.first = VEncodePointer(&_V10_Dpair_D1710, VPOINTER_PAIR);
  _V10_Dpair_D1712.rest = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D1711.first = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1711.rest = VNULL;
  _V10_Dpair_D1710.first = VEncodeBool(false);
  _V10_Dpair_D1710.rest = VEncodePointer(&_V10_Dpair_D1709, VPOINTER_PAIR);
  _V10_Dpair_D1709.first = VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR);
  _V10_Dpair_D1709.rest = VNULL;
  _V10_Dpair_D1708.first = _V0_Mk;
  _V10_Dpair_D1708.rest = VEncodePointer(&_V10_Dpair_D1707, VPOINTER_PAIR);
  _V10_Dpair_D1707.first = _V0kk_D94;
  _V10_Dpair_D1707.rest = VNULL;
  _V10_Dpair_D1706.first = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1706.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1705.first = VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR);
  _V10_Dpair_D1705.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1704.first = _V0vanity;
  _V10_Dpair_D1704.rest = VEncodePointer(&_V10_Dpair_D1703, VPOINTER_PAIR);
  _V10_Dpair_D1703.first = _V0compiler;
  _V10_Dpair_D1703.rest = VEncodePointer(&_V10_Dpair_D1702, VPOINTER_PAIR);
  _V10_Dpair_D1702.first = _V0bytecode;
  _V10_Dpair_D1702.rest = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1701.first = _V0process__foreign__function;
  _V10_Dpair_D1701.rest = VNULL;
  _V10_Dpair_D1699.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1699.rest = VEncodePointer(&_V10_Dpair_D1697, VPOINTER_PAIR);
  _V10_Dpair_D1698.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1698.rest = VEncodePointer(&_V10_Dpair_D1697, VPOINTER_PAIR);
  _V10_Dpair_D1697.first = VEncodePointer(&_V10_Dpair_D1696, VPOINTER_PAIR);
  _V10_Dpair_D1697.rest = VNULL;
  _V10_Dpair_D1696.first = VEncodePointer(&_V10_Dpair_D1689, VPOINTER_PAIR);
  _V10_Dpair_D1696.rest = VEncodePointer(&_V10_Dpair_D1695, VPOINTER_PAIR);
  _V10_Dpair_D1695.first = VEncodePointer(&_V10_Dpair_D1691, VPOINTER_PAIR);
  _V10_Dpair_D1695.rest = VEncodePointer(&_V10_Dpair_D1694, VPOINTER_PAIR);
  _V10_Dpair_D1694.first = VEncodePointer(&_V10_Dpair_D1692, VPOINTER_PAIR);
  _V10_Dpair_D1694.rest = VEncodePointer(&_V10_Dpair_D1693, VPOINTER_PAIR);
  _V10_Dpair_D1693.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1693.rest = VEncodePointer(&_V10_Dpair_D1686, VPOINTER_PAIR);
  _V10_Dpair_D1692.first = _V0expr_D111;
  _V10_Dpair_D1692.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1691.first = _V0f;
  _V10_Dpair_D1691.rest = VEncodePointer(&_V10_Dpair_D1690, VPOINTER_PAIR);
  _V10_Dpair_D1690.first = _V0expr_D112;
  _V10_Dpair_D1690.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1689.first = _V0v;
  _V10_Dpair_D1689.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1688.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1688.rest = VEncodePointer(&_V10_Dpair_D1687, VPOINTER_PAIR);
  _V10_Dpair_D1687.first = VEncodePointer(&_V10_Dpair_D1686, VPOINTER_PAIR);
  _V10_Dpair_D1687.rest = VNULL;
  _V10_Dpair_D1686.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1686.rest = VEncodePointer(&_V10_Dpair_D1685, VPOINTER_PAIR);
  _V10_Dpair_D1685.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1685.rest = VEncodePointer(&_V10_Dpair_D1682, VPOINTER_PAIR);
  _V10_Dpair_D1684.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1684.rest = VEncodePointer(&_V10_Dpair_D1683, VPOINTER_PAIR);
  _V10_Dpair_D1683.first = VEncodePointer(&_V10_Dpair_D1682, VPOINTER_PAIR);
  _V10_Dpair_D1683.rest = VNULL;
  _V10_Dpair_D1682.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1682.rest = VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR);
  _V10_Dpair_D1681.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1681.rest = VEncodePointer(&_V10_Dpair_D1679, VPOINTER_PAIR);
  _V10_Dpair_D1680.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1680.rest = VEncodePointer(&_V10_Dpair_D1679, VPOINTER_PAIR);
  _V10_Dpair_D1679.first = VEncodePointer(&_V10_Dpair_D1678, VPOINTER_PAIR);
  _V10_Dpair_D1679.rest = VNULL;
  _V10_Dpair_D1678.first = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1678.rest = VEncodePointer(&_V10_Dpair_D1677, VPOINTER_PAIR);
  _V10_Dpair_D1677.first = VEncodePointer(&_V10_Dpair_D1675, VPOINTER_PAIR);
  _V10_Dpair_D1677.rest = VEncodePointer(&_V10_Dpair_D1676, VPOINTER_PAIR);
  _V10_Dpair_D1676.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1676.rest = VEncodePointer(&_V10_Dpair_D1671, VPOINTER_PAIR);
  _V10_Dpair_D1675.first = _V0expr_D109;
  _V10_Dpair_D1675.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1674.first = _V0d;
  _V10_Dpair_D1674.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1673.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1673.rest = VEncodePointer(&_V10_Dpair_D1672, VPOINTER_PAIR);
  _V10_Dpair_D1672.first = VEncodePointer(&_V10_Dpair_D1671, VPOINTER_PAIR);
  _V10_Dpair_D1672.rest = VNULL;
  _V10_Dpair_D1671.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1671.rest = VEncodePointer(&_V10_Dpair_D1670, VPOINTER_PAIR);
  _V10_Dpair_D1670.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1670.rest = VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR);
  _V10_Dpair_D1669.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1669.rest = VEncodePointer(&_V10_Dpair_D1668, VPOINTER_PAIR);
  _V10_Dpair_D1668.first = VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR);
  _V10_Dpair_D1668.rest = VNULL;
  _V10_Dpair_D1667.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1667.rest = VEncodePointer(&_V10_Dpair_D1666, VPOINTER_PAIR);
  _V10_Dpair_D1666.first = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1666.rest = VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR);
  _V10_Dpair_D1665.first = VEncodePointer(&_V10_Dpair_D1662, VPOINTER_PAIR);
  _V10_Dpair_D1665.rest = VEncodePointer(&_V10_Dpair_D1664, VPOINTER_PAIR);
  _V10_Dpair_D1664.first = VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR);
  _V10_Dpair_D1664.rest = VNULL;
  _V10_Dpair_D1663.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1663.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1662.first = VEncodeBool(false);
  _V10_Dpair_D1662.rest = VEncodePointer(&_V10_Dpair_D1661, VPOINTER_PAIR);
  _V10_Dpair_D1661.first = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1661.rest = VNULL;
  _V10_Dpair_D1660.first = _V0_Mk;
  _V10_Dpair_D1660.rest = VEncodePointer(&_V10_Dpair_D1659, VPOINTER_PAIR);
  _V10_Dpair_D1659.first = _V0kk_D106;
  _V10_Dpair_D1659.rest = VNULL;
  _V10_Dpair_D1658.first = VEncodePointer(&_V10_Dpair_D1657, VPOINTER_PAIR);
  _V10_Dpair_D1658.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1657.first = VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR);
  _V10_Dpair_D1657.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1656.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1656.rest = VNULL;
  _V10_Dpair_D1655.first = _V0_Mk;
  _V10_Dpair_D1655.rest = VEncodePointer(&_V10_Dpair_D1654, VPOINTER_PAIR);
  _V10_Dpair_D1654.first = _V0declare;
  _V10_Dpair_D1654.rest = VNULL;
  _V10_Dpair_D1653.first = _V0vanity;
  _V10_Dpair_D1653.rest = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1652.first = _V0compiler;
  _V10_Dpair_D1652.rest = VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR);
  _V10_Dpair_D1651.first = _V0bytecode;
  _V10_Dpair_D1651.rest = VEncodePointer(&_V10_Dpair_D1650, VPOINTER_PAIR);
  _V10_Dpair_D1650.first = _V0process__declare;
  _V10_Dpair_D1650.rest = VNULL;
  _V10_Dpair_D1649.first = _V0toplevel;
  _V10_Dpair_D1649.rest = VNULL;
  _V10_Dpair_D1648.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1648.rest = VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR);
  _V10_Dpair_D1647.first = VEncodePointer(&_V10_Dpair_D1646, VPOINTER_PAIR);
  _V10_Dpair_D1647.rest = VNULL;
  _V10_Dpair_D1646.first = VEncodePointer(&_V10_Dpair_D1644, VPOINTER_PAIR);
  _V10_Dpair_D1646.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1645.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1645.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1644.first = _V0_Mx;
  _V10_Dpair_D1644.rest = VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR);
  _V10_Dpair_D1643.first = _V0_Mx;
  _V10_Dpair_D1643.rest = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1642.first = _V0_Mx;
  _V10_Dpair_D1642.rest = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1641.first = _V0_Mx;
  _V10_Dpair_D1641.rest = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D1640.first = VEncodePointer(&_V10_Dpair_D1639, VPOINTER_PAIR);
  _V10_Dpair_D1640.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1639.first = VEncodePointer(&_V10_Dpair_D1635, VPOINTER_PAIR);
  _V10_Dpair_D1639.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1638.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1638.rest = VNULL;
  _V10_Dpair_D1637.first = _V0_Mk;
  _V10_Dpair_D1637.rest = VEncodePointer(&_V10_Dpair_D1636, VPOINTER_PAIR);
  _V10_Dpair_D1636.first = _V0expr;
  _V10_Dpair_D1636.rest = VNULL;
  _V10_Dpair_D1635.first = _V0vanity;
  _V10_Dpair_D1635.rest = VEncodePointer(&_V10_Dpair_D1634, VPOINTER_PAIR);
  _V10_Dpair_D1634.first = _V0compiler;
  _V10_Dpair_D1634.rest = VEncodePointer(&_V10_Dpair_D1633, VPOINTER_PAIR);
  _V10_Dpair_D1633.first = _V0bytecode;
  _V10_Dpair_D1633.rest = VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR);
  _V10_Dpair_D1632.first = _V0process__toplevel;
  _V10_Dpair_D1632.rest = VNULL;
  _V10_Dpair_D1631.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1631.rest = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1630.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1630.rest = VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR);
  _V10_Dpair_D1629.first = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D1629.rest = VNULL;
  _V10_Dpair_D1628.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D1628.rest = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1627.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1627.rest = VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR);
  _V10_Dpair_D1626.first = VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR);
  _V10_Dpair_D1626.rest = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1625.first = _V0_Mx;
  _V10_Dpair_D1625.rest = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1624.first = VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR);
  _V10_Dpair_D1624.rest = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1623.first = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1623.rest = VNULL;
  _V10_Dpair_D1622.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1622.rest = VEncodePointer(&_V10_Dpair_D1621, VPOINTER_PAIR);
  _V10_Dpair_D1621.first = VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR);
  _V10_Dpair_D1621.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1620.first = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1620.rest = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1619.first = _V0vanity;
  _V10_Dpair_D1619.rest = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1618.first = _V0compiler;
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = _V0bytecode;
  _V10_Dpair_D1617.rest = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1616.first = _V0glue__bytecode;
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = _V10_Dloop_D183;
  _V10_Dpair_D1615.rest = VNULL;
  _V10_Dpair_D1614.first = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1613.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1613.rest = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1612.first = VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR);
  _V10_Dpair_D1612.rest = VNULL;
  _V10_Dpair_D1611.first = _V0_Mk;
  _V10_Dpair_D1611.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1610.first = _V0segments;
  _V10_Dpair_D1610.rest = VNULL;
  _V10_Dpair_D1609.first = _V0vanity;
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR);
  _V10_Dpair_D1608.first = _V0compiler;
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = _V0bytecode;
  _V10_Dpair_D1607.rest = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1606.first = _V0glue__bytecode;
  _V10_Dpair_D1606.rest = VNULL;
  _V10_Dpair_D1605.first = _V0label;
  _V10_Dpair_D1605.rest = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1604.first = _V0toplevel;
  _V10_Dpair_D1604.rest = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1603.first = _V0lambda;
  _V10_Dpair_D1603.rest = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1602.first = _V0lambda_P;
  _V10_Dpair_D1602.rest = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1601.first = _V0case__lambda;
  _V10_Dpair_D1601.rest = VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR);
  _V10_Dpair_D1600.first = _V0case__lambda_P;
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = _V0declare;
  _V10_Dpair_D1599.rest = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1598.first = _V0declare__foreign;
  _V10_Dpair_D1598.rest = VNULL;
  _V10_Dpair_D1597.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1597.rest = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1596.first = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1596.rest = VNULL;
  _V10_Dpair_D1595.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1595.rest = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1594.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1593.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1593.rest = VEncodePointer(&_V10_Dpair_D1592, VPOINTER_PAIR);
  _V10_Dpair_D1592.first = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1592.rest = VNULL;
  _V10_Dpair_D1591.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1591.rest = VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR);
  _V10_Dpair_D1590.first = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1590.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1589.first = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1589.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1588.first = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1588.rest = VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR);
  _V10_Dpair_D1587.first = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1587.rest = VNULL;
  _V10_Dpair_D1586.first = _V0_Mk;
  _V10_Dpair_D1586.rest = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1585.first = _V0line;
  _V10_Dpair_D1585.rest = VNULL;
  _V10_Dpair_D1584.first = _V0vanity;
  _V10_Dpair_D1584.rest = VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR);
  _V10_Dpair_D1583.first = _V0compiler;
  _V10_Dpair_D1583.rest = VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR);
  _V10_Dpair_D1582.first = _V0bytecode;
  _V10_Dpair_D1582.rest = VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR);
  _V10_Dpair_D1581.first = _V0write__bytecode__line;
  _V10_Dpair_D1581.rest = VNULL;
  _V10_Dpair_D1578.first = VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR);
  _V10_Dpair_D1578.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1577.first = VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR);
  _V10_Dpair_D1577.rest = VNULL;
  _V10_Dpair_D1576.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D1575.rest = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1574.first = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1574.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1573.first = _V0len;
  _V10_Dpair_D1573.rest = VNULL;
  _V10_Dpair_D1572.first = _V0loop;
  _V10_Dpair_D1572.rest = VNULL;
  _V10_Dpair_D1571.first = VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR);
  _V10_Dpair_D1571.rest = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1570.first = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1570.rest = VNULL;
  _V10_Dpair_D1569.first = _V0_Mk;
  _V10_Dpair_D1569.rest = VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR);
  _V10_Dpair_D1568.first = _V0i;
  _V10_Dpair_D1568.rest = VNULL;
  _V10_Dpair_D1567.first = _V0vanity;
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = _V0compiler;
  _V10_Dpair_D1566.rest = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1565.first = _V0bytecode;
  _V10_Dpair_D1565.rest = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1564.first = _V0write__bytecode;
  _V10_Dpair_D1564.rest = VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR);
  _V10_Dpair_D1563.first = _V10_Dloop_D179;
  _V10_Dpair_D1563.rest = VNULL;
  _V10_Dpair_D1562.first = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1562.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1561.first = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1561.rest = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1560.first = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1560.rest = VNULL;
  _V10_Dpair_D1559.first = _V0_Mk;
  _V10_Dpair_D1559.rest = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1558.first = _V0bytecode;
  _V10_Dpair_D1558.rest = VNULL;
  _V10_Dpair_D1557.first = _V0vanity;
  _V10_Dpair_D1557.rest = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1556.first = _V0compiler;
  _V10_Dpair_D1556.rest = VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR);
  _V10_Dpair_D1555.first = _V0bytecode;
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR);
  _V10_Dpair_D1554.first = _V0write__bytecode;
  _V10_Dpair_D1554.rest = VNULL;
  _V10_Dpair_D1553.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1553.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1552.first = VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR);
  _V10_Dpair_D1552.rest = VNULL;
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1550.rest = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1548.first = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1548.rest = VNULL;
  _V10_Dpair_D1547.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1547.rest = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1546.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1546.rest = VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR);
  _V10_Dpair_D1545.first = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1545.rest = VNULL;
  _V10_Dpair_D1544.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1544.rest = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1543.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1543.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1542.first = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1542.rest = VNULL;
  _V10_Dpair_D1541.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1540.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1538.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VNULL;
  _V10_Dpair_D1536.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1536.rest = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1535.first = _V0_Mx;
  _V10_Dpair_D1535.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1533.rest = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1532.first = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1532.rest = VNULL;
  _V10_Dpair_D1531.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1531.rest = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1530.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1530.rest = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1529.first = VEncodeBool(false);
  _V10_Dpair_D1529.rest = VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR);
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VNULL;
  _V10_Dpair_D1527.first = _V0_Mp;
  _V10_Dpair_D1527.rest = VNULL;
  _V10_Dpair_D1526.first = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1526.rest = VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR);
  _V10_Dpair_D1525.first = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1525.rest = VNULL;
  _V10_Dpair_D1524.first = _V0unquote;
  _V10_Dpair_D1524.rest = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1523.first = _V0unmangled__env;
  _V10_Dpair_D1523.rest = VNULL;
  _V10_Dpair_D1522.first = VEncodeBool(false);
  _V10_Dpair_D1522.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1521.first = _V0_U;
  _V10_Dpair_D1521.rest = VNULL;
  _V10_Dpair_D1519.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1519.rest = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1518.first = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1518.rest = VNULL;
  _V10_Dpair_D1517.first = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1515.rest = VNULL;
  _V10_Dpair_D1514.first = VEncodePointer(&_V10_Dpair_D1512, VPOINTER_PAIR);
  _V10_Dpair_D1514.rest = VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR);
  _V10_Dpair_D1513.first = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1513.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1512.first = _V0_Mx;
  _V10_Dpair_D1512.rest = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1511.first = _V0print__main_Q;
  _V10_Dpair_D1511.rest = VNULL;
  _V10_Dpair_D1510.first = VEncodeBool(false);
  _V10_Dpair_D1510.rest = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1509.first = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1509.rest = VNULL;
  _V10_Dpair_D1508.first = _V0functions;
  _V10_Dpair_D1508.rest = VNULL;
  _V10_Dpair_D1507.first = VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR);
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1506.rest = VNULL;
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1503.first = _V0to__bytecode;
  _V10_Dpair_D1503.rest = VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = _V0write__bytecode;
  _V10_Dpair_D1502.rest = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1501.first = _V0write__bytecode__line;
  _V10_Dpair_D1501.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1500.first = _V0glue__bytecode;
  _V10_Dpair_D1500.rest = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1499.first = _V0process__toplevel;
  _V10_Dpair_D1499.rest = VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR);
  _V10_Dpair_D1498.first = _V0process__declare;
  _V10_Dpair_D1498.rest = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1497.first = _V0process__foreign__function;
  _V10_Dpair_D1497.rest = VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR);
  _V10_Dpair_D1496.first = _V0process__function;
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = _V0process__fun__case;
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D1494, VPOINTER_PAIR);
  _V10_Dpair_D1494.first = _V0process__fun__single;
  _V10_Dpair_D1494.rest = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1493.first = _V0process__application;
  _V10_Dpair_D1493.rest = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1492.first = _V0process__combination;
  _V10_Dpair_D1492.rest = VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR);
  _V10_Dpair_D1491.first = _V0process__atom;
  _V10_Dpair_D1491.rest = VNULL;
  _V10_Dpair_D1490.first = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1490.rest = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1489.first = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1489.rest = VNULL;
  _V10_Dpair_D1488.first = _V0_Mk;
  _V10_Dpair_D1488.rest = VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR);
  _V10_Dpair_D1487.first = _V0debug_Q;
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = _V0shared_Q;
  _V10_Dpair_D1486.rest = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1485.first = _V0static__environments;
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1484, VPOINTER_PAIR);
  _V10_Dpair_D1484.first = _V0literal__table;
  _V10_Dpair_D1484.rest = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1483.first = _V0foreign__functions;
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = _V0intrinsics;
  _V10_Dpair_D1482.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1481.first = _V0functions;
  _V10_Dpair_D1481.rest = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1480.first = _V0qualified__functions;
  _V10_Dpair_D1480.rest = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1479.first = _V0declares;
  _V10_Dpair_D1479.rest = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1478.first = _V0toplevels;
  _V10_Dpair_D1478.rest = VNULL;
  _V10_Dpair_D1477.first = _V0vanity;
  _V10_Dpair_D1477.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = _V0compiler;
  _V10_Dpair_D1476.rest = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1475.first = _V0bytecode;
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = _V0to__bytecode;
  _V10_Dpair_D1474.rest = VNULL;
  _V10_Dpair_D1473.first = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1473.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1472.first = VEncodeBool(false);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VNULL;
  _V10_Dpair_D1470.first = _V0_Mk;
  _V10_Dpair_D1470.rest = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1469.first = _V0map;
  _V10_Dpair_D1469.rest = VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR);
  _V10_Dpair_D1468.first = _V0append;
  _V10_Dpair_D1468.rest = VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR);
  _V10_Dpair_D1467.first = _V0compiler__error;
  _V10_Dpair_D1467.rest = VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR);
  _V10_Dpair_D1466.first = _V0reverse;
  _V10_Dpair_D1466.rest = VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = _V0displayln;
  _V10_Dpair_D1465.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1464.first = _V0writeln;
  _V10_Dpair_D1464.rest = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1463.first = _V0display;
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = _V0memv;
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = _V0error;
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = _V0equal_Q;
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = _V0get__foreign__decoder;
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = _V0get__foreign__encoder;
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = _V0mangle__foreign__function;
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = _V0sprintf;
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = _V0string__append;
  _V10_Dpair_D1455.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1454.first = _V0fold;
  _V10_Dpair_D1454.rest = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1453.first = _V0caadr;
  _V10_Dpair_D1453.rest = VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR);
  _V10_Dpair_D1452.first = _V0gensym;
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = _V0iota;
  _V10_Dpair_D1451.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1450.first = _V0length;
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = _V0cdddr;
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = _V0cadr;
  _V10_Dpair_D1448.rest = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1447.first = _V0mangle__library;
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = _V0lookup__intrinsic__name;
  _V10_Dpair_D1446.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VNULL;
  _V10_Dpair_D1434.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1432.rest = VNULL;
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VNULL;
  _V10_Dpair_D1428.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1428.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1427.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1427.rest = VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR);
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VNULL;
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VNULL;
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VNULL;
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VNULL;
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1414.rest = VNULL;
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1411.first = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1411.rest = VNULL;
  _V10_Dpair_D1410.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1410.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1409.first = VEncodeBool(false);
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1408.rest = VNULL;
  _V10_Dpair_D1407.first = _V0_Mx;
  _V10_Dpair_D1407.rest = VNULL;
  _V10_Dpair_D1406.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1406.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VNULL;
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1403.first = VNULL;
  _V10_Dpair_D1403.rest = VNULL;
  _V10_Dpair_D1402.first = VEncodeBool(false);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1401.rest = VNULL;
  _V10_Dpair_D1400.first = _V0_Mk;
  _V10_Dpair_D1400.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k9, VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k8, VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k7, VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k6, VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k5, VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k4, VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k3, VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k2, VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k1, VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11, VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13, VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15, VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22, VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24, VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23, VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21, VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20, VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19, VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14, VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10, VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179_V0k26, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D179, VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29, VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28, VEncodePointer(&_V10_Dpair_D1593, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183_V0k31, VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D183, VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32, VEncodePointer(&_V10_Dpair_D1631, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33, VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36, VEncodePointer(&_V10_Dpair_D1680, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5, VEncodePointer(&_V10_Dpair_D1681, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35, VEncodePointer(&_V10_Dpair_D1673, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34, VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40, VEncodePointer(&_V10_Dpair_D1698, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda6, VEncodePointer(&_V10_Dpair_D1699, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39, VEncodePointer(&_V10_Dpair_D1688, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38, VEncodePointer(&_V10_Dpair_D1684, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4, VEncodePointer(&_V10_Dpair_D1665, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare, VEncodePointer(&_V10_Dpair_D1658, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k45, VEncodePointer(&_V10_Dpair_D1765, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k44, VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k48, VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k47, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda11, VEncodePointer(&_V10_Dpair_D1770, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0lambda10, VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211_V0k46, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D211, VEncodePointer(&_V10_Dpair_D1758, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9, VEncodePointer(&_V10_Dpair_D1744, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8, VEncodePointer(&_V10_Dpair_D1737, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49, VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53, VEncodePointer(&_V10_Dpair_D1799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54, VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda14, VEncodePointer(&_V10_Dpair_D1804, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52, VEncodePointer(&_V10_Dpair_D1795, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51, VEncodePointer(&_V10_Dpair_D1792, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50, VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda13, VEncodePointer(&_V10_Dpair_D1786, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda12, VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43, VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42, VEncodePointer(&_V10_Dpair_D1716, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7, VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, VEncodePointer(&_V10_Dpair_D1706, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k57, VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16, VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k56, VEncodePointer(&_V10_Dpair_D1827, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k61, VEncodePointer(&_V10_Dpair_D1876, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17, VEncodePointer(&_V10_Dpair_D1877, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k60, VEncodePointer(&_V10_Dpair_D1869, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k59, VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda18, VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k62, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k58, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15, VEncodePointer(&_V10_Dpair_D1823, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function, VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k63, VEncodePointer(&_V10_Dpair_D1887, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k73, VEncodePointer(&_V10_Dpair_D1941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k72, VEncodePointer(&_V10_Dpair_D1938, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k76, VEncodePointer(&_V10_Dpair_D1977, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda21, VEncodePointer(&_V10_Dpair_D1978, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k75, VEncodePointer(&_V10_Dpair_D1970, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k74, VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k79, VEncodePointer(&_V10_Dpair_D1995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda22, VEncodePointer(&_V10_Dpair_D1996, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k78, VEncodePointer(&_V10_Dpair_D1982, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda23, VEncodePointer(&_V10_Dpair_D1982, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k80, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k77, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda20, VEncodePointer(&_V10_Dpair_D1954, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda19, VEncodePointer(&_V10_Dpair_D1947, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k71, VEncodePointer(&_V10_Dpair_D1935, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k82, VEncodePointer(&_V10_Dpair_D1941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k81, VEncodePointer(&_V10_Dpair_D1935, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k85, VEncodePointer(&_V10_Dpair_D2027, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k87, VEncodePointer(&_V10_Dpair_D2035, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k86, VEncodePointer(&_V10_Dpair_D2032, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k89, VEncodePointer(&_V10_Dpair_D2040, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k88, VEncodePointer(&_V10_Dpair_D2036, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda25, VEncodePointer(&_V10_Dpair_D2028, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k84, VEncodePointer(&_V10_Dpair_D2020, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k83, VEncodePointer(&_V10_Dpair_D2008, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k92, VEncodePointer(&_V10_Dpair_D2056, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k94, VEncodePointer(&_V10_Dpair_D2064, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k93, VEncodePointer(&_V10_Dpair_D2061, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k96, VEncodePointer(&_V10_Dpair_D2069, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k95, VEncodePointer(&_V10_Dpair_D2065, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda26, VEncodePointer(&_V10_Dpair_D2057, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k91, VEncodePointer(&_V10_Dpair_D2043, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda27, VEncodePointer(&_V10_Dpair_D2043, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k97, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0k90, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252_V0lambda24, VEncodePointer(&_V10_Dpair_D2003, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D252, VEncodePointer(&_V10_Dpair_D1931, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k70, VEncodePointer(&_V10_Dpair_D1918, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k69, VEncodePointer(&_V10_Dpair_D1912, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k98, VEncodePointer(&_V10_Dpair_D2080, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k99, VEncodePointer(&_V10_Dpair_D2082, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda28, VEncodePointer(&_V10_Dpair_D2076, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k68, VEncodePointer(&_V10_Dpair_D1909, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k67, VEncodePointer(&_V10_Dpair_D1906, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k66, VEncodePointer(&_V10_Dpair_D1903, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k65, VEncodePointer(&_V10_Dpair_D1897, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k64, VEncodePointer(&_V10_Dpair_D1891, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, VEncodePointer(&_V10_Dpair_D1883, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k100, VEncodePointer(&_V10_Dpair_D2099, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k102, VEncodePointer(&_V10_Dpair_D2103, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k104, VEncodePointer(&_V10_Dpair_D2108, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k103, VEncodePointer(&_V10_Dpair_D2104, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k101, VEncodePointer(&_V10_Dpair_D2100, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, VEncodePointer(&_V10_Dpair_D2095, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k107, VEncodePointer(&_V10_Dpair_D2140, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k111, VEncodePointer(&_V10_Dpair_D2160, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k110, VEncodePointer(&_V10_Dpair_D2154, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k109, VEncodePointer(&_V10_Dpair_D2150, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k108, VEncodePointer(&_V10_Dpair_D2147, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30, VEncodePointer(&_V10_Dpair_D2141, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k106, VEncodePointer(&_V10_Dpair_D2127, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k105, VEncodePointer(&_V10_Dpair_D2123, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k115, VEncodePointer(&_V10_Dpair_D2180, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k117, VEncodePointer(&_V10_Dpair_D2189, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k116, VEncodePointer(&_V10_Dpair_D2185, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31, VEncodePointer(&_V10_Dpair_D2181, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k114, VEncodePointer(&_V10_Dpair_D2168, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k113, VEncodePointer(&_V10_Dpair_D2164, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k121, VEncodePointer(&_V10_Dpair_D2211, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124, VEncodePointer(&_V10_Dpair_D2223, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k123, VEncodePointer(&_V10_Dpair_D2219, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k122, VEncodePointer(&_V10_Dpair_D2215, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32, VEncodePointer(&_V10_Dpair_D2212, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k120, VEncodePointer(&_V10_Dpair_D2196, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k119, VEncodePointer(&_V10_Dpair_D2192, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128, VEncodePointer(&_V10_Dpair_D2243, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131, VEncodePointer(&_V10_Dpair_D2272, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133, VEncodePointer(&_V10_Dpair_D2281, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132, VEncodePointer(&_V10_Dpair_D2277, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35, VEncodePointer(&_V10_Dpair_D2273, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130, VEncodePointer(&_V10_Dpair_D2259, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129, VEncodePointer(&_V10_Dpair_D2255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135, VEncodePointer(&_V10_Dpair_D2282, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138, VEncodePointer(&_V10_Dpair_D2290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137, VEncodePointer(&_V10_Dpair_D2286, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36, VEncodePointer(&_V10_Dpair_D2255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34, VEncodePointer(&_V10_Dpair_D2251, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33, VEncodePointer(&_V10_Dpair_D2244, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127, VEncodePointer(&_V10_Dpair_D2230, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126, VEncodePointer(&_V10_Dpair_D2226, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142, VEncodePointer(&_V10_Dpair_D2310, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144, VEncodePointer(&_V10_Dpair_D2319, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143, VEncodePointer(&_V10_Dpair_D2315, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37, VEncodePointer(&_V10_Dpair_D2311, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141, VEncodePointer(&_V10_Dpair_D2298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140, VEncodePointer(&_V10_Dpair_D2294, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k148, VEncodePointer(&_V10_Dpair_D2356, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k147, VEncodePointer(&_V10_Dpair_D2353, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k151, VEncodePointer(&_V10_Dpair_D2366, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k150, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda41, VEncodePointer(&_V10_Dpair_D2361, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0lambda40, VEncodePointer(&_V10_Dpair_D2353, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352_V0k149, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D352, VEncodePointer(&_V10_Dpair_D2349, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39, VEncodePointer(&_V10_Dpair_D2335, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38, VEncodePointer(&_V10_Dpair_D2328, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152, VEncodePointer(&_V10_Dpair_D2376, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda43, VEncodePointer(&_V10_Dpair_D2377, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda42, VEncodePointer(&_V10_Dpair_D2372, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146, VEncodePointer(&_V10_Dpair_D2322, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k118, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k112, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29, VEncodePointer(&_V10_Dpair_D2119, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, VEncodePointer(&_V10_Dpair_D2114, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k155, VEncodePointer(&_V10_Dpair_D2389, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k154, VEncodePointer(&_V10_Dpair_D2386, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, VEncodePointer(&_V10_Dpair_D2383, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k158, VEncodePointer(&_V10_Dpair_D2413, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45, VEncodePointer(&_V10_Dpair_D2414, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k157, VEncodePointer(&_V10_Dpair_D2407, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k156, VEncodePointer(&_V10_Dpair_D2403, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k162, VEncodePointer(&_V10_Dpair_D2428, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46, VEncodePointer(&_V10_Dpair_D2429, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k161, VEncodePointer(&_V10_Dpair_D2421, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k160, VEncodePointer(&_V10_Dpair_D2417, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k166, VEncodePointer(&_V10_Dpair_D2446, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k168, VEncodePointer(&_V10_Dpair_D2453, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k167, VEncodePointer(&_V10_Dpair_D2450, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47, VEncodePointer(&_V10_Dpair_D2447, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k165, VEncodePointer(&_V10_Dpair_D2436, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k164, VEncodePointer(&_V10_Dpair_D2432, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k172, VEncodePointer(&_V10_Dpair_D2472, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48, VEncodePointer(&_V10_Dpair_D2473, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k171, VEncodePointer(&_V10_Dpair_D2460, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k170, VEncodePointer(&_V10_Dpair_D2456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176, VEncodePointer(&_V10_Dpair_D2486, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49, VEncodePointer(&_V10_Dpair_D2487, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175, VEncodePointer(&_V10_Dpair_D2480, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k174, VEncodePointer(&_V10_Dpair_D2476, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180, VEncodePointer(&_V10_Dpair_D2500, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181, VEncodePointer(&_V10_Dpair_D2504, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50, VEncodePointer(&_V10_Dpair_D2501, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179, VEncodePointer(&_V10_Dpair_D2494, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178, VEncodePointer(&_V10_Dpair_D2490, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185, VEncodePointer(&_V10_Dpair_D2517, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186, VEncodePointer(&_V10_Dpair_D2521, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51, VEncodePointer(&_V10_Dpair_D2518, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184, VEncodePointer(&_V10_Dpair_D2511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183, VEncodePointer(&_V10_Dpair_D2507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190, VEncodePointer(&_V10_Dpair_D2534, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191, VEncodePointer(&_V10_Dpair_D2538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda52, VEncodePointer(&_V10_Dpair_D2535, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189, VEncodePointer(&_V10_Dpair_D2528, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188, VEncodePointer(&_V10_Dpair_D2524, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193, VEncodePointer(&_V10_Dpair_D2539, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195, VEncodePointer(&_V10_Dpair_D2544, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda53, VEncodePointer(&_V10_Dpair_D2524, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k173, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k169, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k163, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k159, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44, VEncodePointer(&_V10_Dpair_D2399, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, VEncodePointer(&_V10_Dpair_D2394, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR));
}
