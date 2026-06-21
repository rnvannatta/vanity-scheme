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

V_DECLARE_FUNC(VSignalingProcedure, _var0);
V_DECLARE_FUNC_BASIC(VClosureSet, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(VSignalingArguments, _var0);
V_DECLARE_FUNC_BASIC(VGetProcDebugInfo, _var0);
V_DECLARE_FUNC_BASIC(VClosureRef, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VClosureEnvFrameLength, _var0, _var1);
V_DECLARE_FUNC_BASIC(VClosureEnvDepth, _var0);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0debug;

VWEAK VWORD _V40VSignalingProcedure;
VWEAK VClosure _VW_V40VSignalingProcedure = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSignalingProcedure, NULL };
VWEAK VWORD _V0current__signaling__procedure;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0current__signaling__procedure = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "current-signaling-procedure" };
VWEAK VWORD _V0closure__env__frame__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0closure__env__frame__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "closure-env-frame-length" };
VWEAK VWORD _V0closure__env__depth;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0closure__env__depth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "closure-env-depth" };
VWEAK VWORD _V40VClosureSet;
VWEAK VClosure _VW_V40VClosureSet = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureSet, NULL };
VWEAK VWORD _V0closure__set_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0closure__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "closure-set!" };
VWEAK VWORD _V0closure__ref;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0closure__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "closure-ref" };
VWEAK VWORD _V0closure__debug__info;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0closure__debug__info = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "closure-debug-info" };
static VPair _V10_Dpair_D569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40VSignalingArguments;
VWEAK VClosure _VW_V40VSignalingArguments = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSignalingArguments, NULL };
static VPair _V10_Dpair_D564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Q;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "\?" };
static VPair _V10_Dpair_D554 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
VWEAK VWORD _V40VGetProcDebugInfo;
VWEAK VClosure _VW_V40VGetProcDebugInfo = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetProcDebugInfo, NULL };
static VPair _V10_Dpair_D542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D2_D98;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Dfinalize_D2_D98 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.finalize.2.98" };
static VPair _V10_Dpair_D529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D13_D105;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dfinalize_D13_D105 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.finalize.13.105" };
static VPair _V10_Dpair_D520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.12" };
static VPair _V10_Dpair_D505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D12_D106;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_Dloop_D12_D106 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.loop.12.106" };
static VPair _V10_Dpair_D496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D13;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D13 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.13" };
static VPair _V10_Dpair_D490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D14;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0collect__acc_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "collect-acc.14" };
static VPair _V10_Dpair_D484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y_D21;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0y_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "y.21" };
static VPair _V10_Dpair_D478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D14__tail_D22;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0collect__acc_D14__tail_D22 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "collect-acc.14-tail.22" };
static VPair _V10_Dpair_D475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0loop_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "loop.1" };
static VPair _V10_Dpair_D470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D1_D99;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dloop_D1_D99 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.loop.1.99" };
static VPair _V10_Dpair_D462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D2;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0finalize_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "finalize.2" };
static VPair _V10_Dpair_D456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D3;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0collect__acc_D3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "collect-acc.3" };
static VPair _V10_Dpair_D450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y_D10;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0y_D10 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "y.10" };
static VPair _V10_Dpair_D446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D3__tail_D11;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0collect__acc_D3__tail_D11 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "collect-acc.3-tail.11" };
static VPair _V10_Dpair_D443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "##closure~S~N" };
static VPair _V10_Dpair_D436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D24_D80;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dfinalize_D24_D80 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.finalize.24.80" };
static VPair _V10_Dpair_D430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "~A: " };
static VPair _V10_Dpair_D428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D34_D88;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dfinalize_D34_D88 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.finalize.34.88" };
static VPair _V10_Dpair_D419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Snode_S;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0_Snode_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "*node*" };
VWEAK VWORD _V40VClosureRef;
VWEAK VClosure _VW_V40VClosureRef = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureRef, NULL };
static VPair _V10_Dpair_D401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D33;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.33" };
static VPair _V10_Dpair_D390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0names;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0names = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "names" };
VWEAK VWORD _V0j;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0j = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "j" };
static VPair _V10_Dpair_D385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D33_D89;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10_Dloop_D33_D89 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##.loop.33.89" };
static VPair _V10_Dpair_D380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D34;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.34" };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D35;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0collect__acc_D35 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "collect-acc.35" };
static VPair _V10_Dpair_D368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y_D42;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0y_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "y.42" };
static VPair _V10_Dpair_D363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0collect__acc_D35__tail_D43;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0collect__acc_D35__tail_D43 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "collect-acc.35-tail.43" };
VWEAK VWORD _V40VClosureEnvFrameLength;
VWEAK VClosure _VW_V40VClosureEnvFrameLength = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureEnvFrameLength, NULL };
static VPair _V10_Dpair_D360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0frame__names;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0frame__names = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "frame-names" };
static VPair _V10_Dpair_D356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D23;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D23 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.23" };
static VPair _V10_Dpair_D345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0env__names;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0env__names = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "env-names" };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D23_D81;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10_Dloop_D23_D81 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##.loop.23.81" };
static VPair _V10_Dpair_D336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y_D32;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0y_D32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "y.32" };
static VPair _V10_Dpair_D330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D24;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D24 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.24" };
VWEAK VWORD _V40VClosureEnvDepth;
VWEAK VClosure _VW_V40VClosureEnvDepth = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureEnvDepth, NULL };
static VPair _V10_Dpair_D327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0current__signaling__arguments;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0current__signaling__arguments = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "current-signaling-arguments" };
VWEAK VWORD _V0closure__name;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0closure__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "closure-name" };
VWEAK VWORD _V0closure__formals;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0closure__formals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "closure-formals" };
VWEAK VWORD _V0closure__env__names;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0closure__env__names = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "closure-env-names" };
VWEAK VWORD _V0closure__env;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0closure__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "closure-env" };
VWEAK VWORD _V0closure__bt__impl;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0closure__bt__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "closure-bt-impl" };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0port;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "port" };
static VPair _V10_Dpair_D290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0proc;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0proc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "proc" };
static VPair _V10_Dpair_D288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0closure__bt;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0closure__bt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "closure-bt" };
VWEAK VWORD _V0debug;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0debug = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "debug" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
static VPair _V10_Dpair_D275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D273 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0current__output__port;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0current__output__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "current-output-port" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D272 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "_V0vanity_V0debug_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0current__signaling__arguments, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__formals, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env__names, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0debug_V0closure__bt);
static void _V0vanity_V0debug_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0debug_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.120 2 0) (##string ##.string.272) (bruijn ##.%x.121 0 0) 'current-output-port 'newline 'write 'format 'cadr 'cdar 'caar 'vector->list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 11,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D272.sym, VPOINTER_OTHER),
      _var0,
      _V0current__output__port,
      _V0newline,
      _V0write,
      _V0format,
      _V0cadr,
      _V0cdar,
      _V0caar,
      _V0vector___Glist);
}
static void _V0vanity_V0debug_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0debug_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0debug_V20_V0k2) (bruijn ##.%x.122 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0debug_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0debug_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0debug_V20_V0k1) (##string ##.string.273))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D273.sym, VPOINTER_OTHER));
}
static void _V10_Dclosure__bt_D67_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dclosure__bt_D67_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclosure__bt_D67_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 2 1) (bruijn ##.%k.124 1 0) (bruijn ##.proc.74 1 1) (bruijn ##.%x.125 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0debug_V0closure__bt" #t (##pair ##.pair.307) (2 ((bruijn ##.current-output-port.44 2 1) (close _V10_Dclosure__bt_D67_V0k3))) (3 (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 1 1) (bruijn ##.%k.126 0 0) (bruijn ##.proc.75 0 1) (bruijn ##.port.76 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0debug_V0closure__bt" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.44 2 1) (close _V10_Dclosure__bt_D67_V0k3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dclosure__bt_D67_V0k3, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0debug_V0closure__bt" };
 VRecordCall2(runtime, &dbg);
  // (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 1 1) (bruijn ##.%k.126 0 0) (bruijn ##.proc.75 0 1) (bruijn ##.port.76 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0debug_V0closure__bt, @function\n"
#endif
".globl _V50_V0vanity_V0debug_V0closure__bt\n"
"_V50_V0vanity_V0debug_V0closure__bt:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0debug_V0closure__bt\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0debug_V0closure__bt\n"
"    jmp _V20CaseError__V50_V0vanity_V0debug_V0closure__bt\n"
);
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.202 1 0) (basic-block 1 1 (##.%r.217) ((##vcore.car (bruijn ##.env-names.83 4 2))) ((bruijn ##.%k.151 1 0) (bruijn ##.%r.217 0 0))) ((bruijn ##.%k.151 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.205 1 0) (basic-block 1 1 (##.%r.213) ((##vcore.car (bruijn ##.names.91 4 2))) ((bruijn ##.%k.149 1 0) (bruijn ##.%r.213 0 0))) ((bruijn ##.%k.149 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.209 1 3) (set! (bruijn ##.%k.144 0 0) (bruijn ##.collect-acc.35.87 8 0) (bruijn ##.*node*.208 1 2)) (##vcore.set-cdr! (bruijn ##.%k.144 0 0) (bruijn ##.collect-acc.35-tail.43.86 9 0) (bruijn ##.*node*.208 1 2)))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(8l), VEncodeInt(0l),
      statics->vars[2]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 9-1, 0),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.211 1 1) (basic-block 1 1 (##.%r.212) ((##vcore.cdr (bruijn ##.names.91 7 2))) ((bruijn ##.%k.142 1 0) (bruijn ##.%r.212 0 0))) ((bruijn ##.%k.142 0 0) '()))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.loop.33.89) #f (bruijn ##.loop.33.89 7 0) (bruijn ##.%k.137 6 0) (bruijn ##.%x.210 1 0) (bruijn ##.%x.140 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.210 ##.%p.211) ((##vcore.+ (bruijn ##.j.90 5 1) 1) (##vcore.pair? (bruijn ##.names.91 5 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16, self)))));
    }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14) (bruijn ##.collect-acc.35-tail.43.86 8 0) (bruijn ##.*node*.208 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14, self)))),
      VEncodeInt(8l), VEncodeInt(0l),
      self->vars[2]
    );
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.206 ##.%x.207 ##.*node*.208 ##.%p.209) (((##basic-intrinsic "VClosureRef") (bruijn ##.proc.77 20 1) (bruijn ##.i.82 13 1) (bruijn ##.j.90 4 1)) (##vcore.cons (bruijn ##.%x.146 1 0) (bruijn ##.%x.206 0 0)) (##vcore.cons (bruijn ##.%x.207 0 1) '()) (##vcore.null? (bruijn ##.collect-acc.35-tail.43.86 8 0))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VClosureRef(runtime, NULL,
      VGetArg(statics, 20-1, 1),
      VGetArg(statics, 13-1, 1),
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.204) ((##vcore.< (bruijn ##.j.90 1 1) (bruijn ##.y.42.203 6 0))) (if (bruijn ##.%p.204 0 0) (basic-block 1 1 (##.%p.205) ((##vcore.pair? (bruijn ##.names.91 2 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11))) (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.finalize.34.88) #f (bruijn ##.finalize.34.88 3 0) (bruijn ##.%k.137 1 0) (bruijn ##.collect-acc.35.87 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.215 1 1) (basic-block 1 1 (##.%r.216) ((##vcore.cdr (bruijn ##.env-names.83 12 2))) ((bruijn ##.%k.134 1 0) (bruijn ##.%r.216 0 0))) ((bruijn ##.%k.134 0 0) '()))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81) #f (bruijn ##.loop.23.81 12 0) (bruijn ##.%k.129 11 0) (bruijn ##.%x.214 1 0) (bruijn ##.%x.132 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.214 ##.%p.215) ((##vcore.+ (bruijn ##.i.82 10 1) 1) (##vcore.pair? (bruijn ##.env-names.83 10 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21, self)))));
    }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.45 18 2) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19) (bruijn ##.port.78 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.46 18 3) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18) (bruijn ##.%x.135 0 0) (bruijn ##.port.78 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18, self)))),
      _var0,
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda7" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89")) (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.loop.33.89) #f (bruijn ##.loop.33.89 0 0) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17) 0 (bruijn ##.frame-names.84 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.136 0 0) (bruijn ##.collect-acc.35.93 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda7) (close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, self)))));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6, self)), 1,
      VNULL);
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.y.42.203) (((##basic-intrinsic "VClosureEnvFrameLength") (bruijn ##.proc.77 11 1) (bruijn ##.i.82 4 1))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvFrameLength(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5, self)), 1,
      VNULL);
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.47 12 4) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9) (bruijn ##.port.78 10 2) (##string ##.string.429) (bruijn ##.i.82 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9, self)))),
      VGetArg(statics, 10-1, 2),
      VEncodePointer(&_V10_Dstring_D429.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.201) ((##vcore.< (bruijn ##.i.82 1 1) (bruijn ##.y.32.200 4 0))) (if (bruijn ##.%p.201 0 0) (basic-block 1 1 (##.%p.202) ((##vcore.pair? (bruijn ##.env-names.83 2 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8))) (##qualified-call (vanity debug closure-bt-impl ##.finalize.24.80) #f (bruijn ##.finalize.24.80 3 0) (bruijn ##.%k.129 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81) #f (bruijn ##.loop.23.81 1 0) (bruijn ##.%k.127 7 0) 0 (bruijn ##.%x.152 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda4" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81")) (##qualified-call (vanity debug closure-env-names) #t (bruijn ##.closure-env-names.70 7 3) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22) (bruijn ##.proc.77 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k22, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env__names(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.128 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.y.32.200) (((##basic-intrinsic "VClosureEnvDepth") (bruijn ##.proc.77 4 1))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda4) (close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvDepth(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda4, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.199) ((##vcore.cons (bruijn ##.%x.154 2 0) (bruijn ##.%x.155 1 0))) ((bruijn ##.format.47 5 4) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k6) (bruijn ##.port.78 3 2) (##string ##.string.437) (bruijn ##.%x.199 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k6, self)))),
      statics->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D437.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity debug closure-formals) #t (bruijn ##.closure-formals.71 2 4) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5) (bruijn ##.proc.77 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__formals, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__bt__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity debug closure-name) #t (bruijn ##.closure-name.72 1 5) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4) (bruijn ##.proc.77 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k4, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__name, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__name(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.224 1 2) (set! (bruijn ##.%k.169 0 0) (bruijn ##.collect-acc.14.104 6 0) (bruijn ##.*node*.223 1 1)) (##vcore.set-cdr! (bruijn ##.%k.169 0 0) (bruijn ##.collect-acc.14-tail.22.103 7 0) (bruijn ##.*node*.223 1 1)))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(6l), VEncodeInt(0l),
      statics->vars[1]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      statics->vars[1]);
}
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.225) ((##vcore.+ (bruijn ##.j.107 3 1) 1)) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.loop.12.106) #f (bruijn ##.loop.12.106 4 0) (bruijn ##.%k.165 3 0) (bruijn ##.%x.225 0 0)))
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
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25) (bruijn ##.collect-acc.14-tail.22.103 6 0) (bruijn ##.*node*.223 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      self->vars[1]
    );
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.221) ((##vcore.< (bruijn ##.j.107 1 1) (bruijn ##.y.21.220 6 0))) (if (bruijn ##.%p.221 0 0) (basic-block 3 3 (##.%x.222 ##.*node*.223 ##.%p.224) (((##basic-intrinsic "VClosureRef") (bruijn ##.proc.94 15 1) (bruijn ##.i.100 9 1) (bruijn ##.j.107 2 1)) (##vcore.cons (bruijn ##.%x.222 0 0) '()) (##vcore.null? (bruijn ##.collect-acc.14-tail.22.103 6 0))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24))) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.finalize.13.105) #f (bruijn ##.finalize.13.105 3 0) (bruijn ##.%k.165 1 0) (bruijn ##.collect-acc.14.104 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VClosureRef(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      VGetArg(statics, 9-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.227 1 1) (set! (bruijn ##.%k.162 0 0) (bruijn ##.collect-acc.3.97 12 0) (bruijn ##.*node*.226 1 0)) (##vcore.set-cdr! (bruijn ##.%k.162 0 0) (bruijn ##.collect-acc.3-tail.11.96 13 0) (bruijn ##.*node*.226 1 0)))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(12l), VEncodeInt(0l),
      statics->vars[0]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 13-1, 0),
      statics->vars[0]);
}
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.228) ((##vcore.+ (bruijn ##.i.100 9 1) 1)) (##qualified-call (vanity debug closure-env ##.loop.1.99) #f (bruijn ##.loop.1.99 10 0) (bruijn ##.%k.158 9 0) (bruijn ##.%x.228 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29) (bruijn ##.collect-acc.3-tail.11.96 12 0) (bruijn ##.*node*.226 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29, self)))),
      VEncodeInt(12l), VEncodeInt(0l),
      self->vars[0]
    );
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.*node*.226 ##.%p.227) ((##vcore.cons (bruijn ##.%x.163 1 0) '()) (##vcore.null? (bruijn ##.collect-acc.3-tail.11.96 12 0))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 12-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda13" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106")) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.loop.12.106) #f (bruijn ##.loop.12.106 0 0) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.164 0 0) (bruijn ##.collect-acc.14.109 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda13) (close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, self)))));
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12, self)), 1,
      VNULL);
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.219) ((##vcore.< (bruijn ##.i.100 1 1) (bruijn ##.y.10.218 6 0))) (if (bruijn ##.%p.219 0 0) (basic-block 1 1 (##.y.21.220) (((##basic-intrinsic "VClosureEnvFrameLength") (bruijn ##.proc.94 8 1) (bruijn ##.i.100 2 1))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11) '())) (##qualified-call (vanity debug closure-env ##.finalize.2.98) #f (bruijn ##.finalize.2.98 3 0) (bruijn ##.%k.158 1 0) (bruijn ##.collect-acc.3.97 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvFrameLength(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11, self)), 1,
      VNULL);
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V0lambda10" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99")) (##qualified-call (vanity debug closure-env ##.loop.1.99) #f (bruijn ##.loop.1.99 0 0) (bruijn ##.%k.156 5 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.157 0 0) (bruijn ##.collect-acc.3.110 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V0lambda9" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda10) (close "_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, self)))));
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env_V0lambda8" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda9) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda9, self)), 1,
      VNULL);
}
void _V50_V0vanity_V0debug_V0closure__env(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.y.10.218) (((##basic-intrinsic "VClosureEnvDepth") (bruijn ##.proc.94 1 1))) ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda8) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvDepth(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda8, self)), 1,
      VNULL);
    }
}
void _V50_V0vanity_V0debug_V0closure__env__names_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env__names_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.229 1 0) (basic-block 2 2 (##.%x.230 ##.%r.231) ((##vcore.cdr (bruijn ##.ret.229 2 0)) (##vcore.pair? (bruijn ##.%x.230 0 0))) ((bruijn ##.%k.173 1 0) (bruijn ##.%r.231 0 1))) ((bruijn ##.%k.173 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0debug_V0closure__env__names_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env__names_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.172 0 0) ((bruijn ##.cadr.48 4 5) (bruijn ##.%k.171 2 0) (bruijn ##.ret.229 1 0)) ((bruijn ##.%k.171 2 0) '()))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      statics->up->vars[0],
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__env__names(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__env__names" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.229) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.111 1 1))) ((close _V50_V0vanity_V0debug_V0closure__env__names_V0k30) (close _V50_V0vanity_V0debug_V0closure__env__names_V0k31)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k30, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k31, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__formals" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__formals, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.232) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.113 1 1))) (if (bruijn ##.ret.232 0 0) ((bruijn ##.cdar.49 3 6) (bruijn ##.%k.175 1 0) (bruijn ##.ret.232 0 0)) ((bruijn ##.%k.175 1 0) '(##pair ##.pair.555))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 2,
      statics->vars[0],
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dpair_D555, VPOINTER_PAIR));
}
    }
}
void _V50_V0vanity_V0debug_V0closure__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0closure__name" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.233) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.115 1 1))) (if (bruijn ##.ret.233 0 0) ((bruijn ##.caar.50 3 7) (bruijn ##.%k.176 1 0) (bruijn ##.ret.233 0 0)) ((bruijn ##.%k.176 1 0) '?)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      statics->vars[0],
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0_Q);
}
    }
}
void _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.117 0 0) ((bruijn ##.vector->list.51 3 8) (bruijn ##.%k.177 1 0) (bruijn ##.ret.117 0 0)) ((bruijn ##.%k.177 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      statics->vars[0],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0debug_V0current__signaling__arguments(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0debug_V0current__signaling__arguments" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0current__signaling__arguments, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VSignalingArguments") (close _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32))
    VCallFuncWithGC(runtime, (VFunc)VSignalingArguments, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32, self)))));
}
static void _V0vanity_V0debug_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V0vanity_V0debug_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity debug) 7 ((close "_V50_V0vanity_V0debug_V0closure__bt" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__bt__impl" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__env" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__env__names" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__formals" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__name" (vanity debug)) (close "_V50_V0vanity_V0debug_V0current__signaling__arguments" (vanity debug))) (basic-block 22 22 (##.%x.234 ##.%x.235 ##.%x.236 ##.%x.237 ##.%x.238 ##.%x.239 ##.%x.240 ##.%x.241 ##.%x.242 ##.%x.243 ##.%x.244 ##.%x.245 ##.%x.246 ##.%x.247 ##.%x.248 ##.%x.249 ##.%x.250 ##.%x.251 ##.%x.252 ##.%x.253 ##.%x.254 ##.%r.255) ((##vcore.cons 'closure-debug-info (##basic-intrinsic "VGetProcDebugInfo")) (##vcore.cons 'closure-name (bruijn ##.closure-name.72 1 5)) (##vcore.cons 'closure-formals (bruijn ##.closure-formals.71 1 4)) (##vcore.cons 'closure-ref (##basic-intrinsic "VClosureRef")) (##vcore.cons 'closure-set! (##basic-intrinsic "VClosureSet")) (##vcore.cons 'closure-env-depth (##basic-intrinsic "VClosureEnvDepth")) (##vcore.cons 'closure-env-frame-length (##basic-intrinsic "VClosureEnvFrameLength")) (##vcore.cons 'closure-env (bruijn ##.closure-env.69 1 2)) (##vcore.cons 'closure-bt (bruijn ##.closure-bt.67 1 0)) (##vcore.cons 'current-signaling-procedure (##intrinsic "VSignalingProcedure")) (##vcore.cons 'current-signaling-arguments (bruijn ##.current-signaling-arguments.73 1 6)) (##vcore.cons (bruijn ##.%x.244 0 10) '()) (##vcore.cons (bruijn ##.%x.243 0 9) (bruijn ##.%x.245 0 11)) (##vcore.cons (bruijn ##.%x.242 0 8) (bruijn ##.%x.246 0 12)) (##vcore.cons (bruijn ##.%x.241 0 7) (bruijn ##.%x.247 0 13)) (##vcore.cons (bruijn ##.%x.240 0 6) (bruijn ##.%x.248 0 14)) (##vcore.cons (bruijn ##.%x.239 0 5) (bruijn ##.%x.249 0 15)) (##vcore.cons (bruijn ##.%x.238 0 4) (bruijn ##.%x.250 0 16)) (##vcore.cons (bruijn ##.%x.237 0 3) (bruijn ##.%x.251 0 17)) (##vcore.cons (bruijn ##.%x.236 0 2) (bruijn ##.%x.252 0 18)) (##vcore.cons (bruijn ##.%x.235 0 1) (bruijn ##.%x.253 0 19)) (##vcore.cons (bruijn ##.%x.234 0 0) (bruijn ##.%x.254 0 20))) ((bruijn ##.%k.123 2 0) (bruijn ##.%r.255 0 21))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0debug = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt, _V60_V0vanity_V0debug))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env, _V60_V0vanity_V0debug))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names, _V60_V0vanity_V0debug))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__formals, _V60_V0vanity_V0debug))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__name, _V60_V0vanity_V0debug))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments, _V60_V0vanity_V0debug))));
    VRegisterStaticEnv("_V0vanity_V0debug_V20", &_V60_V0vanity_V0debug);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0closure__debug__info,
      _V40VGetProcDebugInfo);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0closure__name,
      statics->vars[5]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0closure__formals,
      statics->vars[4]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0closure__ref,
      _V40VClosureRef);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0closure__set_B,
      _V40VClosureSet);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env__depth,
      _V40VClosureEnvDepth);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env__frame__length,
      _V40VClosureEnvFrameLength);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env,
      statics->vars[2]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0closure__bt,
      statics->vars[0]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0current__signaling__procedure,
      _V40VSignalingProcedure);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0current__signaling__arguments,
      statics->vars[6]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[20]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[21]);
    }
    }
}
static void _V0vanity_V0debug_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0debug_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.119 0 0) (close _V0vanity_V0debug_V20_V0lambda2) (close _V0vanity_V0debug_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0debug_V20 = (VFunc)_V0vanity_V0debug_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0current__signaling__procedure = VEncodePointer(VInternSymbol(-1476053499, &_VW_V0current__signaling__procedure.sym), VPOINTER_OTHER);
  _V0closure__env__frame__length = VEncodePointer(VInternSymbol(1229895409, &_VW_V0closure__env__frame__length.sym), VPOINTER_OTHER);
  _V0closure__env__depth = VEncodePointer(VInternSymbol(-132698800, &_VW_V0closure__env__depth.sym), VPOINTER_OTHER);
  _V0closure__set_B = VEncodePointer(VInternSymbol(494063380, &_VW_V0closure__set_B.sym), VPOINTER_OTHER);
  _V0closure__ref = VEncodePointer(VInternSymbol(-1565626523, &_VW_V0closure__ref.sym), VPOINTER_OTHER);
  _V0closure__debug__info = VEncodePointer(VInternSymbol(1339176764, &_VW_V0closure__debug__info.sym), VPOINTER_OTHER);
  _V0_Q = VEncodePointer(VInternSymbol(1576491780, &_VW_V0_Q.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D2_D98 = VEncodePointer(VInternSymbol(639192649, &_VW_V10_Dfinalize_D2_D98.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D13_D105 = VEncodePointer(VInternSymbol(-1406085636, &_VW_V10_Dfinalize_D13_D105.sym), VPOINTER_OTHER);
  _V0loop_D12 = VEncodePointer(VInternSymbol(1462522316, &_VW_V0loop_D12.sym), VPOINTER_OTHER);
  _V10_Dloop_D12_D106 = VEncodePointer(VInternSymbol(-1331587980, &_VW_V10_Dloop_D12_D106.sym), VPOINTER_OTHER);
  _V0finalize_D13 = VEncodePointer(VInternSymbol(-1012834429, &_VW_V0finalize_D13.sym), VPOINTER_OTHER);
  _V0collect__acc_D14 = VEncodePointer(VInternSymbol(-885720593, &_VW_V0collect__acc_D14.sym), VPOINTER_OTHER);
  _V0y_D21 = VEncodePointer(VInternSymbol(1077106201, &_VW_V0y_D21.sym), VPOINTER_OTHER);
  _V0collect__acc_D14__tail_D22 = VEncodePointer(VInternSymbol(-195538552, &_VW_V0collect__acc_D14__tail_D22.sym), VPOINTER_OTHER);
  _V0loop_D1 = VEncodePointer(VInternSymbol(163867650, &_VW_V0loop_D1.sym), VPOINTER_OTHER);
  _V10_Dloop_D1_D99 = VEncodePointer(VInternSymbol(-445915872, &_VW_V10_Dloop_D1_D99.sym), VPOINTER_OTHER);
  _V0finalize_D2 = VEncodePointer(VInternSymbol(-624487110, &_VW_V0finalize_D2.sym), VPOINTER_OTHER);
  _V0collect__acc_D3 = VEncodePointer(VInternSymbol(1474458509, &_VW_V0collect__acc_D3.sym), VPOINTER_OTHER);
  _V0y_D10 = VEncodePointer(VInternSymbol(2029752984, &_VW_V0y_D10.sym), VPOINTER_OTHER);
  _V0collect__acc_D3__tail_D11 = VEncodePointer(VInternSymbol(1960719381, &_VW_V0collect__acc_D3__tail_D11.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D24_D80 = VEncodePointer(VInternSymbol(2146477697, &_VW_V10_Dfinalize_D24_D80.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D34_D88 = VEncodePointer(VInternSymbol(1236678431, &_VW_V10_Dfinalize_D34_D88.sym), VPOINTER_OTHER);
  _V0_Snode_S = VEncodePointer(VInternSymbol(-237755562, &_VW_V0_Snode_S.sym), VPOINTER_OTHER);
  _V0loop_D33 = VEncodePointer(VInternSymbol(761403638, &_VW_V0loop_D33.sym), VPOINTER_OTHER);
  _V0names = VEncodePointer(VInternSymbol(-1517936888, &_VW_V0names.sym), VPOINTER_OTHER);
  _V0j = VEncodePointer(VInternSymbol(523840010, &_VW_V0j.sym), VPOINTER_OTHER);
  _V10_Dloop_D33_D89 = VEncodePointer(VInternSymbol(1809964510, &_VW_V10_Dloop_D33_D89.sym), VPOINTER_OTHER);
  _V0finalize_D34 = VEncodePointer(VInternSymbol(837669565, &_VW_V0finalize_D34.sym), VPOINTER_OTHER);
  _V0collect__acc_D35 = VEncodePointer(VInternSymbol(1517331429, &_VW_V0collect__acc_D35.sym), VPOINTER_OTHER);
  _V0y_D42 = VEncodePointer(VInternSymbol(1101695634, &_VW_V0y_D42.sym), VPOINTER_OTHER);
  _V0collect__acc_D35__tail_D43 = VEncodePointer(VInternSymbol(-299235392, &_VW_V0collect__acc_D35__tail_D43.sym), VPOINTER_OTHER);
  _V0frame__names = VEncodePointer(VInternSymbol(1321608691, &_VW_V0frame__names.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0loop_D23 = VEncodePointer(VInternSymbol(-1499678130, &_VW_V0loop_D23.sym), VPOINTER_OTHER);
  _V0env__names = VEncodePointer(VInternSymbol(420772719, &_VW_V0env__names.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D23_D81 = VEncodePointer(VInternSymbol(2052934499, &_VW_V10_Dloop_D23_D81.sym), VPOINTER_OTHER);
  _V0y_D32 = VEncodePointer(VInternSymbol(-1130957641, &_VW_V0y_D32.sym), VPOINTER_OTHER);
  _V0finalize_D24 = VEncodePointer(VInternSymbol(212387615, &_VW_V0finalize_D24.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0current__signaling__arguments = VEncodePointer(VInternSymbol(728005863, &_VW_V0current__signaling__arguments.sym), VPOINTER_OTHER);
  _V0closure__name = VEncodePointer(VInternSymbol(1061393102, &_VW_V0closure__name.sym), VPOINTER_OTHER);
  _V0closure__formals = VEncodePointer(VInternSymbol(-2003601406, &_VW_V0closure__formals.sym), VPOINTER_OTHER);
  _V0closure__env__names = VEncodePointer(VInternSymbol(1793091904, &_VW_V0closure__env__names.sym), VPOINTER_OTHER);
  _V0closure__env = VEncodePointer(VInternSymbol(87458653, &_VW_V0closure__env.sym), VPOINTER_OTHER);
  _V0closure__bt__impl = VEncodePointer(VInternSymbol(-834996303, &_VW_V0closure__bt__impl.sym), VPOINTER_OTHER);
  _V0port = VEncodePointer(VInternSymbol(-1893404613, &_VW_V0port.sym), VPOINTER_OTHER);
  _V0proc = VEncodePointer(VInternSymbol(1454542134, &_VW_V0proc.sym), VPOINTER_OTHER);
  _V0closure__bt = VEncodePointer(VInternSymbol(-151716283, &_VW_V0closure__bt.sym), VPOINTER_OTHER);
  _V0debug = VEncodePointer(VInternSymbol(-1493578705, &_VW_V0debug.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VInternSymbol(45656078, &_VW_V0vector___Glist.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0current__output__port = VEncodePointer(VInternSymbol(-743992098, &_VW_V0current__output__port.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40VSignalingProcedure = VEncodePointer(VLookupConstant("_V40VSignalingProcedure", &_VW_V40VSignalingProcedure), VPOINTER_CLOSURE);
  _V40VClosureSet = VEncodePointer(VLookupConstant("_V40VClosureSet", &_VW_V40VClosureSet), VPOINTER_CLOSURE);
  _V10_Dpair_D569.first = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D569.rest = VEncodePointer(&_V10_Dpair_D568, VPOINTER_PAIR);
  _V10_Dpair_D568.first = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D568.rest = VNULL;
  _V10_Dpair_D567.first = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D567.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D566.first = VEncodeBool(false);
  _V10_Dpair_D566.rest = VEncodePointer(&_V10_Dpair_D565, VPOINTER_PAIR);
  _V10_Dpair_D565.first = VEncodePointer(&_V10_Dpair_D543, VPOINTER_PAIR);
  _V10_Dpair_D565.rest = VNULL;
  _V40VSignalingArguments = VEncodePointer(VLookupConstant("_V40VSignalingArguments", &_VW_V40VSignalingArguments), VPOINTER_CLOSURE);
  _V10_Dpair_D564.first = VEncodePointer(&_V10_Dpair_D563, VPOINTER_PAIR);
  _V10_Dpair_D564.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D563.first = VEncodePointer(&_V10_Dpair_D562, VPOINTER_PAIR);
  _V10_Dpair_D563.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D562.first = _V0vanity;
  _V10_Dpair_D562.rest = VEncodePointer(&_V10_Dpair_D561, VPOINTER_PAIR);
  _V10_Dpair_D561.first = _V0debug;
  _V10_Dpair_D561.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D560.first = VEncodePointer(&_V10_Dpair_D559, VPOINTER_PAIR);
  _V10_Dpair_D560.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D559.first = VEncodePointer(&_V10_Dpair_D558, VPOINTER_PAIR);
  _V10_Dpair_D559.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D558.first = _V0vanity;
  _V10_Dpair_D558.rest = VEncodePointer(&_V10_Dpair_D557, VPOINTER_PAIR);
  _V10_Dpair_D557.first = _V0debug;
  _V10_Dpair_D557.rest = VEncodePointer(&_V10_Dpair_D556, VPOINTER_PAIR);
  _V10_Dpair_D556.first = _V0closure__name;
  _V10_Dpair_D556.rest = VNULL;
  _V10_Dpair_D555.first = _V0_Q;
  _V10_Dpair_D555.rest = VNULL;
  _V10_Dpair_D554.first = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D554.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D553.first = VEncodePointer(&_V10_Dpair_D552, VPOINTER_PAIR);
  _V10_Dpair_D553.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D552.first = _V0vanity;
  _V10_Dpair_D552.rest = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D551.first = _V0debug;
  _V10_Dpair_D551.rest = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D550.first = _V0closure__formals;
  _V10_Dpair_D550.rest = VNULL;
  _V10_Dpair_D549.first = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D549.rest = VEncodePointer(&_V10_Dpair_D545, VPOINTER_PAIR);
  _V10_Dpair_D548.first = VEncodeBool(false);
  _V10_Dpair_D548.rest = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D547.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D547.rest = VNULL;
  _V10_Dpair_D546.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D546.rest = VEncodePointer(&_V10_Dpair_D545, VPOINTER_PAIR);
  _V10_Dpair_D545.first = VEncodePointer(&_V10_Dpair_D544, VPOINTER_PAIR);
  _V10_Dpair_D545.rest = VNULL;
  _V10_Dpair_D544.first = VEncodePointer(&_V10_Dpair_D543, VPOINTER_PAIR);
  _V10_Dpair_D544.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D543.first = _V0ret;
  _V10_Dpair_D543.rest = VNULL;
  _V40VGetProcDebugInfo = VEncodePointer(VLookupConstant("_V40VGetProcDebugInfo", &_VW_V40VGetProcDebugInfo), VPOINTER_CLOSURE);
  _V10_Dpair_D542.first = VEncodePointer(&_V10_Dpair_D541, VPOINTER_PAIR);
  _V10_Dpair_D542.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D541.first = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D541.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D540.first = _V0vanity;
  _V10_Dpair_D540.rest = VEncodePointer(&_V10_Dpair_D539, VPOINTER_PAIR);
  _V10_Dpair_D539.first = _V0debug;
  _V10_Dpair_D539.rest = VEncodePointer(&_V10_Dpair_D538, VPOINTER_PAIR);
  _V10_Dpair_D538.first = _V0closure__env__names;
  _V10_Dpair_D538.rest = VNULL;
  _V10_Dpair_D537.first = VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR);
  _V10_Dpair_D537.rest = VEncodePointer(&_V10_Dpair_D461, VPOINTER_PAIR);
  _V10_Dpair_D536.first = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D536.rest = VEncodePointer(&_V10_Dpair_D535, VPOINTER_PAIR);
  _V10_Dpair_D535.first = VEncodePointer(&_V10_Dpair_D534, VPOINTER_PAIR);
  _V10_Dpair_D535.rest = VNULL;
  _V10_Dpair_D534.first = _V0_Mk;
  _V10_Dpair_D534.rest = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D533.first = _V0vanity;
  _V10_Dpair_D533.rest = VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR);
  _V10_Dpair_D532.first = _V0debug;
  _V10_Dpair_D532.rest = VEncodePointer(&_V10_Dpair_D531, VPOINTER_PAIR);
  _V10_Dpair_D531.first = _V0closure__env;
  _V10_Dpair_D531.rest = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D530.first = _V10_Dfinalize_D2_D98;
  _V10_Dpair_D530.rest = VNULL;
  _V10_Dpair_D529.first = VEncodePointer(&_V10_Dpair_D528, VPOINTER_PAIR);
  _V10_Dpair_D529.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D528.first = VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR);
  _V10_Dpair_D528.rest = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D527.first = VEncodePointer(&_V10_Dpair_D526, VPOINTER_PAIR);
  _V10_Dpair_D527.rest = VNULL;
  _V10_Dpair_D526.first = _V0_Mk;
  _V10_Dpair_D526.rest = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D525.first = _V0vanity;
  _V10_Dpair_D525.rest = VEncodePointer(&_V10_Dpair_D524, VPOINTER_PAIR);
  _V10_Dpair_D524.first = _V0debug;
  _V10_Dpair_D524.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D523.first = _V0closure__env;
  _V10_Dpair_D523.rest = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D522.first = _V10_Dloop_D1_D99;
  _V10_Dpair_D522.rest = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D521.first = _V10_Dfinalize_D13_D105;
  _V10_Dpair_D521.rest = VNULL;
  _V10_Dpair_D520.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D520.rest = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D519.first = VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR);
  _V10_Dpair_D519.rest = VNULL;
  _V10_Dpair_D518.first = VEncodePointer(&_V10_Dpair_D402, VPOINTER_PAIR);
  _V10_Dpair_D518.rest = VEncodePointer(&_V10_Dpair_D517, VPOINTER_PAIR);
  _V10_Dpair_D517.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D517.rest = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D516.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D516.rest = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D515.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D515.rest = VEncodePointer(&_V10_Dpair_D514, VPOINTER_PAIR);
  _V10_Dpair_D514.first = VEncodePointer(&_V10_Dpair_D513, VPOINTER_PAIR);
  _V10_Dpair_D514.rest = VNULL;
  _V10_Dpair_D513.first = VEncodePointer(&_V10_Dpair_D403, VPOINTER_PAIR);
  _V10_Dpair_D513.rest = VEncodePointer(&_V10_Dpair_D512, VPOINTER_PAIR);
  _V10_Dpair_D512.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D512.rest = VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR);
  _V10_Dpair_D511.first = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D511.rest = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D510.first = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D510.rest = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D509.first = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D509.rest = VNULL;
  _V10_Dpair_D508.first = VEncodePointer(&_V10_Dpair_D506, VPOINTER_PAIR);
  _V10_Dpair_D508.rest = VEncodePointer(&_V10_Dpair_D507, VPOINTER_PAIR);
  _V10_Dpair_D507.first = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D507.rest = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D506.first = _V0loop_D12;
  _V10_Dpair_D506.rest = VNULL;
  _V10_Dpair_D505.first = VEncodePointer(&_V10_Dpair_D501, VPOINTER_PAIR);
  _V10_Dpair_D505.rest = VEncodePointer(&_V10_Dpair_D504, VPOINTER_PAIR);
  _V10_Dpair_D504.first = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D504.rest = VNULL;
  _V10_Dpair_D503.first = _V0_Mk;
  _V10_Dpair_D503.rest = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D502.first = _V0j;
  _V10_Dpair_D502.rest = VNULL;
  _V10_Dpair_D501.first = _V0vanity;
  _V10_Dpair_D501.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D500.first = _V0debug;
  _V10_Dpair_D500.rest = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D499.first = _V0closure__env;
  _V10_Dpair_D499.rest = VEncodePointer(&_V10_Dpair_D498, VPOINTER_PAIR);
  _V10_Dpair_D498.first = _V10_Dloop_D1_D99;
  _V10_Dpair_D498.rest = VEncodePointer(&_V10_Dpair_D497, VPOINTER_PAIR);
  _V10_Dpair_D497.first = _V10_Dloop_D12_D106;
  _V10_Dpair_D497.rest = VNULL;
  _V10_Dpair_D496.first = VEncodePointer(&_V10_Dpair_D493, VPOINTER_PAIR);
  _V10_Dpair_D496.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D495.first = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D495.rest = VNULL;
  _V10_Dpair_D494.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D494.rest = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D493.first = VEncodeBool(false);
  _V10_Dpair_D493.rest = VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR);
  _V10_Dpair_D492.first = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D492.rest = VNULL;
  _V10_Dpair_D491.first = _V0finalize_D13;
  _V10_Dpair_D491.rest = VNULL;
  _V10_Dpair_D490.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D490.rest = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D489.first = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D489.rest = VNULL;
  _V10_Dpair_D488.first = VEncodePointer(&_V10_Dpair_D476, VPOINTER_PAIR);
  _V10_Dpair_D488.rest = VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR);
  _V10_Dpair_D487.first = VEncodeBool(false);
  _V10_Dpair_D487.rest = VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR);
  _V10_Dpair_D486.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D486.rest = VNULL;
  _V10_Dpair_D485.first = _V0collect__acc_D14;
  _V10_Dpair_D485.rest = VNULL;
  _V10_Dpair_D484.first = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D484.rest = VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR);
  _V10_Dpair_D483.first = VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR);
  _V10_Dpair_D483.rest = VNULL;
  _V10_Dpair_D482.first = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D482.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D481.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D481.rest = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D480.first = VEncodePointer(&_V10_Dpair_D468, VPOINTER_PAIR);
  _V10_Dpair_D480.rest = VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR);
  _V10_Dpair_D479.first = _V0y_D21;
  _V10_Dpair_D479.rest = VNULL;
  _V10_Dpair_D478.first = VEncodeBool(false);
  _V10_Dpair_D478.rest = VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR);
  _V10_Dpair_D477.first = VEncodePointer(&_V10_Dpair_D476, VPOINTER_PAIR);
  _V10_Dpair_D477.rest = VNULL;
  _V10_Dpair_D476.first = _V0collect__acc_D14__tail_D22;
  _V10_Dpair_D476.rest = VNULL;
  _V10_Dpair_D475.first = VEncodePointer(&_V10_Dpair_D470, VPOINTER_PAIR);
  _V10_Dpair_D475.rest = VEncodePointer(&_V10_Dpair_D474, VPOINTER_PAIR);
  _V10_Dpair_D474.first = VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR);
  _V10_Dpair_D474.rest = VNULL;
  _V10_Dpair_D473.first = VEncodePointer(&_V10_Dpair_D471, VPOINTER_PAIR);
  _V10_Dpair_D473.rest = VEncodePointer(&_V10_Dpair_D472, VPOINTER_PAIR);
  _V10_Dpair_D472.first = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D472.rest = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D471.first = _V0loop_D1;
  _V10_Dpair_D471.rest = VNULL;
  _V10_Dpair_D470.first = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D470.rest = VEncodePointer(&_V10_Dpair_D469, VPOINTER_PAIR);
  _V10_Dpair_D469.first = VEncodePointer(&_V10_Dpair_D468, VPOINTER_PAIR);
  _V10_Dpair_D469.rest = VNULL;
  _V10_Dpair_D468.first = _V0_Mk;
  _V10_Dpair_D468.rest = VEncodePointer(&_V10_Dpair_D467, VPOINTER_PAIR);
  _V10_Dpair_D467.first = _V0i;
  _V10_Dpair_D467.rest = VNULL;
  _V10_Dpair_D466.first = _V0vanity;
  _V10_Dpair_D466.rest = VEncodePointer(&_V10_Dpair_D465, VPOINTER_PAIR);
  _V10_Dpair_D465.first = _V0debug;
  _V10_Dpair_D465.rest = VEncodePointer(&_V10_Dpair_D464, VPOINTER_PAIR);
  _V10_Dpair_D464.first = _V0closure__env;
  _V10_Dpair_D464.rest = VEncodePointer(&_V10_Dpair_D463, VPOINTER_PAIR);
  _V10_Dpair_D463.first = _V10_Dloop_D1_D99;
  _V10_Dpair_D463.rest = VNULL;
  _V10_Dpair_D462.first = VEncodePointer(&_V10_Dpair_D459, VPOINTER_PAIR);
  _V10_Dpair_D462.rest = VEncodePointer(&_V10_Dpair_D461, VPOINTER_PAIR);
  _V10_Dpair_D461.first = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D461.rest = VNULL;
  _V10_Dpair_D460.first = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D460.rest = VEncodePointer(&_V10_Dpair_D454, VPOINTER_PAIR);
  _V10_Dpair_D459.first = VEncodeBool(false);
  _V10_Dpair_D459.rest = VEncodePointer(&_V10_Dpair_D458, VPOINTER_PAIR);
  _V10_Dpair_D458.first = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D458.rest = VNULL;
  _V10_Dpair_D457.first = _V0finalize_D2;
  _V10_Dpair_D457.rest = VNULL;
  _V10_Dpair_D456.first = VEncodePointer(&_V10_Dpair_D453, VPOINTER_PAIR);
  _V10_Dpair_D456.rest = VEncodePointer(&_V10_Dpair_D455, VPOINTER_PAIR);
  _V10_Dpair_D455.first = VEncodePointer(&_V10_Dpair_D454, VPOINTER_PAIR);
  _V10_Dpair_D455.rest = VNULL;
  _V10_Dpair_D454.first = VEncodePointer(&_V10_Dpair_D444, VPOINTER_PAIR);
  _V10_Dpair_D454.rest = VEncodePointer(&_V10_Dpair_D448, VPOINTER_PAIR);
  _V10_Dpair_D453.first = VEncodeBool(false);
  _V10_Dpair_D453.rest = VEncodePointer(&_V10_Dpair_D452, VPOINTER_PAIR);
  _V10_Dpair_D452.first = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D452.rest = VNULL;
  _V10_Dpair_D451.first = _V0collect__acc_D3;
  _V10_Dpair_D451.rest = VNULL;
  _V10_Dpair_D450.first = VEncodePointer(&_V10_Dpair_D446, VPOINTER_PAIR);
  _V10_Dpair_D450.rest = VEncodePointer(&_V10_Dpair_D449, VPOINTER_PAIR);
  _V10_Dpair_D449.first = VEncodePointer(&_V10_Dpair_D448, VPOINTER_PAIR);
  _V10_Dpair_D449.rest = VNULL;
  _V10_Dpair_D448.first = VEncodePointer(&_V10_Dpair_D447, VPOINTER_PAIR);
  _V10_Dpair_D448.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D447.first = _V0y_D10;
  _V10_Dpair_D447.rest = VNULL;
  _V10_Dpair_D446.first = VEncodeBool(false);
  _V10_Dpair_D446.rest = VEncodePointer(&_V10_Dpair_D445, VPOINTER_PAIR);
  _V10_Dpair_D445.first = VEncodePointer(&_V10_Dpair_D444, VPOINTER_PAIR);
  _V10_Dpair_D445.rest = VNULL;
  _V10_Dpair_D444.first = _V0collect__acc_D3__tail_D11;
  _V10_Dpair_D444.rest = VNULL;
  _V10_Dpair_D443.first = VEncodePointer(&_V10_Dpair_D442, VPOINTER_PAIR);
  _V10_Dpair_D443.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D442.first = VEncodePointer(&_V10_Dpair_D440, VPOINTER_PAIR);
  _V10_Dpair_D442.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D441.first = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D441.rest = VNULL;
  _V10_Dpair_D440.first = _V0vanity;
  _V10_Dpair_D440.rest = VEncodePointer(&_V10_Dpair_D439, VPOINTER_PAIR);
  _V10_Dpair_D439.first = _V0debug;
  _V10_Dpair_D439.rest = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D438.first = _V0closure__env;
  _V10_Dpair_D438.rest = VNULL;
  _V10_Dpair_D436.first = VEncodePointer(&_V10_Dpair_D435, VPOINTER_PAIR);
  _V10_Dpair_D436.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D435.first = VEncodePointer(&_V10_Dpair_D434, VPOINTER_PAIR);
  _V10_Dpair_D435.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D434.first = _V0vanity;
  _V10_Dpair_D434.rest = VEncodePointer(&_V10_Dpair_D433, VPOINTER_PAIR);
  _V10_Dpair_D433.first = _V0debug;
  _V10_Dpair_D433.rest = VEncodePointer(&_V10_Dpair_D432, VPOINTER_PAIR);
  _V10_Dpair_D432.first = _V0closure__bt__impl;
  _V10_Dpair_D432.rest = VEncodePointer(&_V10_Dpair_D431, VPOINTER_PAIR);
  _V10_Dpair_D431.first = _V10_Dfinalize_D24_D80;
  _V10_Dpair_D431.rest = VNULL;
  _V10_Dpair_D430.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D430.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D428.first = VEncodePointer(&_V10_Dpair_D427, VPOINTER_PAIR);
  _V10_Dpair_D428.rest = VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR);
  _V10_Dpair_D427.first = VEncodePointer(&_V10_Dpair_D424, VPOINTER_PAIR);
  _V10_Dpair_D427.rest = VEncodePointer(&_V10_Dpair_D426, VPOINTER_PAIR);
  _V10_Dpair_D426.first = VEncodePointer(&_V10_Dpair_D425, VPOINTER_PAIR);
  _V10_Dpair_D426.rest = VNULL;
  _V10_Dpair_D425.first = _V0_Mk;
  _V10_Dpair_D425.rest = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D424.first = _V0vanity;
  _V10_Dpair_D424.rest = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D423.first = _V0debug;
  _V10_Dpair_D423.rest = VEncodePointer(&_V10_Dpair_D422, VPOINTER_PAIR);
  _V10_Dpair_D422.first = _V0closure__bt__impl;
  _V10_Dpair_D422.rest = VEncodePointer(&_V10_Dpair_D421, VPOINTER_PAIR);
  _V10_Dpair_D421.first = _V10_Dloop_D23_D81;
  _V10_Dpair_D421.rest = VEncodePointer(&_V10_Dpair_D420, VPOINTER_PAIR);
  _V10_Dpair_D420.first = _V10_Dfinalize_D34_D88;
  _V10_Dpair_D420.rest = VNULL;
  _V10_Dpair_D419.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D419.rest = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D418.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D418.rest = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D417.first = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D417.rest = VNULL;
  _V10_Dpair_D416.first = VEncodePointer(&_V10_Dpair_D409, VPOINTER_PAIR);
  _V10_Dpair_D416.rest = VEncodePointer(&_V10_Dpair_D415, VPOINTER_PAIR);
  _V10_Dpair_D415.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D415.rest = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D414.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D414.rest = VEncodePointer(&_V10_Dpair_D394, VPOINTER_PAIR);
  _V10_Dpair_D413.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D413.rest = VEncodePointer(&_V10_Dpair_D411, VPOINTER_PAIR);
  _V10_Dpair_D412.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D412.rest = VEncodePointer(&_V10_Dpair_D411, VPOINTER_PAIR);
  _V10_Dpair_D411.first = VEncodePointer(&_V10_Dpair_D410, VPOINTER_PAIR);
  _V10_Dpair_D411.rest = VNULL;
  _V10_Dpair_D410.first = VEncodePointer(&_V10_Dpair_D409, VPOINTER_PAIR);
  _V10_Dpair_D410.rest = VEncodePointer(&_V10_Dpair_D406, VPOINTER_PAIR);
  _V10_Dpair_D409.first = _V0_Mx;
  _V10_Dpair_D409.rest = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D408.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D408.rest = VEncodePointer(&_V10_Dpair_D407, VPOINTER_PAIR);
  _V10_Dpair_D407.first = VEncodePointer(&_V10_Dpair_D406, VPOINTER_PAIR);
  _V10_Dpair_D407.rest = VNULL;
  _V10_Dpair_D406.first = VEncodePointer(&_V10_Dpair_D404, VPOINTER_PAIR);
  _V10_Dpair_D406.rest = VEncodePointer(&_V10_Dpair_D405, VPOINTER_PAIR);
  _V10_Dpair_D405.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D405.rest = VEncodePointer(&_V10_Dpair_D398, VPOINTER_PAIR);
  _V10_Dpair_D404.first = _V0_Mx;
  _V10_Dpair_D404.rest = VEncodePointer(&_V10_Dpair_D403, VPOINTER_PAIR);
  _V10_Dpair_D403.first = _V0_Mx;
  _V10_Dpair_D403.rest = VEncodePointer(&_V10_Dpair_D402, VPOINTER_PAIR);
  _V10_Dpair_D402.first = _V0_Snode_S;
  _V10_Dpair_D402.rest = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V40VClosureRef = VEncodePointer(VLookupConstant("_V40VClosureRef", &_VW_V40VClosureRef), VPOINTER_CLOSURE);
  _V10_Dpair_D401.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D401.rest = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D400.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D400.rest = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D399.first = VEncodePointer(&_V10_Dpair_D398, VPOINTER_PAIR);
  _V10_Dpair_D399.rest = VNULL;
  _V10_Dpair_D398.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D398.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D397.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D397.rest = VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR);
  _V10_Dpair_D396.first = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D396.rest = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D395.first = VEncodePointer(&_V10_Dpair_D390, VPOINTER_PAIR);
  _V10_Dpair_D395.rest = VEncodePointer(&_V10_Dpair_D394, VPOINTER_PAIR);
  _V10_Dpair_D394.first = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D394.rest = VNULL;
  _V10_Dpair_D393.first = VEncodePointer(&_V10_Dpair_D391, VPOINTER_PAIR);
  _V10_Dpair_D393.rest = VEncodePointer(&_V10_Dpair_D392, VPOINTER_PAIR);
  _V10_Dpair_D392.first = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D392.rest = VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR);
  _V10_Dpair_D391.first = _V0loop_D33;
  _V10_Dpair_D391.rest = VNULL;
  _V10_Dpair_D390.first = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D390.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D389.first = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D389.rest = VNULL;
  _V10_Dpair_D388.first = _V0_Mk;
  _V10_Dpair_D388.rest = VEncodePointer(&_V10_Dpair_D387, VPOINTER_PAIR);
  _V10_Dpair_D387.first = _V0j;
  _V10_Dpair_D387.rest = VEncodePointer(&_V10_Dpair_D386, VPOINTER_PAIR);
  _V10_Dpair_D386.first = _V0names;
  _V10_Dpair_D386.rest = VNULL;
  _V10_Dpair_D385.first = _V0vanity;
  _V10_Dpair_D385.rest = VEncodePointer(&_V10_Dpair_D384, VPOINTER_PAIR);
  _V10_Dpair_D384.first = _V0debug;
  _V10_Dpair_D384.rest = VEncodePointer(&_V10_Dpair_D383, VPOINTER_PAIR);
  _V10_Dpair_D383.first = _V0closure__bt__impl;
  _V10_Dpair_D383.rest = VEncodePointer(&_V10_Dpair_D382, VPOINTER_PAIR);
  _V10_Dpair_D382.first = _V10_Dloop_D23_D81;
  _V10_Dpair_D382.rest = VEncodePointer(&_V10_Dpair_D381, VPOINTER_PAIR);
  _V10_Dpair_D381.first = _V10_Dloop_D33_D89;
  _V10_Dpair_D381.rest = VNULL;
  _V10_Dpair_D380.first = VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR);
  _V10_Dpair_D380.rest = VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR);
  _V10_Dpair_D379.first = VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR);
  _V10_Dpair_D379.rest = VNULL;
  _V10_Dpair_D378.first = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D378.rest = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D377.first = VEncodeBool(false);
  _V10_Dpair_D377.rest = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D376.first = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D376.rest = VNULL;
  _V10_Dpair_D375.first = _V0finalize_D34;
  _V10_Dpair_D375.rest = VNULL;
  _V10_Dpair_D374.first = VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR);
  _V10_Dpair_D374.rest = VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR);
  _V10_Dpair_D373.first = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D373.rest = VNULL;
  _V10_Dpair_D372.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D372.rest = VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR);
  _V10_Dpair_D371.first = VEncodeBool(false);
  _V10_Dpair_D371.rest = VEncodePointer(&_V10_Dpair_D370, VPOINTER_PAIR);
  _V10_Dpair_D370.first = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D370.rest = VNULL;
  _V10_Dpair_D369.first = _V0collect__acc_D35;
  _V10_Dpair_D369.rest = VNULL;
  _V10_Dpair_D368.first = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D368.rest = VEncodePointer(&_V10_Dpair_D367, VPOINTER_PAIR);
  _V10_Dpair_D367.first = VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR);
  _V10_Dpair_D367.rest = VNULL;
  _V10_Dpair_D366.first = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D366.rest = VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR);
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D364.first = _V0y_D42;
  _V10_Dpair_D364.rest = VNULL;
  _V10_Dpair_D363.first = VEncodeBool(false);
  _V10_Dpair_D363.rest = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D362.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D362.rest = VNULL;
  _V10_Dpair_D361.first = _V0collect__acc_D35__tail_D43;
  _V10_Dpair_D361.rest = VNULL;
  _V40VClosureEnvFrameLength = VEncodePointer(VLookupConstant("_V40VClosureEnvFrameLength", &_VW_V40VClosureEnvFrameLength), VPOINTER_CLOSURE);
  _V10_Dpair_D360.first = VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR);
  _V10_Dpair_D360.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D359.first = VEncodeBool(false);
  _V10_Dpair_D359.rest = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D358.first = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D358.rest = VNULL;
  _V10_Dpair_D357.first = _V0frame__names;
  _V10_Dpair_D357.rest = VNULL;
  _V10_Dpair_D356.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D355.first = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D355.rest = VNULL;
  _V10_Dpair_D354.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D354.rest = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D353.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D352.first = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D352.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D351.first = _V0_Mp;
  _V10_Dpair_D351.rest = VNULL;
  _V10_Dpair_D350.first = VEncodePointer(&_V10_Dpair_D345, VPOINTER_PAIR);
  _V10_Dpair_D350.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D349.first = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D349.rest = VNULL;
  _V10_Dpair_D348.first = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D348.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D347.first = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D347.rest = VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR);
  _V10_Dpair_D346.first = _V0loop_D23;
  _V10_Dpair_D346.rest = VNULL;
  _V10_Dpair_D345.first = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D345.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V10_Dpair_D344.first = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D344.rest = VNULL;
  _V10_Dpair_D343.first = _V0_Mk;
  _V10_Dpair_D343.rest = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D342.first = _V0i;
  _V10_Dpair_D342.rest = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D341.first = _V0env__names;
  _V10_Dpair_D341.rest = VNULL;
  _V10_Dpair_D340.first = _V0vanity;
  _V10_Dpair_D340.rest = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D339.first = _V0debug;
  _V10_Dpair_D339.rest = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D338.first = _V0closure__bt__impl;
  _V10_Dpair_D338.rest = VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR);
  _V10_Dpair_D337.first = _V10_Dloop_D23_D81;
  _V10_Dpair_D337.rest = VNULL;
  _V10_Dpair_D336.first = VEncodePointer(&_V10_Dpair_D330, VPOINTER_PAIR);
  _V10_Dpair_D336.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D335.first = VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR);
  _V10_Dpair_D335.rest = VNULL;
  _V10_Dpair_D334.first = VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR);
  _V10_Dpair_D334.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D333.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D333.rest = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D332.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D332.rest = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D331.first = _V0y_D32;
  _V10_Dpair_D331.rest = VNULL;
  _V10_Dpair_D330.first = VEncodeBool(false);
  _V10_Dpair_D330.rest = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D329.first = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D329.rest = VNULL;
  _V10_Dpair_D328.first = _V0finalize_D24;
  _V10_Dpair_D328.rest = VNULL;
  _V40VClosureEnvDepth = VEncodePointer(VLookupConstant("_V40VClosureEnvDepth", &_VW_V40VClosureEnvDepth), VPOINTER_CLOSURE);
  _V10_Dpair_D327.first = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D327.rest = VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR);
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VNULL;
  _V10_Dpair_D325.first = _V0unquote;
  _V10_Dpair_D325.rest = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D324.first = _V0unmangled__env;
  _V10_Dpair_D324.rest = VNULL;
  _V10_Dpair_D323.first = VEncodeBool(false);
  _V10_Dpair_D323.rest = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D322.first = _V0_U;
  _V10_Dpair_D322.rest = VNULL;
  _V10_Dpair_D321.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D321.rest = VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR);
  _V10_Dpair_D320.first = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D320.rest = VNULL;
  _V10_Dpair_D319.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D319.rest = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D318.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D318.rest = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D317.first = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D317.rest = VNULL;
  _V10_Dpair_D316.first = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D315.first = VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR);
  _V10_Dpair_D315.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D314.first = VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR);
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D313.first = _V0vanity;
  _V10_Dpair_D313.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D312.first = _V0debug;
  _V10_Dpair_D312.rest = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D311.first = _V0closure__bt__impl;
  _V10_Dpair_D311.rest = VNULL;
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D309.first = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D309.rest = VNULL;
  _V10_Dpair_D308.first = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D307.first = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D307.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D306.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D306.rest = VNULL;
  _V10_Dpair_D305.first = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D304.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D304.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D303.first = _V0closure__bt;
  _V10_Dpair_D303.rest = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D302.first = _V0closure__bt__impl;
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D301.first = _V0closure__env;
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = _V0closure__env__names;
  _V10_Dpair_D300.rest = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D299.first = _V0closure__formals;
  _V10_Dpair_D299.rest = VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR);
  _V10_Dpair_D298.first = _V0closure__name;
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D297.first = _V0current__signaling__arguments;
  _V10_Dpair_D297.rest = VNULL;
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D295.first = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D295.rest = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D294.first = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D294.rest = VNULL;
  _V10_Dpair_D293.first = _V0_Mk;
  _V10_Dpair_D293.rest = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D292.first = _V0proc;
  _V10_Dpair_D292.rest = VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR);
  _V10_Dpair_D291.first = _V0port;
  _V10_Dpair_D291.rest = VNULL;
  _V10_Dpair_D290.first = _V0_Mk;
  _V10_Dpair_D290.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D289.first = _V0proc;
  _V10_Dpair_D289.rest = VNULL;
  _V10_Dpair_D288.first = _V0vanity;
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D287.first = _V0debug;
  _V10_Dpair_D287.rest = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D286.first = _V0closure__bt;
  _V10_Dpair_D286.rest = VNULL;
  _V10_Dpair_D285.first = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D285.rest = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D284.first = VEncodeBool(false);
  _V10_Dpair_D284.rest = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D283.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D283.rest = VNULL;
  _V10_Dpair_D282.first = _V0_Mk;
  _V10_Dpair_D282.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D281.first = _V0current__output__port;
  _V10_Dpair_D281.rest = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D280.first = _V0newline;
  _V10_Dpair_D280.rest = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D279.first = _V0write;
  _V10_Dpair_D279.rest = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D278.first = _V0format;
  _V10_Dpair_D278.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D277.first = _V0cadr;
  _V10_Dpair_D277.rest = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D276.first = _V0cdar;
  _V10_Dpair_D276.rest = VEncodePointer(&_V10_Dpair_D275, VPOINTER_PAIR);
  _V10_Dpair_D275.first = _V0caar;
  _V10_Dpair_D275.rest = VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR);
  _V10_Dpair_D274.first = _V0vector___Glist;
  _V10_Dpair_D274.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D270.first = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D270.rest = VNULL;
  _V10_Dpair_D269.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D269.rest = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D268.first = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D268.rest = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D267.first = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D267.rest = VNULL;
  _V10_Dpair_D266.first = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D266.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D265.first = VEncodeBool(false);
  _V10_Dpair_D265.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D264.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D264.rest = VNULL;
  _V10_Dpair_D263.first = _V0_Mx;
  _V10_Dpair_D263.rest = VNULL;
  _V10_Dpair_D262.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D262.rest = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D261.first = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D261.rest = VNULL;
  _V10_Dpair_D260.first = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D260.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D259.first = VNULL;
  _V10_Dpair_D259.rest = VNULL;
  _V10_Dpair_D258.first = VEncodeBool(false);
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D257.first = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D257.rest = VNULL;
  _V10_Dpair_D256.first = _V0_Mk;
  _V10_Dpair_D256.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0debug_V20_V0k2, VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0debug_V20_V0k1, VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0debug_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dclosure__bt_D67_V0k3, VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt, VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7, VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10, VEncodePointer(&_V10_Dpair_D400, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12, VEncodePointer(&_V10_Dpair_D408, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15, VEncodePointer(&_V10_Dpair_D412, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16, VEncodePointer(&_V10_Dpair_D413, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11, VEncodePointer(&_V10_Dpair_D401, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, VEncodePointer(&_V10_Dpair_D395, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20, VEncodePointer(&_V10_Dpair_D418, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21, VEncodePointer(&_V10_Dpair_D419, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17, VEncodePointer(&_V10_Dpair_D414, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda7, VEncodePointer(&_V10_Dpair_D380, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, VEncodePointer(&_V10_Dpair_D428, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6, VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5, VEncodePointer(&_V10_Dpair_D368, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8, VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k22, VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda4, VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k6, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k5, VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k4, VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23, VEncodePointer(&_V10_Dpair_D515, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, VEncodePointer(&_V10_Dpair_D510, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27, VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28, VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26, VEncodePointer(&_V10_Dpair_D516, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda13, VEncodePointer(&_V10_Dpair_D496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12, VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11, VEncodePointer(&_V10_Dpair_D484, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, VEncodePointer(&_V10_Dpair_D475, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda10, VEncodePointer(&_V10_Dpair_D462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda9, VEncodePointer(&_V10_Dpair_D456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda8, VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env, VEncodePointer(&_V10_Dpair_D443, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k30, VEncodePointer(&_V10_Dpair_D546, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k31, VEncodePointer(&_V10_Dpair_D549, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__env__names, VEncodePointer(&_V10_Dpair_D542, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__formals, VEncodePointer(&_V10_Dpair_D554, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0closure__name, VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32, VEncodePointer(&_V10_Dpair_D569, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments, VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0debug_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0debug_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR));
}
